// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_VignetteEntrySelected_generated_h
#error "VignetteEntrySelected.generated.h already included, missing '#pragma once' in VignetteEntrySelected.h"
#endif
#define DBDUIVIEWINTERFACES_VignetteEntrySelected_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_VignetteEntrySelected_h_6_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventVignetteEntrySelected_Parms \
{ \
	int32 vignetteEntryIndex; \
}; \
static inline void FVignetteEntrySelected_DelegateWrapper(const FMulticastScriptDelegate& VignetteEntrySelected, const int32 vignetteEntryIndex) \
{ \
	_Script_DBDUIViewInterfaces_eventVignetteEntrySelected_Parms Parms; \
	Parms.vignetteEntryIndex=vignetteEntryIndex; \
	VignetteEntrySelected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_VignetteEntrySelected_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
