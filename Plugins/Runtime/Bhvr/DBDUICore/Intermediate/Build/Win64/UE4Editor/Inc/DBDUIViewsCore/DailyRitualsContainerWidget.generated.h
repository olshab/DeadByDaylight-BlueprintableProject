// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDailyRitualTileWidget;
class UUITweenInstance;
struct FDailyRitualViewData;
#ifdef DBDUIVIEWSCORE_DailyRitualsContainerWidget_generated_h
#error "DailyRitualsContainerWidget.generated.h already included, missing '#pragma once' in DailyRitualsContainerWidget.h"
#endif
#define DBDUIVIEWSCORE_DailyRitualsContainerWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsContainerWidget_h_20_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsContainerWidget_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDailyRitualClaimButtonClicked); \
	DECLARE_FUNCTION(execOnDailyRitualRemoveButtonClicked); \
	DECLARE_FUNCTION(execOnDailyRitualTileFadeOutComplete); \
	DECLARE_FUNCTION(execOnDelayUntilFadeInSequenceComplete); \
	DECLARE_FUNCTION(execOnRecentlyAssignedDailyRitualFadeInComplete); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execStartAnim);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsContainerWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDailyRitualClaimButtonClicked); \
	DECLARE_FUNCTION(execOnDailyRitualRemoveButtonClicked); \
	DECLARE_FUNCTION(execOnDailyRitualTileFadeOutComplete); \
	DECLARE_FUNCTION(execOnDelayUntilFadeInSequenceComplete); \
	DECLARE_FUNCTION(execOnRecentlyAssignedDailyRitualFadeInComplete); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execStartAnim);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsContainerWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDailyRitualsContainerWidget(); \
	friend struct Z_Construct_UClass_UDailyRitualsContainerWidget_Statics; \
public: \
	DECLARE_CLASS(UDailyRitualsContainerWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UDailyRitualsContainerWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsContainerWidget_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUDailyRitualsContainerWidget(); \
	friend struct Z_Construct_UClass_UDailyRitualsContainerWidget_Statics; \
public: \
	DECLARE_CLASS(UDailyRitualsContainerWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UDailyRitualsContainerWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsContainerWidget_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDailyRitualsContainerWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDailyRitualsContainerWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDailyRitualsContainerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDailyRitualsContainerWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDailyRitualsContainerWidget(UDailyRitualsContainerWidget&&); \
	NO_API UDailyRitualsContainerWidget(const UDailyRitualsContainerWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsContainerWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDailyRitualsContainerWidget(UDailyRitualsContainerWidget&&); \
	NO_API UDailyRitualsContainerWidget(const UDailyRitualsContainerWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDailyRitualsContainerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDailyRitualsContainerWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDailyRitualsContainerWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsContainerWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___claimButtonClickedDelegate() { return STRUCT_OFFSET(UDailyRitualsContainerWidget, _claimButtonClickedDelegate); } \
	FORCEINLINE static uint32 __PPO___removeButtonClickedDelegate() { return STRUCT_OFFSET(UDailyRitualsContainerWidget, _removeButtonClickedDelegate); } \
	FORCEINLINE static uint32 __PPO___onOutOfDailyRitualsDelegate() { return STRUCT_OFFSET(UDailyRitualsContainerWidget, _onOutOfDailyRitualsDelegate); } \
	FORCEINLINE static uint32 __PPO__DailyRitualTileWidgetClass() { return STRUCT_OFFSET(UDailyRitualsContainerWidget, DailyRitualTileWidgetClass); } \
	FORCEINLINE static uint32 __PPO__Container() { return STRUCT_OFFSET(UDailyRitualsContainerWidget, Container); } \
	FORCEINLINE static uint32 __PPO__NoRitualWarningText() { return STRUCT_OFFSET(UDailyRitualsContainerWidget, NoRitualWarningText); } \
	FORCEINLINE static uint32 __PPO__TilePadding() { return STRUCT_OFFSET(UDailyRitualsContainerWidget, TilePadding); } \
	FORCEINLINE static uint32 __PPO__FadeInNoRitualsWarningTextDuration() { return STRUCT_OFFSET(UDailyRitualsContainerWidget, FadeInNoRitualsWarningTextDuration); } \
	FORCEINLINE static uint32 __PPO__AlignmentAnimationDuration() { return STRUCT_OFFSET(UDailyRitualsContainerWidget, AlignmentAnimationDuration); } \
	FORCEINLINE static uint32 __PPO___alignAssignedRitualsTween() { return STRUCT_OFFSET(UDailyRitualsContainerWidget, _alignAssignedRitualsTween); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsContainerWidget_h_17_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsContainerWidget_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsContainerWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsContainerWidget_h_20_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsContainerWidget_h_20_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsContainerWidget_h_20_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsContainerWidget_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsContainerWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsContainerWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsContainerWidget_h_20_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsContainerWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsContainerWidget_h_20_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsContainerWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UDailyRitualsContainerWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsContainerWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
