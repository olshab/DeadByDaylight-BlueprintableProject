// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_TomeLevelSelectedDelegate_generated_h
#error "TomeLevelSelectedDelegate.generated.h already included, missing '#pragma once' in TomeLevelSelectedDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_TomeLevelSelectedDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TomeLevelSelectedDelegate_h_6_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventTomeLevelSelectedDelegate_Parms \
{ \
	int32 level; \
}; \
static inline void FTomeLevelSelectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& TomeLevelSelectedDelegate, int32 level) \
{ \
	_Script_DBDUIViewInterfaces_eventTomeLevelSelectedDelegate_Parms Parms; \
	Parms.level=level; \
	TomeLevelSelectedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TomeLevelSelectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
