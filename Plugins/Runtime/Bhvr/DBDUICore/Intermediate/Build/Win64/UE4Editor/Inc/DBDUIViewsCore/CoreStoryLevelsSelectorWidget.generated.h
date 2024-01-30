// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreStoryLevelButtonWidget;
class UArchiveStoryLevelViewData;
enum class EArchivesStoryLevelStatus : uint8;
#ifdef DBDUIVIEWSCORE_CoreStoryLevelsSelectorWidget_generated_h
#error "CoreStoryLevelsSelectorWidget.generated.h already included, missing '#pragma once' in CoreStoryLevelsSelectorWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreStoryLevelsSelectorWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h_17_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAdaptButtonsPoolToData); \
	DECLARE_FUNCTION(execGetStoryLevelButton); \
	DECLARE_FUNCTION(execOnStoryLevelUnlockedAnimation); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetUpInteractionMode); \
	DECLARE_FUNCTION(execUpdateLevelStatus);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAdaptButtonsPoolToData); \
	DECLARE_FUNCTION(execGetStoryLevelButton); \
	DECLARE_FUNCTION(execOnStoryLevelUnlockedAnimation); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetUpInteractionMode); \
	DECLARE_FUNCTION(execUpdateLevelStatus);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h_17_EVENT_PARMS \
	struct CoreStoryLevelsSelectorWidget_eventUpdateVisual_Parms \
	{ \
		EArchivesStoryLevelStatus globalStatus; \
		bool playAnimation; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreStoryLevelsSelectorWidget(); \
	friend struct Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStoryLevelsSelectorWidget, UCoreButtonSelector, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStoryLevelsSelectorWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCoreStoryLevelsSelectorWidget(); \
	friend struct Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStoryLevelsSelectorWidget, UCoreButtonSelector, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStoryLevelsSelectorWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreStoryLevelsSelectorWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreStoryLevelsSelectorWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStoryLevelsSelectorWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStoryLevelsSelectorWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStoryLevelsSelectorWidget(UCoreStoryLevelsSelectorWidget&&); \
	NO_API UCoreStoryLevelsSelectorWidget(const UCoreStoryLevelsSelectorWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStoryLevelsSelectorWidget(UCoreStoryLevelsSelectorWidget&&); \
	NO_API UCoreStoryLevelsSelectorWidget(const UCoreStoryLevelsSelectorWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStoryLevelsSelectorWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStoryLevelsSelectorWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreStoryLevelsSelectorWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IsReadOnly() { return STRUCT_OFFSET(UCoreStoryLevelsSelectorWidget, IsReadOnly); } \
	FORCEINLINE static uint32 __PPO__CoreStoryLevelButtonWidgetClass() { return STRUCT_OFFSET(UCoreStoryLevelsSelectorWidget, CoreStoryLevelButtonWidgetClass); } \
	FORCEINLINE static uint32 __PPO__LevelButtonsContainer() { return STRUCT_OFFSET(UCoreStoryLevelsSelectorWidget, LevelButtonsContainer); } \
	FORCEINLINE static uint32 __PPO__PreviousLevelInputSwitcher() { return STRUCT_OFFSET(UCoreStoryLevelsSelectorWidget, PreviousLevelInputSwitcher); } \
	FORCEINLINE static uint32 __PPO__NextLevelInputSwitcher() { return STRUCT_OFFSET(UCoreStoryLevelsSelectorWidget, NextLevelInputSwitcher); } \
	FORCEINLINE static uint32 __PPO___levelButtonsData() { return STRUCT_OFFSET(UCoreStoryLevelsSelectorWidget, _levelButtonsData); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h_14_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h_17_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h_17_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h_17_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h_17_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h_17_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreStoryLevelsSelectorWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoryLevelsSelectorWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
