// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDirectionalMiniGameType : uint8;
class UCoreHudDirectionalMiniGameItemWidget;
#ifdef DBDUIVIEWSCORE_CoreHudDirectionalMiniGameWidget_generated_h
#error "CoreHudDirectionalMiniGameWidget.generated.h already included, missing '#pragma once' in CoreHudDirectionalMiniGameWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreHudDirectionalMiniGameWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h_16_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentType); \
	DECLARE_FUNCTION(execGetWidgets);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentType); \
	DECLARE_FUNCTION(execGetWidgets);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h_16_EVENT_PARMS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h_16_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreHudDirectionalMiniGameWidget(); \
	friend struct Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreHudDirectionalMiniGameWidget, UCoreBaseHudWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreHudDirectionalMiniGameWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreHudDirectionalMiniGameWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCoreHudDirectionalMiniGameWidget(); \
	friend struct Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreHudDirectionalMiniGameWidget, UCoreBaseHudWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreHudDirectionalMiniGameWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreHudDirectionalMiniGameWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreHudDirectionalMiniGameWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreHudDirectionalMiniGameWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreHudDirectionalMiniGameWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreHudDirectionalMiniGameWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreHudDirectionalMiniGameWidget(UCoreHudDirectionalMiniGameWidget&&); \
	NO_API UCoreHudDirectionalMiniGameWidget(const UCoreHudDirectionalMiniGameWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreHudDirectionalMiniGameWidget(UCoreHudDirectionalMiniGameWidget&&); \
	NO_API UCoreHudDirectionalMiniGameWidget(const UCoreHudDirectionalMiniGameWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreHudDirectionalMiniGameWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreHudDirectionalMiniGameWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreHudDirectionalMiniGameWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SkullMerchantItemWidgetClass() { return STRUCT_OFFSET(UCoreHudDirectionalMiniGameWidget, SkullMerchantItemWidgetClass); } \
	FORCEINLINE static uint32 __PPO__WormholeItemWidgetClass() { return STRUCT_OFFSET(UCoreHudDirectionalMiniGameWidget, WormholeItemWidgetClass); } \
	FORCEINLINE static uint32 __PPO__Container() { return STRUCT_OFFSET(UCoreHudDirectionalMiniGameWidget, Container); } \
	FORCEINLINE static uint32 __PPO___widgets() { return STRUCT_OFFSET(UCoreHudDirectionalMiniGameWidget, _widgets); } \
	FORCEINLINE static uint32 __PPO___currentType() { return STRUCT_OFFSET(UCoreHudDirectionalMiniGameWidget, _currentType); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h_13_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h_16_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h_16_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h_16_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h_16_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h_16_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreHudDirectionalMiniGameWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudDirectionalMiniGameWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
