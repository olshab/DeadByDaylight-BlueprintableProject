// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreTutorialObjectiveItem;
#ifdef DBDUIVIEWSCORE_TutorialObjectiveCompleted_generated_h
#error "TutorialObjectiveCompleted.generated.h already included, missing '#pragma once' in TutorialObjectiveCompleted.h"
#endif
#define DBDUIVIEWSCORE_TutorialObjectiveCompleted_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_TutorialObjectiveCompleted_h_8_DELEGATE \
struct _Script_DBDUIViewsCore_eventTutorialObjectiveCompleted_Parms \
{ \
	UCoreTutorialObjectiveItem* item; \
}; \
static inline void FTutorialObjectiveCompleted_DelegateWrapper(const FMulticastScriptDelegate& TutorialObjectiveCompleted, UCoreTutorialObjectiveItem* item) \
{ \
	_Script_DBDUIViewsCore_eventTutorialObjectiveCompleted_Parms Parms; \
	Parms.item=item; \
	TutorialObjectiveCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_TutorialObjectiveCompleted_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
