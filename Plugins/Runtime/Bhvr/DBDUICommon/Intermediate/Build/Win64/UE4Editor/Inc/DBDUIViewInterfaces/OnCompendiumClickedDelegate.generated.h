// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_OnCompendiumClickedDelegate_generated_h
#error "OnCompendiumClickedDelegate.generated.h already included, missing '#pragma once' in OnCompendiumClickedDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_OnCompendiumClickedDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnCompendiumClickedDelegate_h_6_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventOnCompendiumClickedDelegate_Parms \
{ \
	FString tomeId; \
}; \
static inline void FOnCompendiumClickedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCompendiumClickedDelegate, const FString& tomeId) \
{ \
	_Script_DBDUIViewInterfaces_eventOnCompendiumClickedDelegate_Parms Parms; \
	Parms.tomeId=tomeId; \
	OnCompendiumClickedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnCompendiumClickedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
