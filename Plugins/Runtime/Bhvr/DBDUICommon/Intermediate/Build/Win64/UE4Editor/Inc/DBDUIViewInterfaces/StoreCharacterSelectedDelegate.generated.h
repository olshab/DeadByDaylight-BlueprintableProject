// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_StoreCharacterSelectedDelegate_generated_h
#error "StoreCharacterSelectedDelegate.generated.h already included, missing '#pragma once' in StoreCharacterSelectedDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_StoreCharacterSelectedDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharacterSelectedDelegate_h_6_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventStoreCharacterSelectedDelegate_Parms \
{ \
	int32 characterIndex; \
}; \
static inline void FStoreCharacterSelectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& StoreCharacterSelectedDelegate, int32 characterIndex) \
{ \
	_Script_DBDUIViewInterfaces_eventStoreCharacterSelectedDelegate_Parms Parms; \
	Parms.characterIndex=characterIndex; \
	StoreCharacterSelectedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharacterSelectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
