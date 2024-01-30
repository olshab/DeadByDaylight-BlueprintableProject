// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRewardViewData;
#ifdef DBDUIVIEWSCORE_CoreRewardWidget_generated_h
#error "CoreRewardWidget.generated.h already included, missing '#pragma once' in CoreRewardWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreRewardWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h_16_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h_16_RPC_WRAPPERS \
	virtual void SetRewardData_Implementation(FRewardViewData const& rewardData); \
 \
	DECLARE_FUNCTION(execSetIsLocked); \
	DECLARE_FUNCTION(execSetRewardData); \
	DECLARE_FUNCTION(execSetRewardScale);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetRewardData_Implementation(FRewardViewData const& rewardData); \
 \
	DECLARE_FUNCTION(execSetIsLocked); \
	DECLARE_FUNCTION(execSetRewardData); \
	DECLARE_FUNCTION(execSetRewardScale);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h_16_EVENT_PARMS \
	struct CoreRewardWidget_eventSetRewardData_Parms \
	{ \
		FRewardViewData rewardData; \
	}; \
	struct CoreRewardWidget_eventSetSmallTemplate_Parms \
	{ \
		bool useSmallTemplate; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h_16_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreRewardWidget(); \
	friend struct Z_Construct_UClass_UCoreRewardWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreRewardWidget, UCoreSelectableButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreRewardWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCoreRewardWidget(); \
	friend struct Z_Construct_UClass_UCoreRewardWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreRewardWidget, UCoreSelectableButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreRewardWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreRewardWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreRewardWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreRewardWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreRewardWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreRewardWidget(UCoreRewardWidget&&); \
	NO_API UCoreRewardWidget(const UCoreRewardWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreRewardWidget(UCoreRewardWidget&&); \
	NO_API UCoreRewardWidget(const UCoreRewardWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreRewardWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreRewardWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreRewardWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RewardIcon() { return STRUCT_OFFSET(UCoreRewardWidget, RewardIcon); } \
	FORCEINLINE static uint32 __PPO__LayoutScale() { return STRUCT_OFFSET(UCoreRewardWidget, LayoutScale); } \
	FORCEINLINE static uint32 __PPO__LockedOverlay() { return STRUCT_OFFSET(UCoreRewardWidget, LockedOverlay); } \
	FORCEINLINE static uint32 __PPO__OnHoverBorder() { return STRUCT_OFFSET(UCoreRewardWidget, OnHoverBorder); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h_13_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h_16_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h_16_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h_16_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h_16_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h_16_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreRewardWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRewardWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
