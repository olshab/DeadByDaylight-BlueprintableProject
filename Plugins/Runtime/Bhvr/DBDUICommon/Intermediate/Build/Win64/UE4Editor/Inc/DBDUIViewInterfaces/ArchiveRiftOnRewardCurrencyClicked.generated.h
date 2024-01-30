// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECurrencyType : uint8;
#ifdef DBDUIVIEWINTERFACES_ArchiveRiftOnRewardCurrencyClicked_generated_h
#error "ArchiveRiftOnRewardCurrencyClicked.generated.h already included, missing '#pragma once' in ArchiveRiftOnRewardCurrencyClicked.h"
#endif
#define DBDUIVIEWINTERFACES_ArchiveRiftOnRewardCurrencyClicked_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftOnRewardCurrencyClicked_h_7_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventArchiveRiftOnRewardCurrencyClicked_Parms \
{ \
	ECurrencyType currencyId; \
}; \
static inline void FArchiveRiftOnRewardCurrencyClicked_DelegateWrapper(const FMulticastScriptDelegate& ArchiveRiftOnRewardCurrencyClicked, ECurrencyType currencyId) \
{ \
	_Script_DBDUIViewInterfaces_eventArchiveRiftOnRewardCurrencyClicked_Parms Parms; \
	Parms.currencyId=currencyId; \
	ArchiveRiftOnRewardCurrencyClicked.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftOnRewardCurrencyClicked_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
