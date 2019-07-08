/*
 * analog_comparator.c
 *
 * Created: 09-Apr-15 9:33:30 PM
 *  Author: SRAVAN
 */ 


#include<avr/io.h>

void main(void)
{
	DDRD=0b00000100;
	PORTD=0b00010011;
	while(1)
	{
		if (bit_is_clear(PIND,4))
		{
			PORTD|=(1<<2);
		}
		
		PORTD&=~(1<<2);
		
	}

	}
	
