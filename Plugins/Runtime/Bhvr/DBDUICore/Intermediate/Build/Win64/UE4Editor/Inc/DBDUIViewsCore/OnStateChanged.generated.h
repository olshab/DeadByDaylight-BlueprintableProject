// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EItemFilterOption : uint8;
#ifdef DBDUIVIEWSCORE_OnStateChanged_generated_h
#error "OnStateChanged.generated.h already included, missing '#pragma once' in OnStateChanged.h"
#endif
#define DBDUIVIEWSCORE_OnStateChanged_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_OnStateChanged_h_7_DELEGATE \
struct _Script_DBDUIViewsCore_eventOnStateChanged_Parms \
{ \
	bool isToggled; \
	EItemFilterOption itemFilterOption; \
}; \
static inline void FOnStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStateChanged, bool isToggled, EItemFilterOption itemFilterOption) \
{ \
	_Script_DBDUIViewsCore_eventOnStateChanged_Parms Parms; \
	Parms.isToggled=isToggled ? true : false; \
	Parms.itemFilterOption=itemFilterOption; \
	OnStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_OnStateChanged_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
