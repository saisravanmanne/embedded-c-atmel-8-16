/*
 * line_follower.c
 *
 * Created: 13-Feb-15 11:44:15 PM
 *  Author: SRAVAN
 */ 


#include <avr/io.h>

int main(void)
{
	DDRB=0b00001111;
	PORTB=0b00000000;
	DDRD=0b00000000;
	PORTD=0b00000000;
    while(1)
    {
		if((bit_is_set(PIND,6))&&(bit_is_set(PIND,7)))
		{
			forward();
		}
		if((bit_is_clear(PIND,6))&&(bit_is_set(PIND,7)))
		{
			left();
		}
		if((bit_is_set(PIND,6))&&(bit_is_clear(PIND,7)))
		{
			right();
		}
		if((bit_is_clear(PIND,6))&&(bit_is_clear(PIND,7)))
		{
        reverse();
		}
		//TODO:: Please write your application code 
    }
	
	

}
	void forward(void)
	{
		PORTB=0b00000101;
	}
	void reverse(void)
	{
		PORTB=0b00001010;
	}
	void left(void)
	{
		PORTB=0b000000110;
	}
	void right(void)
	{
		PORTB=0b00001001;
	}