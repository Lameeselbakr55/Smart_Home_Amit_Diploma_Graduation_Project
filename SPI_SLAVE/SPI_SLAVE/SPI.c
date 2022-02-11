/*
 * SPI.c
 *
 * Created: 6/29/2020 11:52:03 AM
 *  Author: Lamees Haitham
 */ 

#include "SPI.h"

void slave_init() {
		SPCR|=(1<<SPE);
		DDRB|=(1<<MISO);
		DDRB&=~(1<<MOSI);
		DDRB&=~(1<<SCK);
		DDRB&=~(1<<SS);	
}

unsigned char SPI_Transfer(unsigned char data) {
	
	SPDR=data;
	while(!(SPSR&(1<<SPIF)));
	return SPDR;
	
}
