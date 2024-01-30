// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAkWaapiUri;
struct FAKWaapiJsonObject;
struct FAkWaapiSubscriptionId;
#ifdef AKAUDIO_AkWaapiCalls_generated_h
#error "AkWaapiCalls.generated.h already included, missing '#pragma once' in AkWaapiCalls.h"
#endif
#define AKAUDIO_AkWaapiCalls_generated_h

#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkWaapiCalls_h_16_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkWaapiCalls_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallWaapi); \
	DECLARE_FUNCTION(execConv_FAkWaapiSubscriptionIdToString); \
	DECLARE_FUNCTION(execConv_FAkWaapiSubscriptionIdToText); \
	DECLARE_FUNCTION(execGetSubscriptionID); \
	DECLARE_FUNCTION(execRegisterWaapiConnectionLostCallback); \
	DECLARE_FUNCTION(execRegisterWaapiProjectLoadedCallback); \
	DECLARE_FUNCTION(execSetSubscriptionID); \
	DECLARE_FUNCTION(execSubscribeToWaapi); \
	DECLARE_FUNCTION(execUnsubscribe);


#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkWaapiCalls_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallWaapi); \
	DECLARE_FUNCTION(execConv_FAkWaapiSubscriptionIdToString); \
	DECLARE_FUNCTION(execConv_FAkWaapiSubscriptionIdToText); \
	DECLARE_FUNCTION(execGetSubscriptionID); \
	DECLARE_FUNCTION(execRegisterWaapiConnectionLostCallback); \
	DECLARE_FUNCTION(execRegisterWaapiProjectLoadedCallback); \
	DECLARE_FUNCTION(execSetSubscriptionID); \
	DECLARE_FUNCTION(execSubscribeToWaapi); \
	DECLARE_FUNCTION(execUnsubscribe);


#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkWaapiCalls_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkWaapiCalls(); \
	friend struct Z_Construct_UClass_UAkWaapiCalls_Statics; \
public: \
	DECLARE_CLASS(UAkWaapiCalls, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkWaapiCalls)


#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkWaapiCalls_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAkWaapiCalls(); \
	friend struct Z_Construct_UClass_UAkWaapiCalls_Statics; \
public: \
	DECLARE_CLASS(UAkWaapiCalls, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkWaapiCalls)


#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkWaapiCalls_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkWaapiCalls(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkWaapiCalls) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkWaapiCalls); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkWaapiCalls); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkWaapiCalls(UAkWaapiCalls&&); \
	NO_API UAkWaapiCalls(const UAkWaapiCalls&); \
public:


#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkWaapiCalls_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkWaapiCalls(UAkWaapiCalls&&); \
	NO_API UAkWaapiCalls(const UAkWaapiCalls&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkWaapiCalls); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkWaapiCalls); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkWaapiCalls)


#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkWaapiCalls_h_16_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkWaapiCalls_h_13_PROLOG
#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkWaapiCalls_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkWaapiCalls_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkWaapiCalls_h_16_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkWaapiCalls_h_16_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkWaapiCalls_h_16_INCLASS \
	DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkWaapiCalls_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkWaapiCalls_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkWaapiCalls_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkWaapiCalls_h_16_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkWaapiCalls_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkWaapiCalls_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkWaapiCalls_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkWaapiCalls>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Wwise_Source_AkAudio_Public_AkWaapiCalls_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
