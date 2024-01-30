// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
#ifdef DBDUIVIEWSCORE_OnDragEvent_generated_h
#error "OnDragEvent.generated.h already included, missing '#pragma once' in OnDragEvent.h"
#endif
#define DBDUIVIEWSCORE_OnDragEvent_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_OnDragEvent_h_7_DELEGATE \
struct _Script_DBDUIViewsCore_eventOnDragEvent_Parms \
{ \
	FVector2D cursorDelta; \
}; \
static inline void FOnDragEvent_DelegateWrapper(const FMulticastScriptDelegate& OnDragEvent, FVector2D cursorDelta) \
{ \
	_Script_DBDUIViewsCore_eventOnDragEvent_Parms Parms; \
	Parms.cursorDelta=cursorDelta; \
	OnDragEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_OnDragEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
