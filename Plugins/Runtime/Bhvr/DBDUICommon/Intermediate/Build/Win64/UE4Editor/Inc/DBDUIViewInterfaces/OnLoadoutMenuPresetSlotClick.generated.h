// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELoadoutSlot : uint8;
#ifdef DBDUIVIEWINTERFACES_OnLoadoutMenuPresetSlotClick_generated_h
#error "OnLoadoutMenuPresetSlotClick.generated.h already included, missing '#pragma once' in OnLoadoutMenuPresetSlotClick.h"
#endif
#define DBDUIVIEWINTERFACES_OnLoadoutMenuPresetSlotClick_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnLoadoutMenuPresetSlotClick_h_7_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventOnLoadoutMenuPresetSlotClick_Parms \
{ \
	int32 presetId; \
	ELoadoutSlot slotSelected; \
}; \
static inline void FOnLoadoutMenuPresetSlotClick_DelegateWrapper(const FMulticastScriptDelegate& OnLoadoutMenuPresetSlotClick, int32 presetId, ELoadoutSlot slotSelected) \
{ \
	_Script_DBDUIViewInterfaces_eventOnLoadoutMenuPresetSlotClick_Parms Parms; \
	Parms.presetId=presetId; \
	Parms.slotSelected=slotSelected; \
	OnLoadoutMenuPresetSlotClick.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnLoadoutMenuPresetSlotClick_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
