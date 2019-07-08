#include<avr/io.h>
#include<util/delay.h>



int main(void)
{
	DDRD=0b00000000;
	DDRA=0b11111111;
	PORTD=0b00000000;
	PORTA=0b00000000;
	
    while(1)
    {
		if(bit_is_clear(PIND,2)&&bit_is_clear(PIND,3)&&bit_is_set(PIND,4)&&bit_is_clear(PIND,5)&&bit_is_clear(PIND,6)&&bit_is_set(PIND,7))
 		{
			opt1();
		}
		if(bit_is_clear(PIND,2)&&bit_is_clear(PIND,3)&&bit_is_set(PIND,4)&&bit_is_clear(PIND,5)&&bit_is_set(PIND,6)&&bit_is_clear(PIND,7))
		{
			opt2();
		}
		if(bit_is_clear(PIND,2)&&bit_is_set(PIND,3)&&bit_is_clear(PIND,4)&&bit_is_set(PIND,5)&&bit_is_clear(PIND,6)&&bit_is_clear(PIND,7))
		{
			opt2();
		}
		if(bit_is_clear(PIND,2)&&bit_is_set(PIND,3)&&bit_is_clear(PIND,4)&&bit_is_clear(PIND,5)&&bit_is_clear(PIND,6)&&bit_is_set(PIND,7))
		{
			opt3();
		}
		if(bit_is_set(PIND,2)&&bit_is_clear(PIND,3)&&bit_is_clear(PIND,4)&&bit_is_clear(PIND,5)&&bit_is_set(PIND,6)&&bit_is_clear(PIND,7))
		{
			opt3();
		}
		if(bit_is_clear(PIND,2)&&bit_is_set(PIND,3)&&bit_is_clear(PIND,4)&&bit_is_clear(PIND,5)&&bit_is_set(PIND,6)&&bit_is_clear(PIND,7))
		{
			opt4();
		}
		if(bit_is_set(PIND,2)&&bit_is_clear(PIND,3)&&bit_is_clear(PIND,4)&&bit_is_set(PIND,5)&&bit_is_clear(PIND,6)&&bit_is_clear(PIND,7))
		{
			opt4();
		}
		if(bit_is_clear(PIND,2)&&bit_is_clear(PIND,3)&&bit_is_set(PIND,4)&&bit_is_set(PIND,5)&&bit_is_clear(PIND,6)&&bit_is_clear(PIND,7))
		{
			opt5();
		}
		if(bit_is_set(PIND,2)&&bit_is_clear(PIND,3)&&bit_is_clear(PIND,4)&&bit_is_clear(PIND,5)&&bit_is_clear(PIND,6)&&bit_is_set(PIND,7))
		{
			opt6();
		}
		
		

		
     //TODO:: Please write your application code 
    }
}
void opt1(void)
{
	PORTA=0b00010001;
	_delay_ms(5000);
	PORTA=0b01010101;
	_delay_ms(5000);
	PORTA=0b00100010;
	_delay_ms(5000);
	PORTA=0b01100110;
	_delay_ms(5000);
}
void opt2(void)
{
	PORTA=0b00010001;
	_delay_ms(75000);
	PORTA=0b01010101;
	_delay_ms(5000);
	PORTA=0b00100010;
	_delay_ms(35000);
	PORTA=0b01100110;
	_delay_ms(5000);
}
void opt3(void)
{
	PORTA=0b00010001;
		_delay_ms(35000);
	PORTA=0b01010101;
		_delay_ms(5000);
	PORTA=0b00100010;
		_delay_ms(75000);
	PORTA=0b01100110;
		_delay_ms(5000);
}
void opt4(void)
{
	PORTA=0b00010001;
		_delay_ms(55000);
	PORTA=0b01010101;
		_delay_ms(5000);
	PORTA=0b00100010;
		_delay_ms(55000);
	PORTA==0b01100110;
		_delay_ms(5000);
}
void opt5(void)
{
	PORTA=0b00010001;
		_delay_ms(85000);
	PORTA=0b01010101;
		_delay_ms(5000);
	PORTA=0b00100010;
		_delay_ms(25000);
	PORTA=0b01100110;
		_delay_ms(5000);
}
void opt6(void)
{
	PORTA=0b00010001;
		_delay_ms(25000);
	PORTA=0b01010101;
		_delay_ms(5000);
	PORTA=0b00100010;
		_delay_ms(85000);
	PORTA=0b01100110;
		_delay_ms(5000);
}
