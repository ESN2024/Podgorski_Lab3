/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2_gen2_0' in SOPC Builder design 'gyroscope_data_sys'
 * SOPC Builder design path: ../../gyroscope_data_sys.sopcinfo
 *
 * Generated: Tue Jan 23 14:49:36 CET 2024
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00040820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x13
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00020020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x13
#define ALT_CPU_NAME "nios2_gen2_0"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00020000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00040820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x13
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00020020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x13
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00020000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_GEN2
#define __OPENCORES_I2C


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "MAX 10"
#define ALT_IRQ_BASE NULL
#define ALT_LEGACY_INTERRUPT_API_PRESENT
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart_0"
#define ALT_STDERR_BASE 0x410b0
#define ALT_STDERR_DEV jtag_uart_0
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart_0"
#define ALT_STDIN_BASE 0x410b0
#define ALT_STDIN_DEV jtag_uart_0
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart_0"
#define ALT_STDOUT_BASE 0x410b0
#define ALT_STDOUT_DEV jtag_uart_0
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "gyroscope_data_sys"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK TIMER_0
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart
#define JTAG_UART_0_BASE 0x410b0
#define JTAG_UART_0_IRQ 0
#define JTAG_UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_SPAN 8
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8


/*
 * onchip_memory2_0 configuration
 *
 */

#define ALT_MODULE_CLASS_onchip_memory2_0 altera_avalon_onchip_memory2
#define ONCHIP_MEMORY2_0_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY2_0_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY2_0_BASE 0x20000
#define ONCHIP_MEMORY2_0_CONTENTS_INFO ""
#define ONCHIP_MEMORY2_0_DUAL_PORT 0
#define ONCHIP_MEMORY2_0_GUI_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_INIT_CONTENTS_FILE "gyroscope_data_sys_onchip_memory2_0"
#define ONCHIP_MEMORY2_0_INIT_MEM_CONTENT 0
#define ONCHIP_MEMORY2_0_INSTANCE_ID "NONE"
#define ONCHIP_MEMORY2_0_IRQ -1
#define ONCHIP_MEMORY2_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_MEMORY2_0_NAME "/dev/onchip_memory2_0"
#define ONCHIP_MEMORY2_0_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEMORY2_0_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_MEMORY2_0_SINGLE_CLOCK_OP 0
#define ONCHIP_MEMORY2_0_SIZE_MULTIPLE 1
#define ONCHIP_MEMORY2_0_SIZE_VALUE 80000
#define ONCHIP_MEMORY2_0_SPAN 80000
#define ONCHIP_MEMORY2_0_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_MEMORY2_0_WRITABLE 1


/*
 * opencores_i2c_0 configuration
 *
 */

#define ALT_MODULE_CLASS_opencores_i2c_0 opencores_i2c
#define OPENCORES_I2C_0_BASE 0x41020
#define OPENCORES_I2C_0_IRQ 3
#define OPENCORES_I2C_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define OPENCORES_I2C_0_NAME "/dev/opencores_i2c_0"
#define OPENCORES_I2C_0_SPAN 32
#define OPENCORES_I2C_0_TYPE "opencores_i2c"


/*
 * pio0_7seg configuration
 *
 */

#define ALT_MODULE_CLASS_pio0_7seg altera_avalon_pio
#define PIO0_7SEG_BASE 0x41090
#define PIO0_7SEG_BIT_CLEARING_EDGE_REGISTER 0
#define PIO0_7SEG_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO0_7SEG_CAPTURE 0
#define PIO0_7SEG_DATA_WIDTH 4
#define PIO0_7SEG_DO_TEST_BENCH_WIRING 0
#define PIO0_7SEG_DRIVEN_SIM_VALUE 0
#define PIO0_7SEG_EDGE_TYPE "NONE"
#define PIO0_7SEG_FREQ 50000000
#define PIO0_7SEG_HAS_IN 0
#define PIO0_7SEG_HAS_OUT 1
#define PIO0_7SEG_HAS_TRI 0
#define PIO0_7SEG_IRQ -1
#define PIO0_7SEG_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO0_7SEG_IRQ_TYPE "NONE"
#define PIO0_7SEG_NAME "/dev/pio0_7seg"
#define PIO0_7SEG_RESET_VALUE 0
#define PIO0_7SEG_SPAN 16
#define PIO0_7SEG_TYPE "altera_avalon_pio"


