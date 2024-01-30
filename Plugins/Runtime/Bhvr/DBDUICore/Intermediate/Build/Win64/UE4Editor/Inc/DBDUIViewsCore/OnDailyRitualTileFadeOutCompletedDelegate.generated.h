// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDailyRitualTileWidget;
#ifdef DBDUIVIEWSCORE_OnDailyRitualTileFadeOutCompletedDelegate_generated_h
#error "OnDailyRitualTileFadeOutCompletedDelegate.generated.h already included, missing '#pragma once' in OnDailyRitualTileFadeOutCompletedDelegate.h"
#endif
#define DBDUIVIEWSCORE_OnDailyRitualTileFadeOutCompletedDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_OnDailyRitualTileFadeOutCompletedDelegate_h_8_DELEGATE \
struct _Script_DBDUIViewsCore_eventOnDailyRitualTileFadeOutCompletedDelegate_Parms \
{ \
	UDailyRitualTileWidget* tile; \
}; \
static inline void FOnDailyRitualTileFadeOutCompletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDailyRitualTileFadeOutCompletedDelegate, UDailyRitualTileWidget* tile) \
{ \
	_Script_DBDUIViewsCore_eventOnDailyRitualTileFadeOutCompletedDelegate_Parms Parms; \
	Parms.tile=tile; \
	OnDailyRitualTileFadeOutCompletedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_OnDailyRitualTileFadeOutCompletedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
