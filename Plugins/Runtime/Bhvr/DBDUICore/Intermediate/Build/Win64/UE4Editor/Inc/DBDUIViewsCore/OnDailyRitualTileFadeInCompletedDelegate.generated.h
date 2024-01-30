// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDailyRitualTileWidget;
#ifdef DBDUIVIEWSCORE_OnDailyRitualTileFadeInCompletedDelegate_generated_h
#error "OnDailyRitualTileFadeInCompletedDelegate.generated.h already included, missing '#pragma once' in OnDailyRitualTileFadeInCompletedDelegate.h"
#endif
#define DBDUIVIEWSCORE_OnDailyRitualTileFadeInCompletedDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_OnDailyRitualTileFadeInCompletedDelegate_h_8_DELEGATE \
struct _Script_DBDUIViewsCore_eventOnDailyRitualTileFadeInCompletedDelegate_Parms \
{ \
	UDailyRitualTileWidget* tile; \
}; \
static inline void FOnDailyRitualTileFadeInCompletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDailyRitualTileFadeInCompletedDelegate, UDailyRitualTileWidget* tile) \
{ \
	_Script_DBDUIViewsCore_eventOnDailyRitualTileFadeInCompletedDelegate_Parms Parms; \
	Parms.tile=tile; \
	OnDailyRitualTileFadeInCompletedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_OnDailyRitualTileFadeInCompletedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
