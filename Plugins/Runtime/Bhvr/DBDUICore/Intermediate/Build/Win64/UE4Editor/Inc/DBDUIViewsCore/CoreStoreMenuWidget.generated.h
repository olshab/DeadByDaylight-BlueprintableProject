// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreButtonWidget;
class UCoreSelectableButtonWidget;
#ifdef DBDUIVIEWSCORE_CoreStoreMenuWidget_generated_h
#error "CoreStoreMenuWidget.generated.h already included, missing '#pragma once' in CoreStoreMenuWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreStoreMenuWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreMenuWidget_h_21_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreMenuWidget_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBackAction); \
	DECLARE_FUNCTION(execOnGetAuricCellsClicked); \
	DECLARE_FUNCTION(execOnMenuTabSelected); \
	DECLARE_FUNCTION(execOnMenuTabSelectedAgain); \
	DECLARE_FUNCTION(execOnRedeemCodeButtonClicked);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreMenuWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBackAction); \
	DECLARE_FUNCTION(execOnGetAuricCellsClicked); \
	DECLARE_FUNCTION(execOnMenuTabSelected); \
	DECLARE_FUNCTION(execOnMenuTabSelectedAgain); \
	DECLARE_FUNCTION(execOnRedeemCodeButtonClicked);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreMenuWidget_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreStoreMenuWidget(); \
	friend struct Z_Construct_UClass_UCoreStoreMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStoreMenuWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStoreMenuWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreStoreMenuWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreMenuWidget_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUCoreStoreMenuWidget(); \
	friend struct Z_Construct_UClass_UCoreStoreMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStoreMenuWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStoreMenuWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreStoreMenuWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreMenuWidget_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreStoreMenuWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreStoreMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStoreMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStoreMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStoreMenuWidget(UCoreStoreMenuWidget&&); \
	NO_API UCoreStoreMenuWidget(const UCoreStoreMenuWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreMenuWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStoreMenuWidget(UCoreStoreMenuWidget&&); \
	NO_API UCoreStoreMenuWidget(const UCoreStoreMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStoreMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStoreMenuWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreStoreMenuWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreMenuWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___menuTabSelectedDelegate() { return STRUCT_OFFSET(UCoreStoreMenuWidget, _menuTabSelectedDelegate); } \
	FORCEINLINE static uint32 __PPO___backActionDelegate() { return STRUCT_OFFSET(UCoreStoreMenuWidget, _backActionDelegate); } \
	FORCEINLINE static uint32 __PPO___redeemCodeButtonDelegate() { return STRUCT_OFFSET(UCoreStoreMenuWidget, _redeemCodeButtonDelegate); } \
	FORCEINLINE static uint32 __PPO___getAuricCellsButtonDelegate() { return STRUCT_OFFSET(UCoreStoreMenuWidget, _getAuricCellsButtonDelegate); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreMenuWidget_h_18_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreMenuWidget_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreMenuWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreMenuWidget_h_21_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreMenuWidget_h_21_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreMenuWidget_h_21_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreMenuWidget_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreMenuWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreMenuWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreMenuWidget_h_21_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreMenuWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreMenuWidget_h_21_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreMenuWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreStoreMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreMenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
