// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreButtonWidget;
struct FAuricCellsBundleViewData;
#ifdef DBDUIVIEWSCORE_CoreAuricCellsBundleWidget_generated_h
#error "CoreAuricCellsBundleWidget.generated.h already included, missing '#pragma once' in CoreAuricCellsBundleWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreAuricCellsBundleWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h_18_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBuyButtonClicked); \
	DECLARE_FUNCTION(execSetData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBuyButtonClicked); \
	DECLARE_FUNCTION(execSetData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h_18_EVENT_PARMS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h_18_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreAuricCellsBundleWidget(); \
	friend struct Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreAuricCellsBundleWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreAuricCellsBundleWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCoreAuricCellsBundleWidget(); \
	friend struct Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreAuricCellsBundleWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreAuricCellsBundleWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreAuricCellsBundleWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreAuricCellsBundleWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreAuricCellsBundleWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreAuricCellsBundleWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreAuricCellsBundleWidget(UCoreAuricCellsBundleWidget&&); \
	NO_API UCoreAuricCellsBundleWidget(const UCoreAuricCellsBundleWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreAuricCellsBundleWidget(UCoreAuricCellsBundleWidget&&); \
	NO_API UCoreAuricCellsBundleWidget(const UCoreAuricCellsBundleWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreAuricCellsBundleWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreAuricCellsBundleWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreAuricCellsBundleWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___buyActionDelegate() { return STRUCT_OFFSET(UCoreAuricCellsBundleWidget, _buyActionDelegate); } \
	FORCEINLINE static uint32 __PPO__BuyButton() { return STRUCT_OFFSET(UCoreAuricCellsBundleWidget, BuyButton); } \
	FORCEINLINE static uint32 __PPO__BaseAmountTextBlock() { return STRUCT_OFFSET(UCoreAuricCellsBundleWidget, BaseAmountTextBlock); } \
	FORCEINLINE static uint32 __PPO__AmountTextBlock() { return STRUCT_OFFSET(UCoreAuricCellsBundleWidget, AmountTextBlock); } \
	FORCEINLINE static uint32 __PPO__TitleTextBlock() { return STRUCT_OFFSET(UCoreAuricCellsBundleWidget, TitleTextBlock); } \
	FORCEINLINE static uint32 __PPO__BonusPanel() { return STRUCT_OFFSET(UCoreAuricCellsBundleWidget, BonusPanel); } \
	FORCEINLINE static uint32 __PPO__BonusTextBlock() { return STRUCT_OFFSET(UCoreAuricCellsBundleWidget, BonusTextBlock); } \
	FORCEINLINE static uint32 __PPO__InfoTextBlock() { return STRUCT_OFFSET(UCoreAuricCellsBundleWidget, InfoTextBlock); } \
	FORCEINLINE static uint32 __PPO__IconImage() { return STRUCT_OFFSET(UCoreAuricCellsBundleWidget, IconImage); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h_15_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h_18_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h_18_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h_18_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h_18_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h_18_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreAuricCellsBundleWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreAuricCellsBundleWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
