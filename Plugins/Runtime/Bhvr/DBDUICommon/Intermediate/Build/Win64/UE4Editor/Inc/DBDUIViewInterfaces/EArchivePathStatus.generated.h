// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_EArchivePathStatus_generated_h
#error "EArchivePathStatus.generated.h already included, missing '#pragma once' in EArchivePathStatus.h"
#endif
#define DBDUIVIEWINTERFACES_EArchivePathStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EArchivePathStatus_h


#define FOREACH_ENUM_EARCHIVEPATHSTATUS(op) \
	op(EArchivePathStatus::Closed) \
	op(EArchivePathStatus::Available) \
	op(EArchivePathStatus::Completed) 

enum class EArchivePathStatus : uint8;
template<> DBDUIVIEWINTERFACES_API UEnum* StaticEnum<EArchivePathStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
