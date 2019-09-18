
#include "Mytype.h"
#include "MyDIO.h"
#include <util/delay.h>
#include "LCDD.h"

void LCD_Init(void)
{
	_delay_ms(60);

	DIO_SetPinDir('D',LCD_DB0_PIN,LCD_DB7_PIN,DIO_HIGH);   // Set Port A as output.
	DIO_SetPinDir('B',LCD_DB0_PIN,LCD_DB2_PIN,DIO_HIGH);   // Set Port B as output.

	DIO_SetPortVal('B',LCD_RS,DIO_LOW);                /* RS = 0 */
	DIO_SetPortVal('B',LCD_RW,DIO_LOW);                /* RW = 0 */

	LCD_Instruction = _8bit_mode;
	LCD_Instruction = Second_Line;
	LCD_Instruction = Cursor_Increment;
	LCD_Instruction = Dis_clr;
	LCD_Instruction = 0x80;

    _delay_ms(5);
}

void LCD_Ctrl(U8 Instruction)
{
	LCD_Instruction = Instruction;
	DIO_SetPortVal('B',LCD_RS,DIO_LOW);                /* RS = 0 */
	DIO_SetPortVal('B',LCD_RW,DIO_LOW);                /* RW = 0 */
	DIO_SetPortVal('B',LCD_EN,DIO_HIGH);               /* EN = 1 */
	_delay_us(1);
	DIO_SetPortVal('B',LCD_EN,DIO_LOW);                /* EN = 0 */

	_delay_ms(5);
}

void LCD_Data(U8 Character)
{
	LCD_Instruction = Character;
	DIO_SetPortVal('B',LCD_RS,DIO_HIGH);               /* RS = 1 */
	DIO_SetPortVal('B',LCD_RW,DIO_LOW);                /* RW = 0 */
	DIO_SetPortVal('B',LCD_EN,DIO_HIGH);               /* EN = 1 */
	_delay_us(1);
	DIO_SetPortVal('B',LCD_EN,DIO_LOW);                /* EN = 0 */

	_delay_ms(5);
}

void LCD_String(S8 *S)
{
	S8 i;
	for(i=0;S[i]!=0;i++)
	{
		LCD_Instruction = S[i];
		DIO_SetPortVal('B',LCD_RS,DIO_HIGH);               /* RS = 1 */
		DIO_SetPortVal('B',LCD_RW,DIO_LOW);                /* RW = 0 */
		DIO_SetPortVal('B',LCD_EN,DIO_HIGH);               /* EN = 1 */
		_delay_us(1);
		DIO_SetPortVal('B',LCD_EN,DIO_LOW);                /* EN = 0 */
		_delay_ms(5);

	}
}
