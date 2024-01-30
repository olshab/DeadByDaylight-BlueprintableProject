// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCharacterRewardViewData;
#ifdef DBDUIVIEWSCORE_CoreCharacterRewardWidget_generated_h
#error "CoreCharacterRewardWidget.generated.h already included, missing '#pragma once' in CoreCharacterRewardWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreCharacterRewardWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h_11_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h_11_RPC_WRAPPERS \
	virtual void SetCharacterRewardData_Implementation(FCharacterRewardViewData const& characterRewardViewData); \
 \
	DECLARE_FUNCTION(execSetCharacterRewardData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetCharacterRewardData_Implementation(FCharacterRewardViewData const& characterRewardViewData); \
 \
	DECLARE_FUNCTION(execSetCharacterRewardData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h_11_EVENT_PARMS \
	struct CoreCharacterRewardWidget_eventSetCharacterRewardData_Parms \
	{ \
		FCharacterRewardViewData characterRewardViewData; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreCharacterRewardWidget(); \
	friend struct Z_Construct_UClass_UCoreCharacterRewardWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreCharacterRewardWidget, UCoreRewardWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreCharacterRewardWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCoreCharacterRewardWidget(); \
	friend struct Z_Construct_UClass_UCoreCharacterRewardWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreCharacterRewardWidget, UCoreRewardWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreCharacterRewardWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreCharacterRewardWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreCharacterRewardWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreCharacterRewardWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreCharacterRewardWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreCharacterRewardWidget(UCoreCharacterRewardWidget&&); \
	NO_API UCoreCharacterRewardWidget(const UCoreCharacterRewardWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreCharacterRewardWidget(UCoreCharacterRewardWidget&&); \
	NO_API UCoreCharacterRewardWidget(const UCoreCharacterRewardWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreCharacterRewardWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreCharacterRewardWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreCharacterRewardWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h_8_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h_11_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h_11_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h_11_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreCharacterRewardWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCharacterRewardWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
