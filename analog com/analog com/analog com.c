/*
 * analog_com.c
 *
 * Created: 09-Apr-15 9:56:14 PM
 *  Author: SRAVAN
 */ 


#include <avr/io.h>
#include <util/delay.h>

int main()
{
	DDRD=0x07; // set PD0, PD1 and PD2 as output pin
	ACSR=0x00; //to set ACO bit as zero.
	ADCSRA&=~(1<<ADEN); // to disable ADC
	while(1)
	{
		SFIOR|=(1<<ACME); // bit is set to select the ADC channel
		ADMUX=0x00; // ADC0 channel is selected
		_delay_us(1); // delay for synchronization
		if(bit_is_set(ACSR,ACO)) // if bit is set to 1
		PORTD|=(1<<PD0); // send one to PD0 bit
		else // if bit is set to zero
		PORTD&=~(1<<PD0);

		SFIOR|=(1<<ACME);
		ADMUX=0x01; // ADC1 channel is selected
		_delay_us(1);
		if(bit_is_set(ACSR,ACO))
		PORTD|=(1<<PD1);
		else
		PORTD&=~(1<<PD1);

		SFIOR&=~(1<<ACME); // to select AIN1 pin as negative input
		_delay_us(1);
		if(bit_is_set(ACSR,ACO))
		PORTD|=(1<<PD2);
		else
		PORTD&=~(1<<PD2);
	}
}