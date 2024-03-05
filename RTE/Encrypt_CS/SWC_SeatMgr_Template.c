/**
 *
 * \file SWC_SeatMgr_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_SeatMgr
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 2/29/2024 10:28 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_SeatMgr.h"


/**
 *
 * Runnable RE_ChrgIf_MainFunction
 *
 * Triggered By:
 *  - TimingEventImpl.TE_RE_ChrgIf_MainFunction_50ms
 *
 */

void RE_ChrgIf_MainFunction (void)
{
	Std_ReturnType status;
	uint32 Arg_PlanData;
	uint32 Arg_EncryptData;

	/* Server Call Points */
	status = Rte_Call_rpEncrypt_Opr_Encrypt(Arg_PlanData, &Arg_EncryptData);
	
}

