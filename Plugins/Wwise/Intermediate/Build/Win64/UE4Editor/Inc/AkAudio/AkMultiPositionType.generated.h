// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkMultiPositionType_generated_h
#error "AkMultiPositionType.generated.h already included, missing '#pragma once' in AkMultiPositionType.h"
#endif
#define AKAUDIO_AkMultiPositionType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkMultiPositionType_h


#define FOREACH_ENUM_AKMULTIPOSITIONTYPE(op) \
	op(AkMultiPositionType::SingleSource) \
	op(AkMultiPositionType::MultiSources) \
	op(AkMultiPositionType::MultiDirections) 

enum class AkMultiPositionType : uint8;
template<> AKAUDIO_API UEnum* StaticEnum<AkMultiPositionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
