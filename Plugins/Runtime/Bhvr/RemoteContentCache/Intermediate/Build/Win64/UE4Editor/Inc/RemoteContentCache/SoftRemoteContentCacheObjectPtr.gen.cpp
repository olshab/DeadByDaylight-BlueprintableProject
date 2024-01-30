// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteContentCache/Public/SoftRemoteContentCacheObjectPtr.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoftRemoteContentCacheObjectPtr() {}
// Cross Module References
	REMOTECONTENTCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FSoftRemoteContentCacheObjectPtr();
	UPackage* Z_Construct_UPackage__Script_RemoteContentCache();
// End Cross Module References
class UScriptStruct* FSoftRemoteContentCacheObjectPtr::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern REMOTECONTENTCACHE_API uint32 Get_Z_Construct_UScriptStruct_FSoftRemoteContentCacheObjectPtr_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoftRemoteContentCacheObjectPtr, Z_Construct_UPackage__Script_RemoteContentCache(), TEXT("SoftRemoteContentCacheObjectPtr"), sizeof(FSoftRemoteContentCacheObjectPtr), Get_Z_Construct_UScriptStruct_FSoftRemoteContentCacheObjectPtr_Hash());
	}
	return Singleton;
}
template<> REMOTECONTENTCACHE_API UScriptStruct* StaticStruct<FSoftRemoteContentCacheObjectPtr>()
{
	return FSoftRemoteContentCacheObjectPtr::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoftRemoteContentCacheObjectPtr(FSoftRemoteContentCacheObjectPtr::StaticStruct, TEXT("/Script/RemoteContentCache"), TEXT("SoftRemoteContentCacheObjectPtr"), false, nullptr, nullptr);
static struct FScriptStruct_RemoteContentCache_StaticRegisterNativesFSoftRemoteContentCacheObjectPtr
{
	FScriptStruct_RemoteContentCache_StaticRegisterNativesFSoftRemoteContentCacheObjectPtr()
	{
		UScriptStruct::DeferCppStructOps<FSoftRemoteContentCacheObjectPtr>(FName(TEXT("SoftRemoteContentCacheObjectPtr")));
	}
} ScriptStruct_RemoteContentCache_StaticRegisterNativesFSoftRemoteContentCacheObjectPtr;
	struct Z_Construct_UScriptStruct_FSoftRemoteContentCacheObjectPtr_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoftRemoteContentCacheObjectPtr_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SoftRemoteContentCacheObjectPtr.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoftRemoteContentCacheObjectPtr_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoftRemoteContentCacheObjectPtr>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoftRemoteContentCacheObjectPtr_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteContentCache,
		nullptr,
		&NewStructOps,
		"SoftRemoteContentCacheObjectPtr",
		sizeof(FSoftRemoteContentCacheObjectPtr),
		alignof(FSoftRemoteContentCacheObjectPtr),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoftRemoteContentCacheObjectPtr_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftRemoteContentCacheObjectPtr_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoftRemoteContentCacheObjectPtr()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoftRemoteContentCacheObjectPtr_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RemoteContentCache();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoftRemoteContentCacheObjectPtr"), sizeof(FSoftRemoteContentCacheObjectPtr), Get_Z_Construct_UScriptStruct_FSoftRemoteContentCacheObjectPtr_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoftRemoteContentCacheObjectPtr_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoftRemoteContentCacheObjectPtr_Hash() { return 921720360U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
