// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUITweenInstance;
class UCoreButtonWidget;
struct FAlertsViewData;
struct FRewardWrapperViewData;
#ifdef DBDUIVIEWSCORE_CoreAlertsWidget_generated_h
#error "CoreAlertsWidget.generated.h already included, missing '#pragma once' in CoreAlertsWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreAlertsWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h_25_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisplayNextReward); \
	DECLARE_FUNCTION(execDisplayNextRewardSequence); \
	DECLARE_FUNCTION(execEndOfRewardDisplay); \
	DECLARE_FUNCTION(execEndRewardDisplayRequested); \
	DECLARE_FUNCTION(execHideRewardTooltip); \
	DECLARE_FUNCTION(execOnRewardItemsFadeOutCompleted); \
	DECLARE_FUNCTION(execRewardAlertSequenceCompleted); \
	DECLARE_FUNCTION(execSetRewardsDescription); \
	DECLARE_FUNCTION(execShowAlertRewards); \
	DECLARE_FUNCTION(execShowRewardNameVisibility); \
	DECLARE_FUNCTION(execShowRewardTooltip);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisplayNextReward); \
	DECLARE_FUNCTION(execDisplayNextRewardSequence); \
	DECLARE_FUNCTION(execEndOfRewardDisplay); \
	DECLARE_FUNCTION(execEndRewardDisplayRequested); \
	DECLARE_FUNCTION(execHideRewardTooltip); \
	DECLARE_FUNCTION(execOnRewardItemsFadeOutCompleted); \
	DECLARE_FUNCTION(execRewardAlertSequenceCompleted); \
	DECLARE_FUNCTION(execSetRewardsDescription); \
	DECLARE_FUNCTION(execShowAlertRewards); \
	DECLARE_FUNCTION(execShowRewardNameVisibility); \
	DECLARE_FUNCTION(execShowRewardTooltip);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h_25_EVENT_PARMS \
	struct CoreAlertsWidget_eventPlayDisplayRewardSound_Parms \
	{ \
		FRewardWrapperViewData rewardData; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h_25_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreAlertsWidget(); \
	friend struct Z_Construct_UClass_UCoreAlertsWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreAlertsWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreAlertsWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreAlertsWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUCoreAlertsWidget(); \
	friend struct Z_Construct_UClass_UCoreAlertsWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreAlertsWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreAlertsWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreAlertsWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreAlertsWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreAlertsWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreAlertsWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreAlertsWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreAlertsWidget(UCoreAlertsWidget&&); \
	NO_API UCoreAlertsWidget(const UCoreAlertsWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreAlertsWidget(UCoreAlertsWidget&&); \
	NO_API UCoreAlertsWidget(const UCoreAlertsWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreAlertsWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreAlertsWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreAlertsWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___fadeInRewardDuration() { return STRUCT_OFFSET(UCoreAlertsWidget, _fadeInRewardDuration); } \
	FORCEINLINE static uint32 __PPO___fadeRewardDelay() { return STRUCT_OFFSET(UCoreAlertsWidget, _fadeRewardDelay); } \
	FORCEINLINE static uint32 __PPO___fadeInRewardEasing() { return STRUCT_OFFSET(UCoreAlertsWidget, _fadeInRewardEasing); } \
	FORCEINLINE static uint32 __PPO___sequenceDelay() { return STRUCT_OFFSET(UCoreAlertsWidget, _sequenceDelay); } \
	FORCEINLINE static uint32 __PPO___sequenceFadeOutDuration() { return STRUCT_OFFSET(UCoreAlertsWidget, _sequenceFadeOutDuration); } \
	FORCEINLINE static uint32 __PPO___finalSequenceDelay() { return STRUCT_OFFSET(UCoreAlertsWidget, _finalSequenceDelay); } \
	FORCEINLINE static uint32 __PPO___finalSequenceFadeOutDuration() { return STRUCT_OFFSET(UCoreAlertsWidget, _finalSequenceFadeOutDuration); } \
	FORCEINLINE static uint32 __PPO___rewardInitialScale() { return STRUCT_OFFSET(UCoreAlertsWidget, _rewardInitialScale); } \
	FORCEINLINE static uint32 __PPO___rewardFinalScale() { return STRUCT_OFFSET(UCoreAlertsWidget, _rewardFinalScale); } \
	FORCEINLINE static uint32 __PPO___rewardScalingDuration() { return STRUCT_OFFSET(UCoreAlertsWidget, _rewardScalingDuration); } \
	FORCEINLINE static uint32 __PPO___rewardScalingDelay() { return STRUCT_OFFSET(UCoreAlertsWidget, _rewardScalingDelay); } \
	FORCEINLINE static uint32 __PPO___rewardScalingIdleDuration() { return STRUCT_OFFSET(UCoreAlertsWidget, _rewardScalingIdleDuration); } \
	FORCEINLINE static uint32 __PPO___rewardScalingEasing() { return STRUCT_OFFSET(UCoreAlertsWidget, _rewardScalingEasing); } \
	FORCEINLINE static uint32 __PPO___sequenceShiftDuration() { return STRUCT_OFFSET(UCoreAlertsWidget, _sequenceShiftDuration); } \
	FORCEINLINE static uint32 __PPO___sequenceShiftDelay() { return STRUCT_OFFSET(UCoreAlertsWidget, _sequenceShiftDelay); } \
	FORCEINLINE static uint32 __PPO___sequenceShiftEasing() { return STRUCT_OFFSET(UCoreAlertsWidget, _sequenceShiftEasing); } \
	FORCEINLINE static uint32 __PPO___rewardContainerShiftFinalPosition() { return STRUCT_OFFSET(UCoreAlertsWidget, _rewardContainerShiftFinalPosition); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h_22_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h_25_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h_25_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h_25_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h_25_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h_25_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h_25_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h_25_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h_25_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h_25_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h_25_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreAlertsWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAlertsWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
