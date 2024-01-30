// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIPRESENTERS_EGameLayer_generated_h
#error "EGameLayer.generated.h already included, missing '#pragma once' in EGameLayer.h"
#endif
#define DBDUIPRESENTERS_EGameLayer_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_EGameLayer_h


#define FOREACH_ENUM_EGAMELAYER(op) \
	op(EGameLayer::Default) \
	op(EGameLayer::Overlay) \
	op(EGameLayer::UMGPopup) \
	op(EGameLayer::HighOverlay) \
	op(EGameLayer::Alerts) \
	op(EGameLayer::Tooltip) \
	op(EGameLayer::Watermark) 

enum class EGameLayer : uint8;
template<> DBDUIPRESENTERS_API UEnum* StaticEnum<EGameLayer>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
