// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_EMilestoneTrackerItemState_generated_h
#error "EMilestoneTrackerItemState.generated.h already included, missing '#pragma once' in EMilestoneTrackerItemState.h"
#endif
#define DBDUIVIEWINTERFACES_EMilestoneTrackerItemState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EMilestoneTrackerItemState_h


#define FOREACH_ENUM_EMILESTONETRACKERITEMSTATE(op) \
	op(EMilestoneTrackerItemState::Unlocked) \
	op(EMilestoneTrackerItemState::InProgress) \
	op(EMilestoneTrackerItemState::Locked) 

enum class EMilestoneTrackerItemState : uint8;
template<> DBDUIVIEWINTERFACES_API UEnum* StaticEnum<EMilestoneTrackerItemState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
