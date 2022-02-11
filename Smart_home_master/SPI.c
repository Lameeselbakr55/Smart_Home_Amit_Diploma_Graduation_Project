/*
 * SPI.c
 *
 * Created: 6/29/2020 11:42:20 AM
 *  Author: Ahmed Haitham
 */ 

#include "SPI.h"

void SPI_DDR(){
	DDRB|=(1<<MOSI)|(1<<SCK);
	DDRB&=~(1<<MISO);
	DDRC|=(1<<cs);
}



void SPI_Init() {
	//control register : MSTR Mode , Speed = 1MHz , SPI Enable
	SPCR=(1<<MSTR) | (1<<SPR0) | (1<<SPE);

}

unsigned char SPI_Transfer(unsigned char data ) {
	SPDR=data;
	while(!(SPSR&(1<<SPIF)));
	return SPDR;
}

