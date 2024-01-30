// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLYGONUOBJECTS_EDitherType_generated_h
#error "EDitherType.generated.h already included, missing '#pragma once' in EDitherType.h"
#endif
#define SIMPLYGONUOBJECTS_EDitherType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Simplygon_Source_SimplygonUObjects_Public_EDitherType_h


#define FOREACH_ENUM_EDITHERTYPE(op) \
	op(EDitherType::NoDither) \
	op(EDitherType::FloydSteinberg) \
	op(EDitherType::JarvisJudiceNinke) \
	op(EDitherType::Sierra) 

enum class EDitherType : uint8;
template<> SIMPLYGONUOBJECTS_API UEnum* StaticEnum<EDitherType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
