/*
 * DIO_Header.h
 *
 *  Created on: Jun 18, 2019
 *      Author: A H M E D
 */

#ifndef DIO_INT_H_
#define DIO_INT_H_


void DIO_Portval(U8 DIO_PortID,U8 DIO_Value);
void DIO_PortDir(U8 DIO_PortID,U8 DIO_Direction);
void DIO_PinVal(U8 DIO_PortID,U8 DIO_PinNO,U8 DIO_PinVal);
void DIO_PinDir(U8 DIO_PortID,U8 DIO_PinNO,U8 DIO_Pindir);
U8 DIO_GetPinVal(U8 DIO_PortID,U8 DIO_PinNO);



// Port IDs

#define DIO_PORTA  0
#define DIO_PORTB  1
#define DIO_PORTC  2
#define DIO_PORTD  3
//PIN Numbers

#define DIO_PIN0  0
#define DIO_PIN1  1
#define DIO_PIN2  2
#define DIO_PIN3  3
#define DIO_PIN4  4
#define DIO_PIN5  5
#define DIO_PIN6  6
#define DIO_PIN7  7

// PORTVALS

#define DIO_PortHigh 0xff
#define DIO_PortLOW   0x00

// PORT Directions
#define DIO_PortOutput 0xff
#define DIO_PortInput  0x00


//PIN directions & vals

#define DIO_Output  1
#define DIO_Input  0
#define DIO_high  1
#define DIO_low  0










#endif /* DIO_INT_H_ */
