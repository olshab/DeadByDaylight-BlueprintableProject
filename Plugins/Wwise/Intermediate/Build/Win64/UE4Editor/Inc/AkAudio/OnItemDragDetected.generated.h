// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
#ifdef AKAUDIO_OnItemDragDetected_generated_h
#error "OnItemDragDetected.generated.h already included, missing '#pragma once' in OnItemDragDetected.h"
#endif
#define AKAUDIO_OnItemDragDetected_generated_h

#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_OnItemDragDetected_h_7_DELEGATE \
struct _Script_AkAudio_eventOnItemDragDetected_Parms \
{ \
	FGuid ItemDraggedID; \
	FString ItemDraggedName; \
}; \
static inline void FOnItemDragDetected_DelegateWrapper(const FMulticastScriptDelegate& OnItemDragDetected, FGuid ItemDraggedID, const FString& ItemDraggedName) \
{ \
	_Script_AkAudio_eventOnItemDragDetected_Parms Parms; \
	Parms.ItemDraggedID=ItemDraggedID; \
	Parms.ItemDraggedName=ItemDraggedName; \
	OnItemDragDetected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_OnItemDragDetected_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
