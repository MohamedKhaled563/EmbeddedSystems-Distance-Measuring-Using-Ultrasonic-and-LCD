/*
 *
 * Module: Application
 *
 * File Name: distance_calculator_app.c
 *
 * Description: Source file for Application Layer.
 *
 * Author: Mohamed Khaled.
 *
 */

#include "lcd.h"

int main ( )
{
	LCD_init();
	LCD_displayString("Distance = ");
	LCD_moveCursor(0,11);

	while(1)
	{

	}
	return 0;
}
