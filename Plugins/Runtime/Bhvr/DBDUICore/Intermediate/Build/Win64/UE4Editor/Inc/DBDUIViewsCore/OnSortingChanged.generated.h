// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EItemSorting : uint8;
#ifdef DBDUIVIEWSCORE_OnSortingChanged_generated_h
#error "OnSortingChanged.generated.h already included, missing '#pragma once' in OnSortingChanged.h"
#endif
#define DBDUIVIEWSCORE_OnSortingChanged_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_OnSortingChanged_h_7_DELEGATE \
struct _Script_DBDUIViewsCore_eventOnSortingChanged_Parms \
{ \
	EItemSorting sortingType; \
}; \
static inline void FOnSortingChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSortingChanged, const EItemSorting sortingType) \
{ \
	_Script_DBDUIViewsCore_eventOnSortingChanged_Parms Parms; \
	Parms.sortingType=sortingType; \
	OnSortingChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_OnSortingChanged_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
