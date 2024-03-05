/**
 *
 * \file SWC_SeatManager_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_SeatManager
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 3/4/2024 01:47 AM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_SeatManager.h"


/**
 *
 * Runnable RE_SeatManager_AutoHeight
 *
 * Triggered By:
 *  - TimingEventImpl.TE_RE_SeatManager_AutoHeight_200ms
 *
 */


void RE_SeatManager_AutoHeight (void)
{
	Std_ReturnType status;
	StepMotorStepType step;
	SensorPositionType position;
	SensorWeightType weight;

	/* Server Call Points */
	status = Rte_Call_rpHeightMotor_Move(step);
	status = Rte_Call_rpHeightSensor_GetPosition(&position);
	status = Rte_Call_rpWeightSensor_GetWeight(&weight);
	
	if(weight > 100)
	{
		/*Set position to SENSOR_POSITION_STEP_3*/
		while(position < SENSOR_POSITION_STEP_3)
		{
			status = Rte_Call_rpHeightMotor_Move(PLUS);
			position++;
		}
		while(position > SENSOR_POSITION_STEP_3)
		{
			status = Rte_Call_rpHeightMotor_Move(MINUS);
			position--;
		}
	}
	else if(weight >= 80)
	{
		/*Set position to SENSOR_POSITION_STEP_2*/
		while(position < SENSOR_POSITION_STEP_2)
		{
			status = Rte_Call_rpHeightMotor_Move(PLUS);
			position++;
		}
		while(position > SENSOR_POSITION_STEP_2)
		{
			status = Rte_Call_rpHeightMotor_Move(MINUS);
			position--;
		}
	}
	else if(weight >= 60)
	{
		/*Set position to SENSOR_POSITION_STEP_1*/
		while(position < SENSOR_POSITION_STEP_1)
		{
			status = Rte_Call_rpHeightMotor_Move(PLUS);
			position++;
		}
		while(position > SENSOR_POSITION_STEP_1)
		{
			status = Rte_Call_rpHeightMotor_Move(MINUS);
			position--;
		}
	}
	if(weight < 60)
	{
		/*Set position to SENSOR_POSITION_STEP_0*/
		while(position < SENSOR_POSITION_STEP_0)
		{
			status = Rte_Call_rpHeightMotor_Move(PLUS);
			position++;
		}
		while(position > SENSOR_POSITION_STEP_0)
		{
			status = Rte_Call_rpHeightMotor_Move(MINUS);
			position--;
		}
	}

	
}


/**
 *
 * Runnable RE_SeatManager_AutoIncline
 *
 * Triggered By:
 *  - TimingEventImpl.TE_RE_SeatManager_AutoIncline_200ms
 *
 */

void RE_SeatManager_AutoIncline (void)
{
	Std_ReturnType status;
	StepMotorStepType step;
	SensorPositionType position;
	SensorWeightType weight;

	/* Server Call Points */
	status = Rte_Call_rpInclineMotor_Move(step);
	status = Rte_Call_rpInclineSensor_GetPosition(&position);
	status = Rte_Call_rpWeightSensor_GetWeight(&weight);
	
	if(weight > 100)
	{
		/*Set position to SENSOR_POSITION_STEP_3*/
		while(position < SENSOR_POSITION_STEP_3)
		{
			status = Rte_Call_rpInclineMotor_Move(PLUS);
			position++;
		}
		while(position > SENSOR_POSITION_STEP_3)
		{
			status = Rte_Call_rpInclineMotor_Move(MINUS);
			position--;
		}
	}
	else if(weight >= 80)
	{
		/*Set position to SENSOR_POSITION_STEP_2*/
		while(position < SENSOR_POSITION_STEP_2)
		{
			status = Rte_Call_rpInclineMotor_Move(PLUS);
			position++;
		}
		while(position > SENSOR_POSITION_STEP_2)
		{
			status = Rte_Call_rpInclineMotor_Move(MINUS);
			position--;
		}		
	}
	else if(weight >= 60)
	{
		/*Set position to SENSOR_POSITION_STEP_1*/
		while(position < SENSOR_POSITION_STEP_1)
		{
			status = Rte_Call_rpInclineMotor_Move(PLUS);
			position++;
		}
		while(position > SENSOR_POSITION_STEP_1)
		{
			status = Rte_Call_rpInclineMotor_Move(MINUS);
			position--;
		}		
	}
	if(weight < 60)
	{
		/*Set position to SENSOR_POSITION_STEP_0*/
		while(position < SENSOR_POSITION_STEP_0)
		{
			status = Rte_Call_rpInclineMotor_Move(PLUS);
			position++;
		}
		while(position > SENSOR_POSITION_STEP_0)
		{
			status = Rte_Call_rpInclineMotor_Move(MINUS);
			position--;
		}		
	}
	
}


/**
 *
 * Runnable RE_SeatManager_AutoSlide
 *
 * Triggered By:
 *  - TimingEventImpl.TE_RE_SeatManager_AutoSlide_200ms
 *
 */

