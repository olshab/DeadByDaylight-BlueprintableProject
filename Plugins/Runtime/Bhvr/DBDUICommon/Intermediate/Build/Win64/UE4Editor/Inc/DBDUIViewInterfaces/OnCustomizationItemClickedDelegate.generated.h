// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_OnCustomizationItemClickedDelegate_generated_h
#error "OnCustomizationItemClickedDelegate.generated.h already included, missing '#pragma once' in OnCustomizationItemClickedDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_OnCustomizationItemClickedDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnCustomizationItemClickedDelegate_h_6_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventOnCustomizationItemClickedDelegate_Parms \
{ \
	int32 index; \
}; \
static inline void FOnCustomizationItemClickedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCustomizationItemClickedDelegate, const int32 index) \
{ \
	_Script_DBDUIViewInterfaces_eventOnCustomizationItemClickedDelegate_Parms Parms; \
	Parms.index=index; \
	OnCustomizationItemClickedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnCustomizationItemClickedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
