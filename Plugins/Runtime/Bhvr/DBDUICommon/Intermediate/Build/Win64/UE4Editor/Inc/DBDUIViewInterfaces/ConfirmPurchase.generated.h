// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_ConfirmPurchase_generated_h
#error "ConfirmPurchase.generated.h already included, missing '#pragma once' in ConfirmPurchase.h"
#endif
#define DBDUIVIEWINTERFACES_ConfirmPurchase_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ConfirmPurchase_h_6_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventConfirmPurchase_Parms \
{ \
	int32 tiersToPurchaseNumber; \
}; \
static inline void FConfirmPurchase_DelegateWrapper(const FMulticastScriptDelegate& ConfirmPurchase, int32 tiersToPurchaseNumber) \
{ \
	_Script_DBDUIViewInterfaces_eventConfirmPurchase_Parms Parms; \
	Parms.tiersToPurchaseNumber=tiersToPurchaseNumber; \
	ConfirmPurchase.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ConfirmPurchase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
