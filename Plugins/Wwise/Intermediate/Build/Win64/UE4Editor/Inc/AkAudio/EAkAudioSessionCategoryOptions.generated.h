// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_EAkAudioSessionCategoryOptions_generated_h
#error "EAkAudioSessionCategoryOptions.generated.h already included, missing '#pragma once' in EAkAudioSessionCategoryOptions.h"
#endif
#define AKAUDIO_EAkAudioSessionCategoryOptions_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_EAkAudioSessionCategoryOptions_h


#define FOREACH_ENUM_EAKAUDIOSESSIONCATEGORYOPTIONS(op) \
	op(EAkAudioSessionCategoryOptions::MixWithOthers) \
	op(EAkAudioSessionCategoryOptions::DuckOthers) \
	op(EAkAudioSessionCategoryOptions::AllowBluetooth) \
	op(EAkAudioSessionCategoryOptions::DefaultToSpeaker) 

enum class EAkAudioSessionCategoryOptions : uint8;
template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioSessionCategoryOptions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
