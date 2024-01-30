// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStoreCharactersMenuState : uint8;
#ifdef DBDUIVIEWINTERFACES_StoreCharactersMenuTabSelectedDelegate_generated_h
#error "StoreCharactersMenuTabSelectedDelegate.generated.h already included, missing '#pragma once' in StoreCharactersMenuTabSelectedDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_StoreCharactersMenuTabSelectedDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersMenuTabSelectedDelegate_h_7_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventStoreCharactersMenuTabSelectedDelegate_Parms \
{ \
	EStoreCharactersMenuState menuState; \
	bool alreadySelected; \
}; \
static inline void FStoreCharactersMenuTabSelectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& StoreCharactersMenuTabSelectedDelegate, EStoreCharactersMenuState menuState, bool alreadySelected) \
{ \
	_Script_DBDUIViewInterfaces_eventStoreCharactersMenuTabSelectedDelegate_Parms Parms; \
	Parms.menuState=menuState; \
	Parms.alreadySelected=alreadySelected ? true : false; \
	StoreCharactersMenuTabSelectedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersMenuTabSelectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS