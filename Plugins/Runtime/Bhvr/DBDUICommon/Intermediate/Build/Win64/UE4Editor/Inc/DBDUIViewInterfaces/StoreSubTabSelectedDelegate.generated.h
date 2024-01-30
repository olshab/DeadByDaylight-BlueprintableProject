// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_StoreSubTabSelectedDelegate_generated_h
#error "StoreSubTabSelectedDelegate.generated.h already included, missing '#pragma once' in StoreSubTabSelectedDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_StoreSubTabSelectedDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSubTabSelectedDelegate_h_6_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventStoreSubTabSelectedDelegate_Parms \
{ \
	int32 menuState; \
}; \
static inline void FStoreSubTabSelectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& StoreSubTabSelectedDelegate, int32 menuState) \
{ \
	_Script_DBDUIViewInterfaces_eventStoreSubTabSelectedDelegate_Parms Parms; \
	Parms.menuState=menuState; \
	StoreSubTabSelectedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSubTabSelectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
