// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_MilestoneTrackerItemSelected_generated_h
#error "MilestoneTrackerItemSelected.generated.h already included, missing '#pragma once' in MilestoneTrackerItemSelected.h"
#endif
#define DBDUIVIEWINTERFACES_MilestoneTrackerItemSelected_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MilestoneTrackerItemSelected_h_6_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventMilestoneTrackerItemSelected_Parms \
{ \
	int32 selectedIndex; \
}; \
static inline void FMilestoneTrackerItemSelected_DelegateWrapper(const FMulticastScriptDelegate& MilestoneTrackerItemSelected, const int32 selectedIndex) \
{ \
	_Script_DBDUIViewInterfaces_eventMilestoneTrackerItemSelected_Parms Parms; \
	Parms.selectedIndex=selectedIndex; \
	MilestoneTrackerItemSelected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MilestoneTrackerItemSelected_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
