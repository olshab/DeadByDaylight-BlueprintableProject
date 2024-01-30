// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
class UObject;
struct FSoftRemoteContentCacheObjectPtr;
class UAsyncLoadSoftPtrAsTexture2DNode;
#ifdef REMOTECONTENTCACHE_AsyncLoadSoftPtrAsTexture2DNode_generated_h
#error "AsyncLoadSoftPtrAsTexture2DNode.generated.h already included, missing '#pragma once' in AsyncLoadSoftPtrAsTexture2DNode.h"
#endif
#define REMOTECONTENTCACHE_AsyncLoadSoftPtrAsTexture2DNode_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_RemoteContentCache_Source_RemoteContentCache_Public_AsyncLoadSoftPtrAsTexture2DNode_h_18_DELEGATE \
struct AsyncLoadSoftPtrAsTexture2DNode_eventSoftPtrAsyncLoadAsTexture2DCompleted_Parms \
{ \
	UTexture2D* LoadedTexture; \
}; \
static inline void FSoftPtrAsyncLoadAsTexture2DCompleted_DelegateWrapper(const FMulticastScriptDelegate& SoftPtrAsyncLoadAsTexture2DCompleted, UTexture2D* LoadedTexture) \
{ \
	AsyncLoadSoftPtrAsTexture2DNode_eventSoftPtrAsyncLoadAsTexture2DCompleted_Parms Parms; \
	Parms.LoadedTexture=LoadedTexture; \
	SoftPtrAsyncLoadAsTexture2DCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_RemoteContentCache_Source_RemoteContentCache_Public_AsyncLoadSoftPtrAsTexture2DNode_h_15_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_RemoteContentCache_Source_RemoteContentCache_Public_AsyncLoadSoftPtrAsTexture2DNode_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadAsTexture2D);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_RemoteContentCache_Source_RemoteContentCache_Public_AsyncLoadSoftPtrAsTexture2DNode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadAsTexture2D);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_RemoteContentCache_Source_RemoteContentCache_Public_AsyncLoadSoftPtrAsTexture2DNode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncLoadSoftPtrAsTexture2DNode(); \
	friend struct Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_Statics; \
public: \
	DECLARE_CLASS(UAsyncLoadSoftPtrAsTexture2DNode, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteContentCache"), NO_API) \
	DECLARE_SERIALIZER(UAsyncLoadSoftPtrAsTexture2DNode)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_RemoteContentCache_Source_RemoteContentCache_Public_AsyncLoadSoftPtrAsTexture2DNode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncLoadSoftPtrAsTexture2DNode(); \
	friend struct Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_Statics; \
public: \
	DECLARE_CLASS(UAsyncLoadSoftPtrAsTexture2DNode, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteContentCache"), NO_API) \
	DECLARE_SERIALIZER(UAsyncLoadSoftPtrAsTexture2DNode)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_RemoteContentCache_Source_RemoteContentCache_Public_AsyncLoadSoftPtrAsTexture2DNode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncLoadSoftPtrAsTexture2DNode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncLoadSoftPtrAsTexture2DNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncLoadSoftPtrAsTexture2DNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncLoadSoftPtrAsTexture2DNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncLoadSoftPtrAsTexture2DNode(UAsyncLoadSoftPtrAsTexture2DNode&&); \
	NO_API UAsyncLoadSoftPtrAsTexture2DNode(const UAsyncLoadSoftPtrAsTexture2DNode&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_RemoteContentCache_Source_RemoteContentCache_Public_AsyncLoadSoftPtrAsTexture2DNode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncLoadSoftPtrAsTexture2DNode(UAsyncLoadSoftPtrAsTexture2DNode&&); \
	NO_API UAsyncLoadSoftPtrAsTexture2DNode(const UAsyncLoadSoftPtrAsTexture2DNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncLoadSoftPtrAsTexture2DNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncLoadSoftPtrAsTexture2DNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAsyncLoadSoftPtrAsTexture2DNode)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_RemoteContentCache_Source_RemoteContentCache_Public_AsyncLoadSoftPtrAsTexture2DNode_h_15_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_RemoteContentCache_Source_RemoteContentCache_Public_AsyncLoadSoftPtrAsTexture2DNode_h_12_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_RemoteContentCache_Source_RemoteContentCache_Public_AsyncLoadSoftPtrAsTexture2DNode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_RemoteContentCache_Source_RemoteContentCache_Public_AsyncLoadSoftPtrAsTexture2DNode_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_RemoteContentCache_Source_RemoteContentCache_Public_AsyncLoadSoftPtrAsTexture2DNode_h_15_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_RemoteContentCache_Source_RemoteContentCache_Public_AsyncLoadSoftPtrAsTexture2DNode_h_15_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_RemoteContentCache_Source_RemoteContentCache_Public_AsyncLoadSoftPtrAsTexture2DNode_h_15_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_RemoteContentCache_Source_RemoteContentCache_Public_AsyncLoadSoftPtrAsTexture2DNode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_RemoteContentCache_Source_RemoteContentCache_Public_AsyncLoadSoftPtrAsTexture2DNode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_RemoteContentCache_Source_RemoteContentCache_Public_AsyncLoadSoftPtrAsTexture2DNode_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_RemoteContentCache_Source_RemoteContentCache_Public_AsyncLoadSoftPtrAsTexture2DNode_h_15_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_RemoteContentCache_Source_RemoteContentCache_Public_AsyncLoadSoftPtrAsTexture2DNode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_RemoteContentCache_Source_RemoteContentCache_Public_AsyncLoadSoftPtrAsTexture2DNode_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_RemoteContentCache_Source_RemoteContentCache_Public_AsyncLoadSoftPtrAsTexture2DNode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REMOTECONTENTCACHE_API UClass* StaticClass<class UAsyncLoadSoftPtrAsTexture2DNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_RemoteContentCache_Source_RemoteContentCache_Public_AsyncLoadSoftPtrAsTexture2DNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
