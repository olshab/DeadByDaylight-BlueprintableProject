// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStoreSpecialPackViewData;
#ifdef DBDUIVIEWSCORE_CoreStoreSpecialPacksPackItemWidget_generated_h
#error "CoreStoreSpecialPacksPackItemWidget.generated.h already included, missing '#pragma once' in CoreStoreSpecialPacksPackItemWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreStoreSpecialPacksPackItemWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h_20_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h_20_RPC_WRAPPERS \
	virtual void SetData_Implementation(UStoreSpecialPackViewData* data); \
 \
	DECLARE_FUNCTION(execOnCurrencyBuyButtonClicked); \
	DECLARE_FUNCTION(execSetData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetData_Implementation(UStoreSpecialPackViewData* data); \
 \
	DECLARE_FUNCTION(execOnCurrencyBuyButtonClicked); \
	DECLARE_FUNCTION(execSetData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h_20_EVENT_PARMS \
	struct CoreStoreSpecialPacksPackItemWidget_eventSetData_Parms \
	{ \
		UStoreSpecialPackViewData* data; \
	}; \
	struct CoreStoreSpecialPacksPackItemWidget_eventSetExpanded_Parms \
	{ \
		bool expanded; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h_20_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreStoreSpecialPacksPackItemWidget(); \
	friend struct Z_Construct_UClass_UCoreStoreSpecialPacksPackItemWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStoreSpecialPacksPackItemWidget, UCoreSelectableButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStoreSpecialPacksPackItemWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUCoreStoreSpecialPacksPackItemWidget(); \
	friend struct Z_Construct_UClass_UCoreStoreSpecialPacksPackItemWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStoreSpecialPacksPackItemWidget, UCoreSelectableButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStoreSpecialPacksPackItemWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreStoreSpecialPacksPackItemWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreStoreSpecialPacksPackItemWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStoreSpecialPacksPackItemWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStoreSpecialPacksPackItemWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStoreSpecialPacksPackItemWidget(UCoreStoreSpecialPacksPackItemWidget&&); \
	NO_API UCoreStoreSpecialPacksPackItemWidget(const UCoreStoreSpecialPacksPackItemWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStoreSpecialPacksPackItemWidget(UCoreStoreSpecialPacksPackItemWidget&&); \
	NO_API UCoreStoreSpecialPacksPackItemWidget(const UCoreStoreSpecialPacksPackItemWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStoreSpecialPacksPackItemWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStoreSpecialPacksPackItemWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreStoreSpecialPacksPackItemWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TimerText() { return STRUCT_OFFSET(UCoreStoreSpecialPacksPackItemWidget, TimerText); } \
	FORCEINLINE static uint32 __PPO__TitleText() { return STRUCT_OFFSET(UCoreStoreSpecialPacksPackItemWidget, TitleText); } \
	FORCEINLINE static uint32 __PPO__CharactersBox() { return STRUCT_OFFSET(UCoreStoreSpecialPacksPackItemWidget, CharactersBox); } \
	FORCEINLINE static uint32 __PPO__CustomizationsBox() { return STRUCT_OFFSET(UCoreStoreSpecialPacksPackItemWidget, CustomizationsBox); } \
	FORCEINLINE static uint32 __PPO__CurrencyBuyButton() { return STRUCT_OFFSET(UCoreStoreSpecialPacksPackItemWidget, CurrencyBuyButton); } \
	FORCEINLINE static uint32 __PPO___isExpanded() { return STRUCT_OFFSET(UCoreStoreSpecialPacksPackItemWidget, _isExpanded); } \
	FORCEINLINE static uint32 __PPO___initialItemPoolSize() { return STRUCT_OFFSET(UCoreStoreSpecialPacksPackItemWidget, _initialItemPoolSize); } \
	FORCEINLINE static uint32 __PPO___characterItemWidgetClass() { return STRUCT_OFFSET(UCoreStoreSpecialPacksPackItemWidget, _characterItemWidgetClass); } \
	FORCEINLINE static uint32 __PPO___customizationItemWidgetClass() { return STRUCT_OFFSET(UCoreStoreSpecialPacksPackItemWidget, _customizationItemWidgetClass); } \
	FORCEINLINE static uint32 __PPO___data() { return STRUCT_OFFSET(UCoreStoreSpecialPacksPackItemWidget, _data); } \
	FORCEINLINE static uint32 __PPO___characterList() { return STRUCT_OFFSET(UCoreStoreSpecialPacksPackItemWidget, _characterList); } \
	FORCEINLINE static uint32 __PPO___customizationList() { return STRUCT_OFFSET(UCoreStoreSpecialPacksPackItemWidget, _customizationList); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h_17_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h_20_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h_20_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h_20_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h_20_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h_20_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h_20_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h_20_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h_20_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreStoreSpecialPacksPackItemWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreSpecialPacksPackItemWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
