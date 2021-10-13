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
#include <util/delay.h>
#include <avr/io.h>
#include "lcd.h"
#include "ultrasonic.h"
/*
 * Description:
 * Reduce the error by adding the error value to the measured distance.
 */
void calibrateDistance( uint16* distance )
{
	if(*distance <= 56)
	{
		(*distance)++;
	}
	else if (*distance <= 128)
	{
		(*distance)++;
		(*distance)++;
	}
	else if (*distance <= 204)
	{
		(*distance)++;
		(*distance)++;
		(*distance)++;
	}
	else if (*distance <= 273)
	{
		(*distance)++;
		(*distance)++;
		(*distance)++;
		(*distance)++;
	}
	else if (*distance <= 346)
	{
		(*distance)++;
		(*distance)++;
		(*distance)++;
		(*distance)++;
		(*distance)++;
	}
	else if(*distance <= 400)
	{
		(*distance)++;
		(*distance)++;
		(*distance)++;
		(*distance)++;
		(*distance)++;
		(*distance)++;
	}
}

int main ( )
{
	/* Enable global interrupt */
	SREG |= (1<<7);
	/*Initializing LCD and Ultrasonic */
	LCD_init();
	LCD_displayString("Distance = ");
	LCD_moveCursor(0,14);
	LCD_displayString("Cm");

	uint16 distance;

	while(1)
	{
		Ultrasonic_init();
		distance = Ultrasonic_readDistance();
		calibrateDistance(&distance);
		LCD_moveCursor(0,11);
		if((distance) < 100)
		{
			LCD_intgerToString(distance );
			LCD_displayCharacter(' ');
		}
		else
		{
			LCD_intgerToString(distance);
		}
		_delay_ms(100);
	}
	return 0;
}
