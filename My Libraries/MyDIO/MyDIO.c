
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
	    		if(IN_OUT == 1)
	    		{
	    	        DIO_DDRA |= (IN_OUT<<PinNum);
	    		}
	    		else
	    		{
	    			DIO_DDRA &=~ (DIO_HIGH<<PinNum);
	    		}
	    	}
		    break;
	    }
	    case 'B':
	    {
	    	for(PinNum=0;PinNum<PinsRange;PinNum++)
	    	{
	    		if(IN_OUT == 1)
	    		{
	    	        DIO_DDRA |= (IN_OUT<<PinNum);
	    		}
	    		else
	    		{
	    			DIO_DDRA &=~ (DIO_HIGH<<PinNum);
	    		}
	    	}
		    break;
	    }
	    case 'C':
	    {
	    	for(PinNum=0;PinNum<PinsRange;PinNum++)
	    	{
	    		if(IN_OUT == 1)
	    		{
	    	        DIO_DDRA |= (IN_OUT<<PinNum);
	    		}
	    		else
	    		{
	    			DIO_DDRA &=~ (DIO_HIGH<<PinNum);
	    		}
	    	}
		    break;
	    }
	    case 'D':
	    {
	    	for(PinNum=0;PinNum<PinsRange;PinNum++)
	    	{
	    		if(IN_OUT == 1)
	    		{
	    	        DIO_DDRA |= (IN_OUT<<PinNum);
	    		}
	    		else
	    		{
	    			DIO_DDRA &=~ (DIO_HIGH<<PinNum);
	    		}
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
	    	    DIO_PINA |= (DIO_HIGH<<PIN_NUM);
	    	}
	    	else
	    	{
	    		DIO_PINA &=~ (DIO_HIGH<<PIN_NUM);
	    	}
		    break;
	    }
	    case 'B':
	    {
	    	if(HIGH_LOW == 1)
	    	{
	    	    DIO_PINB |= (DIO_HIGH<<PIN_NUM);
	    	}
	    	else
	    	{
	    		DIO_PINB &=~ (DIO_HIGH<<PIN_NUM);
	    	}
		    break;
	    }
	    case 'C':
	    {
	    	if(HIGH_LOW == 1)
	    	{
	    	    DIO_PINC |= (DIO_HIGH<<PIN_NUM);
	    	}
	    	else
	    	{
	    		DIO_PINC &=~ (DIO_HIGH<<PIN_NUM);
	    	}
		    break;
	    }
	    case 'D':
	    {
	    	if(HIGH_LOW == 1)
	    	{
	    	    DIO_PIND |= (DIO_HIGH<<PIN_NUM);
	    	}
	    	else
	    	{
	    		DIO_PIND &=~ (DIO_HIGH<<PIN_NUM);
	    	};
		    break;
	    }
	}

}

void DIO_SetPortVal(U8 PORT,U8 PORT_NUM,U8 HIGH_LOW)
{
	switch(PORT)
	{
	    case 'A':
	    {
	    	if(HIGH_LOW == 1)
	    	{
	    	    DIO_PORTA |= (DIO_HIGH<<PORT_NUM);
	    	}
	    	else
	    	{
	    		DIO_PORTA &=~ (DIO_HIGH<<PORT_NUM);
	    	}
		    break;
	    }
	    case 'B':
	    {
	    	if(HIGH_LOW == 1)
	    	{
	    	    DIO_PORTB |= (DIO_HIGH<<PORT_NUM);
	    	}
	    	else
	    	{
	    		DIO_PORTB &=~ (DIO_HIGH<<PORT_NUM);
	    	}
		    break;
	    }
	    case 'C':
	    {
	    	if(HIGH_LOW == 1)
	    	{
	    	    DIO_PORTC |= (DIO_HIGH<<PORT_NUM);
	    	}
	    	else
	    	{
	    		DIO_PORTC &=~ (DIO_HIGH<<PORT_NUM);
	    	}
		    break;
	    }
	    case 'D':
	    {
	    	if(HIGH_LOW == 1)
	    	{
	    	    DIO_PORTD |= (DIO_HIGH<<PORT_NUM);
	    	}
	    	else
	    	{
	    		DIO_PORTD &=~ (DIO_HIGH<<PORT_NUM);
	    	};
		    break;
	    }
	}

}


