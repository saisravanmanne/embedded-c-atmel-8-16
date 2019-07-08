/*
 * GccApplication5.c
 *
 * Created: 17-Dec-14 7:11:00 PM
 *  Author: SRAVAN
 */ 


#include <avr/io.h>
#include <avr/delay.h>

int main(void)
{
	DDRB=0b11111111;
	PORTB=0b00010000;
	DDRD=0b00000000;
	PORTD|=1<<7;
	int i,j;
	i=25000;
	j=900;
    while(1)
    {
	if(bit_is_clear(PIND,7))
		{
		toggle();
		}
		if(bit_is_set(PIND,7))
		{
			PORTB=0b00000000;
		}
        //TODO:: Please write your application code 
    }
}

void toggle(void)
{
	PORTB=0b00010011;
}