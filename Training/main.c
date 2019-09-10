/*
 * main.c
 *
 *  Created on: Sep 8, 2019
 *      Author: The Wolf
 */

#include <avr/io.h>
#include "Mytype.h"

void forward_reversed_lighting(U8 Num_of_LEDs,U8 repetition);
void onebyone_lighting(U8 Num_of_LEDs,U8 repetition);
void first_last_lighting(U8 Num_of_LEDs,U8 repetition);
void lighting_all(U8 Num_of_LEDs,U8 repetition);

int main(void)
{
	while(1)
	{
		forward_reversed_lighting(5,2);
		onebyone_lighting(5,2);
		first_last_lighting(5,2);
		lighting_all(5,4);
	}
	return(0);
}
