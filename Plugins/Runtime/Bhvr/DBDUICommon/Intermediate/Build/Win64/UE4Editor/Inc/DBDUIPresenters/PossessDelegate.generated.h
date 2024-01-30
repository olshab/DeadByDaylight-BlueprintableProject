// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef DBDUIPRESENTERS_PossessDelegate_generated_h
#error "PossessDelegate.generated.h already included, missing '#pragma once' in PossessDelegate.h"
#endif
#define DBDUIPRESENTERS_PossessDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PossessDelegate_h_8_DELEGATE \
struct _Script_DBDUIPresenters_eventPossessDelegate_Parms \
{ \
	APawn* pawn; \
}; \
static inline void FPossessDelegate_DelegateWrapper(const FMulticastScriptDelegate& PossessDelegate, APawn* pawn) \
{ \
	_Script_DBDUIPresenters_eventPossessDelegate_Parms Parms; \
	Parms.pawn=pawn; \
	PossessDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PossessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
