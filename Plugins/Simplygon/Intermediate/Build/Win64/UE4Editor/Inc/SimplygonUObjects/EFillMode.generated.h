// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLYGONUOBJECTS_EFillMode_generated_h
#error "EFillMode.generated.h already included, missing '#pragma once' in EFillMode.h"
#endif
#define SIMPLYGONUOBJECTS_EFillMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Simplygon_Source_SimplygonUObjects_Public_EFillMode_h


#define FOREACH_ENUM_EFILLMODE(op) \
	op(EFillMode::Interpolate) \
	op(EFillMode::NearestNeighbor) \
	op(EFillMode::NoFill) 

enum class EFillMode : uint8;
template<> SIMPLYGONUOBJECTS_API UEnum* StaticEnum<EFillMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
