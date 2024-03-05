/**
 *
 * \file SWC_HeightSensor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_HeightSensor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 3/3/2024 02:19 AM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_HeightSensor.h"


/**
 *
 * Runnable RE_HeightSensor_GetPosition
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppHeightSensor_GetPosition
 *
 */

void RE_HeightSensor_GetPosition (SensorPositionType* position)
{
	Std_ReturnType status;
	IoPositionSensorReadingType Io_Position;

	/* Server Call Points */
	if(Io_Position == 0)
	{
		position = SENSOR_POSITION_0;
	}
	else if((Io_Position > 0) &&
		Io_Position<=64)
	{
		position = SENSOR_POSITION_1;
	}
	else if((Io_Position > 64) &&
		Io_Position<=192)
	{
		position = SENSOR_POSITION_2;
	}
	else if((Io_Position > 192) &&
		Io_Position<=255)
	{
		position = SENSOR_POSITION_3;
	}
	
	status = Rte_Call_rpIOGetHeight_IOGet(&Io_Position);
	
}

