// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLoadoutTooltipData;
#ifdef DBDUIVIEWSCORE_LoadoutTooltipWidget_generated_h
#error "LoadoutTooltipWidget.generated.h already included, missing '#pragma once' in LoadoutTooltipWidget.h"
#endif
#define DBDUIVIEWSCORE_LoadoutTooltipWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h_15_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSetTooltipData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSetTooltipData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h_15_EVENT_PARMS \
	struct LoadoutTooltipWidget_eventSetLoadoutTooltipPerkLevel_Parms \
	{ \
		int32 level; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h_15_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoadoutTooltipWidget(); \
	friend struct Z_Construct_UClass_ULoadoutTooltipWidget_Statics; \
public: \
	DECLARE_CLASS(ULoadoutTooltipWidget, UTooltipWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(ULoadoutTooltipWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesULoadoutTooltipWidget(); \
	friend struct Z_Construct_UClass_ULoadoutTooltipWidget_Statics; \
public: \
	DECLARE_CLASS(ULoadoutTooltipWidget, UTooltipWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(ULoadoutTooltipWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadoutTooltipWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadoutTooltipWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadoutTooltipWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadoutTooltipWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadoutTooltipWidget(ULoadoutTooltipWidget&&); \
	NO_API ULoadoutTooltipWidget(const ULoadoutTooltipWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadoutTooltipWidget(ULoadoutTooltipWidget&&); \
	NO_API ULoadoutTooltipWidget(const ULoadoutTooltipWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadoutTooltipWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadoutTooltipWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULoadoutTooltipWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TooltipTitle() { return STRUCT_OFFSET(ULoadoutTooltipWidget, TooltipTitle); } \
	FORCEINLINE static uint32 __PPO__ToolTipDescriptionRTB() { return STRUCT_OFFSET(ULoadoutTooltipWidget, ToolTipDescriptionRTB); } \
	FORCEINLINE static uint32 __PPO__SpecialEventTitle() { return STRUCT_OFFSET(ULoadoutTooltipWidget, SpecialEventTitle); } \
	FORCEINLINE static uint32 __PPO__SpecialEventDescription() { return STRUCT_OFFSET(ULoadoutTooltipWidget, SpecialEventDescription); } \
	FORCEINLINE static uint32 __PPO__UnlockInstructionText() { return STRUCT_OFFSET(ULoadoutTooltipWidget, UnlockInstructionText); } \
	FORCEINLINE static uint32 __PPO__RarityTypeSubtitle() { return STRUCT_OFFSET(ULoadoutTooltipWidget, RarityTypeSubtitle); } \
	FORCEINLINE static uint32 __PPO__RarityBG() { return STRUCT_OFFSET(ULoadoutTooltipWidget, RarityBG); } \
	FORCEINLINE static uint32 __PPO__Line_1() { return STRUCT_OFFSET(ULoadoutTooltipWidget, Line_1); } \
	FORCEINLINE static uint32 __PPO__LevelIcon() { return STRUCT_OFFSET(ULoadoutTooltipWidget, LevelIcon); } \
	FORCEINLINE static uint32 __PPO__ToolTipWarning() { return STRUCT_OFFSET(ULoadoutTooltipWidget, ToolTipWarning); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h_12_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h_15_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h_15_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h_15_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h_15_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h_15_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class ULoadoutTooltipWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_LoadoutTooltipWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
