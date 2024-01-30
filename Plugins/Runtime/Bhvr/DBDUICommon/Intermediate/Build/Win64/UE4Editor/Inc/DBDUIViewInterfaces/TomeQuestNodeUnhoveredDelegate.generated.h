// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPlayerRole : uint8;
#ifdef DBDUIVIEWINTERFACES_TomeQuestNodeUnhoveredDelegate_generated_h
#error "TomeQuestNodeUnhoveredDelegate.generated.h already included, missing '#pragma once' in TomeQuestNodeUnhoveredDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_TomeQuestNodeUnhoveredDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TomeQuestNodeUnhoveredDelegate_h_7_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventTomeQuestNodeUnhoveredDelegate_Parms \
{ \
	EPlayerRole role; \
}; \
static inline void FTomeQuestNodeUnhoveredDelegate_DelegateWrapper(const FMulticastScriptDelegate& TomeQuestNodeUnhoveredDelegate, EPlayerRole role) \
{ \
	_Script_DBDUIViewInterfaces_eventTomeQuestNodeUnhoveredDelegate_Parms Parms; \
	Parms.role=role; \
	TomeQuestNodeUnhoveredDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TomeQuestNodeUnhoveredDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
