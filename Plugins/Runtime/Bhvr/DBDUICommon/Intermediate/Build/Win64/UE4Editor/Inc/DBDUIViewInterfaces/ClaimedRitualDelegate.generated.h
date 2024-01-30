// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_ClaimedRitualDelegate_generated_h
#error "ClaimedRitualDelegate.generated.h already included, missing '#pragma once' in ClaimedRitualDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_ClaimedRitualDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ClaimedRitualDelegate_h_6_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventClaimedRitualDelegate_Parms \
{ \
	FString dailyRitualKey; \
}; \
static inline void FClaimedRitualDelegate_DelegateWrapper(const FMulticastScriptDelegate& ClaimedRitualDelegate, const FString& dailyRitualKey) \
{ \
	_Script_DBDUIViewInterfaces_eventClaimedRitualDelegate_Parms Parms; \
	Parms.dailyRitualKey=dailyRitualKey; \
	ClaimedRitualDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ClaimedRitualDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
