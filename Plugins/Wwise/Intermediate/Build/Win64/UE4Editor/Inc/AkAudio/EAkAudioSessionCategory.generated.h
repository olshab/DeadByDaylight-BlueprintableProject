// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_EAkAudioSessionCategory_generated_h
#error "EAkAudioSessionCategory.generated.h already included, missing '#pragma once' in EAkAudioSessionCategory.h"
#endif
#define AKAUDIO_EAkAudioSessionCategory_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_EAkAudioSessionCategory_h


#define FOREACH_ENUM_EAKAUDIOSESSIONCATEGORY(op) \
	op(EAkAudioSessionCategory::Ambient) \
	op(EAkAudioSessionCategory::SoloAmbient) \
	op(EAkAudioSessionCategory::PlayAndRecord) 

enum class EAkAudioSessionCategory : uint8;
template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioSessionCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
