// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAkResult : uint8;
#ifdef AKAUDIO_OnAkBankCallback_generated_h
#error "OnAkBankCallback.generated.h already included, missing '#pragma once' in OnAkBankCallback.h"
#endif
#define AKAUDIO_OnAkBankCallback_generated_h

#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_OnAkBankCallback_h_7_DELEGATE \
struct _Script_AkAudio_eventOnAkBankCallback_Parms \
{ \
	EAkResult Result; \
}; \
static inline void FOnAkBankCallback_DelegateWrapper(const FScriptDelegate& OnAkBankCallback, EAkResult Result) \
{ \
	_Script_AkAudio_eventOnAkBankCallback_Parms Parms; \
	Parms.Result=Result; \
	OnAkBankCallback.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_OnAkBankCallback_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
