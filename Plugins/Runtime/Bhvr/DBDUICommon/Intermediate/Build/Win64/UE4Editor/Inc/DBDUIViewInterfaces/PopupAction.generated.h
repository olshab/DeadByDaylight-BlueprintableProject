// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPopupButtonType : uint8;
#ifdef DBDUIVIEWINTERFACES_PopupAction_generated_h
#error "PopupAction.generated.h already included, missing '#pragma once' in PopupAction.h"
#endif
#define DBDUIVIEWINTERFACES_PopupAction_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PopupAction_h_7_DELEGATE \
struct _Script_DBDUIViewInterfaces_eventPopupAction_Parms \
{ \
	EPopupButtonType popupAction; \
}; \
static inline void FPopupAction_DelegateWrapper(const FMulticastScriptDelegate& PopupAction, EPopupButtonType popupAction) \
{ \
	_Script_DBDUIViewInterfaces_eventPopupAction_Parms Parms; \
	Parms.popupAction=popupAction; \
	PopupAction.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PopupAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
