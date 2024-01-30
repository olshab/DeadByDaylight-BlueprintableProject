// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLYGONUOBJECTS_EOutputDDSCompressionType_generated_h
#error "EOutputDDSCompressionType.generated.h already included, missing '#pragma once' in EOutputDDSCompressionType.h"
#endif
#define SIMPLYGONUOBJECTS_EOutputDDSCompressionType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Simplygon_Source_SimplygonUObjects_Public_EOutputDDSCompressionType_h


#define FOREACH_ENUM_EOUTPUTDDSCOMPRESSIONTYPE(op) \
	op(EOutputDDSCompressionType::NoCompression) \
	op(EOutputDDSCompressionType::BC1) \
	op(EOutputDDSCompressionType::BC2) \
	op(EOutputDDSCompressionType::BC3) \
	op(EOutputDDSCompressionType::BC4) \
	op(EOutputDDSCompressionType::BC5) 

enum class EOutputDDSCompressionType : uint8;
template<> SIMPLYGONUOBJECTS_API UEnum* StaticEnum<EOutputDDSCompressionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
