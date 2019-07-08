/*
 * _16_bit_timer.c
 *
 * Created: 17-Dec-14 2:04:40 PM
 *  Author: SRAVAN
 */ 


#include <avr/io.h>

int main(void)
{
	DDRD=0b00000010;
	PORTD=0b00000010;
	TCCR1B=(1<<2|0<<1|1<<0);
	
	int i;
    while(1)
    {
        i=TCNT1;
		while(TCNT1<15625)
		{
		}
		
			PORTD^=1<<1;
			TCNT1=0;
		
        //TODO:: Please write your application code 
    }
}