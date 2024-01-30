// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELoadoutSlot : uint8;
#ifdef DBDUIVIEWINTERFACES_OnLoadoutMenuInventorySlotClick_generated_h
#error "OnLoadoutMenuInventorySlotClick.generated.h already included, missing '#pragma once' in OnLoadoutMenuInventorySlotClick.h"
#endif
#define DBDUIVIEWINTERFACES_OnLoadoutMenuInventorySlotClick_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnLoadoutMenuInventorySlotClick_h_7_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventOnLoadoutMenuInventorySlotClick_Parms \
{ \
	ELoadoutSlot itemIndex; \
	FName itemId; \
}; \
static inline void FOnLoadoutMenuInventorySlotClick_DelegateWrapper(const FMulticastScriptDelegate& OnLoadoutMenuInventorySlotClick, ELoadoutSlot itemIndex, const FName itemId) \
{ \
	_Script_DBDUIViewInterfaces_eventOnLoadoutMenuInventorySlotClick_Parms Parms; \
	Parms.itemIndex=itemIndex; \
	Parms.itemId=itemId; \
	OnLoadoutMenuInventorySlotClick.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnLoadoutMenuInventorySlotClick_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
