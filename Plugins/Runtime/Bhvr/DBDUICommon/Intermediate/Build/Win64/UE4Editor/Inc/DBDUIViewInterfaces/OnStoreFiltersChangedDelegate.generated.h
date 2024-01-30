// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStoreCharactersFiltersData;
#ifdef DBDUIVIEWINTERFACES_OnStoreFiltersChangedDelegate_generated_h
#error "OnStoreFiltersChangedDelegate.generated.h already included, missing '#pragma once' in OnStoreFiltersChangedDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_OnStoreFiltersChangedDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnStoreFiltersChangedDelegate_h_7_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventOnStoreFiltersChangedDelegate_Parms \
{ \
	FStoreCharactersFiltersData storeFiltersData; \
}; \
static inline void FOnStoreFiltersChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStoreFiltersChangedDelegate, FStoreCharactersFiltersData storeFiltersData) \
{ \
	_Script_DBDUIViewInterfaces_eventOnStoreFiltersChangedDelegate_Parms Parms; \
	Parms.storeFiltersData=storeFiltersData; \
	OnStoreFiltersChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnStoreFiltersChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
