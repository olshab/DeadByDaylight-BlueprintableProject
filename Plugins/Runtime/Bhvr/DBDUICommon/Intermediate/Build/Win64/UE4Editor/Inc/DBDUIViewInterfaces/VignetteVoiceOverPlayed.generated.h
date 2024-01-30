// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_VignetteVoiceOverPlayed_generated_h
#error "VignetteVoiceOverPlayed.generated.h already included, missing '#pragma once' in VignetteVoiceOverPlayed.h"
#endif
#define DBDUIVIEWINTERFACES_VignetteVoiceOverPlayed_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_VignetteVoiceOverPlayed_h_6_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventVignetteVoiceOverPlayed_Parms \
{ \
	int32 vignetteEntry; \
}; \
static inline void FVignetteVoiceOverPlayed_DelegateWrapper(const FMulticastScriptDelegate& VignetteVoiceOverPlayed, const int32 vignetteEntry) \
{ \
	_Script_DBDUIViewInterfaces_eventVignetteVoiceOverPlayed_Parms Parms; \
	Parms.vignetteEntry=vignetteEntry; \
	VignetteVoiceOverPlayed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_VignetteVoiceOverPlayed_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
