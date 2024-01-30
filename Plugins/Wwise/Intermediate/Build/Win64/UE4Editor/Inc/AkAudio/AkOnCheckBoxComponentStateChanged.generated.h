// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkOnCheckBoxComponentStateChanged_generated_h
#error "AkOnCheckBoxComponentStateChanged.generated.h already included, missing '#pragma once' in AkOnCheckBoxComponentStateChanged.h"
#endif
#define AKAUDIO_AkOnCheckBoxComponentStateChanged_generated_h

#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkOnCheckBoxComponentStateChanged_h_6_DELEGATE \
struct _Script_AkAudio_eventAkOnCheckBoxComponentStateChanged_Parms \
{ \
	bool bIsChecked; \
}; \
static inline void FAkOnCheckBoxComponentStateChanged_DelegateWrapper(const FMulticastScriptDelegate& AkOnCheckBoxComponentStateChanged, bool bIsChecked) \
{ \
	_Script_AkAudio_eventAkOnCheckBoxComponentStateChanged_Parms Parms; \
	Parms.bIsChecked=bIsChecked ? true : false; \
	AkOnCheckBoxComponentStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkOnCheckBoxComponentStateChanged_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
