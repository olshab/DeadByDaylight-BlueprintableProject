// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUITweenInstance;
#ifdef UITWEEN_TweenCompleted_generated_h
#error "TweenCompleted.generated.h already included, missing '#pragma once' in TweenCompleted.h"
#endif
#define UITWEEN_TweenCompleted_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_TweenCompleted_h_8_DELEGATE \
struct _Script_UITween_eventTweenCompleted_Parms \
{ \
	UUITweenInstance* tween; \
}; \
static inline void FTweenCompleted_DelegateWrapper(const FMulticastScriptDelegate& TweenCompleted, UUITweenInstance* tween) \
{ \
	_Script_UITween_eventTweenCompleted_Parms Parms; \
	Parms.tween=tween; \
	TweenCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_TweenCompleted_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
