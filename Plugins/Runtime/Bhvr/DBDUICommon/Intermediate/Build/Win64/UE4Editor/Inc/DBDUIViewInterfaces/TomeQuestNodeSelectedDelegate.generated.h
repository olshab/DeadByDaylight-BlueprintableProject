// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPlayerRole : uint8;
struct FVector2D;
#ifdef DBDUIVIEWINTERFACES_TomeQuestNodeSelectedDelegate_generated_h
#error "TomeQuestNodeSelectedDelegate.generated.h already included, missing '#pragma once' in TomeQuestNodeSelectedDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_TomeQuestNodeSelectedDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TomeQuestNodeSelectedDelegate_h_8_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventTomeQuestNodeSelectedDelegate_Parms \
{ \
	FName nodeId; \
	EPlayerRole role; \
	FVector2D position; \
}; \
static inline void FTomeQuestNodeSelectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& TomeQuestNodeSelectedDelegate, FName const& nodeId, EPlayerRole role, FVector2D const& position) \
{ \
	_Script_DBDUIViewInterfaces_eventTomeQuestNodeSelectedDelegate_Parms Parms; \
	Parms.nodeId=nodeId; \
	Parms.role=role; \
	Parms.position=position; \
	TomeQuestNodeSelectedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TomeQuestNodeSelectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
