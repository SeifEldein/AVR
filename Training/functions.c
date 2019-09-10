/*
 * functions.c
 *
 *  Created on: Sep 10, 2019
 *      Author: The Wolf
 */

#include <avr/io.h>
#include "MyDIO.h"
#include "Mytype.h"
#include <util/delay.h>



void forward_reversed_lighting(U8 Num_of_LEDs,U8 repetition)
{
	S8 i;
	U8 j;
	for(j=0;j<repetition;j++)
	{
        for(i=0;i<Num_of_LEDs;i++)
        {
            DIO_DDRB |= (1<<i);
            DIO_PORTB |= (1<<i);
            _delay_ms(250);
        }

        for(i=(Num_of_LEDs-1);i>=0;i--)
        {
            DIO_DDRB &=~ (1<<i);
            _delay_ms(250);
        }
	}
}

void onebyone_lighting(U8 Num_of_LEDs,U8 repetition)
{
	S8 i;
	U8 j;
	for(j=0;j<repetition;j++)
	{
        for(i=0;i<Num_of_LEDs;i++)
        {
            DIO_DDRB |= (1<<i);
            DIO_PORTB |= (1<<i);
            _delay_ms(250);
            DIO_DDRB &=~ (1<<i);
        }

        for(i=(Num_of_LEDs-1);i>=0;i--)
        {
            DIO_DDRB |= (1<<i);
            DIO_PORTB |= (1<<i);
            _delay_ms(250);
            DIO_DDRB &=~ (1<<i);
        }
	}
}

void first_last_lighting(U8 Num_of_LEDs,U8 repetition)
{
	S8 i;
	U8 j;
	for(j=0;j<repetition;j++)
	{
		U8 k = Num_of_LEDs;

		for(i=0;i<=(Num_of_LEDs/2);i++)
		{
			DIO_DDRB |= (1<<i);
			DIO_PORTB |=(1<<i);
			DIO_DDRB |= (1<<(k-1));
			DIO_PORTB |= (1<<(k-1));
			_delay_ms(250);
			DIO_DDRB &=~(1<<i);
			DIO_DDRB &=~(1<<(k-1));
			k--;
		}

		if(((Num_of_LEDs%2)!=0) && (Num_of_LEDs==k))
		{
			DIO_DDRB = (1<<((Num_of_LEDs/2)+1));
			DIO_PORTB = (1<<((Num_of_LEDs/2)+1));
			_delay_ms(250);
			DIO_DDRB &=~(1<<((Num_of_LEDs/2)+1));
		}

		k = Num_of_LEDs/2;

		for(i=((Num_of_LEDs/2)-1);i>=0;i--)
		{
			DIO_DDRB |= (1<<i);
			DIO_PORTB |=(1<<i);
			DIO_DDRB |= (1<<(k+1));
			DIO_PORTB |= (1<<(k+1));
			_delay_ms(250);
			DIO_DDRB &=~(1<<i);
			DIO_DDRB &=~(1<<(k+1));
			k++;
		}
	}
}

void lighting_all(U8 Num_of_LEDs,U8 repetition)
{
	S8 i;
	U8 j;
	for(j=0;j<repetition;j++)
	{
		for(i=0;i<Num_of_LEDs;i++)
		{
			DIO_DDRB |= (1<<i);
			DIO_PORTB |= (1<<i);
		}
		_delay_ms(200);
		for(i=0;i<Num_of_LEDs;i++)
		{
			DIO_DDRB &=~ (1<<i);
		}
		_delay_ms(200);
	}
}



