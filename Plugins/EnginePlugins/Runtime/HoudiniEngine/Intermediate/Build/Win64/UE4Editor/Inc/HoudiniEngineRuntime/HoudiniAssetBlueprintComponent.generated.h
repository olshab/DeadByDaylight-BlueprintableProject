// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniAssetBlueprintComponent_generated_h
#error "HoudiniAssetBlueprintComponent.generated.h already included, missing '#pragma once' in HoudiniAssetBlueprintComponent.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniAssetBlueprintComponent_generated_h

#define DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_12_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasParameter); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execSetToggleValueAt);


#define DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasParameter); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execSetToggleValueAt);


#define DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniAssetBlueprintComponent(); \
	friend struct Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics; \
public: \
	DECLARE_CLASS(UHoudiniAssetBlueprintComponent, UHoudiniAssetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniAssetBlueprintComponent)


#define DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniAssetBlueprintComponent(); \
	friend struct Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics; \
public: \
	DECLARE_CLASS(UHoudiniAssetBlueprintComponent, UHoudiniAssetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniAssetBlueprintComponent)


#define DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniAssetBlueprintComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniAssetBlueprintComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniAssetBlueprintComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniAssetBlueprintComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniAssetBlueprintComponent(UHoudiniAssetBlueprintComponent&&); \
	NO_API UHoudiniAssetBlueprintComponent(const UHoudiniAssetBlueprintComponent&); \
public:


#define DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniAssetBlueprintComponent(UHoudiniAssetBlueprintComponent&&); \
	NO_API UHoudiniAssetBlueprintComponent(const UHoudiniAssetBlueprintComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniAssetBlueprintComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniAssetBlueprintComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniAssetBlueprintComponent)


#define DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FauxBPProperty() { return STRUCT_OFFSET(UHoudiniAssetBlueprintComponent, FauxBPProperty); } \
	FORCEINLINE static uint32 __PPO__bHoudiniAssetChanged() { return STRUCT_OFFSET(UHoudiniAssetBlueprintComponent, bHoudiniAssetChanged); } \
	FORCEINLINE static uint32 __PPO__bUpdatedFromTemplate() { return STRUCT_OFFSET(UHoudiniAssetBlueprintComponent, bUpdatedFromTemplate); } \
	FORCEINLINE static uint32 __PPO__bIsInBlueprintEditor() { return STRUCT_OFFSET(UHoudiniAssetBlueprintComponent, bIsInBlueprintEditor); } \
	FORCEINLINE static uint32 __PPO__bCanDeleteHoudiniNodes() { return STRUCT_OFFSET(UHoudiniAssetBlueprintComponent, bCanDeleteHoudiniNodes); } \
	FORCEINLINE static uint32 __PPO__bHasRegisteredComponentTemplate() { return STRUCT_OFFSET(UHoudiniAssetBlueprintComponent, bHasRegisteredComponentTemplate); } \
	FORCEINLINE static uint32 __PPO__CachedOutputNodes() { return STRUCT_OFFSET(UHoudiniAssetBlueprintComponent, CachedOutputNodes); } \
	FORCEINLINE static uint32 __PPO__CachedInputNodes() { return STRUCT_OFFSET(UHoudiniAssetBlueprintComponent, CachedInputNodes); }


#define DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_9_PROLOG
#define DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_12_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_12_INCLASS \
	DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniAssetBlueprintComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
