// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWSCORE_ENodeStatusChange_generated_h
#error "ENodeStatusChange.generated.h already included, missing '#pragma once' in ENodeStatusChange.h"
#endif
#define DBDUIVIEWSCORE_ENodeStatusChange_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ENodeStatusChange_h


#define FOREACH_ENUM_ENODESTATUSCHANGE(op) \
	op(ENodeStatusChange::NodeQuestActivate) \
	op(ENodeStatusChange::NodeQuestPaused) \
	op(ENodeStatusChange::NodeQuestUnlock) \
	op(ENodeStatusChange::NodeRewardAvailableForClaim) \
	op(ENodeStatusChange::NodeQuestClaimed) \
	op(ENodeStatusChange::None) 

enum class ENodeStatusChange : uint8;
template<> DBDUIVIEWSCORE_API UEnum* StaticEnum<ENodeStatusChange>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
