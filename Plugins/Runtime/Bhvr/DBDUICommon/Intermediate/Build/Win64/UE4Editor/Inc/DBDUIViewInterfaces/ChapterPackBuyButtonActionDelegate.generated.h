// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_ChapterPackBuyButtonActionDelegate_generated_h
#error "ChapterPackBuyButtonActionDelegate.generated.h already included, missing '#pragma once' in ChapterPackBuyButtonActionDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_ChapterPackBuyButtonActionDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChapterPackBuyButtonActionDelegate_h_6_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventChapterPackBuyButtonActionDelegate_Parms \
{ \
	FString packId; \
}; \
static inline void FChapterPackBuyButtonActionDelegate_DelegateWrapper(const FMulticastScriptDelegate& ChapterPackBuyButtonActionDelegate, const FString& packId) \
{ \
	_Script_DBDUIViewInterfaces_eventChapterPackBuyButtonActionDelegate_Parms Parms; \
	Parms.packId=packId; \
	ChapterPackBuyButtonActionDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChapterPackBuyButtonActionDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
