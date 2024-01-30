// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCustomizationItemOriginViewData;
class UStoreCustomizationItemViewData;
struct FCustomizationItemPreviewAreaViewData;
class UCoreKeyListenerInputPromptWidget;
struct FEventEntryPopupSkinUIData;
#ifdef DBDUIVIEWSCORE_EventEntryRewardsDisplayWidget_generated_h
#error "EventEntryRewardsDisplayWidget.generated.h already included, missing '#pragma once' in EventEntryRewardsDisplayWidget.h"
#endif
#define DBDUIVIEWSCORE_EventEntryRewardsDisplayWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h_19_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h_19_RPC_WRAPPERS \
	virtual void SetVisuals_Implementation(FEventEntryPopupSkinUIData skinUIData); \
 \
	DECLARE_FUNCTION(execDisableInputs); \
	DECLARE_FUNCTION(execDisableInstructionArchivesButton); \
	DECLARE_FUNCTION(execDisableInstructionCurrencyButton); \
	DECLARE_FUNCTION(execDisableInstructionStoreButton); \
	DECLARE_FUNCTION(execSetInstructionWidgetData); \
	DECLARE_FUNCTION(execSetItemsData); \
	DECLARE_FUNCTION(execSetPreviewAreaData); \
	DECLARE_FUNCTION(execSetScrollPrompt); \
	DECLARE_FUNCTION(execSetSelectedReward); \
	DECLARE_FUNCTION(execSetVisuals);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetVisuals_Implementation(FEventEntryPopupSkinUIData skinUIData); \
 \
	DECLARE_FUNCTION(execDisableInputs); \
	DECLARE_FUNCTION(execDisableInstructionArchivesButton); \
	DECLARE_FUNCTION(execDisableInstructionCurrencyButton); \
	DECLARE_FUNCTION(execDisableInstructionStoreButton); \
	DECLARE_FUNCTION(execSetInstructionWidgetData); \
	DECLARE_FUNCTION(execSetItemsData); \
	DECLARE_FUNCTION(execSetPreviewAreaData); \
	DECLARE_FUNCTION(execSetScrollPrompt); \
	DECLARE_FUNCTION(execSetSelectedReward); \
	DECLARE_FUNCTION(execSetVisuals);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h_19_EVENT_PARMS \
	struct EventEntryRewardsDisplayWidget_eventSetVisuals_Parms \
	{ \
		FEventEntryPopupSkinUIData skinUIData; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h_19_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEventEntryRewardsDisplayWidget(); \
	friend struct Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics; \
public: \
	DECLARE_CLASS(UEventEntryRewardsDisplayWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UEventEntryRewardsDisplayWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUEventEntryRewardsDisplayWidget(); \
	friend struct Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics; \
public: \
	DECLARE_CLASS(UEventEntryRewardsDisplayWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UEventEntryRewardsDisplayWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventEntryRewardsDisplayWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventEntryRewardsDisplayWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventEntryRewardsDisplayWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventEntryRewardsDisplayWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventEntryRewardsDisplayWidget(UEventEntryRewardsDisplayWidget&&); \
	NO_API UEventEntryRewardsDisplayWidget(const UEventEntryRewardsDisplayWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventEntryRewardsDisplayWidget(UEventEntryRewardsDisplayWidget&&); \
	NO_API UEventEntryRewardsDisplayWidget(const UEventEntryRewardsDisplayWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventEntryRewardsDisplayWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventEntryRewardsDisplayWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEventEntryRewardsDisplayWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___layoutMask() { return STRUCT_OFFSET(UEventEntryRewardsDisplayWidget, _layoutMask); } \
	FORCEINLINE static uint32 __PPO__RewardGrid() { return STRUCT_OFFSET(UEventEntryRewardsDisplayWidget, RewardGrid); } \
	FORCEINLINE static uint32 __PPO__PreviewArea() { return STRUCT_OFFSET(UEventEntryRewardsDisplayWidget, PreviewArea); } \
	FORCEINLINE static uint32 __PPO__InstructionWidget() { return STRUCT_OFFSET(UEventEntryRewardsDisplayWidget, InstructionWidget); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h_16_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h_19_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h_19_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h_19_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h_19_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h_19_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h_19_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UEventEntryRewardsDisplayWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EventEntryRewardsDisplayWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
