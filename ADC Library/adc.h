#define F_CPU 1000000UL
#ifndef  __ADC_H__
#define __ADC_H__

#include <avr/io.h>


void ADC_init(void);
volatile uint8_t ADC_get_data(void);


#endif
