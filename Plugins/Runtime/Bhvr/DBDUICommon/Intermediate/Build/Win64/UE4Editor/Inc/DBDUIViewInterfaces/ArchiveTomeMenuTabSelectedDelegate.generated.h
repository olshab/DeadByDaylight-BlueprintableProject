// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EArchiveTomeMenuState : uint8;
#ifdef DBDUIVIEWINTERFACES_ArchiveTomeMenuTabSelectedDelegate_generated_h
#error "ArchiveTomeMenuTabSelectedDelegate.generated.h already included, missing '#pragma once' in ArchiveTomeMenuTabSelectedDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_ArchiveTomeMenuTabSelectedDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeMenuTabSelectedDelegate_h_7_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventArchiveTomeMenuTabSelectedDelegate_Parms \
{ \
	EArchiveTomeMenuState menuState; \
}; \
static inline void FArchiveTomeMenuTabSelectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ArchiveTomeMenuTabSelectedDelegate, const EArchiveTomeMenuState menuState) \
{ \
	_Script_DBDUIViewInterfaces_eventArchiveTomeMenuTabSelectedDelegate_Parms Parms; \
	Parms.menuState=menuState; \
	ArchiveTomeMenuTabSelectedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeMenuTabSelectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
