#ifndef  __UART_H__
#define __UART_H__

#define F_CPU 16000000UL
#include <avr/io.h>
#include <math.h>

uint16_t UBRR_Value;

void UART_init(uint16_t baud_rate);
void UART_send_char(char data);
char UART_receive_char(void);
void UART_send_string(char *data);

#endif
