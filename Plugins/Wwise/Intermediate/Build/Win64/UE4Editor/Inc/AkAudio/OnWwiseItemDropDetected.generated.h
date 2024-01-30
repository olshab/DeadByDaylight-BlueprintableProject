// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
#ifdef AKAUDIO_OnWwiseItemDropDetected_generated_h
#error "OnWwiseItemDropDetected.generated.h already included, missing '#pragma once' in OnWwiseItemDropDetected.h"
#endif
#define AKAUDIO_OnWwiseItemDropDetected_generated_h

#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_OnWwiseItemDropDetected_h_7_DELEGATE \
struct _Script_AkAudio_eventOnWwiseItemDropDetected_Parms \
{ \
	FGuid ItemDroppedID; \
}; \
static inline void FOnWwiseItemDropDetected_DelegateWrapper(const FMulticastScriptDelegate& OnWwiseItemDropDetected, FGuid ItemDroppedID) \
{ \
	_Script_AkAudio_eventOnWwiseItemDropDetected_Parms Parms; \
	Parms.ItemDroppedID=ItemDroppedID; \
	OnWwiseItemDropDetected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_OnWwiseItemDropDetected_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
