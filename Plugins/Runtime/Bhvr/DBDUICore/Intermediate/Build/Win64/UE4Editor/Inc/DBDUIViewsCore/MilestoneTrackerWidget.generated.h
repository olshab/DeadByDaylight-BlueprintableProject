// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreButtonWidget;
struct FMilestoneTrackerViewData;
struct FMilestoneTrackerEventBasedSkinViewData;
#ifdef DBDUIVIEWSCORE_MilestoneTrackerWidget_generated_h
#error "MilestoneTrackerWidget.generated.h already included, missing '#pragma once' in MilestoneTrackerWidget.h"
#endif
#define DBDUIVIEWSCORE_MilestoneTrackerWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerWidget_h_20_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerWidget_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeselectMilestoneRewards); \
	DECLARE_FUNCTION(execOnRewardItemClicked); \
	DECLARE_FUNCTION(execSelectMilestoneTrackerItem); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execSetVisuals);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeselectMilestoneRewards); \
	DECLARE_FUNCTION(execOnRewardItemClicked); \
	DECLARE_FUNCTION(execSelectMilestoneTrackerItem); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execSetVisuals);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMilestoneTrackerWidget(); \
	friend struct Z_Construct_UClass_UMilestoneTrackerWidget_Statics; \
public: \
	DECLARE_CLASS(UMilestoneTrackerWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UMilestoneTrackerWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerWidget_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMilestoneTrackerWidget(); \
	friend struct Z_Construct_UClass_UMilestoneTrackerWidget_Statics; \
public: \
	DECLARE_CLASS(UMilestoneTrackerWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UMilestoneTrackerWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerWidget_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMilestoneTrackerWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMilestoneTrackerWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMilestoneTrackerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMilestoneTrackerWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMilestoneTrackerWidget(UMilestoneTrackerWidget&&); \
	NO_API UMilestoneTrackerWidget(const UMilestoneTrackerWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMilestoneTrackerWidget(UMilestoneTrackerWidget&&); \
	NO_API UMilestoneTrackerWidget(const UMilestoneTrackerWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMilestoneTrackerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMilestoneTrackerWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMilestoneTrackerWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Title() { return STRUCT_OFFSET(UMilestoneTrackerWidget, Title); } \
	FORCEINLINE static uint32 __PPO__MilestonePointsText() { return STRUCT_OFFSET(UMilestoneTrackerWidget, MilestonePointsText); } \
	FORCEINLINE static uint32 __PPO__UserMilestonePointsWidget() { return STRUCT_OFFSET(UMilestoneTrackerWidget, UserMilestonePointsWidget); } \
	FORCEINLINE static uint32 __PPO__RewardsGrid() { return STRUCT_OFFSET(UMilestoneTrackerWidget, RewardsGrid); } \
	FORCEINLINE static uint32 __PPO__Background() { return STRUCT_OFFSET(UMilestoneTrackerWidget, Background); } \
	FORCEINLINE static uint32 __PPO___milestoneTrackerTierItemClass() { return STRUCT_OFFSET(UMilestoneTrackerWidget, _milestoneTrackerTierItemClass); } \
	FORCEINLINE static uint32 __PPO___maxTierItems() { return STRUCT_OFFSET(UMilestoneTrackerWidget, _maxTierItems); } \
	FORCEINLINE static uint32 __PPO___tierItemPool() { return STRUCT_OFFSET(UMilestoneTrackerWidget, _tierItemPool); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerWidget_h_17_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerWidget_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerWidget_h_20_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerWidget_h_20_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerWidget_h_20_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerWidget_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerWidget_h_20_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerWidget_h_20_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UMilestoneTrackerWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
