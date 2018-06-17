#include "uart.h"
#include <util/delay.h>


int main(void)
{
	UART_init(9600);
	while(1)
	{
		UART_send_string("Hello World!");
		_delay_ms(2000);
	}

}
