/**
 *
 * \file SWC_InclineMotor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_InclineMotor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 3/3/2024 02:19 AM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_InclineMotor.h"


/**
 *
 * Runnable InclineMotor_Move
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppInclineMotor_Move
 *
 */

void InclineMotor_Move (StepMotorStepType step)
{
	Std_ReturnType status;

	/* Server Call Points */
	
	
	if(step == PLUS)
	{
		status = Rte_Call_rpIOSetIncline_IOSetForward();
	}
	else if(step == MINUS)
	{
		status = Rte_Call_rpIOSetIncline_IOSetReverse();
	}
	
}

