// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EItemSorting : uint8;
#ifdef DBDUIVIEWINTERFACES_OnPlayerProfileCustomizationSortingChanged_generated_h
#error "OnPlayerProfileCustomizationSortingChanged.generated.h already included, missing '#pragma once' in OnPlayerProfileCustomizationSortingChanged.h"
#endif
#define DBDUIVIEWINTERFACES_OnPlayerProfileCustomizationSortingChanged_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnPlayerProfileCustomizationSortingChanged_h_7_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventOnPlayerProfileCustomizationSortingChanged_Parms \
{ \
	EItemSorting sortingType; \
}; \
static inline void FOnPlayerProfileCustomizationSortingChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerProfileCustomizationSortingChanged, const EItemSorting sortingType) \
{ \
	_Script_DBDUIViewInterfaces_eventOnPlayerProfileCustomizationSortingChanged_Parms Parms; \
	Parms.sortingType=sortingType; \
	OnPlayerProfileCustomizationSortingChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnPlayerProfileCustomizationSortingChanged_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
