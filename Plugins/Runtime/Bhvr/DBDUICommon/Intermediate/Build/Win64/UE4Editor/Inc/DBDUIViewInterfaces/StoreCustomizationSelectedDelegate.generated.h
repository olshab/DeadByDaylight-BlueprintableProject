// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_StoreCustomizationSelectedDelegate_generated_h
#error "StoreCustomizationSelectedDelegate.generated.h already included, missing '#pragma once' in StoreCustomizationSelectedDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_StoreCustomizationSelectedDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCustomizationSelectedDelegate_h_6_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventStoreCustomizationSelectedDelegate_Parms \
{ \
	FName customizationId; \
	bool isSelected; \
}; \
static inline void FStoreCustomizationSelectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& StoreCustomizationSelectedDelegate, FName customizationId, bool isSelected) \
{ \
	_Script_DBDUIViewInterfaces_eventStoreCustomizationSelectedDelegate_Parms Parms; \
	Parms.customizationId=customizationId; \
	Parms.isSelected=isSelected ? true : false; \
	StoreCustomizationSelectedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCustomizationSelectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
