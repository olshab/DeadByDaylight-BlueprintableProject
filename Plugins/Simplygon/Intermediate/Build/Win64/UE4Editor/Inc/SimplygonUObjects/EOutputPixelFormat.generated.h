// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLYGONUOBJECTS_EOutputPixelFormat_generated_h
#error "EOutputPixelFormat.generated.h already included, missing '#pragma once' in EOutputPixelFormat.h"
#endif
#define SIMPLYGONUOBJECTS_EOutputPixelFormat_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Simplygon_Source_SimplygonUObjects_Public_EOutputPixelFormat_h


#define FOREACH_ENUM_EOUTPUTPIXELFORMAT(op) \
	op(EOutputPixelFormat::R8G8B8A8) \
	op(EOutputPixelFormat::R8G8B8) \
	op(EOutputPixelFormat::R8) \
	op(EOutputPixelFormat::R16G16B16A16) \
	op(EOutputPixelFormat::R16G16B16) \
	op(EOutputPixelFormat::R16) \
	op(EOutputPixelFormat::R32G32B32A32F) 

enum class EOutputPixelFormat : uint8;
template<> SIMPLYGONUOBJECTS_API UEnum* StaticEnum<EOutputPixelFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
