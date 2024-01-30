// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_OnItemBoolPropertySelectionChanged_generated_h
#error "OnItemBoolPropertySelectionChanged.generated.h already included, missing '#pragma once' in OnItemBoolPropertySelectionChanged.h"
#endif
#define AKAUDIO_OnItemBoolPropertySelectionChanged_generated_h

#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_OnItemBoolPropertySelectionChanged_h_6_DELEGATE \
struct _Script_AkAudio_eventOnItemBoolPropertySelectionChanged_Parms \
{ \
	FString PropertySelected; \
}; \
static inline void FOnItemBoolPropertySelectionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnItemBoolPropertySelectionChanged, const FString& PropertySelected) \
{ \
	_Script_AkAudio_eventOnItemBoolPropertySelectionChanged_Parms Parms; \
	Parms.PropertySelected=PropertySelected; \
	OnItemBoolPropertySelectionChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_OnItemBoolPropertySelectionChanged_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
