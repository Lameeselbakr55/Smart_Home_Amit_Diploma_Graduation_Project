/*
 * UART.c
 *
 * Created: 6/29/2020 11:34:45 AM
 *  Author: Ahmed Haitham
 */ 

#include "UART.h"


void uart_init(){
	// set baud rate   ( note 9600 needs UBRR value <= 255 thus we need UBRRL only )
	UBRRL=baud_eq;
	
	// Full duplex mode thus enable tx & rx
	UCSRB|=(1<<TXEN)|(1<<RXEN);
	
	//determine character size   8bit   UCSZ0=1  UCSZ1=1   UCZ2=0
	UCSRC|=(1<<URSEL)|(1<<UCSZ0)|(1<<UCSZ1);
	
}

void uart_send(unsigned char data) {
	while(!(UCSRA&(1<<UDRE)));
	UDR=data;
}

void uart_send_string(char *str) {
	int i=0;
	while(str[i] != '\0'){
		uart_send(str[i]);
		i++;
	}
}



unsigned char uart_rev () {
	while(!(UCSRA&(1<<RXC)));
	return UDR;
	
}