void RE_SeatManager_AutoSlide (void)
{
	Std_ReturnType status;
	StepMotorStepType step;
	SensorPositionType position;
	SensorWeightType weight;

	/* Server Call Points */
	status = Rte_Call_rpSlideMotor_Move(step);
	status = Rte_Call_rpSlideSensor_GetPosition(&position);
	status = Rte_Call_rpWeightSensor_GetWeight(&weight);
	
	if(weight > 100)
	{
		/*Set position to SENSOR_POSITION_STEP_3*/
		while(position < SENSOR_POSITION_STEP_3)
		{
			status = Rte_Call_rpSlideMotor_Move(PLUS);
			position++;
		}
		while(position > SENSOR_POSITION_STEP_3)
		{
			status = Rte_Call_rpSlideMotor_Move(MINUS);
			position--;
		}
	}
	else if(weight >= 80)
	{
		/*Set position to SENSOR_POSITION_STEP_2*/
		while(position < SENSOR_POSITION_STEP_2)
		{
			status = Rte_Call_rpSlideMotor_Move(PLUS);
			position++;
		}
		while(position > SENSOR_POSITION_STEP_2)
		{
			status = Rte_Call_rpSlideMotor_Move(MINUS);
			position--;
		}
	}
	else if(weight >= 60)
	{
		/*Set position to SENSOR_POSITION_STEP_1*/
		while(position < SENSOR_POSITION_STEP_1)
		{
			status = Rte_Call_rpSlideMotor_Move(PLUS);
			position++;
		}
		while(position > SENSOR_POSITION_STEP_1)
		{
			status = Rte_Call_rpSlideMotor_Move(MINUS);
			position--;
		}
	}
	if(weight < 60)
	{
		/*Set position to SENSOR_POSITION_STEP_0*/
		while(position < SENSOR_POSITION_STEP_0)
		{
			status = Rte_Call_rpSlideMotor_Move(PLUS);
			position++;
		}
		while(position > SENSOR_POSITION_STEP_0)
		{
			status = Rte_Call_rpSlideMotor_Move(MINUS);
			position--;
		}
	}	
	
}


/**
 *
 * Runnable RE_SeatManager_SetHeight
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_HeightBtnState
 *
 */

void RE_SeatManager_SetHeight (void)
{
	Std_ReturnType status;
	MultiStateBtnType HeightBtnState;
	StepMotorStepType step;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_HeightBtnState(&HeightBtnState);
	
	if(HeightBtnState == MULTI_STATE_BTN_MINUS)
	{
		Rte_Call_rpHeightMotor_Move(MOTOR_STEP_MINUS);
	}
	
	else if(HeightBtnState == MULTI_STATE_BTN_PLUS)
	{
		Rte_Call_rpHeightMotor_Move(MOTOR_STEP_PLUS);
	}
	
	
	/* Server Call Points */
	status = Rte_Call_rpHeightMotor_Move(step);
	
}


/**
 *
 * Runnable RE_SeatManager_SetIncline
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_InclineBtnState
 *
 */

void RE_SeatManager_SetIncline (void)
{
	Std_ReturnType status;
	MultiStateBtnType InclineBtnState;
	StepMotorStepType step;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_InclineBtnState(&InclineBtnState);
	
	
	if(InclineBtnState == MULTI_STATE_BTN_MINUS)
	{
		Rte_Call_rpInclineMotor_Move(MOTOR_STEP_MINUS);
	}
	
	else if(InclineBtnState == MULTI_STATE_BTN_PLUS)
	{
		Rte_Call_rpInclineMotor_Move(MOTOR_STEP_PLUS);
	}
	
	/* Server Call Points */
	status = Rte_Call_rpInclineMotor_Move(step);
	
}


/**
 *
 * Runnable RE_SeatManager_SetSlide
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_SlideBtnState
 *
 */

void RE_SeatManager_SetSlide (void)
{
	Std_ReturnType status;
	MultiStateBtnType SlideBtnState;
	StepMotorStepType step;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_SlideBtnState(&SlideBtnState);
	
	
	if(SlideBtnState == MULTI_STATE_BTN_MINUS)
	{
		Rte_Call_rpSlideMotor_Move(MOTOR_STEP_MINUS);
	}
	
	else if(SlideBtnState == MULTI_STATE_BTN_PLUS)
	{
		Rte_Call_rpSlideMotor_Move(MOTOR_STEP_PLUS);
	}
	
	/* Server Call Points */
	status = Rte_Call_rpSlideMotor_Move(step);
	
}



/**
 *
 * Runnable RE_SeatModeAUTO
 *
 * Triggered By:
 *  - SwcModeSwitchEventImpl.MSE_rpSeatCtrlMode_AUTO_ON_ENTRY
 *
 */

void RE_SeatModeAUTO (void)
{
	Std_ReturnType status;

}


/**
 *
 * Runnable RE_SeatModeMANUAL
 *
 * Triggered By:
 *  - SwcModeSwitchEventImpl.MSE_rpSeatCtrlMode_MANUAL_ON_ENTRY
 *
 */

void RE_SeatModeMANUAL (void)
{
	Std_ReturnType status;

}


/**
 *
 * Runnable RE_SeatModeINIT
 *
 * Triggered By:
 *  - SwcModeSwitchEventImpl.MSE_rpSeatCtrlMode_INIT_ON_ENTRY
 *
 */

void RE_SeatModeINIT (void)
{
	Std_ReturnType status;

}

