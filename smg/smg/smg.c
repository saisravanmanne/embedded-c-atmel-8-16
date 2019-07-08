/*
 * smg.c
 *
 * Created: 13-Feb-15 8:21:05 PM
 *  Author: SRAVAN
 */ 


#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD=0b00000001;
	DDRA=0b00000000;
	DDRB=0b00010000;
	DDRC=0b00000000;
	PORTA=0b00000000;
	PORTB=0b00000000;
	PORTC=0b00000000;
	PORTD=0b00000001;
    while(1)
    {
		if(bit_is_clear(PIND,7)&&bit_is_set(PIND,6))
		{
		PORTB^=1<<4;
		_delay_ms(1000);
		}
        //TODO:: Please write your application code 
    }
}