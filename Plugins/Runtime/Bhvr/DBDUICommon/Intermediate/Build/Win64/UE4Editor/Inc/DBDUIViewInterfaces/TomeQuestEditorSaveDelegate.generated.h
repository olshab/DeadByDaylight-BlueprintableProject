// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FArchiveNodeGraphViewData;
#ifdef DBDUIVIEWINTERFACES_TomeQuestEditorSaveDelegate_generated_h
#error "TomeQuestEditorSaveDelegate.generated.h already included, missing '#pragma once' in TomeQuestEditorSaveDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_TomeQuestEditorSaveDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TomeQuestEditorSaveDelegate_h_7_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventTomeQuestEditorSaveDelegate_Parms \
{ \
	TArray<FArchiveNodeGraphViewData> nodeList; \
}; \
static inline void FTomeQuestEditorSaveDelegate_DelegateWrapper(const FMulticastScriptDelegate& TomeQuestEditorSaveDelegate, TArray<FArchiveNodeGraphViewData> const& nodeList) \
{ \
	_Script_DBDUIViewInterfaces_eventTomeQuestEditorSaveDelegate_Parms Parms; \
	Parms.nodeList=nodeList; \
	TomeQuestEditorSaveDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TomeQuestEditorSaveDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
