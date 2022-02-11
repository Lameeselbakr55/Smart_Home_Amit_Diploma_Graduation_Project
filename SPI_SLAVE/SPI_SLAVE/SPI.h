/*
 * SPI.h
 *
 * Created: 6/29/2020 11:52:20 AM
 *  Author: Ahmed Haitham
 */ 


#ifndef SPI_H_
#define SPI_H_

#include <avr/io.h>

#define MISO  6      //PB4
#define MOSI  5     //PB5
#define SCK   7     //PB7
#define SS    4    //PB4

void slave_init();
unsigned char SPI_Transfer(unsigned char data);



#endif /* SPI_H_ */