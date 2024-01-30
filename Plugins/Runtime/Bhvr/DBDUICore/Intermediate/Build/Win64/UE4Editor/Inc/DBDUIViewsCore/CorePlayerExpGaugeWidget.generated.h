// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUITweenInstance;
struct FPlayerLevelViewData;
#ifdef DBDUIVIEWSCORE_CorePlayerExpGaugeWidget_generated_h
#error "CorePlayerExpGaugeWidget.generated.h already included, missing '#pragma once' in CorePlayerExpGaugeWidget.h"
#endif
#define DBDUIVIEWSCORE_CorePlayerExpGaugeWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_16_DELEGATE \
static inline void FOnPlayerExpUpdateCompleted_DelegateWrapper(const FScriptDelegate& OnPlayerExpUpdateCompleted) \
{ \
	OnPlayerExpUpdateCompleted.ProcessDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_13_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_13_RPC_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_13_EVENT_PARMS \
	struct CorePlayerExpGaugeWidget_eventAdd_Parms \
	{ \
		int32 bonusXp; \
	}; \
	struct CorePlayerExpGaugeWidget_eventOnUpdateComplete_Parms \
	{ \
		UUITweenInstance* tween; \
	}; \
	struct CorePlayerExpGaugeWidget_eventOnUpdateProgress_Parms \
	{ \
		UUITweenInstance* tween; \
	}; \
	struct CorePlayerExpGaugeWidget_eventSetViewData_Parms \
	{ \
		FPlayerLevelViewData playerViewData; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCorePlayerExpGaugeWidget(); \
	friend struct Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics; \
public: \
	DECLARE_CLASS(UCorePlayerExpGaugeWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCorePlayerExpGaugeWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCorePlayerExpGaugeWidget(); \
	friend struct Z_Construct_UClass_UCorePlayerExpGaugeWidget_Statics; \
public: \
	DECLARE_CLASS(UCorePlayerExpGaugeWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCorePlayerExpGaugeWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCorePlayerExpGaugeWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCorePlayerExpGaugeWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCorePlayerExpGaugeWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCorePlayerExpGaugeWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCorePlayerExpGaugeWidget(UCorePlayerExpGaugeWidget&&); \
	NO_API UCorePlayerExpGaugeWidget(const UCorePlayerExpGaugeWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCorePlayerExpGaugeWidget(UCorePlayerExpGaugeWidget&&); \
	NO_API UCorePlayerExpGaugeWidget(const UCorePlayerExpGaugeWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCorePlayerExpGaugeWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCorePlayerExpGaugeWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCorePlayerExpGaugeWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___onPlayerExpUpdateCompletedDelegate() { return STRUCT_OFFSET(UCorePlayerExpGaugeWidget, _onPlayerExpUpdateCompletedDelegate); } \
	FORCEINLINE static uint32 __PPO__XpText() { return STRUCT_OFFSET(UCorePlayerExpGaugeWidget, XpText); } \
	FORCEINLINE static uint32 __PPO__ProgressText() { return STRUCT_OFFSET(UCorePlayerExpGaugeWidget, ProgressText); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_10_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_13_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_13_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_13_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_13_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_13_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCorePlayerExpGaugeWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerExpGaugeWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
