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
	LCD_displayString("Line1");
	LCD_moveCursor(1,0);
	LCD_displayString("Line2");
	LCD_moveCursor(2,0);
	LCD_displayString("Line3");
	LCD_moveCursor(3,0);
	LCD_displayString("Line4");
	while(1)
	{

	}
	return 0;
}
