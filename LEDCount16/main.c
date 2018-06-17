#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	uint8_t cnt;
	DDRA |= 0b00001111;

	while(1)
	{
		for(cnt = 0; cnt<=16;cnt++){
			PORTA = cnt;
			_delay_ms(250);
		}
	}

}
