#include<avr/io.h>
#include<util/delay.h>
void main(void)
{
DDRB=0b11111111;
DDRD=0b11111111;

while(1)
{
PORTB=0b00010000;
_delay_ms(1000);
PORTB=~PORTB;
_delay_ms(100);
PORTD=0b00000001;
_delay_ms(100);
PORTD=0b00000011;
_delay_ms(1000);
}

}