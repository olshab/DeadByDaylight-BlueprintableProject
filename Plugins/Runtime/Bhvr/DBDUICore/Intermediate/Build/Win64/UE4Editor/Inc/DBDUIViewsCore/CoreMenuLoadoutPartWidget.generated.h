// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLoadoutTooltipData;
class UMenuLoadoutPartViewData;
#ifdef DBDUIVIEWSCORE_CoreMenuLoadoutPartWidget_generated_h
#error "CoreMenuLoadoutPartWidget.generated.h already included, missing '#pragma once' in CoreMenuLoadoutPartWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreMenuLoadoutPartWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h_22_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTooltipData); \
	DECLARE_FUNCTION(execGetWidgetItemId); \
	DECLARE_FUNCTION(execGetWidgetLockedState); \
	DECLARE_FUNCTION(execSetEmptyWidget); \
	DECLARE_FUNCTION(execSetIsPerkSurfacingExperimentActive); \
	DECLARE_FUNCTION(execSetLoadoutPartData); \
	DECLARE_FUNCTION(execSetLoadoutPartScale); \
	DECLARE_FUNCTION(execSetLoadoutPartTooltipData); \
	DECLARE_FUNCTION(execSetSelectedState);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTooltipData); \
	DECLARE_FUNCTION(execGetWidgetItemId); \
	DECLARE_FUNCTION(execGetWidgetLockedState); \
	DECLARE_FUNCTION(execSetEmptyWidget); \
	DECLARE_FUNCTION(execSetIsPerkSurfacingExperimentActive); \
	DECLARE_FUNCTION(execSetLoadoutPartData); \
	DECLARE_FUNCTION(execSetLoadoutPartScale); \
	DECLARE_FUNCTION(execSetLoadoutPartTooltipData); \
	DECLARE_FUNCTION(execSetSelectedState);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h_22_EVENT_PARMS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h_22_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreMenuLoadoutPartWidget(); \
	friend struct Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreMenuLoadoutPartWidget, UCoreSelectableButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreMenuLoadoutPartWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUCoreMenuLoadoutPartWidget(); \
	friend struct Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreMenuLoadoutPartWidget, UCoreSelectableButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreMenuLoadoutPartWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreMenuLoadoutPartWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreMenuLoadoutPartWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreMenuLoadoutPartWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreMenuLoadoutPartWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreMenuLoadoutPartWidget(UCoreMenuLoadoutPartWidget&&); \
	NO_API UCoreMenuLoadoutPartWidget(const UCoreMenuLoadoutPartWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreMenuLoadoutPartWidget(UCoreMenuLoadoutPartWidget&&); \
	NO_API UCoreMenuLoadoutPartWidget(const UCoreMenuLoadoutPartWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreMenuLoadoutPartWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreMenuLoadoutPartWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreMenuLoadoutPartWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___loadoutTooltipViewData() { return STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, _loadoutTooltipViewData); } \
	FORCEINLINE static uint32 __PPO__RarityIMG() { return STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, RarityIMG); } \
	FORCEINLINE static uint32 __PPO__IconIMG() { return STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, IconIMG); } \
	FORCEINLINE static uint32 __PPO__KillSwitchIMG() { return STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, KillSwitchIMG); } \
	FORCEINLINE static uint32 __PPO__LockedIcon() { return STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, LockedIcon); } \
	FORCEINLINE static uint32 __PPO__Background() { return STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, Background); } \
	FORCEINLINE static uint32 __PPO__ShadowOffset() { return STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, ShadowOffset); } \
	FORCEINLINE static uint32 __PPO__Selected() { return STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, Selected); } \
	FORCEINLINE static uint32 __PPO__LayoutScale() { return STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, LayoutScale); } \
	FORCEINLINE static uint32 __PPO__OnHoverBorder() { return STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, OnHoverBorder); } \
	FORCEINLINE static uint32 __PPO__StackCountTB() { return STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, StackCountTB); } \
	FORCEINLINE static uint32 __PPO__PlusSignIcon() { return STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, PlusSignIcon); } \
	FORCEINLINE static uint32 __PPO__RarityTexture() { return STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, RarityTexture); } \
	FORCEINLINE static uint32 __PPO___itemId() { return STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, _itemId); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h_19_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h_22_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h_22_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h_22_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h_22_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h_22_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h_22_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h_22_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h_22_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreMenuLoadoutPartWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreMenuLoadoutPartWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
