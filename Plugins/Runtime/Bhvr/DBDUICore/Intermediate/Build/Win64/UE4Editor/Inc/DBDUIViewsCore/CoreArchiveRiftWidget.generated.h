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
enum class ETierType : uint8;
struct FArchivesRiftGenericViewData;
#ifdef DBDUIVIEWSCORE_CoreArchiveRiftWidget_generated_h
#error "CoreArchiveRiftWidget.generated.h already included, missing '#pragma once' in CoreArchiveRiftWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreArchiveRiftWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h_36_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisplayPage); \
	DECLARE_FUNCTION(execOnCurrentPageAnimationCompleted); \
	DECLARE_FUNCTION(execOnNextButtonClicked); \
	DECLARE_FUNCTION(execOnOutfitButtonClicked); \
	DECLARE_FUNCTION(execOnOutfitButtonHovered); \
	DECLARE_FUNCTION(execOnOutfitButtonUnhovered); \
	DECLARE_FUNCTION(execOnPreviousButtonClicked); \
	DECLARE_FUNCTION(execOnRewardAnimationCompleted); \
	DECLARE_FUNCTION(execOnRewardItemClicked);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisplayPage); \
	DECLARE_FUNCTION(execOnCurrentPageAnimationCompleted); \
	DECLARE_FUNCTION(execOnNextButtonClicked); \
	DECLARE_FUNCTION(execOnOutfitButtonClicked); \
	DECLARE_FUNCTION(execOnOutfitButtonHovered); \
	DECLARE_FUNCTION(execOnOutfitButtonUnhovered); \
	DECLARE_FUNCTION(execOnPreviousButtonClicked); \
	DECLARE_FUNCTION(execOnRewardAnimationCompleted); \
	DECLARE_FUNCTION(execOnRewardItemClicked);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h_36_EVENT_PARMS \
	struct CoreArchiveRiftWidget_eventSetPaginationVisuals_Parms \
	{ \
		bool showBonusTierHighlight; \
		FText bonusTierTooltipText; \
	}; \
	struct CoreArchiveRiftWidget_eventSetTierVisuals_Parms \
	{ \
		ETierType tierType; \
	}; \
	struct CoreArchiveRiftWidget_eventSetVisualData_Parms \
	{ \
		FArchivesRiftGenericViewData data; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h_36_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreArchiveRiftWidget(); \
	friend struct Z_Construct_UClass_UCoreArchiveRiftWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveRiftWidget, UCoreTabContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveRiftWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreArchiveRiftWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUCoreArchiveRiftWidget(); \
	friend struct Z_Construct_UClass_UCoreArchiveRiftWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveRiftWidget, UCoreTabContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveRiftWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreArchiveRiftWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreArchiveRiftWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreArchiveRiftWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveRiftWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveRiftWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveRiftWidget(UCoreArchiveRiftWidget&&); \
	NO_API UCoreArchiveRiftWidget(const UCoreArchiveRiftWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveRiftWidget(UCoreArchiveRiftWidget&&); \
	NO_API UCoreArchiveRiftWidget(const UCoreArchiveRiftWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveRiftWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveRiftWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreArchiveRiftWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h_36_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___rewardItemClickedDelegate() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, _rewardItemClickedDelegate); } \
	FORCEINLINE static uint32 __PPO___rewardCurrencyClickedDelegate() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, _rewardCurrencyClickedDelegate); } \
	FORCEINLINE static uint32 __PPO___purchasePremiumPassClickedDelegate() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, _purchasePremiumPassClickedDelegate); } \
	FORCEINLINE static uint32 __PPO___purchaseTierClickedDelegate() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, _purchaseTierClickedDelegate); } \
	FORCEINLINE static uint32 __PPO___outfitClickedDelegate() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, _outfitClickedDelegate); } \
	FORCEINLINE static uint32 __PPO___bonusTierShownDelegate() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, _bonusTierShownDelegate); } \
	FORCEINLINE static uint32 __PPO___genericData() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, _genericData); } \
	FORCEINLINE static uint32 __PPO___riftTiersData() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, _riftTiersData); } \
	FORCEINLINE static uint32 __PPO___currentPage() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, _currentPage); } \
	FORCEINLINE static uint32 __PPO___maxTierItemsPerPage() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, _maxTierItemsPerPage); } \
	FORCEINLINE static uint32 __PPO___animationItemDelay() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, _animationItemDelay); } \
	FORCEINLINE static uint32 __PPO___animationPremiumTrackDelay() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, _animationPremiumTrackDelay); } \
	FORCEINLINE static uint32 __PPO___pageSwitchFadeDuration() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, _pageSwitchFadeDuration); } \
	FORCEINLINE static uint32 __PPO___pageSwitchFadeTweenEasing() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, _pageSwitchFadeTweenEasing); } \
	FORCEINLINE static uint32 __PPO___archiveRiftTierItemClass() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, _archiveRiftTierItemClass); } \
	FORCEINLINE static uint32 __PPO___freePurchaseButtonText() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, _freePurchaseButtonText); } \
	FORCEINLINE static uint32 __PPO___freePurchaseDescriptionText() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, _freePurchaseDescriptionText); } \
	FORCEINLINE static uint32 __PPO___premiumPurchaseButtonText() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, _premiumPurchaseButtonText); } \
	FORCEINLINE static uint32 __PPO___premiumPurchaseDescriptionText() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, _premiumPurchaseDescriptionText); } \
	FORCEINLINE static uint32 __PPO___maxTierText() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, _maxTierText); } \
	FORCEINLINE static uint32 __PPO___currentProgressInfoText() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, _currentProgressInfoText); } \
	FORCEINLINE static uint32 __PPO___riftFragmentTooltipViewData() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, _riftFragmentTooltipViewData); } \
	FORCEINLINE static uint32 __PPO__OutfitButton() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, OutfitButton); } \
	FORCEINLINE static uint32 __PPO__PurchaseButton() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, PurchaseButton); } \
	FORCEINLINE static uint32 __PPO__RewardGrid() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, RewardGrid); } \
	FORCEINLINE static uint32 __PPO__TierInfoDescriptionRTB() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, TierInfoDescriptionRTB); } \
	FORCEINLINE static uint32 __PPO__TierInfoTopTB() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, TierInfoTopTB); } \
	FORCEINLINE static uint32 __PPO__TierInfoBottomTB() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, TierInfoBottomTB); } \
	FORCEINLINE static uint32 __PPO__FreeTrackLabelTB() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, FreeTrackLabelTB); } \
	FORCEINLINE static uint32 __PPO__PremiumTrackLabelTB() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, PremiumTrackLabelTB); } \
	FORCEINLINE static uint32 __PPO__PaginationTB() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, PaginationTB); } \
	FORCEINLINE static uint32 __PPO__PaginationPreviousButton() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, PaginationPreviousButton); } \
	FORCEINLINE static uint32 __PPO__PaginationNextButton() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, PaginationNextButton); } \
	FORCEINLINE static uint32 __PPO__ImagePreviewArea() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, ImagePreviewArea); } \
	FORCEINLINE static uint32 __PPO___tierItemPool() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, _tierItemPool); } \
	FORCEINLINE static uint32 __PPO___contentVisbilityTween() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, _contentVisbilityTween); } \
	FORCEINLINE static uint32 __PPO___pageSwitchVisbilityTween() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, _pageSwitchVisbilityTween); } \
	FORCEINLINE static uint32 __PPO___currentSelectedReward() { return STRUCT_OFFSET(UCoreArchiveRiftWidget, _currentSelectedReward); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h_33_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h_36_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h_36_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h_36_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h_36_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h_36_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h_36_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h_36_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h_36_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h_36_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h_36_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreArchiveRiftWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveRiftWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
