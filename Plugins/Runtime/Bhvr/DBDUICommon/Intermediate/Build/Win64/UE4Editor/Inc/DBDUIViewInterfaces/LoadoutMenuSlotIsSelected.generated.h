// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELoadoutSlot : uint8;
#ifdef DBDUIVIEWINTERFACES_LoadoutMenuSlotIsSelected_generated_h
#error "LoadoutMenuSlotIsSelected.generated.h already included, missing '#pragma once' in LoadoutMenuSlotIsSelected.h"
#endif
#define DBDUIVIEWINTERFACES_LoadoutMenuSlotIsSelected_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuSlotIsSelected_h_7_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventLoadoutMenuSlotIsSelected_Parms \
{ \
	ELoadoutSlot slotSelected; \
}; \
static inline void FLoadoutMenuSlotIsSelected_DelegateWrapper(const FMulticastScriptDelegate& LoadoutMenuSlotIsSelected, ELoadoutSlot slotSelected) \
{ \
	_Script_DBDUIViewInterfaces_eventLoadoutMenuSlotIsSelected_Parms Parms; \
	Parms.slotSelected=slotSelected; \
	LoadoutMenuSlotIsSelected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuSlotIsSelected_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
