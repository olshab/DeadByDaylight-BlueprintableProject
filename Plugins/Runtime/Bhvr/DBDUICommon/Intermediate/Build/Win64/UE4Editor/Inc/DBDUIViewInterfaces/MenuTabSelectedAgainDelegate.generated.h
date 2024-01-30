// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOnboardingMenuState : uint8;
#ifdef DBDUIVIEWINTERFACES_MenuTabSelectedAgainDelegate_generated_h
#error "MenuTabSelectedAgainDelegate.generated.h already included, missing '#pragma once' in MenuTabSelectedAgainDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_MenuTabSelectedAgainDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MenuTabSelectedAgainDelegate_h_7_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventMenuTabSelectedAgainDelegate_Parms \
{ \
	EOnboardingMenuState selectedTabIndex; \
}; \
static inline void FMenuTabSelectedAgainDelegate_DelegateWrapper(const FMulticastScriptDelegate& MenuTabSelectedAgainDelegate, EOnboardingMenuState selectedTabIndex) \
{ \
	_Script_DBDUIViewInterfaces_eventMenuTabSelectedAgainDelegate_Parms Parms; \
	Parms.selectedTabIndex=selectedTabIndex; \
	MenuTabSelectedAgainDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MenuTabSelectedAgainDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
