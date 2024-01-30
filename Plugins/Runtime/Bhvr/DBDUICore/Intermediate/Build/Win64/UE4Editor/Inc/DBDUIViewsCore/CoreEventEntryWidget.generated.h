// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreSelectableButtonWidget;
#ifdef DBDUIVIEWSCORE_CoreEventEntryWidget_generated_h
#error "CoreEventEntryWidget.generated.h already included, missing '#pragma once' in CoreEventEntryWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreEventEntryWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h_25_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h_25_RPC_WRAPPERS \
	virtual void SetUiTakeoverActive_Implementation(bool isActive); \
 \
	DECLARE_FUNCTION(execOnBackAction); \
	DECLARE_FUNCTION(execOnTabSelected); \
	DECLARE_FUNCTION(execSetUiTakeoverActive);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetUiTakeoverActive_Implementation(bool isActive); \
 \
	DECLARE_FUNCTION(execOnBackAction); \
	DECLARE_FUNCTION(execOnTabSelected); \
	DECLARE_FUNCTION(execSetUiTakeoverActive);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h_25_EVENT_PARMS \
	struct CoreEventEntryWidget_eventSetUiTakeoverActive_Parms \
	{ \
		bool isActive; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h_25_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreEventEntryWidget(); \
	friend struct Z_Construct_UClass_UCoreEventEntryWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreEventEntryWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreEventEntryWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreEventEntryWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUCoreEventEntryWidget(); \
	friend struct Z_Construct_UClass_UCoreEventEntryWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreEventEntryWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreEventEntryWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreEventEntryWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreEventEntryWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreEventEntryWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreEventEntryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreEventEntryWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreEventEntryWidget(UCoreEventEntryWidget&&); \
	NO_API UCoreEventEntryWidget(const UCoreEventEntryWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreEventEntryWidget(UCoreEventEntryWidget&&); \
	NO_API UCoreEventEntryWidget(const UCoreEventEntryWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreEventEntryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreEventEntryWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreEventEntryWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___viewData() { return STRUCT_OFFSET(UCoreEventEntryWidget, _viewData); } \
	FORCEINLINE static uint32 __PPO___eventSkinDataTable() { return STRUCT_OFFSET(UCoreEventEntryWidget, _eventSkinDataTable); } \
	FORCEINLINE static uint32 __PPO___skinData() { return STRUCT_OFFSET(UCoreEventEntryWidget, _skinData); } \
	FORCEINLINE static uint32 __PPO__TitleBanner() { return STRUCT_OFFSET(UCoreEventEntryWidget, TitleBanner); } \
	FORCEINLINE static uint32 __PPO__TitleImage() { return STRUCT_OFFSET(UCoreEventEntryWidget, TitleImage); } \
	FORCEINLINE static uint32 __PPO__EventDateText() { return STRUCT_OFFSET(UCoreEventEntryWidget, EventDateText); } \
	FORCEINLINE static uint32 __PPO__TabsContainer() { return STRUCT_OFFSET(UCoreEventEntryWidget, TabsContainer); } \
	FORCEINLINE static uint32 __PPO__MilestoneTracker() { return STRUCT_OFFSET(UCoreEventEntryWidget, MilestoneTracker); } \
	FORCEINLINE static uint32 __PPO__ScrollPrompt() { return STRUCT_OFFSET(UCoreEventEntryWidget, ScrollPrompt); } \
	FORCEINLINE static uint32 __PPO___eventEntryTabSelectedEvent() { return STRUCT_OFFSET(UCoreEventEntryWidget, _eventEntryTabSelectedEvent); } \
	FORCEINLINE static uint32 __PPO___backActionDelegate() { return STRUCT_OFFSET(UCoreEventEntryWidget, _backActionDelegate); } \
	FORCEINLINE static uint32 __PPO__RegressionButton() { return STRUCT_OFFSET(UCoreEventEntryWidget, RegressionButton); } \
	FORCEINLINE static uint32 __PPO__TitleText() { return STRUCT_OFFSET(UCoreEventEntryWidget, TitleText); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h_22_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h_25_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h_25_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h_25_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h_25_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h_25_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h_25_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h_25_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h_25_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h_25_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h_25_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreEventEntryWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreEventEntryWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
