#define F_CPU 1000000UL
#include <util/delay.h>
#include <avr/io.h>
int main(void)
{

    // Insert code
    DDRA |= 1 << PINA0;
    DDRA |= (1 << PINA1);    
    PORTA |= 1 << PORTA1;
    while(1){

        PORTA ^= 1 << PINA0;
	if(bit_is_clear(PINA, 1)){
           _delay_ms(100);
	}
	else {
	   _delay_ms(500);
	}
    }

    return 0;
}
