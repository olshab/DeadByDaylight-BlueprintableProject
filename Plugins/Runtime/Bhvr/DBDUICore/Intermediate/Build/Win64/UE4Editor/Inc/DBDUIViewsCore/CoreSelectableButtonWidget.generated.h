// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreSelectableButtonWidget;
class UMaterialInterface;
#ifdef DBDUIVIEWSCORE_CoreSelectableButtonWidget_generated_h
#error "CoreSelectableButtonWidget.generated.h already included, missing '#pragma once' in CoreSelectableButtonWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreSelectableButtonWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_18_DELEGATE \
struct CoreSelectableButtonWidget_eventOnSelectedAgainDelegate_Parms \
{ \
	UCoreSelectableButtonWidget* buttonTarget; \
}; \
static inline void FOnSelectedAgainDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSelectedAgainDelegate, UCoreSelectableButtonWidget* buttonTarget) \
{ \
	CoreSelectableButtonWidget_eventOnSelectedAgainDelegate_Parms Parms; \
	Parms.buttonTarget=buttonTarget; \
	OnSelectedAgainDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_16_DELEGATE \
struct CoreSelectableButtonWidget_eventOnSelectedChangedDelegate_Parms \
{ \
	UCoreSelectableButtonWidget* buttonTarget; \
	bool isSelected; \
}; \
static inline void FOnSelectedChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSelectedChangedDelegate, UCoreSelectableButtonWidget* buttonTarget, bool isSelected) \
{ \
	CoreSelectableButtonWidget_eventOnSelectedChangedDelegate_Parms Parms; \
	Parms.buttonTarget=buttonTarget; \
	Parms.isSelected=isSelected ? true : false; \
	OnSelectedChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsSelectable); \
	DECLARE_FUNCTION(execIsSelected); \
	DECLARE_FUNCTION(execSetSelectable); \
	DECLARE_FUNCTION(execSetSelected);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsSelectable); \
	DECLARE_FUNCTION(execIsSelected); \
	DECLARE_FUNCTION(execSetSelectable); \
	DECLARE_FUNCTION(execSetSelected);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_EVENT_PARMS \
	struct CoreSelectableButtonWidget_eventOnSelectedChanged_Parms \
	{ \
		bool isSelected; \
	}; \
	struct CoreSelectableButtonWidget_eventUpdateBackgroundSkin_Parms \
	{ \
		UMaterialInterface* skinMaterial; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreSelectableButtonWidget(); \
	friend struct Z_Construct_UClass_UCoreSelectableButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreSelectableButtonWidget, UCoreButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreSelectableButtonWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCoreSelectableButtonWidget(); \
	friend struct Z_Construct_UClass_UCoreSelectableButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreSelectableButtonWidget, UCoreButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreSelectableButtonWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreSelectableButtonWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreSelectableButtonWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreSelectableButtonWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreSelectableButtonWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreSelectableButtonWidget(UCoreSelectableButtonWidget&&); \
	NO_API UCoreSelectableButtonWidget(const UCoreSelectableButtonWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreSelectableButtonWidget(UCoreSelectableButtonWidget&&); \
	NO_API UCoreSelectableButtonWidget(const UCoreSelectableButtonWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreSelectableButtonWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreSelectableButtonWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreSelectableButtonWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___analyticsName() { return STRUCT_OFFSET(UCoreSelectableButtonWidget, _analyticsName); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_10_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreSelectableButtonWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
