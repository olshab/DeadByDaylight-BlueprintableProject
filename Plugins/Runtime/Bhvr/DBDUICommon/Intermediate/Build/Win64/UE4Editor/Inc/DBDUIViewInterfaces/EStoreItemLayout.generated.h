// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_EStoreItemLayout_generated_h
#error "EStoreItemLayout.generated.h already included, missing '#pragma once' in EStoreItemLayout.h"
#endif
#define DBDUIVIEWINTERFACES_EStoreItemLayout_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EStoreItemLayout_h


#define FOREACH_ENUM_ESTOREITEMLAYOUT(op) \
	op(EStoreItemLayout::None) \
	op(EStoreItemLayout::OwnedTag) \
	op(EStoreItemLayout::LockedTag) \
	op(EStoreItemLayout::TimerTags) \
	op(EStoreItemLayout::PriceTags) \
	op(EStoreItemLayout::EventCheckmarkTag) \
	op(EStoreItemLayout::EventIconTag) 

enum class EStoreItemLayout : uint8;
template<> DBDUIVIEWINTERFACES_API UEnum* StaticEnum<EStoreItemLayout>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
