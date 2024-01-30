// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStoreCategoryViewData;
#ifdef DBDUIVIEWSCORE_CoreStoreCategoryWidget_generated_h
#error "CoreStoreCategoryWidget.generated.h already included, missing '#pragma once' in CoreStoreCategoryWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreStoreCategoryWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h_14_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h_14_RPC_WRAPPERS \
	virtual void SetData_Implementation(FStoreCategoryViewData const& data); \
 \
	DECLARE_FUNCTION(execSetData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetData_Implementation(FStoreCategoryViewData const& data); \
 \
	DECLARE_FUNCTION(execSetData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h_14_EVENT_PARMS \
	struct CoreStoreCategoryWidget_eventSetData_Parms \
	{ \
		FStoreCategoryViewData data; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreStoreCategoryWidget(); \
	friend struct Z_Construct_UClass_UCoreStoreCategoryWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStoreCategoryWidget, UCoreSelectableButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStoreCategoryWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCoreStoreCategoryWidget(); \
	friend struct Z_Construct_UClass_UCoreStoreCategoryWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStoreCategoryWidget, UCoreSelectableButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStoreCategoryWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreStoreCategoryWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreStoreCategoryWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStoreCategoryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStoreCategoryWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStoreCategoryWidget(UCoreStoreCategoryWidget&&); \
	NO_API UCoreStoreCategoryWidget(const UCoreStoreCategoryWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStoreCategoryWidget(UCoreStoreCategoryWidget&&); \
	NO_API UCoreStoreCategoryWidget(const UCoreStoreCategoryWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStoreCategoryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStoreCategoryWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreStoreCategoryWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnHoverBorder() { return STRUCT_OFFSET(UCoreStoreCategoryWidget, OnHoverBorder); } \
	FORCEINLINE static uint32 __PPO___category() { return STRUCT_OFFSET(UCoreStoreCategoryWidget, _category); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h_11_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h_14_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h_14_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h_14_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreStoreCategoryWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCategoryWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
