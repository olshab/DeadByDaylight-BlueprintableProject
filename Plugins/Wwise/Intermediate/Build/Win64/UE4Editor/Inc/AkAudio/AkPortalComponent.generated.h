// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class AkAcousticPortalState : uint8;
class UPrimitiveComponent;
#ifdef AKAUDIO_AkPortalComponent_generated_h
#error "AkPortalComponent.generated.h already included, missing '#pragma once' in AkPortalComponent.h"
#endif
#define AKAUDIO_AkPortalComponent_generated_h

#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_14_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClosePortal); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execGetPrimitiveParent); \
	DECLARE_FUNCTION(execOpenPortal); \
	DECLARE_FUNCTION(execPortalPlacementValid);


#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClosePortal); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execGetPrimitiveParent); \
	DECLARE_FUNCTION(execOpenPortal); \
	DECLARE_FUNCTION(execPortalPlacementValid);


#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkPortalComponent(); \
	friend struct Z_Construct_UClass_UAkPortalComponent_Statics; \
public: \
	DECLARE_CLASS(UAkPortalComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkPortalComponent)


#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAkPortalComponent(); \
	friend struct Z_Construct_UClass_UAkPortalComponent_Statics; \
public: \
	DECLARE_CLASS(UAkPortalComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkPortalComponent)


#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkPortalComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkPortalComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkPortalComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkPortalComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkPortalComponent(UAkPortalComponent&&); \
	NO_API UAkPortalComponent(const UAkPortalComponent&); \
public:


#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkPortalComponent(UAkPortalComponent&&); \
	NO_API UAkPortalComponent(const UAkPortalComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkPortalComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkPortalComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkPortalComponent)


#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_11_PROLOG
#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_14_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_14_INCLASS \
	DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkPortalComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
