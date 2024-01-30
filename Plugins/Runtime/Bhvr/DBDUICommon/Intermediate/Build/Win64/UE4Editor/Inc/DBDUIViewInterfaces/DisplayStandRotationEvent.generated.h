// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_DisplayStandRotationEvent_generated_h
#error "DisplayStandRotationEvent.generated.h already included, missing '#pragma once' in DisplayStandRotationEvent.h"
#endif
#define DBDUIVIEWINTERFACES_DisplayStandRotationEvent_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandRotationEvent_h_6_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventDisplayStandRotationEvent_Parms \
{ \
	float distance; \
}; \
static inline void FDisplayStandRotationEvent_DelegateWrapper(const FMulticastScriptDelegate& DisplayStandRotationEvent, float distance) \
{ \
	_Script_DBDUIViewInterfaces_eventDisplayStandRotationEvent_Parms Parms; \
	Parms.distance=distance; \
	DisplayStandRotationEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandRotationEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
