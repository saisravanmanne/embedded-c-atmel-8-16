/*
 * while_ground_check_1.c
 *
 * Created: 17-Dec-14 2:26:24 PM
 *  Author: SRAVAN
 */ 


#include <avr/io.h>
#include <avr/delay.h>
int main(void)
{
	DDRD=0b00000010;
	PORTD=0b11111111;
	DDRB=0b00010000;
	PORTB=0b00010000;
	
   while(1)
    {
		while(bit_is_clear(PIND,7))
		{
			PORTD^=1<<1;
			_delay_ms(1000);
		}
		_delay_ms(10000);
		PORTB^=1<<4;
        //TODO:: Please write your application code 
    }
}