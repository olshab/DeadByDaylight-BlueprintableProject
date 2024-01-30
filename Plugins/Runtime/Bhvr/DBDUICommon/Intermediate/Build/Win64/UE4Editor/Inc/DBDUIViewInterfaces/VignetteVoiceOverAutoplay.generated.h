// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_VignetteVoiceOverAutoplay_generated_h
#error "VignetteVoiceOverAutoplay.generated.h already included, missing '#pragma once' in VignetteVoiceOverAutoplay.h"
#endif
#define DBDUIVIEWINTERFACES_VignetteVoiceOverAutoplay_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_VignetteVoiceOverAutoplay_h_6_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventVignetteVoiceOverAutoplay_Parms \
{ \
	bool autoplayVoiceOver; \
	int32 vignetteEntry; \
}; \
static inline void FVignetteVoiceOverAutoplay_DelegateWrapper(const FMulticastScriptDelegate& VignetteVoiceOverAutoplay, bool autoplayVoiceOver, const int32 vignetteEntry) \
{ \
	_Script_DBDUIViewInterfaces_eventVignetteVoiceOverAutoplay_Parms Parms; \
	Parms.autoplayVoiceOver=autoplayVoiceOver ? true : false; \
	Parms.vignetteEntry=vignetteEntry; \
	VignetteVoiceOverAutoplay.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_VignetteVoiceOverAutoplay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
