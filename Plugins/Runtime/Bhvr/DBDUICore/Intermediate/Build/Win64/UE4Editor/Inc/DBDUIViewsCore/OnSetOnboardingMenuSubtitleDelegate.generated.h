// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWSCORE_OnSetOnboardingMenuSubtitleDelegate_generated_h
#error "OnSetOnboardingMenuSubtitleDelegate.generated.h already included, missing '#pragma once' in OnSetOnboardingMenuSubtitleDelegate.h"
#endif
#define DBDUIVIEWSCORE_OnSetOnboardingMenuSubtitleDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_OnSetOnboardingMenuSubtitleDelegate_h_6_DELEGATE \
struct _Script_DBDUIViewsCore_eventOnSetOnboardingMenuSubtitleDelegate_Parms \
{ \
	FText subtitle; \
}; \
static inline void FOnSetOnboardingMenuSubtitleDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSetOnboardingMenuSubtitleDelegate, const FText& subtitle) \
{ \
	_Script_DBDUIViewsCore_eventOnSetOnboardingMenuSubtitleDelegate_Parms Parms; \
	Parms.subtitle=subtitle; \
	OnSetOnboardingMenuSubtitleDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_OnSetOnboardingMenuSubtitleDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
