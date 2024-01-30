// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_OnMuteBackgroundAudio_generated_h
#error "OnMuteBackgroundAudio.generated.h already included, missing '#pragma once' in OnMuteBackgroundAudio.h"
#endif
#define DBDUIVIEWINTERFACES_OnMuteBackgroundAudio_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnMuteBackgroundAudio_h_6_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventOnMuteBackgroundAudio_Parms \
{ \
	bool shouldMute; \
}; \
static inline void FOnMuteBackgroundAudio_DelegateWrapper(const FMulticastScriptDelegate& OnMuteBackgroundAudio, bool shouldMute) \
{ \
	_Script_DBDUIViewInterfaces_eventOnMuteBackgroundAudio_Parms Parms; \
	Parms.shouldMute=shouldMute ? true : false; \
	OnMuteBackgroundAudio.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnMuteBackgroundAudio_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
