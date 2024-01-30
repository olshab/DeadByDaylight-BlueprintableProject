// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreButtonWidget;
#ifdef DBDUIVIEWSCORE_ArchiveRiftTierItemClicked_generated_h
#error "ArchiveRiftTierItemClicked.generated.h already included, missing '#pragma once' in ArchiveRiftTierItemClicked.h"
#endif
#define DBDUIVIEWSCORE_ArchiveRiftTierItemClicked_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveRiftTierItemClicked_h_8_DELEGATE \
struct _Script_DBDUIViewsCore_eventArchiveRiftTierItemClicked_Parms \
{ \
	int32 tier; \
	UCoreButtonWidget* selectedReward; \
	bool isPremium; \
	int32 index; \
}; \
static inline void FArchiveRiftTierItemClicked_DelegateWrapper(const FMulticastScriptDelegate& ArchiveRiftTierItemClicked, int32 tier, UCoreButtonWidget* selectedReward, bool isPremium, int32 index) \
{ \
	_Script_DBDUIViewsCore_eventArchiveRiftTierItemClicked_Parms Parms; \
	Parms.tier=tier; \
	Parms.selectedReward=selectedReward; \
	Parms.isPremium=isPremium ? true : false; \
	Parms.index=index; \
	ArchiveRiftTierItemClicked.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveRiftTierItemClicked_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
