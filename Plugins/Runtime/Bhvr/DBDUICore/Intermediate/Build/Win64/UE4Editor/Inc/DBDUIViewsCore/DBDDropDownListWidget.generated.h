// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTabWidgetData;
class UCoreButtonWidget;
class UCoreSelectableButtonWidget;
struct FPointerEvent;
#ifdef DBDUIVIEWSCORE_DBDDropDownListWidget_generated_h
#error "DBDDropDownListWidget.generated.h already included, missing '#pragma once' in DBDDropDownListWidget.h"
#endif
#define DBDUIVIEWSCORE_DBDDropDownListWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDDropDownListWidget_h_18_DELEGATE \
struct DBDDropDownListWidget_eventOnSelectedOptionDelegate_Parms \
{ \
	FTabWidgetData buttonData; \
}; \
static inline void FOnSelectedOptionDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSelectedOptionDelegate, FTabWidgetData buttonData) \
{ \
	DBDDropDownListWidget_eventOnSelectedOptionDelegate_Parms Parms; \
	Parms.buttonData=buttonData; \
	OnSelectedOptionDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDDropDownListWidget_h_15_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDDropDownListWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBindToTrigger); \
	DECLARE_FUNCTION(execHideDropDownList); \
	DECLARE_FUNCTION(execOnOptionSelected); \
	DECLARE_FUNCTION(execOnTriggerClicked); \
	DECLARE_FUNCTION(execOnUserClicked); \
	DECLARE_FUNCTION(execUnbindFromTrigger); \
	DECLARE_FUNCTION(execUpdateDropDown);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDDropDownListWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBindToTrigger); \
	DECLARE_FUNCTION(execHideDropDownList); \
	DECLARE_FUNCTION(execOnOptionSelected); \
	DECLARE_FUNCTION(execOnTriggerClicked); \
	DECLARE_FUNCTION(execOnUserClicked); \
	DECLARE_FUNCTION(execUnbindFromTrigger); \
	DECLARE_FUNCTION(execUpdateDropDown);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDDropDownListWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDDropDownListWidget(); \
	friend struct Z_Construct_UClass_UDBDDropDownListWidget_Statics; \
public: \
	DECLARE_CLASS(UDBDDropDownListWidget, UCoreTabContainerWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UDBDDropDownListWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDDropDownListWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDBDDropDownListWidget(); \
	friend struct Z_Construct_UClass_UDBDDropDownListWidget_Statics; \
public: \
	DECLARE_CLASS(UDBDDropDownListWidget, UCoreTabContainerWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UDBDDropDownListWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDDropDownListWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDDropDownListWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDDropDownListWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDDropDownListWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDDropDownListWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDDropDownListWidget(UDBDDropDownListWidget&&); \
	NO_API UDBDDropDownListWidget(const UDBDDropDownListWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDDropDownListWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDDropDownListWidget(UDBDDropDownListWidget&&); \
	NO_API UDBDDropDownListWidget(const UDBDDropDownListWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDDropDownListWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDDropDownListWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDDropDownListWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDDropDownListWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___triggerButton() { return STRUCT_OFFSET(UDBDDropDownListWidget, _triggerButton); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDDropDownListWidget_h_12_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDDropDownListWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDDropDownListWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDDropDownListWidget_h_15_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDDropDownListWidget_h_15_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDDropDownListWidget_h_15_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDDropDownListWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDDropDownListWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDDropDownListWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDDropDownListWidget_h_15_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDDropDownListWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDDropDownListWidget_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDDropDownListWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UDBDDropDownListWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDDropDownListWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
