
/****************Header file guard****************/

#ifndef LCDD_H_
#define LCDD_H_

/****************Prototypes****************/

void LCD_Init(void);
void LCD_Ctrl(U8 Instuction);
void LCD_Data(U8 Character);
void LCD_String(S8 *S);

/******************************************/

/**** PORTB****/

#define LCD_RS               DIO_PIN_0
#define LCD_RW               DIO_PIN_1
#define LCD_EN               DIO_PIN_2

/********/

/**** PORTD****/

#define LCD_DB0_PIN          DIO_PIN_0
#define LCD_DB1_PIN          DIO_PIN_1
#define LCD_DB2_PIN          DIO_PIN_2
#define LCD_DB3_PIN          DIO_PIN_3
#define LCD_DB4_PIN          DIO_PIN_4
#define LCD_DB5_PIN          DIO_PIN_5
#define LCD_DB6_PIN          DIO_PIN_6
#define LCD_DB7_PIN          DIO_PIN_7

/********/

/****LCD Commands****/

#define LCD_Instruction      DIO_PORTD
#define First_Line           (0x0E)
#define Second_Line          (0x0C)
#define Dis_clr              (0x01)
#define Cursor_Increment     (0x06)
#define _8bit_mode           (0x38)

/********/

#endif
