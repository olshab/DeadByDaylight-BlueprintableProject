// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_VignetteCinematicPlayed_generated_h
#error "VignetteCinematicPlayed.generated.h already included, missing '#pragma once' in VignetteCinematicPlayed.h"
#endif
#define DBDUIVIEWINTERFACES_VignetteCinematicPlayed_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_VignetteCinematicPlayed_h_6_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventVignetteCinematicPlayed_Parms \
{ \
	int32 cinematicId; \
}; \
static inline void FVignetteCinematicPlayed_DelegateWrapper(const FMulticastScriptDelegate& VignetteCinematicPlayed, const int32 cinematicId) \
{ \
	_Script_DBDUIViewInterfaces_eventVignetteCinematicPlayed_Parms Parms; \
	Parms.cinematicId=cinematicId; \
	VignetteCinematicPlayed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_VignetteCinematicPlayed_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
