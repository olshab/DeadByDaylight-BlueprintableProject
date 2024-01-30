// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWSCORE_CoreGenericPopupWidget_generated_h
#error "CoreGenericPopupWidget.generated.h already included, missing '#pragma once' in CoreGenericPopupWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreGenericPopupWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericPopupWidget_h_15_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericPopupWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAlternativeAction); \
	DECLARE_FUNCTION(execOnProgressionAction); \
	DECLARE_FUNCTION(execOnRegressionAction);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericPopupWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAlternativeAction); \
	DECLARE_FUNCTION(execOnProgressionAction); \
	DECLARE_FUNCTION(execOnRegressionAction);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericPopupWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreGenericPopupWidget(); \
	friend struct Z_Construct_UClass_UCoreGenericPopupWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreGenericPopupWidget, UCoreBasePopupWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreGenericPopupWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreGenericPopupWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericPopupWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCoreGenericPopupWidget(); \
	friend struct Z_Construct_UClass_UCoreGenericPopupWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreGenericPopupWidget, UCoreBasePopupWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreGenericPopupWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreGenericPopupWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericPopupWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreGenericPopupWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreGenericPopupWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreGenericPopupWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreGenericPopupWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreGenericPopupWidget(UCoreGenericPopupWidget&&); \
	NO_API UCoreGenericPopupWidget(const UCoreGenericPopupWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericPopupWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreGenericPopupWidget(UCoreGenericPopupWidget&&); \
	NO_API UCoreGenericPopupWidget(const UCoreGenericPopupWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreGenericPopupWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreGenericPopupWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreGenericPopupWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericPopupWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProgressionButton() { return STRUCT_OFFSET(UCoreGenericPopupWidget, ProgressionButton); } \
	FORCEINLINE static uint32 __PPO__RegressionButton() { return STRUCT_OFFSET(UCoreGenericPopupWidget, RegressionButton); } \
	FORCEINLINE static uint32 __PPO__AlternativeButton() { return STRUCT_OFFSET(UCoreGenericPopupWidget, AlternativeButton); } \
	FORCEINLINE static uint32 __PPO___popupActionDelegate() { return STRUCT_OFFSET(UCoreGenericPopupWidget, _popupActionDelegate); } \
	FORCEINLINE static uint32 __PPO___popupBackActionDelegate() { return STRUCT_OFFSET(UCoreGenericPopupWidget, _popupBackActionDelegate); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericPopupWidget_h_12_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericPopupWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericPopupWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericPopupWidget_h_15_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericPopupWidget_h_15_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericPopupWidget_h_15_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericPopupWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericPopupWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericPopupWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericPopupWidget_h_15_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericPopupWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericPopupWidget_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericPopupWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreGenericPopupWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericPopupWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
