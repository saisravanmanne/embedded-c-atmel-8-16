/*
 * serial_recieve.c
 *
 * Created: 19-Dec-14 10:17:13 PM
 *  Author: SRAVAN
 */ 


#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 8000000
#define BAUD 9600
#define brc ((F_CPU/(16*BAUD))-1)
void main(void)
{
	
UBRRH = 0;
UBRRL =51;
UCSRB|= (1<<RXEN)|(1<<TXEN);
UCSRC |= (1 << URSEL)|(3<<UCSZ0);

char a;
int p=2;
char n=("\n");
a=("sravan \t");


    while(1)
    {
		
	strtrans(a);
	strtrans("%d",p);
		_delay_ms(262.14);
		
        //TODO:: Please write your application code 
    }
}
void trans(unsigned char data )
{
	while ( !( UCSRA & (1<<UDRE)) )
	;
	UDR = data;
}
void strtrans(char *string)
{
	while(*string)
	{
		trans(*string++);
	}
}