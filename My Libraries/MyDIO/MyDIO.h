
//Header file guard

#ifndef MyDIO_H_
#define MyDIO_H_

//Prototypes

void DIO_SetPinDir(U8 PORT,U8 PIN_NUM,U8 PinsRange,U8 IN_OUT);
void DIO_SetPinVal(U8 PORT,U8 PIN_NUM,U8 HIGH_LOW);
void DIO_SetPortVal(U8 PORT,U8 PORT_NUM,U8 HIGH_LOW);

#define DIO_DDRA         (*((U8*) 0x3A))
#define DIO_PORTA        (*((U8*) 0x3B))
#define DIO_PINA         (*((U8*) 0x39))


#define DIO_DDRB         (*((U8*) 0x38))
#define DIO_PORTB        (*((U8*) 0x37))
#define DIO_PINB         (*((U8*) 0x36))


#define DIO_DDRC         (*((U8*) 0x35))
#define DIO_PORTC        (*((U8*) 0x34))
#define DIO_PINC         (*((U8*) 0x33))


#define DIO_DDRD         (*((U8*) 0x32))
#define DIO_PORTD        (*((U8*) 0x31))
#define DIO_PIND         (*((U8*) 0x30))


#define DIO_PIN_0        (0U)
#define DIO_PIN_1        (1U)
#define DIO_PIN_2        (2U)
#define DIO_PIN_3        (3U)
#define DIO_PIN_4        (4U)
#define DIO_PIN_5        (5U)
#define DIO_PIN_6        (6U)
#define DIO_PIN_7        (7U)


#define DIO_INPUT        (0U)
#define DIO_OUTPUT       (1U)


#define DIO_LOW          (0U)
#define DIO_HIGH         (1U)


#endif
