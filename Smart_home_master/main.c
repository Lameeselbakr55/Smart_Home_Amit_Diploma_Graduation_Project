/*
 * SPI.c
 *
 * Created: 6/29/2020 8:16:42 AM
 * Author : Lamees Haitham Elbakr
 */ 

#include "UART.h"
#include "SPI.h"
#include <util/delay.h>
#include "BIT_MATH.h"



int main(void)
{
    /* Replace with your application code */
	 uart_init();
	 SPI_DDR();
	 SPI_Init();

	while (1) 
    {
		unsigned char control=uart_rev();
		CS_ENABLE();
		unsigned char data_rev=SPI_Transfer(control);
		CS_DISABLE();
        _delay_ms(100);
	}
}

