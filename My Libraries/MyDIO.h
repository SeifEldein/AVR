
//Header file guard

#ifndef MyDIO_H_
#define MyDIO_H_

#define DIO_DDRA (*((U8*) 0x3A))
#define DIO_PORTA (*((U8*) 0x3B))
#define DIO_PINA (*((U8*) 0x39))

#define DIO_DDRB (*((U8*) 0x38))
#define DIO_PORTB (*((U8*) 0x37))
#define DIO_PINB (*((U8*) 0x36))

#define DIO_DDRC (*((U8*) 0x35))
#define DIO_PORTC (*((U8*) 0x34))
#define DIO_PINC (*((U8*) 0x33))

#define DIO_DDRD (*((U8*) 0x32))
#define DIO_PORTD (*((U8*) 0x31))
#define DIO_PIND (*((U8*) 0x30))

#endif
