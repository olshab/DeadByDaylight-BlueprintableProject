// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_PostEventAtLocationAsyncOutputPin_generated_h
#error "PostEventAtLocationAsyncOutputPin.generated.h already included, missing '#pragma once' in PostEventAtLocationAsyncOutputPin.h"
#endif
#define AKAUDIO_PostEventAtLocationAsyncOutputPin_generated_h

#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_PostEventAtLocationAsyncOutputPin_h_6_DELEGATE \
struct _Script_AkAudio_eventPostEventAtLocationAsyncOutputPin_Parms \
{ \
	int32 PlayingID; \
}; \
static inline void FPostEventAtLocationAsyncOutputPin_DelegateWrapper(const FMulticastScriptDelegate& PostEventAtLocationAsyncOutputPin, int32 PlayingID) \
{ \
	_Script_AkAudio_eventPostEventAtLocationAsyncOutputPin_Parms Parms; \
	Parms.PlayingID=PlayingID; \
	PostEventAtLocationAsyncOutputPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_PostEventAtLocationAsyncOutputPin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
