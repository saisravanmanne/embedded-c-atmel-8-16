/*
 * GccApplication4.c
 *
 * Created: 17-Dec-14 5:06:36 PM
 *  Author: SRAVAN
 */ 


#include <avr/io.h>
int t,k;

 

int main(void)
{
	DDRD=0b00000010;
	DDRB=0b11111111;
	PORTB=0b11101111;
	PORTD|=1<<7;
	TCCR1B=(1<<2|0<<1|1<<0);
	int i;
	TCNT1=0;
	int timer[2];
	timer[1]=15625;
	timer[2]=0;
    while(1)
    {
		 t=bit_is_set(PIND,7);
		 k=bit_is_clear(PIND,7);
		//if(bit_is_set(PIND,7))
		{
			series(timer[2],k,t);
		}
		//if(bit_is_clear(PIND,7))
		{
		//series(timer[1],t);
	}
	}
	
	
}

void series(int a, int b,int c)
{
	int i;
	int z;
	if(k!=0)
	{
	z==1;
	}
	else
	{
		z==t;
	}
	while(z)
	{
		TCNT1=0;
		PORTD|=1<<1;
		while(TCNT1<a)
		{
		}
		
		PORTD^=1<<1;
		PORTB|=1<<4;
		
		
		for(i=0;i<3;i++)
		{
			TCNT1=0;
			while(TCNT1<a)
			{
			}
			PORTB|=(1<<i-1);
			PORTB&=~(1<<4);
			PORTB&=~(1<<i);
			
			
		}
		t=bit_is_set(PIND,7);
		k=bit_is_clear(PIND,7);
	}
}

