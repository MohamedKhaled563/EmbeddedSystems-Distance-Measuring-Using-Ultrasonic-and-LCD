/*
 *
 *  Module: ULTRASONIC
 *
 *  File Name: ultrasonic.h
 *
 *  Description: Header file for ULTRASONIC module.
 *
 *  Author: Mohamed Khaled
 *
 */

#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_


/***********************************************************************
*                       Include common modules                         *
***********************************************************************/
#include "std_types.h"


/***********************************************************************
*                             Definitions                              *
***********************************************************************/


/***********************************************************************
*                      Public Functions Prototypes                     *
***********************************************************************/
/*
 * Description:
 * Initialize the ICU driver as required.
 * Setup the ICU call back function.
 * Setup the direction for the trigger pin as output pin through the GPIO driver.
 */
void Ultrasonic_init( void );
/*
 *
 */
void Ultrasonic_Trigger( void );
/*
 *
 */
uint16 Ultrasonic_readDistance( void );
/*
 *
 */
void Ultrasnoic_edgeProcessing( void );





#endif /* ULTRASONIC_H_ */
