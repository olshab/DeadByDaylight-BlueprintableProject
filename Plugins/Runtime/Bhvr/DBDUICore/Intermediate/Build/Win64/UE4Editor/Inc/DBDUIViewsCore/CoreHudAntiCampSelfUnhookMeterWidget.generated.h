// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAntiCampSelfUnhookMeterState : uint8;
#ifdef DBDUIVIEWSCORE_CoreHudAntiCampSelfUnhookMeterWidget_generated_h
#error "CoreHudAntiCampSelfUnhookMeterWidget.generated.h already included, missing '#pragma once' in CoreHudAntiCampSelfUnhookMeterWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreHudAntiCampSelfUnhookMeterWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h_12_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPreviousState); \
	DECLARE_FUNCTION(execGetProgress); \
	DECLARE_FUNCTION(execGetState);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPreviousState); \
	DECLARE_FUNCTION(execGetProgress); \
	DECLARE_FUNCTION(execGetState);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h_12_EVENT_PARMS \
	struct CoreHudAntiCampSelfUnhookMeterWidget_eventSetVisualState_Parms \
	{ \
		EAntiCampSelfUnhookMeterState newState; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreHudAntiCampSelfUnhookMeterWidget(); \
	friend struct Z_Construct_UClass_UCoreHudAntiCampSelfUnhookMeterWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreHudAntiCampSelfUnhookMeterWidget, UCoreBaseHudWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreHudAntiCampSelfUnhookMeterWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreHudAntiCampSelfUnhookMeterWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUCoreHudAntiCampSelfUnhookMeterWidget(); \
	friend struct Z_Construct_UClass_UCoreHudAntiCampSelfUnhookMeterWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreHudAntiCampSelfUnhookMeterWidget, UCoreBaseHudWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreHudAntiCampSelfUnhookMeterWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreHudAntiCampSelfUnhookMeterWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreHudAntiCampSelfUnhookMeterWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreHudAntiCampSelfUnhookMeterWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreHudAntiCampSelfUnhookMeterWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreHudAntiCampSelfUnhookMeterWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreHudAntiCampSelfUnhookMeterWidget(UCoreHudAntiCampSelfUnhookMeterWidget&&); \
	NO_API UCoreHudAntiCampSelfUnhookMeterWidget(const UCoreHudAntiCampSelfUnhookMeterWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreHudAntiCampSelfUnhookMeterWidget(UCoreHudAntiCampSelfUnhookMeterWidget&&); \
	NO_API UCoreHudAntiCampSelfUnhookMeterWidget(const UCoreHudAntiCampSelfUnhookMeterWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreHudAntiCampSelfUnhookMeterWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreHudAntiCampSelfUnhookMeterWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreHudAntiCampSelfUnhookMeterWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h_12_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h_9_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h_12_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h_12_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h_12_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreHudAntiCampSelfUnhookMeterWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAntiCampSelfUnhookMeterWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
