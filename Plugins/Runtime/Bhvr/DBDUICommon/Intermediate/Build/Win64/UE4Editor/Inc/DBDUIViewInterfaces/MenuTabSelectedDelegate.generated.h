// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EProfileMenuState : uint8;
#ifdef DBDUIVIEWINTERFACES_MenuTabSelectedDelegate_generated_h
#error "MenuTabSelectedDelegate.generated.h already included, missing '#pragma once' in MenuTabSelectedDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_MenuTabSelectedDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MenuTabSelectedDelegate_h_7_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventMenuTabSelectedDelegate_Parms \
{ \
	EProfileMenuState menuState; \
}; \
static inline void FMenuTabSelectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& MenuTabSelectedDelegate, const EProfileMenuState menuState) \
{ \
	_Script_DBDUIViewInterfaces_eventMenuTabSelectedDelegate_Parms Parms; \
	Parms.menuState=menuState; \
	MenuTabSelectedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MenuTabSelectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
