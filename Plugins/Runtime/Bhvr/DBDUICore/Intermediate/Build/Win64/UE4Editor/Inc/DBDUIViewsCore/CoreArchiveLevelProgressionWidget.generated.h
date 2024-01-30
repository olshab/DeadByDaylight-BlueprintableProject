// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreSelectableButtonWidget;
#ifdef DBDUIVIEWSCORE_CoreArchiveLevelProgressionWidget_generated_h
#error "CoreArchiveLevelProgressionWidget.generated.h already included, missing '#pragma once' in CoreArchiveLevelProgressionWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreArchiveLevelProgressionWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveLevelProgressionWidget_h_20_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveLevelProgressionWidget_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnStoryLevelSelected); \
	DECLARE_FUNCTION(execOnTomeLevelUnlockedAnimation);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveLevelProgressionWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnStoryLevelSelected); \
	DECLARE_FUNCTION(execOnTomeLevelUnlockedAnimation);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveLevelProgressionWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreArchiveLevelProgressionWidget(); \
	friend struct Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveLevelProgressionWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveLevelProgressionWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreArchiveLevelProgressionWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveLevelProgressionWidget_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUCoreArchiveLevelProgressionWidget(); \
	friend struct Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveLevelProgressionWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveLevelProgressionWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreArchiveLevelProgressionWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveLevelProgressionWidget_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreArchiveLevelProgressionWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreArchiveLevelProgressionWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveLevelProgressionWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveLevelProgressionWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveLevelProgressionWidget(UCoreArchiveLevelProgressionWidget&&); \
	NO_API UCoreArchiveLevelProgressionWidget(const UCoreArchiveLevelProgressionWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveLevelProgressionWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveLevelProgressionWidget(UCoreArchiveLevelProgressionWidget&&); \
	NO_API UCoreArchiveLevelProgressionWidget(const UCoreArchiveLevelProgressionWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveLevelProgressionWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveLevelProgressionWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreArchiveLevelProgressionWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveLevelProgressionWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___levelSelectedDelegate() { return STRUCT_OFFSET(UCoreArchiveLevelProgressionWidget, _levelSelectedDelegate); } \
	FORCEINLINE static uint32 __PPO___levelAnimationDoneDelegate() { return STRUCT_OFFSET(UCoreArchiveLevelProgressionWidget, _levelAnimationDoneDelegate); } \
	FORCEINLINE static uint32 __PPO___levelRewardAnimationDoneDelegate() { return STRUCT_OFFSET(UCoreArchiveLevelProgressionWidget, _levelRewardAnimationDoneDelegate); } \
	FORCEINLINE static uint32 __PPO___levelUnlockedAnimationDoneDelegate() { return STRUCT_OFFSET(UCoreArchiveLevelProgressionWidget, _levelUnlockedAnimationDoneDelegate); } \
	FORCEINLINE static uint32 __PPO__StoryLevelsSelector() { return STRUCT_OFFSET(UCoreArchiveLevelProgressionWidget, StoryLevelsSelector); } \
	FORCEINLINE static uint32 __PPO__LevelNumberTF() { return STRUCT_OFFSET(UCoreArchiveLevelProgressionWidget, LevelNumberTF); } \
	FORCEINLINE static uint32 __PPO__LevelCompletionTF() { return STRUCT_OFFSET(UCoreArchiveLevelProgressionWidget, LevelCompletionTF); } \
	FORCEINLINE static uint32 __PPO__SideContent() { return STRUCT_OFFSET(UCoreArchiveLevelProgressionWidget, SideContent); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveLevelProgressionWidget_h_17_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveLevelProgressionWidget_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveLevelProgressionWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveLevelProgressionWidget_h_20_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveLevelProgressionWidget_h_20_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveLevelProgressionWidget_h_20_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveLevelProgressionWidget_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveLevelProgressionWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveLevelProgressionWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveLevelProgressionWidget_h_20_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveLevelProgressionWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveLevelProgressionWidget_h_20_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveLevelProgressionWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreArchiveLevelProgressionWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveLevelProgressionWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
