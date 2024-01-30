// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniInputObject_generated_h
#error "HoudiniInputObject.generated.h already included, missing '#pragma once' in HoudiniInputObject.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniInputObject_generated_h

#define DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObject_h_12_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObject_h_12_RPC_WRAPPERS
#define DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObject_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObject_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniInputObject(); \
	friend struct Z_Construct_UClass_UHoudiniInputObject_Statics; \
public: \
	DECLARE_CLASS(UHoudiniInputObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniInputObject)


#define DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObject_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniInputObject(); \
	friend struct Z_Construct_UClass_UHoudiniInputObject_Statics; \
public: \
	DECLARE_CLASS(UHoudiniInputObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniInputObject)


#define DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObject_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniInputObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniInputObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniInputObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniInputObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniInputObject(UHoudiniInputObject&&); \
	NO_API UHoudiniInputObject(const UHoudiniInputObject&); \
public:


#define DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObject_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniInputObject(UHoudiniInputObject&&); \
	NO_API UHoudiniInputObject(const UHoudiniInputObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniInputObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniInputObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniInputObject)


#define DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObject_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bHasChanged() { return STRUCT_OFFSET(UHoudiniInputObject, bHasChanged); } \
	FORCEINLINE static uint32 __PPO__bNeedsToTriggerUpdate() { return STRUCT_OFFSET(UHoudiniInputObject, bNeedsToTriggerUpdate); } \
	FORCEINLINE static uint32 __PPO__bTransformChanged() { return STRUCT_OFFSET(UHoudiniInputObject, bTransformChanged); } \
	FORCEINLINE static uint32 __PPO__bImportAsReference() { return STRUCT_OFFSET(UHoudiniInputObject, bImportAsReference); } \
	FORCEINLINE static uint32 __PPO__bImportAsReferenceRotScaleEnabled() { return STRUCT_OFFSET(UHoudiniInputObject, bImportAsReferenceRotScaleEnabled); } \
	FORCEINLINE static uint32 __PPO__bImportAsReferenceBboxEnabled() { return STRUCT_OFFSET(UHoudiniInputObject, bImportAsReferenceBboxEnabled); } \
	FORCEINLINE static uint32 __PPO__bImportAsReferenceMaterialEnabled() { return STRUCT_OFFSET(UHoudiniInputObject, bImportAsReferenceMaterialEnabled); } \
	FORCEINLINE static uint32 __PPO__MaterialReferences() { return STRUCT_OFFSET(UHoudiniInputObject, MaterialReferences); } \
	FORCEINLINE static uint32 __PPO__bCanDeleteHoudiniNodes() { return STRUCT_OFFSET(UHoudiniInputObject, bCanDeleteHoudiniNodes); }


#define DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObject_h_9_PROLOG
#define DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObject_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObject_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObject_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObject_h_12_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObject_h_12_INCLASS \
	DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObject_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObject_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObject_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObject_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObject_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObject_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObject_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniInputObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInputObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
