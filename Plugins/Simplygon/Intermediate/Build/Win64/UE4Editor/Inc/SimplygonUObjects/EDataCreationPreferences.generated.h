// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLYGONUOBJECTS_EDataCreationPreferences_generated_h
#error "EDataCreationPreferences.generated.h already included, missing '#pragma once' in EDataCreationPreferences.h"
#endif
#define SIMPLYGONUOBJECTS_EDataCreationPreferences_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Simplygon_Source_SimplygonUObjects_Public_EDataCreationPreferences_h


#define FOREACH_ENUM_EDATACREATIONPREFERENCES(op) \
	op(EDataCreationPreferences::OnlyUseOriginalData) \
	op(EDataCreationPreferences::PreferOriginalData) \
	op(EDataCreationPreferences::PreferOptimizedResult) 

enum class EDataCreationPreferences : uint8;
template<> SIMPLYGONUOBJECTS_API UEnum* StaticEnum<EDataCreationPreferences>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS