// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECurrencyType : uint8;
#ifdef DBDUIVIEWINTERFACES_PlayerProfileCurrencyClickedDelegate_generated_h
#error "PlayerProfileCurrencyClickedDelegate.generated.h already included, missing '#pragma once' in PlayerProfileCurrencyClickedDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_PlayerProfileCurrencyClickedDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileCurrencyClickedDelegate_h_7_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventPlayerProfileCurrencyClickedDelegate_Parms \
{ \
	ECurrencyType currencyType; \
}; \
static inline void FPlayerProfileCurrencyClickedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayerProfileCurrencyClickedDelegate, ECurrencyType currencyType) \
{ \
	_Script_DBDUIViewInterfaces_eventPlayerProfileCurrencyClickedDelegate_Parms Parms; \
	Parms.currencyType=currencyType; \
	PlayerProfileCurrencyClickedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileCurrencyClickedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
