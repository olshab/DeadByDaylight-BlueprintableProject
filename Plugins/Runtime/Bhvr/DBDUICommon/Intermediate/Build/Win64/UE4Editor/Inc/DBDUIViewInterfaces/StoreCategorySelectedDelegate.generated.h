// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECustomizationCategory : uint8;
#ifdef DBDUIVIEWINTERFACES_StoreCategorySelectedDelegate_generated_h
#error "StoreCategorySelectedDelegate.generated.h already included, missing '#pragma once' in StoreCategorySelectedDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_StoreCategorySelectedDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCategorySelectedDelegate_h_7_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventStoreCategorySelectedDelegate_Parms \
{ \
	ECustomizationCategory category; \
}; \
static inline void FStoreCategorySelectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& StoreCategorySelectedDelegate, ECustomizationCategory category) \
{ \
	_Script_DBDUIViewInterfaces_eventStoreCategorySelectedDelegate_Parms Parms; \
	Parms.category=category; \
	StoreCategorySelectedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCategorySelectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
