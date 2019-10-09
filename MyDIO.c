
#include"Mytype.h"
#include"MyDIO.h"

void DIO_SetPinDir(U8 PORT,U8 PinNum,U8 PinsRange,U8 IN_OUT)
{
	switch(PORT)
	{
	    case 'A':
	    {
	    	for(PinNum=0;PinNum<=PinsRange;PinNum++)
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
	    	for(PinNum=0;PinNum<=PinsRange;PinNum++)
	    	{
	    		if(IN_OUT == 1)
	    		{
	    	        DIO_DDRB |= (IN_OUT<<PinNum);
	    		}
	    		else
	    		{
	    			DIO_DDRB &=~ (DIO_HIGH<<PinNum);
	    		}
	    	}
		    break;
	    }
	    case 'C':
	    {
	    	for(PinNum=0;PinNum<=PinsRange;PinNum++)
	    	{
	    		if(IN_OUT == 1)
	    		{
	    	        DIO_DDRC |= (IN_OUT<<PinNum);
	    		}
	    		else
	    		{
	    			DIO_DDRC &=~ (DIO_HIGH<<PinNum);
	    		}
	    	}
		    break;
	    }
	    case 'D':
	    {
	    	for(PinNum=0;PinNum<=PinsRange;PinNum++)
	    	{
	    		if(IN_OUT == 1)
	    		{
	    	        DIO_DDRD |= (IN_OUT<<PinNum);
	    		}
	    		else
	    		{
	    			DIO_DDRD &=~ (DIO_HIGH<<PinNum);
	    		}
	    	}
		    break;
	    }
	}
}


U8 DIO_GetPinVal(U8 Port_Name,U8 Pin_Num)
{
	U8 val;
	switch (Port_Name)
		{
		case 'A':
				val = ((DIO_PINA>>Pin_Num)&(1<<0));
				break;
		case 'B':
				val = ((DIO_PINB>>Pin_Num)&(1<<0));
				break;
		case 'C':
				val = ((DIO_PINC>>Pin_Num)&(1<<0));
				break;
		case 'D':
				val = ((DIO_PIND>>Pin_Num)&(1<<0));
				break;
		default:
			break;
		}
	return val;
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


