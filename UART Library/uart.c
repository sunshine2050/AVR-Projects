#include "uart.h"

void UART_init(uint16_t	baud_rate)
{
	UBRR_Value = lrint( (F_CPU / (16L * baud_rate))-1);
	// set baudrate value
	UBRRL = (uint8_t) UBRR_Value;
	UBRRH = (uint8_t) (UBRR_Value >> 8);
	// enable both transmitter & receiver
	UCSRB = (1<<RXEN) | (1<<TXEN);
	//8 bit of data 
	UCSRC |= (1<<UCSZ0) | (1<<UCSZ2);
	
}

void UART_send_char(char data)
{
	while(!(UCSRA & (1<<UDRE)));
	UDR = data;
}

char UART_receive_char()
{
	while(!(UCSRA & (1<<RXC)));
	return UDR;
}

void UART_send_string(char *word)
{
	while(*word != '\0') UART_send_char(*word++);
	UART_send_char('\0');
}
