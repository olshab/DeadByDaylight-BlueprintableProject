// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_OnPropertyDropDetected_generated_h
#error "OnPropertyDropDetected.generated.h already included, missing '#pragma once' in OnPropertyDropDetected.h"
#endif
#define AKAUDIO_OnPropertyDropDetected_generated_h

#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_OnPropertyDropDetected_h_6_DELEGATE \
struct _Script_AkAudio_eventOnPropertyDropDetected_Parms \
{ \
	FString PropertyDropped; \
}; \
static inline void FOnPropertyDropDetected_DelegateWrapper(const FMulticastScriptDelegate& OnPropertyDropDetected, const FString& PropertyDropped) \
{ \
	_Script_AkAudio_eventOnPropertyDropDetected_Parms Parms; \
	Parms.PropertyDropped=PropertyDropped; \
	OnPropertyDropDetected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_OnPropertyDropDetected_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
