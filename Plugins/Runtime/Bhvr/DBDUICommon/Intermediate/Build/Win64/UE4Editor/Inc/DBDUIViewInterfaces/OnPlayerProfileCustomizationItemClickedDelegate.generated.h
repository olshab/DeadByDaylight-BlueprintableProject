// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_OnPlayerProfileCustomizationItemClickedDelegate_generated_h
#error "OnPlayerProfileCustomizationItemClickedDelegate.generated.h already included, missing '#pragma once' in OnPlayerProfileCustomizationItemClickedDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_OnPlayerProfileCustomizationItemClickedDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnPlayerProfileCustomizationItemClickedDelegate_h_6_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventOnPlayerProfileCustomizationItemClickedDelegate_Parms \
{ \
	int32 index; \
}; \
static inline void FOnPlayerProfileCustomizationItemClickedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerProfileCustomizationItemClickedDelegate, const int32 index) \
{ \
	_Script_DBDUIViewInterfaces_eventOnPlayerProfileCustomizationItemClickedDelegate_Parms Parms; \
	Parms.index=index; \
	OnPlayerProfileCustomizationItemClickedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnPlayerProfileCustomizationItemClickedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS