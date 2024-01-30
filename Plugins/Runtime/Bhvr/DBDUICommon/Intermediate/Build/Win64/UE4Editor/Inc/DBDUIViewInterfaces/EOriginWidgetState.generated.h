// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_EOriginWidgetState_generated_h
#error "EOriginWidgetState.generated.h already included, missing '#pragma once' in EOriginWidgetState.h"
#endif
#define DBDUIVIEWINTERFACES_EOriginWidgetState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EOriginWidgetState_h


#define FOREACH_ENUM_EORIGINWIDGETSTATE(op) \
	op(EOriginWidgetState::None) \
	op(EOriginWidgetState::CurrencyPurchase) \
	op(EOriginWidgetState::Store) \
	op(EOriginWidgetState::Archives) \
	op(EOriginWidgetState::Gameplay) \
	op(EOriginWidgetState::MilestonePoints) 

enum class EOriginWidgetState : uint8;
template<> DBDUIVIEWINTERFACES_API UEnum* StaticEnum<EOriginWidgetState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
