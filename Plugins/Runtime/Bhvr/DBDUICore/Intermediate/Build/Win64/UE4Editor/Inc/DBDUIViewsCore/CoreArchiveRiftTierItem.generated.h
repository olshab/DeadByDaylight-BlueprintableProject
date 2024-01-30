// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreButtonWidget;
struct FArchiveRiftTierRewardsViewData;
#ifdef DBDUIVIEWSCORE_CoreArchiveRiftTierItem_generated_h
#error "CoreArchiveRiftTierItem.generated.h already included, missing '#pragma once' in CoreArchiveRiftTierItem.h"
#endif
#define DBDUIVIEWSCORE_CoreArchiveRiftTierItem_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h_18_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRewardClicked);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRewardClicked);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h_18_EVENT_PARMS \
	struct CoreArchiveRiftTierItem_eventPlayUnlockanimation_Parms \
	{ \
		bool isPremiumUnlocked; \
		float delay; \
	}; \
	struct CoreArchiveRiftTierItem_eventSetGenericData_Parms \
	{ \
		FArchiveRiftTierRewardsViewData data; \
	}; \
	struct CoreArchiveRiftTierItem_eventSetLockedState_Parms \
	{ \
		bool isLocked; \
		bool hasPremium; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h_18_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreArchiveRiftTierItem(); \
	friend struct Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveRiftTierItem, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveRiftTierItem)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCoreArchiveRiftTierItem(); \
	friend struct Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveRiftTierItem, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveRiftTierItem)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreArchiveRiftTierItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreArchiveRiftTierItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveRiftTierItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveRiftTierItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveRiftTierItem(UCoreArchiveRiftTierItem&&); \
	NO_API UCoreArchiveRiftTierItem(const UCoreArchiveRiftTierItem&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveRiftTierItem(UCoreArchiveRiftTierItem&&); \
	NO_API UCoreArchiveRiftTierItem(const UCoreArchiveRiftTierItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveRiftTierItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveRiftTierItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreArchiveRiftTierItem)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___itemClickedDelegate() { return STRUCT_OFFSET(UCoreArchiveRiftTierItem, _itemClickedDelegate); } \
	FORCEINLINE static uint32 __PPO___unlockAnimationCompleteDelegate() { return STRUCT_OFFSET(UCoreArchiveRiftTierItem, _unlockAnimationCompleteDelegate); } \
	FORCEINLINE static uint32 __PPO__FreeRewardsContainer() { return STRUCT_OFFSET(UCoreArchiveRiftTierItem, FreeRewardsContainer); } \
	FORCEINLINE static uint32 __PPO__PremiumRewardsContainer() { return STRUCT_OFFSET(UCoreArchiveRiftTierItem, PremiumRewardsContainer); } \
	FORCEINLINE static uint32 __PPO___freeRewardWidgets() { return STRUCT_OFFSET(UCoreArchiveRiftTierItem, _freeRewardWidgets); } \
	FORCEINLINE static uint32 __PPO___premiumRewardWidgets() { return STRUCT_OFFSET(UCoreArchiveRiftTierItem, _premiumRewardWidgets); } \
	FORCEINLINE static uint32 __PPO___unlockAnimationCompleteSound() { return STRUCT_OFFSET(UCoreArchiveRiftTierItem, _unlockAnimationCompleteSound); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h_15_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h_18_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h_18_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h_18_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h_18_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h_18_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreArchiveRiftTierItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftTierItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
