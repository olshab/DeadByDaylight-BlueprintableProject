// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCorePlayerLevelTooltipViewData;
#ifdef DBDUIVIEWSCORE_CorePlayerLevelTooltipWidget_generated_h
#error "CorePlayerLevelTooltipWidget.generated.h already included, missing '#pragma once' in CorePlayerLevelTooltipWidget.h"
#endif
#define DBDUIVIEWSCORE_CorePlayerLevelTooltipWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h_14_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h_14_RPC_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h_14_EVENT_PARMS \
	struct CorePlayerLevelTooltipWidget_eventSetTooltipData_Parms \
	{ \
		FCorePlayerLevelTooltipViewData viewData; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCorePlayerLevelTooltipWidget(); \
	friend struct Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics; \
public: \
	DECLARE_CLASS(UCorePlayerLevelTooltipWidget, UTooltipWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCorePlayerLevelTooltipWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCorePlayerLevelTooltipWidget(); \
	friend struct Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics; \
public: \
	DECLARE_CLASS(UCorePlayerLevelTooltipWidget, UTooltipWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCorePlayerLevelTooltipWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCorePlayerLevelTooltipWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCorePlayerLevelTooltipWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCorePlayerLevelTooltipWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCorePlayerLevelTooltipWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCorePlayerLevelTooltipWidget(UCorePlayerLevelTooltipWidget&&); \
	NO_API UCorePlayerLevelTooltipWidget(const UCorePlayerLevelTooltipWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCorePlayerLevelTooltipWidget(UCorePlayerLevelTooltipWidget&&); \
	NO_API UCorePlayerLevelTooltipWidget(const UCorePlayerLevelTooltipWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCorePlayerLevelTooltipWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCorePlayerLevelTooltipWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCorePlayerLevelTooltipWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TitleTB() { return STRUCT_OFFSET(UCorePlayerLevelTooltipWidget, TitleTB); } \
	FORCEINLINE static uint32 __PPO__XPCurrentTitleTB() { return STRUCT_OFFSET(UCorePlayerLevelTooltipWidget, XPCurrentTitleTB); } \
	FORCEINLINE static uint32 __PPO__XPTB() { return STRUCT_OFFSET(UCorePlayerLevelTooltipWidget, XPTB); } \
	FORCEINLINE static uint32 __PPO__XPNextTitleTB() { return STRUCT_OFFSET(UCorePlayerLevelTooltipWidget, XPNextTitleTB); } \
	FORCEINLINE static uint32 __PPO__NextXpTB() { return STRUCT_OFFSET(UCorePlayerLevelTooltipWidget, NextXpTB); } \
	FORCEINLINE static uint32 __PPO__PlayerLevelTitleTB() { return STRUCT_OFFSET(UCorePlayerLevelTooltipWidget, PlayerLevelTitleTB); } \
	FORCEINLINE static uint32 __PPO__PrestigeTitleTB() { return STRUCT_OFFSET(UCorePlayerLevelTooltipWidget, PrestigeTitleTB); } \
	FORCEINLINE static uint32 __PPO__InfoTB() { return STRUCT_OFFSET(UCorePlayerLevelTooltipWidget, InfoTB); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h_11_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h_14_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h_14_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h_14_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCorePlayerLevelTooltipWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerLevelTooltipWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS