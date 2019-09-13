
#include"Mytype.h"
#include"MyDIO.h"

void DIO_SetPinDir(U8 PORT,U8 index,U8 PinsRange,U8 IN_OUT)
{
	switch(PORT)
	{
	    case 'A':
	    {
	    	for(index=0;index<PinsRange;index++)
	    	{
	    	    DIO_DDRA |= (IN_OUT<<index);
	    	}
		    break;
	    }
	    case 'B':
	    {
	    	for(index=0;index<PinsRange;index++)
	    	{
	    	    DIO_DDRB |= (IN_OUT<<index);
	    	}
		    break;
	    }
	    case 'C':
	    {
	    	for(index=0;index<PinsRange;index++)
	    	{
	    	    DIO_DDRC |= (IN_OUT<<index);
	    	}
		    break;
	    }
	    case 'D':
	    {
	    	for(index=0;index<PinsRange;index++)
	    	{
	    	    DIO_DDRD |= (IN_OUT<<index);
	    	}
		    break;
	    }
	}
}


void DIO_SetPinVal(U8 PORT,U8 PIN_NUM,U8 HIGH_LOW)
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
