// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EArchiveMenuState : uint8;
class UCoreButtonWidget;
class UCoreSelectableButtonWidget;
enum class EPlayerRole : uint8;
#ifdef DBDUIVIEWSCORE_CoreArchiveMenuWidget_generated_h
#error "CoreArchiveMenuWidget.generated.h already included, missing '#pragma once' in CoreArchiveMenuWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreArchiveMenuWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h_26_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTimeRemainingLabelFromMenuState); \
	DECLARE_FUNCTION(execOnChallengeReminderClick); \
	DECLARE_FUNCTION(execOnInfoButtonClicked); \
	DECLARE_FUNCTION(execOnMenuTabSelected); \
	DECLARE_FUNCTION(execOnMenuTabSelectedAgain); \
	DECLARE_FUNCTION(execOnSlotSelected); \
	DECLARE_FUNCTION(execOnSlotSelectionCancelled);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTimeRemainingLabelFromMenuState); \
	DECLARE_FUNCTION(execOnChallengeReminderClick); \
	DECLARE_FUNCTION(execOnInfoButtonClicked); \
	DECLARE_FUNCTION(execOnMenuTabSelected); \
	DECLARE_FUNCTION(execOnMenuTabSelectedAgain); \
	DECLARE_FUNCTION(execOnSlotSelected); \
	DECLARE_FUNCTION(execOnSlotSelectionCancelled);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h_26_EVENT_PARMS \
	struct CoreArchiveMenuWidget_eventSetScrollData_Parms \
	{ \
		FText vignetteListScrollPromptText; \
		FText journalEntryScrollPromptText; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h_26_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreArchiveMenuWidget(); \
	friend struct Z_Construct_UClass_UCoreArchiveMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveMenuWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveMenuWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreArchiveMenuWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUCoreArchiveMenuWidget(); \
	friend struct Z_Construct_UClass_UCoreArchiveMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveMenuWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveMenuWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreArchiveMenuWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreArchiveMenuWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreArchiveMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveMenuWidget(UCoreArchiveMenuWidget&&); \
	NO_API UCoreArchiveMenuWidget(const UCoreArchiveMenuWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveMenuWidget(UCoreArchiveMenuWidget&&); \
	NO_API UCoreArchiveMenuWidget(const UCoreArchiveMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveMenuWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreArchiveMenuWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___backActionDelegate() { return STRUCT_OFFSET(UCoreArchiveMenuWidget, _backActionDelegate); } \
	FORCEINLINE static uint32 __PPO___infoClickedDelegate() { return STRUCT_OFFSET(UCoreArchiveMenuWidget, _infoClickedDelegate); } \
	FORCEINLINE static uint32 __PPO___slotSelectorClosedDelegate() { return STRUCT_OFFSET(UCoreArchiveMenuWidget, _slotSelectorClosedDelegate); } \
	FORCEINLINE static uint32 __PPO__MenuTabSelectedDelegate() { return STRUCT_OFFSET(UCoreArchiveMenuWidget, MenuTabSelectedDelegate); } \
	FORCEINLINE static uint32 __PPO___challengeReminderClickedDelegate() { return STRUCT_OFFSET(UCoreArchiveMenuWidget, _challengeReminderClickedDelegate); } \
	FORCEINLINE static uint32 __PPO___slotSelectionSelectedDelegate() { return STRUCT_OFFSET(UCoreArchiveMenuWidget, _slotSelectionSelectedDelegate); } \
	FORCEINLINE static uint32 __PPO___riftRemainingTimeText() { return STRUCT_OFFSET(UCoreArchiveMenuWidget, _riftRemainingTimeText); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h_23_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h_26_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h_26_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h_26_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h_26_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h_26_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h_26_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h_26_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h_26_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h_26_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h_26_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreArchiveMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveMenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
