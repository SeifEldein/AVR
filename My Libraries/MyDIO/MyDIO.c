
#include"Mytype.h"
#include"MyDIO.h"

void DIO_SetPinDir(U8 PORT,U8 PinNum,U8 PinsRange,U8 IN_OUT)
{
	switch(PORT)
	{
	    case 'A':
	    {
	    	for(PinNum=0;PinNum<PinsRange;PinNum++)
	    	{
	    	    DIO_DDRA |= (IN_OUT<<PinNum);
	    	}
		    break;
	    }
	    case 'B':
	    {
	    	for(PinNum=0;PinNum<PinsRange;PinNum++)
	    	{
	    	    DIO_DDRB |= (IN_OUT<<PinNum);
	    	}
		    break;
	    }
	    case 'C':
	    {
	    	for(PinNum=0;PinNum<PinsRange;PinNum++)
	    	{
	    	    DIO_DDRC |= (IN_OUT<<PinNum);
	    	}
		    break;
	    }
	    case 'D':
	    {
	    	for(PinNum=0;PinNum<PinsRange;PinNum++)
	    	{
	    	    DIO_DDRD |= (IN_OUT<<PinNum);
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
