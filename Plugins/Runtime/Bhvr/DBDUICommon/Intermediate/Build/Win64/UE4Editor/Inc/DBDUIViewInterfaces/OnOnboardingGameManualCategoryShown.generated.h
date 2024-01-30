// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EHelpType : uint8;
#ifdef DBDUIVIEWINTERFACES_OnOnboardingGameManualCategoryShown_generated_h
#error "OnOnboardingGameManualCategoryShown.generated.h already included, missing '#pragma once' in OnOnboardingGameManualCategoryShown.h"
#endif
#define DBDUIVIEWINTERFACES_OnOnboardingGameManualCategoryShown_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnOnboardingGameManualCategoryShown_h_7_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventOnOnboardingGameManualCategoryShown_Parms \
{ \
	EHelpType categoryType; \
}; \
static inline void FOnOnboardingGameManualCategoryShown_DelegateWrapper(const FMulticastScriptDelegate& OnOnboardingGameManualCategoryShown, EHelpType categoryType) \
{ \
	_Script_DBDUIViewInterfaces_eventOnOnboardingGameManualCategoryShown_Parms Parms; \
	Parms.categoryType=categoryType; \
	OnOnboardingGameManualCategoryShown.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnOnboardingGameManualCategoryShown_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
