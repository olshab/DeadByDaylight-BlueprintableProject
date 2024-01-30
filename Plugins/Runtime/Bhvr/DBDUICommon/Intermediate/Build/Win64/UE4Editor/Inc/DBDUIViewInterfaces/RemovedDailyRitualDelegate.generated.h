// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_RemovedDailyRitualDelegate_generated_h
#error "RemovedDailyRitualDelegate.generated.h already included, missing '#pragma once' in RemovedDailyRitualDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_RemovedDailyRitualDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_RemovedDailyRitualDelegate_h_6_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventRemovedDailyRitualDelegate_Parms \
{ \
	FString dailyRitualKey; \
}; \
static inline void FRemovedDailyRitualDelegate_DelegateWrapper(const FMulticastScriptDelegate& RemovedDailyRitualDelegate, const FString& dailyRitualKey) \
{ \
	_Script_DBDUIViewInterfaces_eventRemovedDailyRitualDelegate_Parms Parms; \
	Parms.dailyRitualKey=dailyRitualKey; \
	RemovedDailyRitualDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_RemovedDailyRitualDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
