// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_EStoreMenuState_generated_h
#error "EStoreMenuState.generated.h already included, missing '#pragma once' in EStoreMenuState.h"
#endif
#define DBDUIVIEWINTERFACES_EStoreMenuState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EStoreMenuState_h


#define FOREACH_ENUM_ESTOREMENUSTATE(op) \
	op(EStoreMenuState::Featured) \
	op(EStoreMenuState::Specials) \
	op(EStoreMenuState::Collections) \
	op(EStoreMenuState::SpecialPacks) \
	op(EStoreMenuState::Killers) \
	op(EStoreMenuState::Survivors) 

enum class EStoreMenuState : uint8;
template<> DBDUIVIEWINTERFACES_API UEnum* StaticEnum<EStoreMenuState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
