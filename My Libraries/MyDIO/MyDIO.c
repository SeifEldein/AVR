
#include"Mytype.h"
#include"MyDIO.h"

void DIO_SetPinDir(U8 PORT,U8 PIN_NUM,U8 PinsRange,U8 IN_OUT)
{
	U8 index;
	switch(PORT)
	{
	    case 'A':
	    {
	    	for(index=0;index<PinsRange;index++)
	    	{
	    	    DIO_DDRA |= (IN_OUT<<PIN_NUM);
	    	}
		    break;
	    }
	    case 'B':
	    {
	    	for(index=0;index<PinsRange;index++)
	    	{
	    	    DIO_DDRB |= (IN_OUT<<PIN_NUM);
	    	}
		    break;
	    }
	    case 'C':
	    {
	    	for(index=0;index<PinsRange;index++)
	    	{
	    	    DIO_DDRC |= (IN_OUT<<PIN_NUM);
	    	}
		    break;
	    }
	    case 'D':
	    {
	    	for(index=0;index<PinsRange;index++)
	    	{
	    	    DIO_DDRD |= (IN_OUT<<PIN_NUM);
	    	}
		    break;
	    }
	}
}

void DIO_SetPortVal(U8 PORT,U8 PIN_NUM,U8 HIGH_LOW)
{
	switch(PORT)
	{
	    case 'A':
	    {
	    	if(HIGH_LOW == 1)
	    	{
	    	    DIO_PORTA = (HIGH_LOW<<PIN_NUM);
	    	}
	    	else
	    	{
	    		DIO_PORTA &=~ (HIGH_LOW<<PIN_NUM);
	    	}
		    break;
	    }
	    case 'B':
	    {
	    	if(HIGH_LOW == 1)
	    	{
	    	    DIO_PORTB = (HIGH_LOW<<PIN_NUM);
	    	}
	    	else
	    	{
	    		DIO_PORTB &=~ (HIGH_LOW<<PIN_NUM);
	    	}
		    break;
	    }
	    case 'C':
	    {
	    	if(HIGH_LOW == 1)
	    	{
	    	    DIO_PORTC = (HIGH_LOW<<PIN_NUM);
	    	}
	    	else
	    	{
	    		DIO_PORTC &=~ (HIGH_LOW<<PIN_NUM);
	    	}
		    break;
	    }
	    case 'D':
	    {
	    	if(HIGH_LOW == 1)
	    	{
	    	    DIO_PORTD = (HIGH_LOW<<PIN_NUM);
	    	}
	    	else
	    	{
	    		DIO_PORTD &=~ (HIGH_LOW<<PIN_NUM);
	    	};
		    break;
	    }
	}

}

void DIO_SetPortVal(U8 PORT,U8 PIN_NUM,U8 HIGH_LOW)
{
	switch(PORT)
	{
	    case 'A':
	    {
	    	if(HIGH_LOW == 1)
	    	{
	    	    DIO_PINA = (HIGH_LOW<<PIN_NUM);
	    	}
	    	else
	    	{
	    		DIO_PINA &=~ (HIGH_LOW<<PIN_NUM);
	    	}
		    break;
	    }
	    case 'B':
	    {
	    	if(HIGH_LOW == 1)
	    	{
	    	    DIO_PINB = (HIGH_LOW<<PIN_NUM);
	    	}
	    	else
	    	{
	    		DIO_PINB &=~ (HIGH_LOW<<PIN_NUM);
	    	}
		    break;
	    }
	    case 'C':
	    {
	    	if(HIGH_LOW == 1)
	    	{
	    	    DIO_PINC = (HIGH_LOW<<PIN_NUM);
	    	}
	    	else
	    	{
	    		DIO_PINC &=~ (HIGH_LOW<<PIN_NUM);
	    	}
		    break;
	    }
	    case 'D':
	    {
	    	if(HIGH_LOW == 1)
	    	{
	    	    DIO_PIND = (HIGH_LOW<<PIN_NUM);
	    	}
	    	else
	    	{
	    		DIO_PIND &=~ (HIGH_LOW<<PIN_NUM);
	    	};
		    break;
	    }
	}

}
