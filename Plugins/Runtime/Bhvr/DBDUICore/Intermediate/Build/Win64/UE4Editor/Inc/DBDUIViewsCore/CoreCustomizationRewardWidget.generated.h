// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCustomizationRewardViewData;
enum class EItemRarity : uint8;
enum class ECurrencyType : uint8;
#ifdef DBDUIVIEWSCORE_CoreCustomizationRewardWidget_generated_h
#error "CoreCustomizationRewardWidget.generated.h already included, missing '#pragma once' in CoreCustomizationRewardWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreCustomizationRewardWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h_19_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h_19_RPC_WRAPPERS \
	virtual void SetCustomizationRewardData_Implementation(FCustomizationRewardViewData const& customizationRewardViewData); \
 \
	DECLARE_FUNCTION(execDisplayEventPointIcon); \
	DECLARE_FUNCTION(execSetCustomizationRewardData); \
	DECLARE_FUNCTION(execSetRarity); \
	DECLARE_FUNCTION(execSetVisibleCurrencies);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetCustomizationRewardData_Implementation(FCustomizationRewardViewData const& customizationRewardViewData); \
 \
	DECLARE_FUNCTION(execDisplayEventPointIcon); \
	DECLARE_FUNCTION(execSetCustomizationRewardData); \
	DECLARE_FUNCTION(execSetRarity); \
	DECLARE_FUNCTION(execSetVisibleCurrencies);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h_19_EVENT_PARMS \
	struct CoreCustomizationRewardWidget_eventSetCustomizationRewardData_Parms \
	{ \
		FCustomizationRewardViewData customizationRewardViewData; \
	}; \
	struct CoreCustomizationRewardWidget_eventSetDiscountTimeText_Parms \
	{ \
		FString discountTimeText; \
	}; \
	struct CoreCustomizationRewardWidget_eventSetLimitedTimeText_Parms \
	{ \
		FString limitedTimeText; \
	}; \
	struct CoreCustomizationRewardWidget_eventSetMilestoneTrackerOwnedVisuals_Parms \
	{ \
		bool isOwned; \
		bool useAnimation; \
	}; \
	struct CoreCustomizationRewardWidget_eventSetOwnedText_Parms \
	{ \
		FText ownedText; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h_19_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreCustomizationRewardWidget(); \
	friend struct Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreCustomizationRewardWidget, UCoreRewardWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreCustomizationRewardWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUCoreCustomizationRewardWidget(); \
	friend struct Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreCustomizationRewardWidget, UCoreRewardWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreCustomizationRewardWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreCustomizationRewardWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreCustomizationRewardWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreCustomizationRewardWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreCustomizationRewardWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreCustomizationRewardWidget(UCoreCustomizationRewardWidget&&); \
	NO_API UCoreCustomizationRewardWidget(const UCoreCustomizationRewardWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreCustomizationRewardWidget(UCoreCustomizationRewardWidget&&); \
	NO_API UCoreCustomizationRewardWidget(const UCoreCustomizationRewardWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreCustomizationRewardWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreCustomizationRewardWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreCustomizationRewardWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___priceTagPadding() { return STRUCT_OFFSET(UCoreCustomizationRewardWidget, _priceTagPadding); } \
	FORCEINLINE static uint32 __PPO__PriceTagWidgetClass() { return STRUCT_OFFSET(UCoreCustomizationRewardWidget, PriceTagWidgetClass); } \
	FORCEINLINE static uint32 __PPO__RarityIMG() { return STRUCT_OFFSET(UCoreCustomizationRewardWidget, RarityIMG); } \
	FORCEINLINE static uint32 __PPO__EventPointsImage() { return STRUCT_OFFSET(UCoreCustomizationRewardWidget, EventPointsImage); } \
	FORCEINLINE static uint32 __PPO__CheckmarkImage() { return STRUCT_OFFSET(UCoreCustomizationRewardWidget, CheckmarkImage); } \
	FORCEINLINE static uint32 __PPO__PriceTagsVerticalBox() { return STRUCT_OFFSET(UCoreCustomizationRewardWidget, PriceTagsVerticalBox); } \
	FORCEINLINE static uint32 __PPO___data() { return STRUCT_OFFSET(UCoreCustomizationRewardWidget, _data); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h_16_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h_19_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h_19_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h_19_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h_19_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h_19_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h_19_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreCustomizationRewardWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreCustomizationRewardWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
