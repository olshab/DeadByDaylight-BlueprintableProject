// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EArchiveMenuState : uint8;
#ifdef DBDUIVIEWINTERFACES_ArchiveMenuTabSelectedDelegate_generated_h
#error "ArchiveMenuTabSelectedDelegate.generated.h already included, missing '#pragma once' in ArchiveMenuTabSelectedDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_ArchiveMenuTabSelectedDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuTabSelectedDelegate_h_7_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventArchiveMenuTabSelectedDelegate_Parms \
{ \
	EArchiveMenuState menuState; \
	bool alreadySelected; \
}; \
static inline void FArchiveMenuTabSelectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ArchiveMenuTabSelectedDelegate, EArchiveMenuState menuState, bool alreadySelected) \
{ \
	_Script_DBDUIViewInterfaces_eventArchiveMenuTabSelectedDelegate_Parms Parms; \
	Parms.menuState=menuState; \
	Parms.alreadySelected=alreadySelected ? true : false; \
	ArchiveMenuTabSelectedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuTabSelectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
