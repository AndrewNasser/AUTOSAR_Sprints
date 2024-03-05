/**
 *
 * \file SWC_HeightMotor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_HeightMotor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 3/3/2024 02:18 AM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_HeightMotor.h"


/**
 *
 * Runnable HeightMotor_Move
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppHeightMotor_Move
 *
 */

void HeightMotor_Move (StepMotorStepType step)
{
	Std_ReturnType status;

	/* Server Call Points */
	
	if(step == PLUS)
	{
			status = Rte_Call_rpIOSetHeight_IOSetForward();

	}
	else if(step == MINUS)
	{
			status = Rte_Call_rpIOSetHeight_IOSetReverse();

	}
	
}

