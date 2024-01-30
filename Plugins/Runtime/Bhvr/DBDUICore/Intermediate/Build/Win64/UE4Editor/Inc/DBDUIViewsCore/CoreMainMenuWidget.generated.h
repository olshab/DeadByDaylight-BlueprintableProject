// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreButtonWidget;
#ifdef DBDUIVIEWSCORE_CoreMainMenuWidget_generated_h
#error "CoreMainMenuWidget.generated.h already included, missing '#pragma once' in CoreMainMenuWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreMainMenuWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h_14_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnArchivesButtonClicked); \
	DECLARE_FUNCTION(execOnCreditsButtonClicked); \
	DECLARE_FUNCTION(execOnDailyRitualsButtonClicked); \
	DECLARE_FUNCTION(execOnEventButtonClicked); \
	DECLARE_FUNCTION(execOnExitButtonClicked); \
	DECLARE_FUNCTION(execOnFriendsButtonClicked); \
	DECLARE_FUNCTION(execOnNewsButtonClicked); \
	DECLARE_FUNCTION(execOnPlayButtonClicked); \
	DECLARE_FUNCTION(execOnPlayCustomButtonClicked); \
	DECLARE_FUNCTION(execOnPlayKillerButtonClicked); \
	DECLARE_FUNCTION(execOnPlayLimitedTimeEventButtonClicked); \
	DECLARE_FUNCTION(execOnPlayLimitedTimeEventKillerButtonClicked); \
	DECLARE_FUNCTION(execOnPlayLimitedTimeEventSurvivorButtonClicked); \
	DECLARE_FUNCTION(execOnPlaySurvivorButtonClicked); \
	DECLARE_FUNCTION(execOnSettingsButtonClicked); \
	DECLARE_FUNCTION(execOnStoreButtonClicked); \
	DECLARE_FUNCTION(execOnTutorialButtonClicked);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnArchivesButtonClicked); \
	DECLARE_FUNCTION(execOnCreditsButtonClicked); \
	DECLARE_FUNCTION(execOnDailyRitualsButtonClicked); \
	DECLARE_FUNCTION(execOnEventButtonClicked); \
	DECLARE_FUNCTION(execOnExitButtonClicked); \
	DECLARE_FUNCTION(execOnFriendsButtonClicked); \
	DECLARE_FUNCTION(execOnNewsButtonClicked); \
	DECLARE_FUNCTION(execOnPlayButtonClicked); \
	DECLARE_FUNCTION(execOnPlayCustomButtonClicked); \
	DECLARE_FUNCTION(execOnPlayKillerButtonClicked); \
	DECLARE_FUNCTION(execOnPlayLimitedTimeEventButtonClicked); \
	DECLARE_FUNCTION(execOnPlayLimitedTimeEventKillerButtonClicked); \
	DECLARE_FUNCTION(execOnPlayLimitedTimeEventSurvivorButtonClicked); \
	DECLARE_FUNCTION(execOnPlaySurvivorButtonClicked); \
	DECLARE_FUNCTION(execOnSettingsButtonClicked); \
	DECLARE_FUNCTION(execOnStoreButtonClicked); \
	DECLARE_FUNCTION(execOnTutorialButtonClicked);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h_14_EVENT_PARMS \
	struct CoreMainMenuWidget_eventShowLimitedTimeEventSubMenu_Parms \
	{ \
		bool open; \
	}; \
	struct CoreMainMenuWidget_eventShowPlaySubMenu_Parms \
	{ \
		bool open; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreMainMenuWidget(); \
	friend struct Z_Construct_UClass_UCoreMainMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreMainMenuWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreMainMenuWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreMainMenuWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCoreMainMenuWidget(); \
	friend struct Z_Construct_UClass_UCoreMainMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreMainMenuWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreMainMenuWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreMainMenuWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreMainMenuWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreMainMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreMainMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreMainMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreMainMenuWidget(UCoreMainMenuWidget&&); \
	NO_API UCoreMainMenuWidget(const UCoreMainMenuWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreMainMenuWidget(UCoreMainMenuWidget&&); \
	NO_API UCoreMainMenuWidget(const UCoreMainMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreMainMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreMainMenuWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreMainMenuWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayButton() { return STRUCT_OFFSET(UCoreMainMenuWidget, PlayButton); } \
	FORCEINLINE static uint32 __PPO__PlayLimitedTimeEventButton() { return STRUCT_OFFSET(UCoreMainMenuWidget, PlayLimitedTimeEventButton); } \
	FORCEINLINE static uint32 __PPO__TutorialButton() { return STRUCT_OFFSET(UCoreMainMenuWidget, TutorialButton); } \
	FORCEINLINE static uint32 __PPO__ArchivesButton() { return STRUCT_OFFSET(UCoreMainMenuWidget, ArchivesButton); } \
	FORCEINLINE static uint32 __PPO__StoreButton() { return STRUCT_OFFSET(UCoreMainMenuWidget, StoreButton); } \
	FORCEINLINE static uint32 __PPO__PlayKillerButton() { return STRUCT_OFFSET(UCoreMainMenuWidget, PlayKillerButton); } \
	FORCEINLINE static uint32 __PPO__PlaySurvivorButton() { return STRUCT_OFFSET(UCoreMainMenuWidget, PlaySurvivorButton); } \
	FORCEINLINE static uint32 __PPO__PlayCustomGameButton() { return STRUCT_OFFSET(UCoreMainMenuWidget, PlayCustomGameButton); } \
	FORCEINLINE static uint32 __PPO__PlayLimitedTimeEventKillerButton() { return STRUCT_OFFSET(UCoreMainMenuWidget, PlayLimitedTimeEventKillerButton); } \
	FORCEINLINE static uint32 __PPO__PlayLimitedTimeEventSurvivorButton() { return STRUCT_OFFSET(UCoreMainMenuWidget, PlayLimitedTimeEventSurvivorButton); } \
	FORCEINLINE static uint32 __PPO__EventButton() { return STRUCT_OFFSET(UCoreMainMenuWidget, EventButton); } \
	FORCEINLINE static uint32 __PPO__DailyRitualsButton() { return STRUCT_OFFSET(UCoreMainMenuWidget, DailyRitualsButton); } \
	FORCEINLINE static uint32 __PPO__FriendsButton() { return STRUCT_OFFSET(UCoreMainMenuWidget, FriendsButton); } \
	FORCEINLINE static uint32 __PPO__SettingsButton() { return STRUCT_OFFSET(UCoreMainMenuWidget, SettingsButton); } \
	FORCEINLINE static uint32 __PPO__NewsButton() { return STRUCT_OFFSET(UCoreMainMenuWidget, NewsButton); } \
	FORCEINLINE static uint32 __PPO__CreditsButton() { return STRUCT_OFFSET(UCoreMainMenuWidget, CreditsButton); } \
	FORCEINLINE static uint32 __PPO__ExitButton() { return STRUCT_OFFSET(UCoreMainMenuWidget, ExitButton); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h_11_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h_14_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h_14_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h_14_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreMainMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMainMenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
