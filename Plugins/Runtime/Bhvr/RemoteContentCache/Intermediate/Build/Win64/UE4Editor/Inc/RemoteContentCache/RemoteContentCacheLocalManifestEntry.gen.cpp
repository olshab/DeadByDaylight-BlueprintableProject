// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteContentCache/Public/RemoteContentCacheLocalManifestEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteContentCacheLocalManifestEntry() {}
// Cross Module References
	REMOTECONTENTCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry();
	UPackage* Z_Construct_UPackage__Script_RemoteContentCache();
// End Cross Module References
class UScriptStruct* FRemoteContentCacheLocalManifestEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern REMOTECONTENTCACHE_API uint32 Get_Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry, Z_Construct_UPackage__Script_RemoteContentCache(), TEXT("RemoteContentCacheLocalManifestEntry"), sizeof(FRemoteContentCacheLocalManifestEntry), Get_Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry_Hash());
	}
	return Singleton;
}
template<> REMOTECONTENTCACHE_API UScriptStruct* StaticStruct<FRemoteContentCacheLocalManifestEntry>()
{
	return FRemoteContentCacheLocalManifestEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRemoteContentCacheLocalManifestEntry(FRemoteContentCacheLocalManifestEntry::StaticStruct, TEXT("/Script/RemoteContentCache"), TEXT("RemoteContentCacheLocalManifestEntry"), false, nullptr, nullptr);
static struct FScriptStruct_RemoteContentCache_StaticRegisterNativesFRemoteContentCacheLocalManifestEntry
{
	FScriptStruct_RemoteContentCache_StaticRegisterNativesFRemoteContentCacheLocalManifestEntry()
	{
		UScriptStruct::DeferCppStructOps<FRemoteContentCacheLocalManifestEntry>(FName(TEXT("RemoteContentCacheLocalManifestEntry")));
	}
} ScriptStruct_RemoteContentCache_StaticRegisterNativesFRemoteContentCacheLocalManifestEntry;
	struct Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Uri_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Uri;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContentVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RemoteContentCacheLocalManifestEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteContentCacheLocalManifestEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry_Statics::NewProp_Uri_MetaData[] = {
		{ "Category", "RemoteContentCacheLocalManifestEntry" },
		{ "ModuleRelativePath", "Public/RemoteContentCacheLocalManifestEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry_Statics::NewProp_Uri = { "Uri", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteContentCacheLocalManifestEntry, Uri), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry_Statics::NewProp_Uri_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry_Statics::NewProp_Uri_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry_Statics::NewProp_ContentVersion_MetaData[] = {
		{ "Category", "RemoteContentCacheLocalManifestEntry" },
		{ "ModuleRelativePath", "Public/RemoteContentCacheLocalManifestEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry_Statics::NewProp_ContentVersion = { "ContentVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteContentCacheLocalManifestEntry, ContentVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry_Statics::NewProp_ContentVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry_Statics::NewProp_ContentVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry_Statics::NewProp_Uri,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry_Statics::NewProp_ContentVersion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteContentCache,
		nullptr,
		&NewStructOps,
		"RemoteContentCacheLocalManifestEntry",
		sizeof(FRemoteContentCacheLocalManifestEntry),
		alignof(FRemoteContentCacheLocalManifestEntry),
		Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RemoteContentCache();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RemoteContentCacheLocalManifestEntry"), sizeof(FRemoteContentCacheLocalManifestEntry), Get_Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRemoteContentCacheLocalManifestEntry_Hash() { return 1650917750U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
