// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_SpecialPackBuyActionDelegate_generated_h
#error "SpecialPackBuyActionDelegate.generated.h already included, missing '#pragma once' in SpecialPackBuyActionDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_SpecialPackBuyActionDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpecialPackBuyActionDelegate_h_6_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventSpecialPackBuyActionDelegate_Parms \
{ \
	FString packId; \
}; \
static inline void FSpecialPackBuyActionDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpecialPackBuyActionDelegate, const FString& packId) \
{ \
	_Script_DBDUIViewInterfaces_eventSpecialPackBuyActionDelegate_Parms Parms; \
	Parms.packId=packId; \
	SpecialPackBuyActionDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpecialPackBuyActionDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
