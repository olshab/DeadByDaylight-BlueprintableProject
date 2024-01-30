// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLYGONUOBJECTS_EOutputImageFileFormat_generated_h
#error "EOutputImageFileFormat.generated.h already included, missing '#pragma once' in EOutputImageFileFormat.h"
#endif
#define SIMPLYGONUOBJECTS_EOutputImageFileFormat_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Simplygon_Source_SimplygonUObjects_Public_EOutputImageFileFormat_h


#define FOREACH_ENUM_EOUTPUTIMAGEFILEFORMAT(op) \
	op(EOutputImageFileFormat::BMP) \
	op(EOutputImageFileFormat::DDS) \
	op(EOutputImageFileFormat::JPEG) \
	op(EOutputImageFileFormat::PNG) \
	op(EOutputImageFileFormat::TGA) \
	op(EOutputImageFileFormat::TIFF) \
	op(EOutputImageFileFormat::EXR) 

enum class EOutputImageFileFormat : uint8;
template<> SIMPLYGONUOBJECTS_API UEnum* StaticEnum<EOutputImageFileFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
