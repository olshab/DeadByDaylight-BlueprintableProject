// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAkCallbackType : uint8;
class UAkCallbackInfo;
#ifdef AKAUDIO_OnAkPostEventCallback_generated_h
#error "OnAkPostEventCallback.generated.h already included, missing '#pragma once' in OnAkPostEventCallback.h"
#endif
#define AKAUDIO_OnAkPostEventCallback_generated_h

#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_OnAkPostEventCallback_h_9_DELEGATE \
struct _Script_AkAudio_eventOnAkPostEventCallback_Parms \
{ \
	EAkCallbackType CallbackType; \
	UAkCallbackInfo* CallbackInfo; \
}; \
static inline void FOnAkPostEventCallback_DelegateWrapper(const FScriptDelegate& OnAkPostEventCallback, EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) \
{ \
	_Script_AkAudio_eventOnAkPostEventCallback_Parms Parms; \
	Parms.CallbackType=CallbackType; \
	Parms.CallbackInfo=CallbackInfo; \
	OnAkPostEventCallback.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_OnAkPostEventCallback_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
