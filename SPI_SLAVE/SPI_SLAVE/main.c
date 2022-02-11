/*
 * SPI_SLAVE.c
 *
 * Created: 6/29/2020 9:48:58 AM
 * Author : Lamees Haitham Elbakr
  * Slave Code for Home Automation Project
 */ 

#define F_CPU 16000000

#include "SPI.h"
#include <util/delay.h>
#include "BIT_MATH.h"



int main(void)
{
    slave_init();
	SET_BIT(DDRC,2);          // LED0
	SET_BIT(DDRC,7);         // LED1
	SET_BIT(DDRD,3);        // LED2
    SET_BIT(DDRA,2);       // relay
    
	while (1) 
    {
		unsigned char data_rev=SPI_Transfer(0);
		if (data_rev=='1')
		{
			SET_BIT(PORTC,2);
			CLEAR_BIT(PORTC,7);
			CLEAR_BIT(PORTD,3);
			CLEAR_BIT(PORTA,2);		
		   _delay_ms(100);
		
		}
		else if (data_rev=='2')
		{
			CLEAR_BIT(PORTC,2);
			SET_BIT(PORTC,7);
			CLEAR_BIT(PORTD,3);
			CLEAR_BIT(PORTA,2);
			_delay_ms(100);			
        }
		else if (data_rev=='3')
		{
			CLEAR_BIT(PORTC,2);
			CLEAR_BIT(PORTC,7);
			SET_BIT(PORTD,3);
			CLEAR_BIT(PORTA,2);
			_delay_ms(100);			
        }
		else if (data_rev=='4')
		{
			CLEAR_BIT(PORTC,2);
			CLEAR_BIT(PORTC,7);
			CLEAR_BIT(PORTD,3);
			SET_BIT(PORTA,2);
			_delay_ms(100);
		}
		else
		{
			CLEAR_BIT(PORTC,2);
			CLEAR_BIT(PORTC,7);
			CLEAR_BIT(PORTD,3);
			CLEAR_BIT(PORTA,2);
			_delay_ms(100);
		}		
     }
}
