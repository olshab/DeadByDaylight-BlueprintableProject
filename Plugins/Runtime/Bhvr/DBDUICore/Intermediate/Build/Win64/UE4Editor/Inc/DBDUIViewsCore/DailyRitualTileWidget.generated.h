// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreButtonWidget;
#ifdef DBDUIVIEWSCORE_DailyRitualTileWidget_generated_h
#error "DailyRitualTileWidget.generated.h already included, missing '#pragma once' in DailyRitualTileWidget.h"
#endif
#define DBDUIVIEWSCORE_DailyRitualTileWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h_21_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnClaimButtonClicked); \
	DECLARE_FUNCTION(execOnRemoveButtonClicked);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnClaimButtonClicked); \
	DECLARE_FUNCTION(execOnRemoveButtonClicked);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h_21_EVENT_PARMS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h_21_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDailyRitualTileWidget(); \
	friend struct Z_Construct_UClass_UDailyRitualTileWidget_Statics; \
public: \
	DECLARE_CLASS(UDailyRitualTileWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UDailyRitualTileWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUDailyRitualTileWidget(); \
	friend struct Z_Construct_UClass_UDailyRitualTileWidget_Statics; \
public: \
	DECLARE_CLASS(UDailyRitualTileWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UDailyRitualTileWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDailyRitualTileWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDailyRitualTileWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDailyRitualTileWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDailyRitualTileWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDailyRitualTileWidget(UDailyRitualTileWidget&&); \
	NO_API UDailyRitualTileWidget(const UDailyRitualTileWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDailyRitualTileWidget(UDailyRitualTileWidget&&); \
	NO_API UDailyRitualTileWidget(const UDailyRitualTileWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDailyRitualTileWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDailyRitualTileWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDailyRitualTileWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___claimButtonClickedDelegate() { return STRUCT_OFFSET(UDailyRitualTileWidget, _claimButtonClickedDelegate); } \
	FORCEINLINE static uint32 __PPO___removeButtonClickedDelegate() { return STRUCT_OFFSET(UDailyRitualTileWidget, _removeButtonClickedDelegate); } \
	FORCEINLINE static uint32 __PPO___onDailyRitualTileFadeInCompletedDelegate() { return STRUCT_OFFSET(UDailyRitualTileWidget, _onDailyRitualTileFadeInCompletedDelegate); } \
	FORCEINLINE static uint32 __PPO___onDailyRitualTileFadeOutCompletedDelegate() { return STRUCT_OFFSET(UDailyRitualTileWidget, _onDailyRitualTileFadeOutCompletedDelegate); } \
	FORCEINLINE static uint32 __PPO__ContainerSizeBox() { return STRUCT_OFFSET(UDailyRitualTileWidget, ContainerSizeBox); } \
	FORCEINLINE static uint32 __PPO__IconImage() { return STRUCT_OFFSET(UDailyRitualTileWidget, IconImage); } \
	FORCEINLINE static uint32 __PPO__BackgroundImage() { return STRUCT_OFFSET(UDailyRitualTileWidget, BackgroundImage); } \
	FORCEINLINE static uint32 __PPO__ProgressBar() { return STRUCT_OFFSET(UDailyRitualTileWidget, ProgressBar); } \
	FORCEINLINE static uint32 __PPO__BackgroundSheen() { return STRUCT_OFFSET(UDailyRitualTileWidget, BackgroundSheen); } \
	FORCEINLINE static uint32 __PPO__TitleTextBlock() { return STRUCT_OFFSET(UDailyRitualTileWidget, TitleTextBlock); } \
	FORCEINLINE static uint32 __PPO__RewardTextBlock() { return STRUCT_OFFSET(UDailyRitualTileWidget, RewardTextBlock); } \
	FORCEINLINE static uint32 __PPO__DescriptionTextBlock() { return STRUCT_OFFSET(UDailyRitualTileWidget, DescriptionTextBlock); } \
	FORCEINLINE static uint32 __PPO__ProgressTextBlock() { return STRUCT_OFFSET(UDailyRitualTileWidget, ProgressTextBlock); } \
	FORCEINLINE static uint32 __PPO__ClaimButton() { return STRUCT_OFFSET(UDailyRitualTileWidget, ClaimButton); } \
	FORCEINLINE static uint32 __PPO__RemoveButton() { return STRUCT_OFFSET(UDailyRitualTileWidget, RemoveButton); } \
	FORCEINLINE static uint32 __PPO__DefaultBackgroundTexture() { return STRUCT_OFFSET(UDailyRitualTileWidget, DefaultBackgroundTexture); } \
	FORCEINLINE static uint32 __PPO__NewBackgroundTexture() { return STRUCT_OFFSET(UDailyRitualTileWidget, NewBackgroundTexture); } \
	FORCEINLINE static uint32 __PPO__CompletedBackgroundTexture() { return STRUCT_OFFSET(UDailyRitualTileWidget, CompletedBackgroundTexture); } \
	FORCEINLINE static uint32 __PPO___dailyRitualData() { return STRUCT_OFFSET(UDailyRitualTileWidget, _dailyRitualData); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h_18_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h_21_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h_21_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h_21_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h_21_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h_21_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h_21_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h_21_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h_21_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UDailyRitualTileWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualTileWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
