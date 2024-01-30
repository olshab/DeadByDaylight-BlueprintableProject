// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWSMOBILE_OnScrollListPageButtonClicked_generated_h
#error "OnScrollListPageButtonClicked.generated.h already included, missing '#pragma once' in OnScrollListPageButtonClicked.h"
#endif
#define DBDUIVIEWSMOBILE_OnScrollListPageButtonClicked_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_OnScrollListPageButtonClicked_h_6_DELEGATE \
struct _Script_DBDUIViewsMobile_eventOnScrollListPageButtonClicked_Parms \
{ \
	int32 pageIndex; \
}; \
static inline void FOnScrollListPageButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& OnScrollListPageButtonClicked, int32 pageIndex) \
{ \
	_Script_DBDUIViewsMobile_eventOnScrollListPageButtonClicked_Parms Parms; \
	Parms.pageIndex=pageIndex; \
	OnScrollListPageButtonClicked.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_OnScrollListPageButtonClicked_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
