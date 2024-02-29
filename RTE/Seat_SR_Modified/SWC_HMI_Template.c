/**
 *
 * \file SWC_HMI_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_HMI
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 2/29/2024 12:19 AM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_HMI.h"


/**
 *
 * Runnable RE_HMI_MainFunction
 *
 * Triggered By:
 *  - TimingEventImpl.TE_RE_HMI_MainFunction_100ms
 *
 */

void RE_HMI_MainFunction (void)
{
	Std_ReturnType status;
	MultiStateBtnType HeightBtnState;
	MultiStateBtnType InclineBtnState;
	MultiStateBtnType SlideBtnState;
	uint8 DE_Height;
	uint8 DE_Incline;
	uint8 DE_Slide;

	/* Data Send Points */
	status = Rte_Write_ppSeatCtrlBtns_HeightBtnState(HeightBtnState);
	status = Rte_Write_ppSeatCtrlBtns_InclineBtnState(InclineBtnState);
	status = Rte_Write_ppSeatCtrlBtns_SlideBtnState(SlideBtnState);
	
	
	if(DE_Height == 0)
	{
		DE_HeightBtnState = MULTI_STATE_BTN_INIT;
	}
	else if(DE_Height == 1)
	{
		DE_HeightBtnState = MULTI_STATE_BTN_MINUS;
	}
	else if(DE_Height == 2)
	{
		DE_HeightBtnState = MULTI_STATE_BTN_PLUS;
	}
	
	/*Checking slide button state received*/
	if(DE_Slide == 0)
	{
		DE_SlideBtnState = MULTI_STATE_BTN_INIT;
	}
	else if(DE_Slide == 1)
	{
		DE_SlideBtnState = MULTI_STATE_BTN_MINUS;
	}
	else if(DE_Slide == 2)
	{
		DE_SlideBtnState = MULTI_STATE_BTN_PLUS;
	}
	
	
	/*Checking incline button state received*/
	if(DE_Incline == 0)
	{
		DE_InclineBtnState = MULTI_STATE_BTN_INIT;
	}
	else if(DE_Incline == 1)
	{
		DE_InclineBtnState = MULTI_STATE_BTN_MINUS;
	}
	else if(DE_Incline == 2)
	{
		DE_InclineBtnState = MULTI_STATE_BTN_PLUS;
	}
	
	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlData_DE_Height(&DE_Height);
	status = Rte_Read_rpSeatCtrlData_DE_Incline(&DE_Incline);
	status = Rte_Read_rpSeatCtrlData_DE_Slide(&DE_Slide);
	
}

