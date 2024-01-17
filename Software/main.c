#include <sys/alt_stdio.h>
#include <system.h>
#include <altera_avalon_pio_regs.h>
#include <sys/alt_irq.h>
#include <io.h>
#include <alt_types.h>
#include "sys/alt_sys_init.h"
#include "unistd.h"
#include <stdbool.h>
#include "altera_avalon_timer_regs.h"
#include "altera_avalon_timer.h"

__uint32_t sleep_time=100000;
__uint8_t val_count_unite=0;
__uint8_t val_count_dizaine=0;
__uint8_t val_count_centaine=0;

void count(){
    if(val_count_unite==9){
        val_count_unite=0;
        if(val_count_dizaine==9){
            val_count_dizaine=0;
            if(val_count_centaine==9){
                val_count_centaine=0;
            }
            else{
                val_count_centaine=val_count_centaine+1;
            }
        }
        else {
            val_count_dizaine=val_count_dizaine+1;
        }
    }
    else {
        val_count_unite=val_count_unite+1;
    }
    IOWR_ALTERA_AVALON_PIO_DATA(PIO_0_BASE,val_count_unite);
    IOWR_ALTERA_AVALON_PIO_DATA(PIO_1_BASE,val_count_dizaine);
    IOWR_ALTERA_AVALON_PIO_DATA(PIO_2_BASE,val_count_centaine);
}


static void irqhandler_timer (void * context, alt_u32 id)
{
    count();
    IOWR_ALTERA_AVALON_TIMER_STATUS(TIMER_0_BASE, 0x01);
}







int main(){
    //alt_printf("Hello NIOS II\n");

    // Initialise le processus d'interruption pour le PIO qui controle les bouttons
    alt_irq_register(TIMER_0_IRQ,NULL, (void*)irqhandler_timer);

    while(1){
    }
    return 0;
}
