/*
 * SPI.h
 *
 * Created: 6/29/2020 11:41:57 AM
 *  Author: Lamees Haitham elbakr

*/

#ifndef SPI_H_
#define SPI_H_

#include <avr/io.h>

#define cs       0   // PORTC0
#define MOSI     5   // PORTB5
#define MISO     6   // PORTB6
#define SCK      7   //PORTB7

#define CS_ENABLE()    PORTC&=~(1<<cs)    // CS = 0
#define CS_DISABLE()   PORTC|=(1<<cs)    // CS = 1

void SPI_DDR();
void SPI_Init();
unsigned char SPI_Transfer(unsigned char data ) ;




#endif /* SPI_H_ */