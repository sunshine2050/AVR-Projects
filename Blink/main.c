#define F_CPU 1000000UL
#include <util/delay.h>
#include <avr/io.h>

int main(void)
{

    // Insert code
    DDRA = 0b00000001;
    while(1){
        PORTA = 0b00000001;
        _delay_ms(2000);
        PORTA = 0b00000000;
        _delay_ms(2000);
    }

    return 0;
}
