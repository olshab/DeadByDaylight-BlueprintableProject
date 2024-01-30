// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWSMOBILE_OnHighlightWidgetClicked_generated_h
#error "OnHighlightWidgetClicked.generated.h already included, missing '#pragma once' in OnHighlightWidgetClicked.h"
#endif
#define DBDUIVIEWSMOBILE_OnHighlightWidgetClicked_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_OnHighlightWidgetClicked_h_6_DELEGATE \
struct _Script_DBDUIViewsMobile_eventOnHighlightWidgetClicked_Parms \
{ \
	FName onBoardingID; \
}; \
static inline void FOnHighlightWidgetClicked_DelegateWrapper(const FMulticastScriptDelegate& OnHighlightWidgetClicked, FName onBoardingID) \
{ \
	_Script_DBDUIViewsMobile_eventOnHighlightWidgetClicked_Parms Parms; \
	Parms.onBoardingID=onBoardingID; \
	OnHighlightWidgetClicked.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_OnHighlightWidgetClicked_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
