#include "system.h"
#include "altera_avalon_pio_regs.h"
#include "altera_avalon_timer_regs.h"
#include "altera_avalon_timer.h"
#include "sys/alt_stdio.h"
#include "sys/alt_sys_init.h"
#include "alt_types.h"
#include "io.h"
#include "unistd.h"
#include "stdio.h"
#include "sys/alt_irq.h"
#include "opencores_i2c_regs.h"
#include "opencores_i2c.h"

// Definition des adresses où se trouvent les données de l'accéléromètre par rapport aux différents axes
#define DATAX0 0x32
#define DATAX1 0x33
#define DATAY0 0x34
#define DATAY1 0x35
#define DATAZ0 0x36
#define DATAZ1 0x37

#define xoffset 0x1E
#define yoffset 0x1F
#define zoffset 0x20



__int16_t DATAX = 0;
__int16_t DATAY = 0;
__int16_t DATAZ = 0;

__int16_t data[3] = { 0,0,0 };

__uint8_t axe = 0;

__uint16_t variable_inutile_mais_utile;

//#define offsetx 0xFE
#define offsetx 0x02
#define offsety 0x03
#define offsetz 0x04


__uint8_t seg0, seg1, seg2, seg3, seg4;
__uint8_t signe=0;



void acc_write(alt_u32 add, __int8_t data)
{
	I2C_start(OPENCORES_I2C_0_BASE, 0x1d, 0);
	I2C_write(OPENCORES_I2C_0_BASE, add, 0);
	I2C_write(OPENCORES_I2C_0_BASE, data, 1);
}

__int8_t acc_read(alt_u32 add)
{
	I2C_start(OPENCORES_I2C_0_BASE, 0x1d, 0);
	I2C_write(OPENCORES_I2C_0_BASE, add, 0);
	I2C_start(OPENCORES_I2C_0_BASE, 0x1d, 1);
	return I2C_read(OPENCORES_I2C_0_BASE, 1);
}

void actualisation_data()
{

	if (data[axe] < 0){
            //Le signe sera négatif <=> On écrit un signe '-' sur le 5ème 7seg
            IOWR_ALTERA_AVALON_PIO_DATA(PIO5_7SEG_BASE, 15);
	}
    else {
            // Le signe sera positif <=> On désactive le 5ème 7seg
            IOWR_ALTERA_AVALON_PIO_DATA(PIO5_7SEG_BASE, 13);
    }
    //alt_printf("data[%x] : %x\n",axe,data[axe]);

    data[axe]=abs(data[axe]);
	seg4 = data[axe] / 10000;
	seg3 = (data[axe] % 10000) / 1000;
	seg2 = (data[axe] % 1000) / 100;
	seg1 = (data[axe] % 100) / 10;
	seg0 = data[axe] % 10;

	//alt_printf("seg0 : %x\n",seg0);
	// On ecrit dans les pio qui controlent les 7 segments
	IOWR_ALTERA_AVALON_PIO_DATA(PIO0_7SEG_BASE, seg0);
	IOWR_ALTERA_AVALON_PIO_DATA(PIO1_7SEG_BASE, seg1);
	IOWR_ALTERA_AVALON_PIO_DATA(PIO2_7SEG_BASE, seg2);
	IOWR_ALTERA_AVALON_PIO_DATA(PIO3_7SEG_BASE, seg3);
	IOWR_ALTERA_AVALON_PIO_DATA(PIO4_7SEG_BASE, seg4);

    /*
    IOWR_ALTERA_AVALON_PIO_DATA(PIO0_7SEG_BASE,(data[axe]%10));
	IOWR_ALTERA_AVALON_PIO_DATA(PIO1_7SEG_BASE,(data[axe]/10)%10);
	IOWR_ALTERA_AVALON_PIO_DATA(PIO2_7SEG_BASE,(data[axe]/100)%10);
	IOWR_ALTERA_AVALON_PIO_DATA(PIO3_7SEG_BASE,(data[axe]/1000)%10);
	IOWR_ALTERA_AVALON_PIO_DATA(PIO4_7SEG_BASE,(data[axe]/10000)%10);
	*/
}

static void irqhandler_timer(void* context, alt_u32 id)
{
    //alt_printf("DATAX0 : %x\n",acc_read(DATAX0));
    //alt_printf("DATAY0 : %x\n",acc_read(DATAY0));
    //alt_printf("DATAZ0 : %x\n",acc_read(DATAZ0));
	data[0] = (acc_read(DATAX1) << 8 | acc_read(DATAX0));
	data[1] = (acc_read(DATAY1) << 8 | acc_read(DATAY0));
	data[2] = (acc_read(DATAZ1) << 8 | acc_read(DATAZ0));

	if (data[0] & 0x8000) data[0] = -(0xFFFF - data[0] + 1);
	if (data[1] & 0x8000) data[1] = -(0xFFFF - data[1] + 1);
	if (data[2] & 0x8000) data[2] = -(0xFFFF - data[2] + 1);

    // Scale_factor
	data[0]=data[0]*3.9;
	data[1]=data[1]*3.9;
	data[2]=data[2]*3.9;

	actualisation_data();

	IOWR_ALTERA_AVALON_TIMER_STATUS(TIMER_0_BASE, 0x01);
}

static void irqhandler_bouton(void* context, alt_u32 id)
{
    //alt_printf("\n\ndata[x] : %x\n",data[0]);
    //alt_printf("data[y] : %x\n",data[1]);
    //alt_printf("data[z] : %x\n\n",data[2]);
	axe++;
	axe = axe % 3;
	IOWR_ALTERA_AVALON_PIO_EDGE_CAP(PIOBP_BASE, 0x01);
}




int main(void)
{

    //alt_printf("Restart Program\n");
	I2C_init(OPENCORES_I2C_0_BASE, TIMER_0_FREQ, 400000);
	variable_inutile_mais_utile = acc_read(DATAX1);
	acc_write(xoffset, 0);
	acc_write(yoffset, 0);
	acc_write(zoffset, 0);
	acc_write(xoffset, offsetx);
	acc_write(yoffset, offsety);
	acc_write(zoffset, offsetz);
	alt_irq_register(TIMER_0_IRQ, NULL,(void*) irqhandler_timer);
	IOWR_ALTERA_AVALON_PIO_IRQ_MASK(PIOBP_BASE, 0x01);
	IOWR_ALTERA_AVALON_PIO_EDGE_CAP(PIOBP_BASE, 0x01);
	alt_irq_register(PIOBP_IRQ, NULL, (void*) irqhandler_bouton);

	while(1){};
	return(0);
}
