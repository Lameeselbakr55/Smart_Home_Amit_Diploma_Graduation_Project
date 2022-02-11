/*
 * UART.h
 *
 * Created: 6/29/2020 11:35:10 AM
 *  Author: Ahmed Haitham
 */ 


#ifndef UART_H_
#define UART_H_

#define F_CPU 16000000
#define baud 9600
#define baud_eq ((F_CPU/(baud*16UL))-1)

#include <avr/io.h>

void uart_init();
void uart_send(unsigned char data);
void uart_send_string(char *str);
unsigned char uart_rev ();



#endif /* UART_H_ */