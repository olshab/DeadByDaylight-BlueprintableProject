// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreButtonWidget;
#ifdef DBDUIVIEWSCORE_OnTutorialButtonClickedDelegate_generated_h
#error "OnTutorialButtonClickedDelegate.generated.h already included, missing '#pragma once' in OnTutorialButtonClickedDelegate.h"
#endif
#define DBDUIVIEWSCORE_OnTutorialButtonClickedDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_OnTutorialButtonClickedDelegate_h_8_DELEGATE \
struct _Script_DBDUIViewsCore_eventOnTutorialButtonClickedDelegate_Parms \
{ \
	UCoreButtonWidget* clickedTutorialButton; \
}; \
static inline void FOnTutorialButtonClickedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTutorialButtonClickedDelegate, UCoreButtonWidget* clickedTutorialButton) \
{ \
	_Script_DBDUIViewsCore_eventOnTutorialButtonClickedDelegate_Parms Parms; \
	Parms.clickedTutorialButton=clickedTutorialButton; \
	OnTutorialButtonClickedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_OnTutorialButtonClickedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
