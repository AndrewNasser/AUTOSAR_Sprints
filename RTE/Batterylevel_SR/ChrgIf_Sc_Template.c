/**
 *
 * \file ChrgIf_Sc_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: ChrgIf_Sc
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 2/28/2024 07:39 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_ChrgIf_Sc.h"


/**
 *
 * Runnable RE_ChrgIf_MainFunc
 *
 * Triggered By:
 *  - TimingEventImpl.TE_RE_ChrgIf_MainFunc_100ms
 *
 */

void RE_ChrgIf_MainFunc (void)
{
	Std_ReturnType status;
	BatteryLevelType DE_BatteryLevel;

	/* Data Send Points */
	status = Rte_Write_pp_BatteryInfo_DE_BatteryLevel(DE_BatteryLevel);
	
}

