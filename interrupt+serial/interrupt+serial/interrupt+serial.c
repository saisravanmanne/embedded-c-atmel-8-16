/*
 * interrupt_serial.c
 *
 * Created: 20-Apr-15 1:57:11 AM
 *  Author: SRAVAN
 */ 


#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
int c;
int main(void)
{
	ADMUX=(1<<REFS0);                         // For Aref=AVcc;
	ADCSRA=(1<<ADEN)|(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0); //Rrescalar div factor =128
	DDRD=0b101100000;
	PORTD=0b010001100;
	MCUCR&=((~(1<<ISC11))&(~(1<<ISC10)));
	GICR|=1<<INT0;
	GICR|=1<<INT1;
	MCUCR&=((~(1<<ISC01))&(~(1<<ISC00)));
	sei();
	
    while(1)
    {
		PORTD&=(~(1<<7));
		
    }
}
ISR(INT0_vect)
{
PORTD|=1<<7;
	
	c=1;
}
ISR(INT1_vect)
{
PORTD^=1<<5;
_delay_ms(262);
_delay_ms(150);
	
	c=2;
}
uint16_t ReadADC(uint8_t ch)
{
	//Select ADC Channel ch must be 0-7
	ch=ch&0b00000111;
	ADMUX|=ch;

	//Start Single conversion
	ADCSRA|=(1<<ADSC);

	//Wait for conversion to complete
	while(!(ADCSRA & (1<<ADIF)));

	//Clear ADIF by writing one to it
	ADCSRA|=(1<<ADIF);

	return(ADC);
}
