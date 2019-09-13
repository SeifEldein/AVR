#include "Mytype.h"
#include "MyDIO.h"
#include "SSD.h"
#include <util/delay.h>


void count_down_with_switch(void);
void count_up_with_switch(void);


void count_up_with_switch(void)
{
	U8 i;
	U8 seg[10] = {Zero,One,Two,Three,Four,Five,Six,Seven,Eight,Nine};
	DIO_DDRA   = 0xFF;
	DIO_DDRB   = 0x00;
    DIO_PORTA  = seg[0];

	for(i=0;i<9;i++)
	{
		if((DIO_PINB&(1<<DIO_pin_0))!=0)
		{
		    DIO_PORTA = seg[i+1];
		    _delay_ms(150);
		}
		else
		{
		    i--;
		}
	}

}

void count_down_with_switch(void)
{
	U8 i;
	U8 seg[10] = {Zero,One,Two,Three,Four,Five,Six,Seven,Eight,Nine};
	DIO_DDRA   = 0xFF;
	DIO_DDRB   = 0x00;
    DIO_PORTA  = seg[9];

	for(i=0;i<9;i++)
	{
		if((DIO_PINB&(1<<DIO_pin_0))!=0)
		{
		    DIO_PORTA = seg[9-i-1];
		    _delay_ms(150);
		}
		else
		{
		    i--;
		}
	}
}
