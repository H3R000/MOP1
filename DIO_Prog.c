/*
 * DIO_Prog.c
 *
 *  Created on: Jun 18, 2019
 *      Author: A H M E D
 */
#include "types.h"
#include "BIT_MATH.h"
#include "Registers.h"
#include "DIO_Int.h"


void DIO_Portval(U8 DIO_PortID , U8 DIO_Value)
{
	if (DIO_PortID  <= DIO_PORTD)
	{
		switch (DIO_PortID)
		{
		case DIO_PORTA: PORTA_REG = DIO_Value; break;
		case DIO_PORTB: PORTB_REG = DIO_Value; break;
		case DIO_PORTC: PORTC_REG = DIO_Value; break;
		case DIO_PORTD: PORTD_REG = DIO_Value; break;


		}
	}
	else
		{

			//error
		}
}











void DIO_PortDir(U8 DIO_PortID,U8 DIO_Direction)
{
	if (DIO_PortID  <= DIO_PORTD)
	{
		switch (DIO_PortID)
		{
		case DIO_PORTA: DDRA_REG = DIO_Direction; break;
		case DIO_PORTB: DDRB_REG = DIO_Direction; break;
		case DIO_PORTC: DDRC_REG = DIO_Direction; break;
		case DIO_PORTD: DDRD_REG = DIO_Direction; break;

			if (DIO_Direction == DIO_Input)
			{
				DIO_Portval(DIO_PortID, DIO_PortOutput);
			}
			else
			{

			}

		}
	}
	else
		{

			//error
		}
}






void DIO_PinVal(U8 DIO_PortID,U8 DIO_PinNO,U8 DIO_PinVal)
{
	if (DIO_PortID  <= DIO_PORTD  && DIO_PinNO <= DIO_PIN7)
	{
		if(DIO_PinVal==DIO_high)
		{
			switch (DIO_PortID)
			{
			case DIO_PORTA:SET_BIT(PORTA_REG,DIO_PinVal); break;
			case DIO_PORTB:SET_BIT(PORTB_REG,DIO_PinVal); break;
			case DIO_PORTC:SET_BIT(PORTC_REG,DIO_PinVal); break;
			case DIO_PORTD:SET_BIT(PORTD_REG,DIO_PinVal); break;

			}
		}
		else
		{
			// err out of range
		}
	}
	else if (DIO_PortID  <= DIO_PORTD  && DIO_PinNO <= DIO_PIN7)
	{
		if(DIO_PinVal==DIO_high)
		{
			switch (DIO_PortID)
			{
			case DIO_PORTA:CLR_BIT(PORTA_REG,DIO_PinVal); break;
			case DIO_PORTB:CLR_BIT(PORTB_REG,DIO_PinVal); break;
			case DIO_PORTC:CLR_BIT(PORTC_REG,DIO_PinVal); break;
			case DIO_PORTD:CLR_BIT(PORTD_REG,DIO_PinVal); break;

			}
		}
		else
		{
			// err out of range
		}
	}

	else
	{

	}

}

void DIO_PinDir(U8 DIO_PortID,U8 DIO_PinNO,U8 DIO_Pindir)
{
	if (DIO_PortID  <= DIO_PORTD  && DIO_PinNO <= DIO_PIN7)
	{
		if(DIO_Pindir==DIO_high)
		{
			switch (DIO_PortID)
			{
			case DIO_PORTA:SET_BIT(DDRA_REG,DIO_Pindir); break;
			case DIO_PORTB:SET_BIT(DDRB_REG,DIO_Pindir); break;
			case DIO_PORTC:SET_BIT(DDRC_REG,DIO_Pindir); break;
			case DIO_PORTD:SET_BIT(DDRD_REG,DIO_Pindir); break;

			}
		}
		else
		{
			// err out of range
		}
	}
	else if (DIO_PortID  <= DIO_PORTD  && DIO_PinNO <= DIO_PIN7)
	{
		if(DIO_Pindir==DIO_high)
		{
			switch (DIO_PortID)
			{
			case DIO_PORTA:CLR_BIT(DDRA_REG,DIO_Pindir); break;
			case DIO_PORTB:CLR_BIT(DDRB_REG,DIO_Pindir); break;
			case DIO_PORTC:CLR_BIT(DDRC_REG,DIO_Pindir); break;
			case DIO_PORTD:CLR_BIT(DDRD_REG,DIO_Pindir); break;

			}
		}
		else
		{
			// err out of range
		}
	}

	else
	{

	}

}
U8 DIO_GetPinVal(U8 DIO_PortID,U8 DIO_PinNO)
{
	U8 result;
	if (DIO_PortID  <= DIO_PORTD  && DIO_PinNO <= DIO_PIN7)
	{
		switch(DIO_PortID)
		{
		case DIO_PORTA:result = GET_BIT(PORTA_REG,DIO_PinNO); break;
		case DIO_PORTB:result = GET_BIT(PORTB_REG,DIO_PinNO); break;
		case DIO_PORTC:result = GET_BIT(PORTC_REG,DIO_PinNO); break;
		case DIO_PORTD:result = GET_BIT(PORTD_REG,DIO_PinNO); break;

		}
	}
	else
	{
			//error

	}

	return result;

}










