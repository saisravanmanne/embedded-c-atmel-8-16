#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
DDRB=0b11111111;
DDRC=0b0000000;
DDRD=0b00000000;
PORTB=0b11100110;
PORTC=0b1111111;
PORTD=0b00000000;
int press;
while(1)
{
flikgreen();
flikred();
flikwhite();
if(bit_is_set(PIND,4))
{
press=4;
}
while(press==4)
{
if(bit_is_set(PIND,3))
{
press=3;
}
PORTB&=(~1<<0);
flikred();
flikwhite();
}
while(press==3)
{
if(bit_is_set(PIND,2))
{
press=2;
}
PORTB&=(~1<<3);
flikgreen();
flikwhite();
} 
while(press==2)
{
if(bit_is_set(PIND,1))
{
press=1;
}
PORTB&=(~1<<4);
flikgreen();
flikred();
}
}

return 0;
}





void flikgreen(void)
{
PORTB&=(~1<<0);
_delay_ms(10);
PORTB|=(1<<0);
_delay_us(10090);

}
void flikred(void)
{
PORTB&=(~1<<3);
_delay_ms(10);
PORTB|=(1<<3);
_delay_us(10090);
}
void flikwhite(void)
{
PORTB&=(~1<<4);
_delay_ms(10);
PORTB|=(1<<4);
_delay_us(10090);
}