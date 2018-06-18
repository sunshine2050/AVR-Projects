#include "adc.h"

void ADC_init(void)
{
	ADCSRA |= (1<<ADPS0) | (1<<ADPS1);

	ADMUX |= (1<<ADLAR);
	ADMUX |= (1<<MUX0);
	
	
}

volatile uint8_t ADC_get_data(void)
{
	ADCSRA |= (1<<ADSC);
		
	while(ADCSRA & (1<<ADSC));
	volatile uint8_t data = ADCH;
	return data;
}
