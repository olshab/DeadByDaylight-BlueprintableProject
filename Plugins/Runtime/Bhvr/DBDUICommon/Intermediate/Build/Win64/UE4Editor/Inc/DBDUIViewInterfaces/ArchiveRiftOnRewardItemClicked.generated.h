// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_ArchiveRiftOnRewardItemClicked_generated_h
#error "ArchiveRiftOnRewardItemClicked.generated.h already included, missing '#pragma once' in ArchiveRiftOnRewardItemClicked.h"
#endif
#define DBDUIVIEWINTERFACES_ArchiveRiftOnRewardItemClicked_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftOnRewardItemClicked_h_6_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventArchiveRiftOnRewardItemClicked_Parms \
{ \
	FName itemId; \
}; \
static inline void FArchiveRiftOnRewardItemClicked_DelegateWrapper(const FMulticastScriptDelegate& ArchiveRiftOnRewardItemClicked, FName itemId) \
{ \
	_Script_DBDUIViewInterfaces_eventArchiveRiftOnRewardItemClicked_Parms Parms; \
	Parms.itemId=itemId; \
	ArchiveRiftOnRewardItemClicked.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftOnRewardItemClicked_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
