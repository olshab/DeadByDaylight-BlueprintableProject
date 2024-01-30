// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_OnCinematicSubtitleUpdate_generated_h
#error "OnCinematicSubtitleUpdate.generated.h already included, missing '#pragma once' in OnCinematicSubtitleUpdate.h"
#endif
#define DBDUIVIEWINTERFACES_OnCinematicSubtitleUpdate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnCinematicSubtitleUpdate_h_6_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventOnCinematicSubtitleUpdate_Parms \
{ \
	TArray<FString> subtitlesText; \
}; \
static inline void FOnCinematicSubtitleUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnCinematicSubtitleUpdate, TArray<FString> const& subtitlesText) \
{ \
	_Script_DBDUIViewInterfaces_eventOnCinematicSubtitleUpdate_Parms Parms; \
	Parms.subtitlesText=subtitlesText; \
	OnCinematicSubtitleUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnCinematicSubtitleUpdate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
