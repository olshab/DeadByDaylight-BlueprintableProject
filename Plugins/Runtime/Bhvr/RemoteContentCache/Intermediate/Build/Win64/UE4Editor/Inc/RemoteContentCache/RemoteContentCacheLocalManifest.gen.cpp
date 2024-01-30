// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteContentCache/Public/RemoteContentCacheLocalManifest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteContentCacheLocalManifest() {}
// Cross Module References
	REMOTECONTENTCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifest();
	UPackage* Z_Construct_UPackage__Script_RemoteContentCache();
	REMOTECONTENTCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry();
// End Cross Module References
class UScriptStruct* FRemoteContentCacheLocalManifest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern REMOTECONTENTCACHE_API uint32 Get_Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifest, Z_Construct_UPackage__Script_RemoteContentCache(), TEXT("RemoteContentCacheLocalManifest"), sizeof(FRemoteContentCacheLocalManifest), Get_Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifest_Hash());
	}
	return Singleton;
}
template<> REMOTECONTENTCACHE_API UScriptStruct* StaticStruct<FRemoteContentCacheLocalManifest>()
{
	return FRemoteContentCacheLocalManifest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRemoteContentCacheLocalManifest(FRemoteContentCacheLocalManifest::StaticStruct, TEXT("/Script/RemoteContentCache"), TEXT("RemoteContentCacheLocalManifest"), false, nullptr, nullptr);
static struct FScriptStruct_RemoteContentCache_StaticRegisterNativesFRemoteContentCacheLocalManifest
{
	FScriptStruct_RemoteContentCache_StaticRegisterNativesFRemoteContentCacheLocalManifest()
	{
		UScriptStruct::DeferCppStructOps<FRemoteContentCacheLocalManifest>(FName(TEXT("RemoteContentCacheLocalManifest")));
	}
} ScriptStruct_RemoteContentCache_StaticRegisterNativesFRemoteContentCacheLocalManifest;
	struct Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Entries;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RemoteContentCacheLocalManifest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteContentCacheLocalManifest>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifest_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifest_Statics::NewProp_Entries_MetaData[] = {
		{ "Category", "RemoteContentCacheLocalManifest" },
		{ "ModuleRelativePath", "Public/RemoteContentCacheLocalManifest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifest_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteContentCacheLocalManifest, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifest_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifest_Statics::NewProp_Entries_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifest_Statics::NewProp_Entries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifest_Statics::NewProp_Entries,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteContentCache,
		nullptr,
		&NewStructOps,
		"RemoteContentCacheLocalManifest",
		sizeof(FRemoteContentCacheLocalManifest),
		alignof(FRemoteContentCacheLocalManifest),
		Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RemoteContentCache();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RemoteContentCacheLocalManifest"), sizeof(FRemoteContentCacheLocalManifest), Get_Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifest_Hash() { return 1958363495U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
