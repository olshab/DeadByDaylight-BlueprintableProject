// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPriceTagViewData;
struct FCustomizationItemOriginViewData;
class UCoreInputSwitcherWidget;
#ifdef DBDUIVIEWSCORE_CustomizationItemOriginWidget_generated_h
#error "CustomizationItemOriginWidget.generated.h already included, missing '#pragma once' in CustomizationItemOriginWidget.h"
#endif
#define DBDUIVIEWSCORE_CustomizationItemOriginWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h_17_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h_17_RPC_WRAPPERS \
	virtual void SetArchivesState_Implementation(TArray<FText> const& args); \
	virtual void SetCurrencyPurchaseState_Implementation(FPriceTagViewData const& currencyData); \
	virtual void SetDefaultState_Implementation(); \
	virtual void SetGameplayState_Implementation(TArray<FText> const& args); \
	virtual void SetMilestonePointsState_Implementation(TArray<FText> const& args); \
	virtual void SetStoreState_Implementation(); \
 \
	DECLARE_FUNCTION(execDisableArchivesButton); \
	DECLARE_FUNCTION(execDisableCurrencyButton); \
	DECLARE_FUNCTION(execDisableInputs); \
	DECLARE_FUNCTION(execDisableStoreButton); \
	DECLARE_FUNCTION(execOnButtonClick); \
	DECLARE_FUNCTION(execSetArchivesState); \
	DECLARE_FUNCTION(execSetCurrencyPurchaseState); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execSetDefaultState); \
	DECLARE_FUNCTION(execSetGameplayState); \
	DECLARE_FUNCTION(execSetInputSwitcherEnabled); \
	DECLARE_FUNCTION(execSetMilestonePointsState); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execSetStoreState);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetArchivesState_Implementation(TArray<FText> const& args); \
	virtual void SetCurrencyPurchaseState_Implementation(FPriceTagViewData const& currencyData); \
	virtual void SetDefaultState_Implementation(); \
	virtual void SetGameplayState_Implementation(TArray<FText> const& args); \
	virtual void SetMilestonePointsState_Implementation(TArray<FText> const& args); \
	virtual void SetStoreState_Implementation(); \
 \
	DECLARE_FUNCTION(execDisableArchivesButton); \
	DECLARE_FUNCTION(execDisableCurrencyButton); \
	DECLARE_FUNCTION(execDisableInputs); \
	DECLARE_FUNCTION(execDisableStoreButton); \
	DECLARE_FUNCTION(execOnButtonClick); \
	DECLARE_FUNCTION(execSetArchivesState); \
	DECLARE_FUNCTION(execSetCurrencyPurchaseState); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execSetDefaultState); \
	DECLARE_FUNCTION(execSetGameplayState); \
	DECLARE_FUNCTION(execSetInputSwitcherEnabled); \
	DECLARE_FUNCTION(execSetMilestonePointsState); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execSetStoreState);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h_17_EVENT_PARMS \
	struct CustomizationItemOriginWidget_eventSetArchivesState_Parms \
	{ \
		TArray<FText> args; \
	}; \
	struct CustomizationItemOriginWidget_eventSetCurrencyPurchaseState_Parms \
	{ \
		FPriceTagViewData currencyData; \
	}; \
	struct CustomizationItemOriginWidget_eventSetGameplayState_Parms \
	{ \
		TArray<FText> args; \
	}; \
	struct CustomizationItemOriginWidget_eventSetMilestonePointsState_Parms \
	{ \
		TArray<FText> args; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizationItemOriginWidget(); \
	friend struct Z_Construct_UClass_UCustomizationItemOriginWidget_Statics; \
public: \
	DECLARE_CLASS(UCustomizationItemOriginWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCustomizationItemOriginWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCustomizationItemOriginWidget(); \
	friend struct Z_Construct_UClass_UCustomizationItemOriginWidget_Statics; \
public: \
	DECLARE_CLASS(UCustomizationItemOriginWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCustomizationItemOriginWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomizationItemOriginWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizationItemOriginWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomizationItemOriginWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizationItemOriginWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomizationItemOriginWidget(UCustomizationItemOriginWidget&&); \
	NO_API UCustomizationItemOriginWidget(const UCustomizationItemOriginWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomizationItemOriginWidget(UCustomizationItemOriginWidget&&); \
	NO_API UCustomizationItemOriginWidget(const UCustomizationItemOriginWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomizationItemOriginWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizationItemOriginWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomizationItemOriginWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InstructionText() { return STRUCT_OFFSET(UCustomizationItemOriginWidget, InstructionText); } \
	FORCEINLINE static uint32 __PPO__InstructionImage() { return STRUCT_OFFSET(UCustomizationItemOriginWidget, InstructionImage); } \
	FORCEINLINE static uint32 __PPO__UnlockTitle() { return STRUCT_OFFSET(UCustomizationItemOriginWidget, UnlockTitle); } \
	FORCEINLINE static uint32 __PPO__UnlockSubtitle() { return STRUCT_OFFSET(UCustomizationItemOriginWidget, UnlockSubtitle); } \
	FORCEINLINE static uint32 __PPO__CurrencyButton() { return STRUCT_OFFSET(UCustomizationItemOriginWidget, CurrencyButton); } \
	FORCEINLINE static uint32 __PPO__ArchivesButton() { return STRUCT_OFFSET(UCustomizationItemOriginWidget, ArchivesButton); } \
	FORCEINLINE static uint32 __PPO__StoreButton() { return STRUCT_OFFSET(UCustomizationItemOriginWidget, StoreButton); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h_14_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h_17_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h_17_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h_17_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h_17_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h_17_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCustomizationItemOriginWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemOriginWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
