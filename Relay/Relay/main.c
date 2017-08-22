/*
 * relay.c
 *
 * Created: 3/28/2016 2:41:22 PM
 * Author : Etiq Technologies
 */ 


#define F_CPU 8000000UL


#include <avr/io.h>
#include <string.h>
#include <avr/delay.h>

int main(void)
{
DDRD=0xFF;
    while (1) 
    {
		PORTD=0x01;                        // connected relay to RD0 is made ON and OFF with 1000ms delay
		_delay_ms(1000);
	
		PORTD=0x00;
		_delay_ms(1000);
    }
}

