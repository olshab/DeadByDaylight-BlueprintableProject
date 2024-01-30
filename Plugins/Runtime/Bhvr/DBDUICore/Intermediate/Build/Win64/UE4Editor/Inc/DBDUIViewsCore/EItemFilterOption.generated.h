// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWSCORE_EItemFilterOption_generated_h
#error "EItemFilterOption.generated.h already included, missing '#pragma once' in EItemFilterOption.h"
#endif
#define DBDUIVIEWSCORE_EItemFilterOption_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EItemFilterOption_h


#define FOREACH_ENUM_EITEMFILTEROPTION(op) \
	op(EItemFilterOption::None) \
	op(EItemFilterOption::Favorite) \
	op(EItemFilterOption::Owned) \
	op(EItemFilterOption::Common) \
	op(EItemFilterOption::Uncommon) \
	op(EItemFilterOption::Rare) \
	op(EItemFilterOption::VeryRare) \
	op(EItemFilterOption::UltraRare) \
	op(EItemFilterOption::Legendary) \
	op(EItemFilterOption::Event) 

enum class EItemFilterOption : uint8;
template<> DBDUIVIEWSCORE_API UEnum* StaticEnum<EItemFilterOption>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
