#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

int main(void)
{
	DDRA |= (1<<PA0);
	DDRB |= (1<<PB0) | (1<<PB1);
	DDRD &= ~((1<<PD2)|(1<<PD3));
	PORTD |= (1<<PD2) | (1<<PD3);
	
	MCUCR |= (1<<ISC01) | (1<<ISC11);
	GICR |= (1<<INT0) | (1<<INT1);
	
	sei();
	
	while(1)
	{
		PORTA ^= (1<<PA0);
		_delay_ms(500);
	}

}

ISR(INT0_vect){
		PORTB ^= (1<<PB0);
}

ISR(INT1_vect){
		PORTB ^= (1<<PB1);
}
