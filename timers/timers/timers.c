/*
 * timers.c
 *
 * Created: 15-Dec-14 8:27:11 AM
 *  Author: SRAVAN
 */ 


#include <avr/io.h>

int main(void)
{
	DDRB=0b11111111;
	PORTB=0b00000000;
	PORTD=0b00000000;
	DDRD=0b11111111;
	TCCR1B|=(1<<0);
	int count=0;
    while(1)
    {
		if(TCNT1>10000)
		{
		TCNT1=0;
		count++;
		if(count>1000)
		{
			PORTB^=(1<<4);
			PORTD ^=(1<<1);
			count=0;
		}
	}
	}
	return 0;
}
        //TODO:: Please write your application code 
    
