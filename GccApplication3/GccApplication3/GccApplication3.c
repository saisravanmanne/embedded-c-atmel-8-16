/*
 * GccApplication3.c
 *
 * Created: 15-Dec-14 2:45:26 PM
 *  Author: SRAVAN
 */ 


#include <avr/io.h>

int main(void)
{
	DDRB=0b11111111;
	DDRD=0b11111111;
	PORTD=0b00000000;
	int i,j;
	int cnt=0;
	
    while(1)
    {
	    
		for(i=0;i<1000;i++)
		{
			cnt++;
			for(j=0;j<1000;j++)
			{
				
				if(cnt==90);
				{
					PORTD^=(1<<1);
					cnt=0;
				}
			}
		}
	
				
			
			
		

	
		//TODO:: Please write your application code 
    }
}