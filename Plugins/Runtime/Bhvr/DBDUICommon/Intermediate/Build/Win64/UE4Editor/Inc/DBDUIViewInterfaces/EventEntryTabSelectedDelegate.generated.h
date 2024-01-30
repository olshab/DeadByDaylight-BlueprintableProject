// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_EventEntryTabSelectedDelegate_generated_h
#error "EventEntryTabSelectedDelegate.generated.h already included, missing '#pragma once' in EventEntryTabSelectedDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_EventEntryTabSelectedDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryTabSelectedDelegate_h_6_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventEventEntryTabSelectedDelegate_Parms \
{ \
	int32 key; \
}; \
static inline void FEventEntryTabSelectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& EventEntryTabSelectedDelegate, const int32 key) \
{ \
	_Script_DBDUIViewInterfaces_eventEventEntryTabSelectedDelegate_Parms Parms; \
	Parms.key=key; \
	EventEntryTabSelectedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryTabSelectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
