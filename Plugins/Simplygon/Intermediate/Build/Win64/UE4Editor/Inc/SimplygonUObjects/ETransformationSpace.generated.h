// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLYGONUOBJECTS_ETransformationSpace_generated_h
#error "ETransformationSpace.generated.h already included, missing '#pragma once' in ETransformationSpace.h"
#endif
#define SIMPLYGONUOBJECTS_ETransformationSpace_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Simplygon_Source_SimplygonUObjects_Public_ETransformationSpace_h


#define FOREACH_ENUM_ETRANSFORMATIONSPACE(op) \
	op(ETransformationSpace::Global) \
	op(ETransformationSpace::Local) \
	op(ETransformationSpace::Tangent) \
	op(ETransformationSpace::View) 

enum class ETransformationSpace : uint8;
template<> SIMPLYGONUOBJECTS_API UEnum* StaticEnum<ETransformationSpace>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
