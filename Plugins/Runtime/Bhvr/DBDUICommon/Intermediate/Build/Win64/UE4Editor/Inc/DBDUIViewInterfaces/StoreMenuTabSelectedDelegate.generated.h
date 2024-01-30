// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStoreMenuState : uint8;
#ifdef DBDUIVIEWINTERFACES_StoreMenuTabSelectedDelegate_generated_h
#error "StoreMenuTabSelectedDelegate.generated.h already included, missing '#pragma once' in StoreMenuTabSelectedDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_StoreMenuTabSelectedDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuTabSelectedDelegate_h_7_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventStoreMenuTabSelectedDelegate_Parms \
{ \
	EStoreMenuState menuState; \
	bool alreadySelected; \
}; \
static inline void FStoreMenuTabSelectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& StoreMenuTabSelectedDelegate, EStoreMenuState menuState, bool alreadySelected) \
{ \
	_Script_DBDUIViewInterfaces_eventStoreMenuTabSelectedDelegate_Parms Parms; \
	Parms.menuState=menuState; \
	Parms.alreadySelected=alreadySelected ? true : false; \
	StoreMenuTabSelectedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuTabSelectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
