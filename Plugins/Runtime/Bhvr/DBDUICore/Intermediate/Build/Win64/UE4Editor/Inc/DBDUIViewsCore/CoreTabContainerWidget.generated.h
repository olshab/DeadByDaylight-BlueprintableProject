// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreTabWidget;
struct FTabWidgetData;
class UCoreSelectableButtonWidget;
class UMaterialInterface;
#ifdef DBDUIVIEWSCORE_CoreTabContainerWidget_generated_h
#error "CoreTabContainerWidget.generated.h already included, missing '#pragma once' in CoreTabContainerWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreTabContainerWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h_19_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h_19_RPC_WRAPPERS \
	virtual void SetUiTakeoverActive_Implementation(bool isActive); \
 \
	DECLARE_FUNCTION(execGetTab); \
	DECLARE_FUNCTION(execGetTabIndex); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execLayOutTabs); \
	DECLARE_FUNCTION(execOnTabSelected); \
	DECLARE_FUNCTION(execRemoveTabs); \
	DECLARE_FUNCTION(execSetNotificationVisibility); \
	DECLARE_FUNCTION(execSetTabEnabled); \
	DECLARE_FUNCTION(execSetTabVisible); \
	DECLARE_FUNCTION(execSetUiTakeoverActive); \
	DECLARE_FUNCTION(execSetUseControllerTabSwitching); \
	DECLARE_FUNCTION(execUpdateBackgroundSkin);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetUiTakeoverActive_Implementation(bool isActive); \
 \
	DECLARE_FUNCTION(execGetTab); \
	DECLARE_FUNCTION(execGetTabIndex); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execLayOutTabs); \
	DECLARE_FUNCTION(execOnTabSelected); \
	DECLARE_FUNCTION(execRemoveTabs); \
	DECLARE_FUNCTION(execSetNotificationVisibility); \
	DECLARE_FUNCTION(execSetTabEnabled); \
	DECLARE_FUNCTION(execSetTabVisible); \
	DECLARE_FUNCTION(execSetUiTakeoverActive); \
	DECLARE_FUNCTION(execSetUseControllerTabSwitching); \
	DECLARE_FUNCTION(execUpdateBackgroundSkin);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h_19_EVENT_PARMS \
	struct CoreTabContainerWidget_eventSetUiTakeoverActive_Parms \
	{ \
		bool isActive; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h_19_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreTabContainerWidget(); \
	friend struct Z_Construct_UClass_UCoreTabContainerWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreTabContainerWidget, UCoreButtonSelector, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreTabContainerWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUCoreTabContainerWidget(); \
	friend struct Z_Construct_UClass_UCoreTabContainerWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreTabContainerWidget, UCoreButtonSelector, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreTabContainerWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreTabContainerWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreTabContainerWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreTabContainerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreTabContainerWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreTabContainerWidget(UCoreTabContainerWidget&&); \
	NO_API UCoreTabContainerWidget(const UCoreTabContainerWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreTabContainerWidget(UCoreTabContainerWidget&&); \
	NO_API UCoreTabContainerWidget(const UCoreTabContainerWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreTabContainerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreTabContainerWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreTabContainerWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AlignHorizontally() { return STRUCT_OFFSET(UCoreTabContainerWidget, AlignHorizontally); } \
	FORCEINLINE static uint32 __PPO__TabPadding() { return STRUCT_OFFSET(UCoreTabContainerWidget, TabPadding); } \
	FORCEINLINE static uint32 __PPO__CoreTabClass() { return STRUCT_OFFSET(UCoreTabContainerWidget, CoreTabClass); } \
	FORCEINLINE static uint32 __PPO__TabContainer() { return STRUCT_OFFSET(UCoreTabContainerWidget, TabContainer); } \
	FORCEINLINE static uint32 __PPO__UseControllerTabSwitching() { return STRUCT_OFFSET(UCoreTabContainerWidget, UseControllerTabSwitching); } \
	FORCEINLINE static uint32 __PPO__CanLoop() { return STRUCT_OFFSET(UCoreTabContainerWidget, CanLoop); } \
	FORCEINLINE static uint32 __PPO__FillContainerSpace() { return STRUCT_OFFSET(UCoreTabContainerWidget, FillContainerSpace); } \
	FORCEINLINE static uint32 __PPO__SendAnalyticsData() { return STRUCT_OFFSET(UCoreTabContainerWidget, SendAnalyticsData); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h_16_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h_19_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h_19_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h_19_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h_19_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h_19_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h_19_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreTabContainerWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTabContainerWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
