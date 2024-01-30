// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWSCORE_ArchiveNodeOnDragBegin_generated_h
#error "ArchiveNodeOnDragBegin.generated.h already included, missing '#pragma once' in ArchiveNodeOnDragBegin.h"
#endif
#define DBDUIVIEWSCORE_ArchiveNodeOnDragBegin_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeOnDragBegin_h_6_DELEGATE \
struct _Script_DBDUIViewsCore_eventArchiveNodeOnDragBegin_Parms \
{ \
	FName nodeId; \
}; \
static inline void FArchiveNodeOnDragBegin_DelegateWrapper(const FMulticastScriptDelegate& ArchiveNodeOnDragBegin, FName const& nodeId) \
{ \
	_Script_DBDUIViewsCore_eventArchiveNodeOnDragBegin_Parms Parms; \
	Parms.nodeId=nodeId; \
	ArchiveNodeOnDragBegin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeOnDragBegin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
