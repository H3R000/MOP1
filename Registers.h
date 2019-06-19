/*
 * Registers.h
 *
 *  Created on: Apr 12, 2019
 *      Author: куб
 */

#ifndef REGISTERS_H_
#define REGISTERS_H_
// PORT Registers  definitions
#define PORTA_REG  *((volatile U8*)0x3B)
#define DDRA_REG   *((volatile U8*)0x3A)
#define PINA_REG   *((volatile U8*)0x39)


#define PORTB_REG	*((volatile U8*)0x38)
#define DDRB_REG	*((volatile U8*)0x37)
#define PINB_REG	*((volatile U8*)0x36)


#define PORTC_REG	*((volatile U8*)0x35)
#define DDRC_REG	*((volatile U8*)0x34)
#define PINC_REG	*((volatile U8*)0x33)


#define PORTD_REG	*((volatile U8*)0x32)
#define DDRD_REG	*((volatile U8*)0x31)
#define PIND_REG	*((volatile U8*)0x30)
// Interrupt Registers definition
#define SREG        *((volatile U8*)0x5F)
#define GICR		*((volatile U8*)0x5B)
#define GIFR		*((volatile U8*)0x5A)
#define MCUCR		*((volatile U8*)0x55)
#define MCUCSR		*((volatile U8*)0x54)
// ADC Registers Definitions
#define ADMUX		*((volatile U8*)0x27)
#define ADCSRA		*((volatile U8*)0x26)
#define SFIOR		*((volatile U8*)0x50)
#define ADCH		*((volatile U8*)0x25)
// Timers Registers Definitions


#define TCCR0		(*(volatile U8*)0x53)
#define TCNT0		(*(volatile U8*)0x52)
#define TIMSK		(*(volatile U8*)0x59)
#define TIFR		(*(volatile U8*)0x58)
#define OCR0		(*(volatile U8*)0x5C)


// Timer 1 registers


#define TCCR1A		(*(volatile U8*)0x4F)
#define TCCR1B		(*(volatile U8*)0x4E)
#define ICR1L		(*(volatile U8*)0x46)
#define OCR1AL		(*(volatile U8*)0x4A)






#endif /* REGISTERS_H_ */
