// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUITweenInstance;
#ifdef UITWEEN_TweenUpdated_generated_h
#error "TweenUpdated.generated.h already included, missing '#pragma once' in TweenUpdated.h"
#endif
#define UITWEEN_TweenUpdated_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_TweenUpdated_h_8_DELEGATE \
struct _Script_UITween_eventTweenUpdated_Parms \
{ \
	UUITweenInstance* tween; \
}; \
static inline void FTweenUpdated_DelegateWrapper(const FMulticastScriptDelegate& TweenUpdated, UUITweenInstance* tween) \
{ \
	_Script_UITween_eventTweenUpdated_Parms Parms; \
	Parms.tween=tween; \
	TweenUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_TweenUpdated_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
