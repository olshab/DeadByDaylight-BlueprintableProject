// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_OnFeaturedCharacterClickedDelegate_generated_h
#error "OnFeaturedCharacterClickedDelegate.generated.h already included, missing '#pragma once' in OnFeaturedCharacterClickedDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_OnFeaturedCharacterClickedDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnFeaturedCharacterClickedDelegate_h_6_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventOnFeaturedCharacterClickedDelegate_Parms \
{ \
	int32 characterIndex; \
}; \
static inline void FOnFeaturedCharacterClickedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFeaturedCharacterClickedDelegate, int32 characterIndex) \
{ \
	_Script_DBDUIViewInterfaces_eventOnFeaturedCharacterClickedDelegate_Parms Parms; \
	Parms.characterIndex=characterIndex; \
	OnFeaturedCharacterClickedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnFeaturedCharacterClickedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
