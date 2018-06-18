#include "adc.h"
#include <util/delay.h>


int main(void)
{
	ADC_init();
	DDRA = 0x00;
	DDRC = 0xFF;
	while(1)
	{
	
		PORTC = ADC_get_data();
		_delay_ms(2000);
	}

}
