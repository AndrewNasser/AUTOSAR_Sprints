/**
 *
 * \file ChrgMgr_RC_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: ChrgMgr_RC
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 2/28/2024 07:40 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_ChrgMgr_RC.h"


/**
 *
 * Runnable RE_ChrgMgr_BaterryHandle
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rp_BatteryInfo_DE_BatteryLevel
 *
 */

void RE_ChrgMgr_BaterryHandle (void)
{
	Std_ReturnType status;
	BatteryLevelType DE_BatteryLevel;

	/* Data Receive Points */
	status = Rte_Read_rp_BatteryInfo_DE_BatteryLevel(&DE_BatteryLevel);
	
}

