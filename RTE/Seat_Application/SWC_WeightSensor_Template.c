/**
 *
 * \file SWC_WeightSensor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_WeightSensor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 3/3/2024 02:28 AM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_WeightSensor.h"


/**
 *
 * Runnable RE_WeightSensor_GetWeight
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppWeightSensor_GetWeight
 *
 */

void RE_WeightSensor_GetWeight (SensorWeightType* weight)
{
	Std_ReturnType status;
	IoWeightSensorReadingType Io_Weight;

	/* Server Call Points */
	status = Rte_Call_rpIOGetWeight_IOGet(&Io_Weight);
		weight = Io_Weight/100;

}

