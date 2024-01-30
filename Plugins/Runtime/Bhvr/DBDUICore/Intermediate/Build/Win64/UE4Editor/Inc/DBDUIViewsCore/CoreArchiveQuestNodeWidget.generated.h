// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStoryNodeState : uint8;
struct FArchiveNodeViewData;
enum class ENodeStatusChange : uint8;
enum class ECurrencyType : uint8;
enum class EItemRarity : uint8;
#ifdef DBDUIVIEWSCORE_CoreArchiveQuestNodeWidget_generated_h
#error "CoreArchiveQuestNodeWidget.generated.h already included, missing '#pragma once' in CoreArchiveQuestNodeWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreArchiveQuestNodeWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h_22_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBroadcastDragBegin); \
	DECLARE_FUNCTION(execHandleStatusChange); \
	DECLARE_FUNCTION(execInitNode); \
	DECLARE_FUNCTION(execIsSelectableNode); \
	DECLARE_FUNCTION(execIsValidNode); \
	DECLARE_FUNCTION(execNeedsChallengeReminderHoverAnimation); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execShowRewardNodeTooltip); \
	DECLARE_FUNCTION(execUpdateAllStoryIndicators); \
	DECLARE_FUNCTION(execUpdateNode);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBroadcastDragBegin); \
	DECLARE_FUNCTION(execHandleStatusChange); \
	DECLARE_FUNCTION(execInitNode); \
	DECLARE_FUNCTION(execIsSelectableNode); \
	DECLARE_FUNCTION(execIsValidNode); \
	DECLARE_FUNCTION(execNeedsChallengeReminderHoverAnimation); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execShowRewardNodeTooltip); \
	DECLARE_FUNCTION(execUpdateAllStoryIndicators); \
	DECLARE_FUNCTION(execUpdateNode);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h_22_EVENT_PARMS \
	struct CoreArchiveQuestNodeWidget_eventOnStatusChanged_Parms \
	{ \
		ENodeStatusChange nodeStatusChange; \
	}; \
	struct CoreArchiveQuestNodeWidget_eventSetCurrencyRewardBackground_Parms \
	{ \
		ECurrencyType currencyType; \
	}; \
	struct CoreArchiveQuestNodeWidget_eventSetCustomizationRewardRarity_Parms \
	{ \
		EItemRarity rarity; \
	}; \
	struct CoreArchiveQuestNodeWidget_eventUpdateStoryIndicatorOpacity_Parms \
	{ \
		bool isImageReward; \
		bool isCompleted; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h_22_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreArchiveQuestNodeWidget(); \
	friend struct Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveQuestNodeWidget, UCoreButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveQuestNodeWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUCoreArchiveQuestNodeWidget(); \
	friend struct Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveQuestNodeWidget, UCoreButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveQuestNodeWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreArchiveQuestNodeWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreArchiveQuestNodeWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveQuestNodeWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveQuestNodeWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveQuestNodeWidget(UCoreArchiveQuestNodeWidget&&); \
	NO_API UCoreArchiveQuestNodeWidget(const UCoreArchiveQuestNodeWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveQuestNodeWidget(UCoreArchiveQuestNodeWidget&&); \
	NO_API UCoreArchiveQuestNodeWidget(const UCoreArchiveQuestNodeWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveQuestNodeWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveQuestNodeWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreArchiveQuestNodeWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Icon() { return STRUCT_OFFSET(UCoreArchiveQuestNodeWidget, Icon); } \
	FORCEINLINE static uint32 __PPO__VignetteTextIndicatorOverlay() { return STRUCT_OFFSET(UCoreArchiveQuestNodeWidget, VignetteTextIndicatorOverlay); } \
	FORCEINLINE static uint32 __PPO__VignetteImageIndicatorOverlay() { return STRUCT_OFFSET(UCoreArchiveQuestNodeWidget, VignetteImageIndicatorOverlay); } \
	FORCEINLINE static uint32 __PPO__VignetteCurrencyAmountOverlay() { return STRUCT_OFFSET(UCoreArchiveQuestNodeWidget, VignetteCurrencyAmountOverlay); } \
	FORCEINLINE static uint32 __PPO__VignetteCurrencyAmountText() { return STRUCT_OFFSET(UCoreArchiveQuestNodeWidget, VignetteCurrencyAmountText); } \
	FORCEINLINE static uint32 __PPO__StatusChangeAudioEvents() { return STRUCT_OFFSET(UCoreArchiveQuestNodeWidget, StatusChangeAudioEvents); } \
	FORCEINLINE static uint32 __PPO___nodeData() { return STRUCT_OFFSET(UCoreArchiveQuestNodeWidget, _nodeData); } \
	FORCEINLINE static uint32 __PPO___nodeId() { return STRUCT_OFFSET(UCoreArchiveQuestNodeWidget, _nodeId); } \
	FORCEINLINE static uint32 __PPO___isChallengeReminderNode() { return STRUCT_OFFSET(UCoreArchiveQuestNodeWidget, _isChallengeReminderNode); } \
	FORCEINLINE static uint32 __PPO___isDraggable() { return STRUCT_OFFSET(UCoreArchiveQuestNodeWidget, _isDraggable); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h_19_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h_22_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h_22_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h_22_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h_22_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h_22_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h_22_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h_22_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h_22_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreArchiveQuestNodeWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestNodeWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
