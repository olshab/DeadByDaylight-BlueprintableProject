// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPlayerRole : uint8;
#ifdef DBDUIVIEWINTERFACES_ArchiveSlotSelectionSelectedDelegate_generated_h
#error "ArchiveSlotSelectionSelectedDelegate.generated.h already included, missing '#pragma once' in ArchiveSlotSelectionSelectedDelegate.h"
#endif
#define DBDUIVIEWINTERFACES_ArchiveSlotSelectionSelectedDelegate_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveSlotSelectionSelectedDelegate_h_7_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventArchiveSlotSelectionSelectedDelegate_Parms \
{ \
	EPlayerRole role; \
}; \
static inline void FArchiveSlotSelectionSelectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ArchiveSlotSelectionSelectedDelegate, EPlayerRole role) \
{ \
	_Script_DBDUIViewInterfaces_eventArchiveSlotSelectionSelectedDelegate_Parms Parms; \
	Parms.role=role; \
	ArchiveSlotSelectionSelectedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveSlotSelectionSelectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
