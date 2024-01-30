// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLYGONUOBJECTS_ERemeshingMode_generated_h
#error "ERemeshingMode.generated.h already included, missing '#pragma once' in ERemeshingMode.h"
#endif
#define SIMPLYGONUOBJECTS_ERemeshingMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Simplygon_Source_SimplygonUObjects_Public_ERemeshingMode_h


#define FOREACH_ENUM_EREMESHINGMODE(op) \
	op(ERemeshingMode::Outside) \
	op(ERemeshingMode::Inside) \
	op(ERemeshingMode::Manual) 

enum class ERemeshingMode : uint8;
template<> SIMPLYGONUOBJECTS_API UEnum* StaticEnum<ERemeshingMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
