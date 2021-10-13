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
#define ULTRASONIC_TRIGGER_PORT_ID 		PORTB_ID
#define ULTRASONIC_TRIGGER_PIN_ID		PIN5_ID


/*
 *
 */
void Ultrasnoic_edgeProcessing( void );

/***********************************************************************
*                      Public Functions Prototypes                     *
***********************************************************************/
/*
 * Description:
 * Initialize the ICU driver F_ICU = F_CPU/8 and rising edge at first.
 * Setup the ICU call back function.
 * Setup the direction for the trigger pin as output pin through the GPIO driver.
 */
void Ultrasonic_init( void );
/*
 * Description:
 * Send the trigger pulse by using Ultrasonic_Trigger function.
 * Start the measurements by the ICU from this moment
 */
uint16 Ultrasonic_readDistance( void );






#endif /* ULTRASONIC_H_ */