/*
 * pio1_7seg configuration
 *
 */

#define ALT_MODULE_CLASS_pio1_7seg altera_avalon_pio
#define PIO1_7SEG_BASE 0x41080
#define PIO1_7SEG_BIT_CLEARING_EDGE_REGISTER 0
#define PIO1_7SEG_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO1_7SEG_CAPTURE 0
#define PIO1_7SEG_DATA_WIDTH 4
#define PIO1_7SEG_DO_TEST_BENCH_WIRING 0
#define PIO1_7SEG_DRIVEN_SIM_VALUE 0
#define PIO1_7SEG_EDGE_TYPE "NONE"
#define PIO1_7SEG_FREQ 50000000
#define PIO1_7SEG_HAS_IN 0
#define PIO1_7SEG_HAS_OUT 1
#define PIO1_7SEG_HAS_TRI 0
#define PIO1_7SEG_IRQ -1
#define PIO1_7SEG_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO1_7SEG_IRQ_TYPE "NONE"
#define PIO1_7SEG_NAME "/dev/pio1_7seg"
#define PIO1_7SEG_RESET_VALUE 0
#define PIO1_7SEG_SPAN 16
#define PIO1_7SEG_TYPE "altera_avalon_pio"


/*
 * pio2_7seg configuration
 *
 */

#define ALT_MODULE_CLASS_pio2_7seg altera_avalon_pio
#define PIO2_7SEG_BASE 0x41070
#define PIO2_7SEG_BIT_CLEARING_EDGE_REGISTER 0
#define PIO2_7SEG_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO2_7SEG_CAPTURE 0
#define PIO2_7SEG_DATA_WIDTH 4
#define PIO2_7SEG_DO_TEST_BENCH_WIRING 0
#define PIO2_7SEG_DRIVEN_SIM_VALUE 0
#define PIO2_7SEG_EDGE_TYPE "NONE"
#define PIO2_7SEG_FREQ 50000000
#define PIO2_7SEG_HAS_IN 0
#define PIO2_7SEG_HAS_OUT 1
#define PIO2_7SEG_HAS_TRI 0
#define PIO2_7SEG_IRQ -1
#define PIO2_7SEG_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO2_7SEG_IRQ_TYPE "NONE"
#define PIO2_7SEG_NAME "/dev/pio2_7seg"
#define PIO2_7SEG_RESET_VALUE 0
#define PIO2_7SEG_SPAN 16
#define PIO2_7SEG_TYPE "altera_avalon_pio"


/*
 * pio3_7seg configuration
 *
 */

#define ALT_MODULE_CLASS_pio3_7seg altera_avalon_pio
#define PIO3_7SEG_BASE 0x41060
#define PIO3_7SEG_BIT_CLEARING_EDGE_REGISTER 0
#define PIO3_7SEG_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO3_7SEG_CAPTURE 0
#define PIO3_7SEG_DATA_WIDTH 4
#define PIO3_7SEG_DO_TEST_BENCH_WIRING 0
#define PIO3_7SEG_DRIVEN_SIM_VALUE 0
#define PIO3_7SEG_EDGE_TYPE "NONE"
#define PIO3_7SEG_FREQ 50000000
#define PIO3_7SEG_HAS_IN 0
#define PIO3_7SEG_HAS_OUT 1
#define PIO3_7SEG_HAS_TRI 0
#define PIO3_7SEG_IRQ -1
#define PIO3_7SEG_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO3_7SEG_IRQ_TYPE "NONE"
#define PIO3_7SEG_NAME "/dev/pio3_7seg"
#define PIO3_7SEG_RESET_VALUE 0
#define PIO3_7SEG_SPAN 16
#define PIO3_7SEG_TYPE "altera_avalon_pio"


/*
 * pio4_7seg configuration
 *
 */

