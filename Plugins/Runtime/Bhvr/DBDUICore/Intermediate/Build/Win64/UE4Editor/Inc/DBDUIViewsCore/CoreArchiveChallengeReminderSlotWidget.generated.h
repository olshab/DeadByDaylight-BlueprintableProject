// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPlayerRole : uint8;
struct FArchiveChallengeReminderViewData;
#ifdef DBDUIVIEWSCORE_CoreArchiveChallengeReminderSlotWidget_generated_h
#error "CoreArchiveChallengeReminderSlotWidget.generated.h already included, missing '#pragma once' in CoreArchiveChallengeReminderSlotWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreArchiveChallengeReminderSlotWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h_17_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearData); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execSetSlotSelectorState);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearData); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execSetSlotSelectorState);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h_17_EVENT_PARMS \
	struct CoreArchiveChallengeReminderSlotWidget_eventSetQuestNodeHoverEffect_Parms \
	{ \
		bool isHovered; \
	}; \
	struct CoreArchiveChallengeReminderSlotWidget_eventSwapChallenge_Parms \
	{ \
		FArchiveChallengeReminderViewData data; \
	}; \
	struct CoreArchiveChallengeReminderSlotWidget_eventUpdateActiveState_Parms \
	{ \
		bool isActive; \
		bool playAnimation; \
	}; \
	struct CoreArchiveChallengeReminderSlotWidget_eventUpdateProgressBar_Parms \
	{ \
		float progress; \
	}; \
	struct CoreArchiveChallengeReminderSlotWidget_eventUpdateVisualState_Parms \
	{ \
		FArchiveChallengeReminderViewData data; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreArchiveChallengeReminderSlotWidget(); \
	friend struct Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveChallengeReminderSlotWidget, UCoreSelectableButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveChallengeReminderSlotWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCoreArchiveChallengeReminderSlotWidget(); \
	friend struct Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveChallengeReminderSlotWidget, UCoreSelectableButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveChallengeReminderSlotWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreArchiveChallengeReminderSlotWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreArchiveChallengeReminderSlotWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveChallengeReminderSlotWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveChallengeReminderSlotWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveChallengeReminderSlotWidget(UCoreArchiveChallengeReminderSlotWidget&&); \
	NO_API UCoreArchiveChallengeReminderSlotWidget(const UCoreArchiveChallengeReminderSlotWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveChallengeReminderSlotWidget(UCoreArchiveChallengeReminderSlotWidget&&); \
	NO_API UCoreArchiveChallengeReminderSlotWidget(const UCoreArchiveChallengeReminderSlotWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveChallengeReminderSlotWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveChallengeReminderSlotWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreArchiveChallengeReminderSlotWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Node() { return STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, Node); } \
	FORCEINLINE static uint32 __PPO__EmptySlotImage() { return STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, EmptySlotImage); } \
	FORCEINLINE static uint32 __PPO__InactiveBG() { return STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, InactiveBG); } \
	FORCEINLINE static uint32 __PPO__ActiveBG() { return STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, ActiveBG); } \
	FORCEINLINE static uint32 __PPO__SmokeBackground() { return STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, SmokeBackground); } \
	FORCEINLINE static uint32 __PPO__ProgressBar() { return STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, ProgressBar); } \
	FORCEINLINE static uint32 __PPO__SelectorHighlight() { return STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, SelectorHighlight); } \
	FORCEINLINE static uint32 __PPO__TitleTB() { return STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, TitleTB); } \
	FORCEINLINE static uint32 __PPO__SubtitleTB() { return STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, SubtitleTB); } \
	FORCEINLINE static uint32 __PPO__InactiveTitleTB() { return STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, InactiveTitleTB); } \
	FORCEINLINE static uint32 __PPO__InactiveSubtitleTB() { return STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, InactiveSubtitleTB); } \
	FORCEINLINE static uint32 __PPO__OnHoverBorder() { return STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, OnHoverBorder); } \
	FORCEINLINE static uint32 __PPO___slotRole() { return STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, _slotRole); } \
	FORCEINLINE static uint32 __PPO___hasActiveHoverEffect() { return STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, _hasActiveHoverEffect); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h_14_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h_17_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h_17_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h_17_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h_17_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h_17_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreArchiveChallengeReminderSlotWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveChallengeReminderSlotWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
