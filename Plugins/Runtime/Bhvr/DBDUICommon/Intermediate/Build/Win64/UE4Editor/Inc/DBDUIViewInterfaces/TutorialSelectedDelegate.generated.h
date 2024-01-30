// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_TutorialSelectedDelegate_generated_h
#error "TutorialSelectedDelegate.generated.h already included, missing '#pragma once' in TutorialSelectedDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_TutorialSelectedDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialSelectedDelegate_h_6_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventTutorialSelectedDelegate_Parms \
{ \
	FString stepId; \
	FString tutorialId; \
}; \
static inline void FTutorialSelectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& TutorialSelectedDelegate, const FString& stepId, const FString& tutorialId) \
{ \
	_Script_DBDUIViewInterfaces_eventTutorialSelectedDelegate_Parms Parms; \
	Parms.stepId=stepId; \
	Parms.tutorialId=tutorialId; \
	TutorialSelectedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialSelectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
