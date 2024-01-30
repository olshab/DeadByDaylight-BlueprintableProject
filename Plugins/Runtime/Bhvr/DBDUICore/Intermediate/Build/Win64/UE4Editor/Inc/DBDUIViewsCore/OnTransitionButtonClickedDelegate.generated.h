// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWSCORE_OnTransitionButtonClickedDelegate_generated_h
#error "OnTransitionButtonClickedDelegate.generated.h already included, missing '#pragma once' in OnTransitionButtonClickedDelegate.h"
#endif
#define DBDUIVIEWSCORE_OnTransitionButtonClickedDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_OnTransitionButtonClickedDelegate_h_6_DELEGATE \
struct _Script_DBDUIViewsCore_eventOnTransitionButtonClickedDelegate_Parms \
{ \
	int32 chracterIndex; \
}; \
static inline void FOnTransitionButtonClickedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTransitionButtonClickedDelegate, int32 chracterIndex) \
{ \
	_Script_DBDUIViewsCore_eventOnTransitionButtonClickedDelegate_Parms Parms; \
	Parms.chracterIndex=chracterIndex; \
	OnTransitionButtonClickedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_OnTransitionButtonClickedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
