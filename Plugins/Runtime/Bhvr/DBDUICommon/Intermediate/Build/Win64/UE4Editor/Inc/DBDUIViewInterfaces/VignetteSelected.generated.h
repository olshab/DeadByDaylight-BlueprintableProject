// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_VignetteSelected_generated_h
#error "VignetteSelected.generated.h already included, missing '#pragma once' in VignetteSelected.h"
#endif
#define DBDUIVIEWINTERFACES_VignetteSelected_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_VignetteSelected_h_6_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventVignetteSelected_Parms \
{ \
	FString vignetteId; \
}; \
static inline void FVignetteSelected_DelegateWrapper(const FMulticastScriptDelegate& VignetteSelected, const FString& vignetteId) \
{ \
	_Script_DBDUIViewInterfaces_eventVignetteSelected_Parms Parms; \
	Parms.vignetteId=vignetteId; \
	VignetteSelected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_VignetteSelected_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
