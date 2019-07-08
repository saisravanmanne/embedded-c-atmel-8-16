/*
 * software_delay.c
 *
 * Created: 15-Dec-14 9:33:05 AM
 *  Author: SRAVAN
 */ 


#include <avr/io.h>

int main(void)
{
	DDRD=0b11111111;
		DDRB=0b11111111;
	PORTD=0b00000000;
    int count,cnt;
	while(1)
    {
		count++;
        if(count>30000)
		{
			count=0;
			cnt++;
			if(cnt==25)
			{
			PORTB=0b00010000;
			PORTD^=1<<1;
			cnt=0;
			}
		}
	}
}
			//TODO:: Please write your application code 
    