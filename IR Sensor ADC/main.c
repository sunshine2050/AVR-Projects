#define F_CPU 1000000UL
#include <avr/io.h>

volatile uint8_t adcValue;
int main(void)
{
	DDRA = 0x00;
	DDRC = 0xFF;
	ADCSRA |= (1<<ADPS0) | (1<<ADPS1);

	ADMUX |= (1<<ADLAR);
	ADMUX |= (1<<MUX0);
	
	
	while(1)
	{
		ADCSRA |= (1<<ADSC);
		
		while(ADCSRA & (1<<ADSC));
		
		adcValue = ADCH;
		PORTC = adcValue;
	}
	return 0;
}
