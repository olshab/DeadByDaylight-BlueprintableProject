// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRankTooltipViewData;
#ifdef DBDUIVIEWSCORE_CoreRankTooltipWidget_generated_h
#error "CoreRankTooltipWidget.generated.h already included, missing '#pragma once' in CoreRankTooltipWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreRankTooltipWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h_14_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h_14_RPC_WRAPPERS \
	virtual void SetTooltipData_Implementation(FRankTooltipViewData const& viewData); \
 \
	DECLARE_FUNCTION(execSetTooltipData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetTooltipData_Implementation(FRankTooltipViewData const& viewData); \
 \
	DECLARE_FUNCTION(execSetTooltipData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h_14_EVENT_PARMS \
	struct CoreRankTooltipWidget_eventSetTooltipData_Parms \
	{ \
		FRankTooltipViewData viewData; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreRankTooltipWidget(); \
	friend struct Z_Construct_UClass_UCoreRankTooltipWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreRankTooltipWidget, UTooltipWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreRankTooltipWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCoreRankTooltipWidget(); \
	friend struct Z_Construct_UClass_UCoreRankTooltipWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreRankTooltipWidget, UTooltipWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreRankTooltipWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreRankTooltipWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreRankTooltipWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreRankTooltipWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreRankTooltipWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreRankTooltipWidget(UCoreRankTooltipWidget&&); \
	NO_API UCoreRankTooltipWidget(const UCoreRankTooltipWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreRankTooltipWidget(UCoreRankTooltipWidget&&); \
	NO_API UCoreRankTooltipWidget(const UCoreRankTooltipWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreRankTooltipWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreRankTooltipWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreRankTooltipWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TitleTB() { return STRUCT_OFFSET(UCoreRankTooltipWidget, TitleTB); } \
	FORCEINLINE static uint32 __PPO__RankNameTB() { return STRUCT_OFFSET(UCoreRankTooltipWidget, RankNameTB); } \
	FORCEINLINE static uint32 __PPO__ProgressTB() { return STRUCT_OFFSET(UCoreRankTooltipWidget, ProgressTB); } \
	FORCEINLINE static uint32 __PPO__InfoTB() { return STRUCT_OFFSET(UCoreRankTooltipWidget, InfoTB); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h_11_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h_14_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h_14_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h_14_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreRankTooltipWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreRankTooltipWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
