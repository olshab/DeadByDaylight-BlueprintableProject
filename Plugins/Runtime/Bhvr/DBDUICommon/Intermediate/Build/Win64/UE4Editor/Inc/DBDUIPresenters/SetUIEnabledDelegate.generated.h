// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIPRESENTERS_SetUIEnabledDelegate_generated_h
#error "SetUIEnabledDelegate.generated.h already included, missing '#pragma once' in SetUIEnabledDelegate.h"
#endif
#define DBDUIPRESENTERS_SetUIEnabledDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_SetUIEnabledDelegate_h_6_DELEGATE \
struct _Script_DBDUIPresenters_eventSetUIEnabledDelegate_Parms \
{ \
	bool enabled; \
}; \
static inline void FSetUIEnabledDelegate_DelegateWrapper(const FMulticastScriptDelegate& SetUIEnabledDelegate, bool enabled) \
{ \
	_Script_DBDUIPresenters_eventSetUIEnabledDelegate_Parms Parms; \
	Parms.enabled=enabled ? true : false; \
	SetUIEnabledDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_SetUIEnabledDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
