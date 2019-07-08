/*
 * GccApplication2.c
 *
 * Created: 08-Dec-14 12:07:40 AM
 *  Author: SRAVAN
 */ 



#include<avr/io.h>

#define cpu 16000000
#define baud 9600
#define brc ((cpu/16/baud)-1)


#include<util/delay.h>


int main(void)
{


	UBRRH=((brc)>>8);
	UBRRL=(brc);
	UCSRB=(1<<0);
	UCSRC=(1<<1)|(1<<0);
	while(1)
	{
		
		UDR = '8';
		_delay_ms(100);



	}
}