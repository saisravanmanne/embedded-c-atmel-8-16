/*
 * check.c
 *
 * Created: 19-Dec-14 12:42:36 PM
 *  Author: SRAVAN
 */ 


#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	

DDRD=0b11111111;
DDRB=0b11111111;
PORTD=0b00000000;
PORTB=0b00000001;
    while(1)
    {
		
		_delay_ms(1000);
		PORTB^=(1);
        //TODO:: Please write your application code 
    }
}