#define ALT_MODULE_CLASS_pio4_7seg altera_avalon_pio
#define PIO4_7SEG_BASE 0x41050
#define PIO4_7SEG_BIT_CLEARING_EDGE_REGISTER 0
#define PIO4_7SEG_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO4_7SEG_CAPTURE 0
#define PIO4_7SEG_DATA_WIDTH 4
#define PIO4_7SEG_DO_TEST_BENCH_WIRING 0
#define PIO4_7SEG_DRIVEN_SIM_VALUE 0
#define PIO4_7SEG_EDGE_TYPE "NONE"
#define PIO4_7SEG_FREQ 50000000
#define PIO4_7SEG_HAS_IN 0
#define PIO4_7SEG_HAS_OUT 1
#define PIO4_7SEG_HAS_TRI 0
#define PIO4_7SEG_IRQ -1
#define PIO4_7SEG_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO4_7SEG_IRQ_TYPE "NONE"
#define PIO4_7SEG_NAME "/dev/pio4_7seg"
#define PIO4_7SEG_RESET_VALUE 0
#define PIO4_7SEG_SPAN 16
#define PIO4_7SEG_TYPE "altera_avalon_pio"


/*
 * pio5_7seg configuration
 *
 */

#define ALT_MODULE_CLASS_pio5_7seg altera_avalon_pio
#define PIO5_7SEG_BASE 0x41040
#define PIO5_7SEG_BIT_CLEARING_EDGE_REGISTER 0
#define PIO5_7SEG_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO5_7SEG_CAPTURE 0
#define PIO5_7SEG_DATA_WIDTH 4
#define PIO5_7SEG_DO_TEST_BENCH_WIRING 0
#define PIO5_7SEG_DRIVEN_SIM_VALUE 0
#define PIO5_7SEG_EDGE_TYPE "NONE"
#define PIO5_7SEG_FREQ 50000000
#define PIO5_7SEG_HAS_IN 0
#define PIO5_7SEG_HAS_OUT 1
#define PIO5_7SEG_HAS_TRI 0
#define PIO5_7SEG_IRQ -1
#define PIO5_7SEG_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO5_7SEG_IRQ_TYPE "NONE"
#define PIO5_7SEG_NAME "/dev/pio5_7seg"
#define PIO5_7SEG_RESET_VALUE 0
#define PIO5_7SEG_SPAN 16
#define PIO5_7SEG_TYPE "altera_avalon_pio"


/*
 * piobp configuration
 *
 */

#define ALT_MODULE_CLASS_piobp altera_avalon_pio
#define PIOBP_BASE 0x410a0
#define PIOBP_BIT_CLEARING_EDGE_REGISTER 0
#define PIOBP_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIOBP_CAPTURE 1
#define PIOBP_DATA_WIDTH 1
#define PIOBP_DO_TEST_BENCH_WIRING 0
#define PIOBP_DRIVEN_SIM_VALUE 0
#define PIOBP_EDGE_TYPE "FALLING"
#define PIOBP_FREQ 50000000
#define PIOBP_HAS_IN 1
#define PIOBP_HAS_OUT 0
#define PIOBP_HAS_TRI 0
#define PIOBP_IRQ 1
#define PIOBP_IRQ_INTERRUPT_CONTROLLER_ID 0
#define PIOBP_IRQ_TYPE "EDGE"
#define PIOBP_NAME "/dev/piobp"
#define PIOBP_RESET_VALUE 0
#define PIOBP_SPAN 16
#define PIOBP_TYPE "altera_avalon_pio"


/*
 * timer_0 configuration
 *
 */

#define ALT_MODULE_CLASS_timer_0 altera_avalon_timer
#define TIMER_0_ALWAYS_RUN 0
#define TIMER_0_BASE 0x41000
#define TIMER_0_COUNTER_SIZE 32
#define TIMER_0_FIXED_PERIOD 0
#define TIMER_0_FREQ 50000000
#define TIMER_0_IRQ 2
#define TIMER_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_0_LOAD_VALUE 49999999
#define TIMER_0_MULT 1.0
#define TIMER_0_NAME "/dev/timer_0"
#define TIMER_0_PERIOD 1
#define TIMER_0_PERIOD_UNITS "s"
#define TIMER_0_RESET_OUTPUT 0
#define TIMER_0_SNAPSHOT 1
#define TIMER_0_SPAN 32
#define TIMER_0_TICKS_PER_SEC 1
#define TIMER_0_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_0_TYPE "altera_avalon_timer"

#endif /* __SYSTEM_H_ */
