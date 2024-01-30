// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECurrencyType : uint8;
class UArchiveTierPurchasePopupViewData;
#ifdef DBDUIVIEWSCORE_CoreArchiveTierPurchasePopupWidget_generated_h
#error "CoreArchiveTierPurchasePopupWidget.generated.h already included, missing '#pragma once' in CoreArchiveTierPurchasePopupWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreArchiveTierPurchasePopupWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h_22_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnConfirmPurchase); \
	DECLARE_FUNCTION(execOnLessInputTriggered); \
	DECLARE_FUNCTION(execOnMoreInputTriggered);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnConfirmPurchase); \
	DECLARE_FUNCTION(execOnLessInputTriggered); \
	DECLARE_FUNCTION(execOnMoreInputTriggered);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h_22_EVENT_PARMS \
	struct CoreArchiveTierPurchasePopupWidget_eventSetCurrencyIcon_Parms \
	{ \
		ECurrencyType currencyType; \
	}; \
	struct CoreArchiveTierPurchasePopupWidget_eventSetVisualData_Parms \
	{ \
		const UArchiveTierPurchasePopupViewData* viewData; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h_22_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreArchiveTierPurchasePopupWidget(); \
	friend struct Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveTierPurchasePopupWidget, UCoreGenericPopupWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveTierPurchasePopupWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreArchiveTierPurchasePopupWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUCoreArchiveTierPurchasePopupWidget(); \
	friend struct Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveTierPurchasePopupWidget, UCoreGenericPopupWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveTierPurchasePopupWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreArchiveTierPurchasePopupWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreArchiveTierPurchasePopupWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreArchiveTierPurchasePopupWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveTierPurchasePopupWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveTierPurchasePopupWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveTierPurchasePopupWidget(UCoreArchiveTierPurchasePopupWidget&&); \
	NO_API UCoreArchiveTierPurchasePopupWidget(const UCoreArchiveTierPurchasePopupWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveTierPurchasePopupWidget(UCoreArchiveTierPurchasePopupWidget&&); \
	NO_API UCoreArchiveTierPurchasePopupWidget(const UCoreArchiveTierPurchasePopupWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveTierPurchasePopupWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveTierPurchasePopupWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreArchiveTierPurchasePopupWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LessInputSwitcher() { return STRUCT_OFFSET(UCoreArchiveTierPurchasePopupWidget, LessInputSwitcher); } \
	FORCEINLINE static uint32 __PPO__MoreInputSwitcher() { return STRUCT_OFFSET(UCoreArchiveTierPurchasePopupWidget, MoreInputSwitcher); } \
	FORCEINLINE static uint32 __PPO__CurrentQuantityText() { return STRUCT_OFFSET(UCoreArchiveTierPurchasePopupWidget, CurrentQuantityText); } \
	FORCEINLINE static uint32 __PPO__ImageContainer() { return STRUCT_OFFSET(UCoreArchiveTierPurchasePopupWidget, ImageContainer); } \
	FORCEINLINE static uint32 __PPO__PriceContainer() { return STRUCT_OFFSET(UCoreArchiveTierPurchasePopupWidget, PriceContainer); } \
	FORCEINLINE static uint32 __PPO__PriceText() { return STRUCT_OFFSET(UCoreArchiveTierPurchasePopupWidget, PriceText); } \
	FORCEINLINE static uint32 __PPO__DiscountText() { return STRUCT_OFFSET(UCoreArchiveTierPurchasePopupWidget, DiscountText); } \
	FORCEINLINE static uint32 __PPO___quantityCurve() { return STRUCT_OFFSET(UCoreArchiveTierPurchasePopupWidget, _quantityCurve); } \
	FORCEINLINE static uint32 __PPO___bonusTierStyleName() { return STRUCT_OFFSET(UCoreArchiveTierPurchasePopupWidget, _bonusTierStyleName); } \
	FORCEINLINE static uint32 __PPO___currencyTextColors() { return STRUCT_OFFSET(UCoreArchiveTierPurchasePopupWidget, _currencyTextColors); } \
	FORCEINLINE static uint32 __PPO___unaffordablePriceColor() { return STRUCT_OFFSET(UCoreArchiveTierPurchasePopupWidget, _unaffordablePriceColor); } \
	FORCEINLINE static uint32 __PPO___confirmPurchaseDelegate() { return STRUCT_OFFSET(UCoreArchiveTierPurchasePopupWidget, _confirmPurchaseDelegate); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h_19_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h_22_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h_22_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h_22_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h_22_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h_22_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h_22_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h_22_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h_22_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreArchiveTierPurchasePopupWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveTierPurchasePopupWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
