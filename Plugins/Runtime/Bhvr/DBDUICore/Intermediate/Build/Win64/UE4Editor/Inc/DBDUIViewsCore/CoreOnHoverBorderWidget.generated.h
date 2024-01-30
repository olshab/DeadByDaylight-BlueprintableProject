// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreButtonWidget;
struct FLinearColor;
#ifdef DBDUIVIEWSCORE_CoreOnHoverBorderWidget_generated_h
#error "CoreOnHoverBorderWidget.generated.h already included, missing '#pragma once' in CoreOnHoverBorderWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreOnHoverBorderWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h_13_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h_13_RPC_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h_13_EVENT_PARMS \
	struct CoreOnHoverBorderWidget_eventBindToButton_Parms \
	{ \
		UCoreButtonWidget* buttonToBindOn; \
	}; \
	struct CoreOnHoverBorderWidget_eventPlayHoveredAnimation_Parms \
	{ \
		bool playForward; \
	}; \
	struct CoreOnHoverBorderWidget_eventPlayPressedAnimation_Parms \
	{ \
		bool playForward; \
	}; \
	struct CoreOnHoverBorderWidget_eventUpdateColors_Parms \
	{ \
		FLinearColor progressBarColor; \
		FLinearColor backgroundColor; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreOnHoverBorderWidget(); \
	friend struct Z_Construct_UClass_UCoreOnHoverBorderWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreOnHoverBorderWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreOnHoverBorderWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCoreOnHoverBorderWidget(); \
	friend struct Z_Construct_UClass_UCoreOnHoverBorderWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreOnHoverBorderWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreOnHoverBorderWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreOnHoverBorderWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreOnHoverBorderWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreOnHoverBorderWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreOnHoverBorderWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreOnHoverBorderWidget(UCoreOnHoverBorderWidget&&); \
	NO_API UCoreOnHoverBorderWidget(const UCoreOnHoverBorderWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreOnHoverBorderWidget(UCoreOnHoverBorderWidget&&); \
	NO_API UCoreOnHoverBorderWidget(const UCoreOnHoverBorderWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreOnHoverBorderWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreOnHoverBorderWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreOnHoverBorderWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h_13_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h_10_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h_13_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h_13_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h_13_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h_13_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h_13_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreOnHoverBorderWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnHoverBorderWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
