// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOnboardingMenuState : uint8;
#ifdef DBDUIVIEWINTERFACES_OnboardingMenuTabSelectedDelegate_generated_h
#error "OnboardingMenuTabSelectedDelegate.generated.h already included, missing '#pragma once' in OnboardingMenuTabSelectedDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_OnboardingMenuTabSelectedDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuTabSelectedDelegate_h_7_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventOnboardingMenuTabSelectedDelegate_Parms \
{ \
	EOnboardingMenuState menuState; \
}; \
static inline void FOnboardingMenuTabSelectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnboardingMenuTabSelectedDelegate, EOnboardingMenuState menuState) \
{ \
	_Script_DBDUIViewInterfaces_eventOnboardingMenuTabSelectedDelegate_Parms Parms; \
	Parms.menuState=menuState; \
	OnboardingMenuTabSelectedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuTabSelectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
