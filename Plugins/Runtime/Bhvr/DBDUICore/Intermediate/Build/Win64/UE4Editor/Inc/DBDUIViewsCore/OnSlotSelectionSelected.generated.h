// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPlayerRole : uint8;
#ifdef DBDUIVIEWSCORE_OnSlotSelectionSelected_generated_h
#error "OnSlotSelectionSelected.generated.h already included, missing '#pragma once' in OnSlotSelectionSelected.h"
#endif
#define DBDUIVIEWSCORE_OnSlotSelectionSelected_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_OnSlotSelectionSelected_h_7_DELEGATE \
struct _Script_DBDUIViewsCore_eventOnSlotSelectionSelected_Parms \
{ \
	EPlayerRole role; \
}; \
static inline void FOnSlotSelectionSelected_DelegateWrapper(const FMulticastScriptDelegate& OnSlotSelectionSelected, EPlayerRole role) \
{ \
	_Script_DBDUIViewsCore_eventOnSlotSelectionSelected_Parms Parms; \
	Parms.role=role; \
	OnSlotSelectionSelected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_OnSlotSelectionSelected_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
