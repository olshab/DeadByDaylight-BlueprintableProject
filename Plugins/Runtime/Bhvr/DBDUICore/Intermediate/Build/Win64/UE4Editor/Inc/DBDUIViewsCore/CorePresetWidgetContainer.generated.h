// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreSelectableButtonWidget;
#ifdef DBDUIVIEWSCORE_CorePresetWidgetContainer_generated_h
#error "CorePresetWidgetContainer.generated.h already included, missing '#pragma once' in CorePresetWidgetContainer.h"
#endif
#define DBDUIVIEWSCORE_CorePresetWidgetContainer_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePresetWidgetContainer_h_15_DELEGATE \
struct CorePresetWidgetContainer_eventOnSelectedPresetDelegate_Parms \
{ \
	int32 selectedPreset; \
}; \
static inline void FOnSelectedPresetDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSelectedPresetDelegate, int32 selectedPreset) \
{ \
	CorePresetWidgetContainer_eventOnSelectedPresetDelegate_Parms Parms; \
	Parms.selectedPreset=selectedPreset; \
	OnSelectedPresetDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePresetWidgetContainer_h_12_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePresetWidgetContainer_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPreset); \
	DECLARE_FUNCTION(execSetSelectedPreset);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePresetWidgetContainer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPreset); \
	DECLARE_FUNCTION(execSetSelectedPreset);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePresetWidgetContainer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCorePresetWidgetContainer(); \
	friend struct Z_Construct_UClass_UCorePresetWidgetContainer_Statics; \
public: \
	DECLARE_CLASS(UCorePresetWidgetContainer, UCoreButtonSelector, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCorePresetWidgetContainer)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePresetWidgetContainer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUCorePresetWidgetContainer(); \
	friend struct Z_Construct_UClass_UCorePresetWidgetContainer_Statics; \
public: \
	DECLARE_CLASS(UCorePresetWidgetContainer, UCoreButtonSelector, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCorePresetWidgetContainer)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePresetWidgetContainer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCorePresetWidgetContainer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCorePresetWidgetContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCorePresetWidgetContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCorePresetWidgetContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCorePresetWidgetContainer(UCorePresetWidgetContainer&&); \
	NO_API UCorePresetWidgetContainer(const UCorePresetWidgetContainer&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePresetWidgetContainer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCorePresetWidgetContainer(UCorePresetWidgetContainer&&); \
	NO_API UCorePresetWidgetContainer(const UCorePresetWidgetContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCorePresetWidgetContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCorePresetWidgetContainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCorePresetWidgetContainer)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePresetWidgetContainer_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Preset_1() { return STRUCT_OFFSET(UCorePresetWidgetContainer, Preset_1); } \
	FORCEINLINE static uint32 __PPO__Preset_2() { return STRUCT_OFFSET(UCorePresetWidgetContainer, Preset_2); } \
	FORCEINLINE static uint32 __PPO__Preset_3() { return STRUCT_OFFSET(UCorePresetWidgetContainer, Preset_3); } \
	FORCEINLINE static uint32 __PPO__Preset_4() { return STRUCT_OFFSET(UCorePresetWidgetContainer, Preset_4); } \
	FORCEINLINE static uint32 __PPO___presetWidgets() { return STRUCT_OFFSET(UCorePresetWidgetContainer, _presetWidgets); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePresetWidgetContainer_h_9_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePresetWidgetContainer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePresetWidgetContainer_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePresetWidgetContainer_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePresetWidgetContainer_h_12_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePresetWidgetContainer_h_12_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePresetWidgetContainer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePresetWidgetContainer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePresetWidgetContainer_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePresetWidgetContainer_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePresetWidgetContainer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePresetWidgetContainer_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePresetWidgetContainer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCorePresetWidgetContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePresetWidgetContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
