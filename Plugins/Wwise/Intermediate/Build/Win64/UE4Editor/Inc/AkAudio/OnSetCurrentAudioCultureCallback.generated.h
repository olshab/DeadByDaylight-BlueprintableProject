// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_OnSetCurrentAudioCultureCallback_generated_h
#error "OnSetCurrentAudioCultureCallback.generated.h already included, missing '#pragma once' in OnSetCurrentAudioCultureCallback.h"
#endif
#define AKAUDIO_OnSetCurrentAudioCultureCallback_generated_h

#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_OnSetCurrentAudioCultureCallback_h_6_DELEGATE \
struct _Script_AkAudio_eventOnSetCurrentAudioCultureCallback_Parms \
{ \
	bool Succeeded; \
}; \
static inline void FOnSetCurrentAudioCultureCallback_DelegateWrapper(const FScriptDelegate& OnSetCurrentAudioCultureCallback, bool Succeeded) \
{ \
	_Script_AkAudio_eventOnSetCurrentAudioCultureCallback_Parms Parms; \
	Parms.Succeeded=Succeeded ? true : false; \
	OnSetCurrentAudioCultureCallback.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_OnSetCurrentAudioCultureCallback_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
