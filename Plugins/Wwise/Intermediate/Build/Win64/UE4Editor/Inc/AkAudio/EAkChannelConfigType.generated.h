// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_EAkChannelConfigType_generated_h
#error "EAkChannelConfigType.generated.h already included, missing '#pragma once' in EAkChannelConfigType.h"
#endif
#define AKAUDIO_EAkChannelConfigType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_EAkChannelConfigType_h


#define FOREACH_ENUM_EAKCHANNELCONFIGTYPE(op) \
	op(EAkChannelConfigType::Anonymous) \
	op(EAkChannelConfigType::Standard) \
	op(EAkChannelConfigType::Ambisonic) 

enum class EAkChannelConfigType : uint8;
template<> AKAUDIO_API UEnum* StaticEnum<EAkChannelConfigType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
