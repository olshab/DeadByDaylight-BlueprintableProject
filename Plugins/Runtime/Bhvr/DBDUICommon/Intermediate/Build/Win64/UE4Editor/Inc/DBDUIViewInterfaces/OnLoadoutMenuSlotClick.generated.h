// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELoadoutSlot : uint8;
#ifdef DBDUIVIEWINTERFACES_OnLoadoutMenuSlotClick_generated_h
#error "OnLoadoutMenuSlotClick.generated.h already included, missing '#pragma once' in OnLoadoutMenuSlotClick.h"
#endif
#define DBDUIVIEWINTERFACES_OnLoadoutMenuSlotClick_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnLoadoutMenuSlotClick_h_7_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventOnLoadoutMenuSlotClick_Parms \
{ \
	ELoadoutSlot slotIndex; \
}; \
static inline void FOnLoadoutMenuSlotClick_DelegateWrapper(const FMulticastScriptDelegate& OnLoadoutMenuSlotClick, ELoadoutSlot slotIndex) \
{ \
	_Script_DBDUIViewInterfaces_eventOnLoadoutMenuSlotClick_Parms Parms; \
	Parms.slotIndex=slotIndex; \
	OnLoadoutMenuSlotClick.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnLoadoutMenuSlotClick_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
