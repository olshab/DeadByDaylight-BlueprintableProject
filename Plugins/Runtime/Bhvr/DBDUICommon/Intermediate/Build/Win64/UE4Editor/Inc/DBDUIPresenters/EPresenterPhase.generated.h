// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIPRESENTERS_EPresenterPhase_generated_h
#error "EPresenterPhase.generated.h already included, missing '#pragma once' in EPresenterPhase.h"
#endif
#define DBDUIPRESENTERS_EPresenterPhase_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_EPresenterPhase_h


#define FOREACH_ENUM_EPRESENTERPHASE(op) \
	op(EPresenterPhase::Initialization) \
	op(EPresenterPhase::StartPresenting) 

enum class EPresenterPhase : uint8;
template<> DBDUIPRESENTERS_API UEnum* StaticEnum<EPresenterPhase>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
