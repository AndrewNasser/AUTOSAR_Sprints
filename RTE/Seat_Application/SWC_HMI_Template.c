/**
 *
 * \file SWC_HMI_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_HMI
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 3/4/2024 01:46 AM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 By:AndrewNasser
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
	/*Checking height button state received*/
	if(DE_Height == 0)
	{
		HeightBtnState = MULTI_STATE_BTN_INIT;
	}
	else if(DE_Height == 1)
	{
		HeightBtnState = MULTI_STATE_BTN_MINUS;
	}
	else if(DE_Height == 2)
	{
		HeightBtnState = MULTI_STATE_BTN_PLUS;
	}
	
	/*Checking slide button state received*/
	if(DE_Slide == 0)
	{
		SlideBtnState = MULTI_STATE_BTN_INIT;
	}
	else if(DE_Slide == 1)
	{
		SlideBtnState = MULTI_STATE_BTN_MINUS;
	}
	else if(DE_Slide == 2)
	{
		SlideBtnState = MULTI_STATE_BTN_PLUS;
	}
	
	
	/*Checking incline button state received*/
	if(DE_Incline == 0)
	{
		InclineBtnState = MULTI_STATE_BTN_INIT;
	}
	else if(DE_Incline == 1)
	{
		InclineBtnState = MULTI_STATE_BTN_MINUS;
	}
	else if(DE_Incline == 2)
	{
		InclineBtnState = MULTI_STATE_BTN_PLUS;
	}
	
	
	
	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlData_DE_Height(&DE_Height);
	status = Rte_Read_rpSeatCtrlData_DE_Incline(&DE_Incline);
	status = Rte_Read_rpSeatCtrlData_DE_Slide(&DE_Slide);
	
}


/**
 *
 * Runnable RE_SeatMode
 *
 * Triggered By:
 *
 */

void RE_SeatMode (void)
{
	Std_ReturnType status;
	SeatModeBtnType SeatModeBtn;
	uint8 SeatCtrlMode = RTE_MODE_SeatCtrlMode_INIT;

	/* Data Receive Points */
	status = Rte_Read_rpSeatModeBtn_SeatModeBtn(&SeatModeBtn);
	
	if(SeatModeBtn == SEAT_MODE_BTN_MANUAL)
	{
		SeatCtrlMode == RTE_MODE_SeatCtrlMode_MANUAL;
	}
	else if(SeatModeBtn == SEAT_MODE_BTN_AUTO)
	{
		SeatCtrlMode == RTE_MODE_SeatCtrlMode_AUTO;
	}
	
	/* Mode Switch Points */
	status = Rte_Switch_ppSeatCtrlMode_SeatCtrlMode(SeatCtrlMode);
	
}

