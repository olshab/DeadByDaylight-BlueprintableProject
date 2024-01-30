// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreInputSwitcherWidget;
class UTexture2D;
class UCoreSelectableButtonWidget;
#ifdef DBDUIVIEWSCORE_CoreArchiveJournalWidget_generated_h
#error "CoreArchiveJournalWidget.generated.h already included, missing '#pragma once' in CoreArchiveJournalWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreArchiveJournalWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h_25_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitializeArrow); \
	DECLARE_FUNCTION(execOnFirstJournalEntryUnlocked); \
	DECLARE_FUNCTION(execOnJournalEntriesUnlocked); \
	DECLARE_FUNCTION(execOnLeftArrowTriggered); \
	DECLARE_FUNCTION(execOnRewardImageLoaded); \
	DECLARE_FUNCTION(execOnRightArrowTriggered); \
	DECLARE_FUNCTION(execOnVignetteButtonSelected); \
	DECLARE_FUNCTION(execOnVignetteCinematicSelected); \
	DECLARE_FUNCTION(execOnVignetteEntrySelected); \
	DECLARE_FUNCTION(execOnVoiceOverAutoPlay); \
	DECLARE_FUNCTION(execOnVoiceOverPlay); \
	DECLARE_FUNCTION(execShowImageViewer);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitializeArrow); \
	DECLARE_FUNCTION(execOnFirstJournalEntryUnlocked); \
	DECLARE_FUNCTION(execOnJournalEntriesUnlocked); \
	DECLARE_FUNCTION(execOnLeftArrowTriggered); \
	DECLARE_FUNCTION(execOnRewardImageLoaded); \
	DECLARE_FUNCTION(execOnRightArrowTriggered); \
	DECLARE_FUNCTION(execOnVignetteButtonSelected); \
	DECLARE_FUNCTION(execOnVignetteCinematicSelected); \
	DECLARE_FUNCTION(execOnVignetteEntrySelected); \
	DECLARE_FUNCTION(execOnVoiceOverAutoPlay); \
	DECLARE_FUNCTION(execOnVoiceOverPlay); \
	DECLARE_FUNCTION(execShowImageViewer);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h_25_EVENT_PARMS \
	struct CoreArchiveJournalWidget_eventSetBottomFogOffset_Parms \
	{ \
		bool hasAudio; \
	}; \
	struct CoreArchiveJournalWidget_eventSetEntryImage_Parms \
	{ \
		FText titleText; \
		FText descriptionText; \
		TSoftObjectPtr<UTexture2D> rewardImage; \
		float textureOffset; \
	}; \
	struct CoreArchiveJournalWidget_eventSetEntryText_Parms \
	{ \
		FText titleText; \
		FText descriptionText; \
	}; \
	struct CoreArchiveJournalWidget_eventSetTopFogOffset_Parms \
	{ \
		bool hasTitle; \
		bool hasDescription; \
	}; \
	struct CoreArchiveJournalWidget_eventSetVignetteText_Parms \
	{ \
		FText titleText; \
		FText subtitleText; \
	}; \
	struct CoreArchiveJournalWidget_eventSetVoiceOverButtonsVisibility_Parms \
	{ \
		bool isVisible; \
	}; \
	struct CoreArchiveJournalWidget_eventSetVoiceOverText_Parms \
	{ \
		FText playVoiceOverText; \
		FText stopVoiceOverText; \
		FText autoplayVoiceOverText; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h_25_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreArchiveJournalWidget(); \
	friend struct Z_Construct_UClass_UCoreArchiveJournalWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveJournalWidget, UCoreTabContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveJournalWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreArchiveJournalWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUCoreArchiveJournalWidget(); \
	friend struct Z_Construct_UClass_UCoreArchiveJournalWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveJournalWidget, UCoreTabContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveJournalWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreArchiveJournalWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreArchiveJournalWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreArchiveJournalWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveJournalWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveJournalWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveJournalWidget(UCoreArchiveJournalWidget&&); \
	NO_API UCoreArchiveJournalWidget(const UCoreArchiveJournalWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveJournalWidget(UCoreArchiveJournalWidget&&); \
	NO_API UCoreArchiveJournalWidget(const UCoreArchiveJournalWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveJournalWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveJournalWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreArchiveJournalWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VignetteButtonContainer() { return STRUCT_OFFSET(UCoreArchiveJournalWidget, VignetteButtonContainer); } \
	FORCEINLINE static uint32 __PPO__VignetteEntryContainer() { return STRUCT_OFFSET(UCoreArchiveJournalWidget, VignetteEntryContainer); } \
	FORCEINLINE static uint32 __PPO__VignetteCinematicsContainer() { return STRUCT_OFFSET(UCoreArchiveJournalWidget, VignetteCinematicsContainer); } \
	FORCEINLINE static uint32 __PPO__LeftArrowInputSwitcher() { return STRUCT_OFFSET(UCoreArchiveJournalWidget, LeftArrowInputSwitcher); } \
	FORCEINLINE static uint32 __PPO__RightArrowInputSwitcher() { return STRUCT_OFFSET(UCoreArchiveJournalWidget, RightArrowInputSwitcher); } \
	FORCEINLINE static uint32 __PPO__AreInputsEnabled() { return STRUCT_OFFSET(UCoreArchiveJournalWidget, AreInputsEnabled); } \
	FORCEINLINE static uint32 __PPO__DebugRewardImage() { return STRUCT_OFFSET(UCoreArchiveJournalWidget, DebugRewardImage); } \
	FORCEINLINE static uint32 __PPO__RewardImageMaxDescriptionLength() { return STRUCT_OFFSET(UCoreArchiveJournalWidget, RewardImageMaxDescriptionLength); } \
	FORCEINLINE static uint32 __PPO___vignetteSelectedDelegate() { return STRUCT_OFFSET(UCoreArchiveJournalWidget, _vignetteSelectedDelegate); } \
	FORCEINLINE static uint32 __PPO___vignetteEntrySelectedDelegate() { return STRUCT_OFFSET(UCoreArchiveJournalWidget, _vignetteEntrySelectedDelegate); } \
	FORCEINLINE static uint32 __PPO___vignetteCinematicPlayedDelegate() { return STRUCT_OFFSET(UCoreArchiveJournalWidget, _vignetteCinematicPlayedDelegate); } \
	FORCEINLINE static uint32 __PPO___vignetteVoiceOverPlayedDelegate() { return STRUCT_OFFSET(UCoreArchiveJournalWidget, _vignetteVoiceOverPlayedDelegate); } \
	FORCEINLINE static uint32 __PPO___vignetteVoiceOverAutoplayDelegate() { return STRUCT_OFFSET(UCoreArchiveJournalWidget, _vignetteVoiceOverAutoplayDelegate); } \
	FORCEINLINE static uint32 __PPO___vignetteShowImageViewerDelegate() { return STRUCT_OFFSET(UCoreArchiveJournalWidget, _vignetteShowImageViewerDelegate); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h_22_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h_25_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h_25_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h_25_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h_25_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h_25_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h_25_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h_25_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h_25_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h_25_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h_25_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreArchiveJournalWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
