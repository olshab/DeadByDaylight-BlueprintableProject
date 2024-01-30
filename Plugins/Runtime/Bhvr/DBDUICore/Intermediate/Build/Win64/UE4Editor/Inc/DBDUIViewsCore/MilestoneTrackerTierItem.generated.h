// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMilestoneTrackerItemViewData;
class UMaterialInstance;
enum class EMilestoneTrackerItemState : uint8;
#ifdef DBDUIVIEWSCORE_MilestoneTrackerTierItem_generated_h
#error "MilestoneTrackerTierItem.generated.h already included, missing '#pragma once' in MilestoneTrackerTierItem.h"
#endif
#define DBDUIVIEWSCORE_MilestoneTrackerTierItem_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h_18_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execOnBackgroundImageLoadingCompleted); \
	DECLARE_FUNCTION(execOnBackgroundImageLoadingStarted); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execUpdateBackground);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execOnBackgroundImageLoadingCompleted); \
	DECLARE_FUNCTION(execOnBackgroundImageLoadingStarted); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execUpdateBackground);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h_18_EVENT_PARMS \
	struct MilestoneTrackerTierItem_eventSetVisualState_Parms \
	{ \
		EMilestoneTrackerItemState state; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h_18_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMilestoneTrackerTierItem(); \
	friend struct Z_Construct_UClass_UMilestoneTrackerTierItem_Statics; \
public: \
	DECLARE_CLASS(UMilestoneTrackerTierItem, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UMilestoneTrackerTierItem)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMilestoneTrackerTierItem(); \
	friend struct Z_Construct_UClass_UMilestoneTrackerTierItem_Statics; \
public: \
	DECLARE_CLASS(UMilestoneTrackerTierItem, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UMilestoneTrackerTierItem)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMilestoneTrackerTierItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMilestoneTrackerTierItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMilestoneTrackerTierItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMilestoneTrackerTierItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMilestoneTrackerTierItem(UMilestoneTrackerTierItem&&); \
	NO_API UMilestoneTrackerTierItem(const UMilestoneTrackerTierItem&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMilestoneTrackerTierItem(UMilestoneTrackerTierItem&&); \
	NO_API UMilestoneTrackerTierItem(const UMilestoneTrackerTierItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMilestoneTrackerTierItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMilestoneTrackerTierItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMilestoneTrackerTierItem)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Reward() { return STRUCT_OFFSET(UMilestoneTrackerTierItem, Reward); } \
	FORCEINLINE static uint32 __PPO__EventPointsWidget() { return STRUCT_OFFSET(UMilestoneTrackerTierItem, EventPointsWidget); } \
	FORCEINLINE static uint32 __PPO__BackgroundImage() { return STRUCT_OFFSET(UMilestoneTrackerTierItem, BackgroundImage); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h_15_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h_18_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h_18_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h_18_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h_18_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h_18_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UMilestoneTrackerTierItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_MilestoneTrackerTierItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
