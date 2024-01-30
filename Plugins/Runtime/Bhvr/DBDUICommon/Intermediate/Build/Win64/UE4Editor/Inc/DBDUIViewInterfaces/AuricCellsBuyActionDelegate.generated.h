// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_AuricCellsBuyActionDelegate_generated_h
#error "AuricCellsBuyActionDelegate.generated.h already included, missing '#pragma once' in AuricCellsBuyActionDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_AuricCellsBuyActionDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_AuricCellsBuyActionDelegate_h_6_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventAuricCellsBuyActionDelegate_Parms \
{ \
	FName bundleId; \
}; \
static inline void FAuricCellsBuyActionDelegate_DelegateWrapper(const FMulticastScriptDelegate& AuricCellsBuyActionDelegate, FName bundleId) \
{ \
	_Script_DBDUIViewInterfaces_eventAuricCellsBuyActionDelegate_Parms Parms; \
	Parms.bundleId=bundleId; \
	AuricCellsBuyActionDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_AuricCellsBuyActionDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
