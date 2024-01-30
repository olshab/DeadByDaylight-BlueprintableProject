// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMenuAddonViewData;
struct FLoadoutTooltipData;
#ifdef DBDUIVIEWSCORE_CoreMenuAddonWidget_generated_h
#error "CoreMenuAddonWidget.generated.h already included, missing '#pragma once' in CoreMenuAddonWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreMenuAddonWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h_14_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWidgetParentDisplayName); \
	DECLARE_FUNCTION(execSetAddonDisabled); \
	DECLARE_FUNCTION(execSetMenuAddonData); \
	DECLARE_FUNCTION(execSetMenuAddonTooltipData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWidgetParentDisplayName); \
	DECLARE_FUNCTION(execSetAddonDisabled); \
	DECLARE_FUNCTION(execSetMenuAddonData); \
	DECLARE_FUNCTION(execSetMenuAddonTooltipData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h_14_EVENT_PARMS \
	struct CoreMenuAddonWidget_eventSetWhitePlusIconVisibility_Parms \
	{ \
		bool isVisible; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreMenuAddonWidget(); \
	friend struct Z_Construct_UClass_UCoreMenuAddonWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreMenuAddonWidget, UCoreMenuLoadoutPartWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreMenuAddonWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCoreMenuAddonWidget(); \
	friend struct Z_Construct_UClass_UCoreMenuAddonWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreMenuAddonWidget, UCoreMenuLoadoutPartWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreMenuAddonWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreMenuAddonWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreMenuAddonWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreMenuAddonWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreMenuAddonWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreMenuAddonWidget(UCoreMenuAddonWidget&&); \
	NO_API UCoreMenuAddonWidget(const UCoreMenuAddonWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreMenuAddonWidget(UCoreMenuAddonWidget&&); \
	NO_API UCoreMenuAddonWidget(const UCoreMenuAddonWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreMenuAddonWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreMenuAddonWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreMenuAddonWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DisabledState() { return STRUCT_OFFSET(UCoreMenuAddonWidget, DisabledState); } \
	FORCEINLINE static uint32 __PPO___addonInventoryScale() { return STRUCT_OFFSET(UCoreMenuAddonWidget, _addonInventoryScale); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h_11_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h_14_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h_14_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h_14_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreMenuAddonWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuAddonWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
