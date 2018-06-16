#define F_CPU 1000000UL
#include <util/delay.h>
#include <avr/io.h>
#include <stdlib.h>
int main(void)
{

    // Insert code
    DDRA = 0b00000111;
    PORTA = 0b00000000;
    while(1){
	char i = rand() % 3;
        PORTA = 0b00000001 << i;
        _delay_ms(500);
    }

    return 0;
}
