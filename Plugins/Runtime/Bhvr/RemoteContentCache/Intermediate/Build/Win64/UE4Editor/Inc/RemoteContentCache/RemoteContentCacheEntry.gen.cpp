// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteContentCache/Public/RemoteContentCacheEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteContentCacheEntry() {}
// Cross Module References
	REMOTECONTENTCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteContentCacheEntry();
	UPackage* Z_Construct_UPackage__Script_RemoteContentCache();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
class UScriptStruct* FRemoteContentCacheEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern REMOTECONTENTCACHE_API uint32 Get_Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteContentCacheEntry, Z_Construct_UPackage__Script_RemoteContentCache(), TEXT("RemoteContentCacheEntry"), sizeof(FRemoteContentCacheEntry), Get_Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Hash());
	}
	return Singleton;
}
template<> REMOTECONTENTCACHE_API UScriptStruct* StaticStruct<FRemoteContentCacheEntry>()
{
	return FRemoteContentCacheEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRemoteContentCacheEntry(FRemoteContentCacheEntry::StaticStruct, TEXT("/Script/RemoteContentCache"), TEXT("RemoteContentCacheEntry"), false, nullptr, nullptr);
static struct FScriptStruct_RemoteContentCache_StaticRegisterNativesFRemoteContentCacheEntry
{
	FScriptStruct_RemoteContentCache_StaticRegisterNativesFRemoteContentCacheEntry()
	{
		UScriptStruct::DeferCppStructOps<FRemoteContentCacheEntry>(FName(TEXT("RemoteContentCacheEntry")));
	}
} ScriptStruct_RemoteContentCache_StaticRegisterNativesFRemoteContentCacheEntry;
	struct Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Schema_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Schema;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Uri_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Uri;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContentVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackagedObjectPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PackagedObjectPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isPackaged_MetaData[];
#endif
		static void NewProp__isPackaged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isPackaged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RemoteContentCacheEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteContentCacheEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp_Schema_MetaData[] = {
		{ "Category", "RemoteContentCacheEntry" },
		{ "ModuleRelativePath", "Public/RemoteContentCacheEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp_Schema = { "Schema", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteContentCacheEntry, Schema), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp_Schema_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp_Schema_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp_Uri_MetaData[] = {
		{ "Category", "RemoteContentCacheEntry" },
		{ "ModuleRelativePath", "Public/RemoteContentCacheEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp_Uri = { "Uri", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteContentCacheEntry, Uri), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp_Uri_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp_Uri_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp_ContentVersion_MetaData[] = {
		{ "Category", "RemoteContentCacheEntry" },
		{ "ModuleRelativePath", "Public/RemoteContentCacheEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp_ContentVersion = { "ContentVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteContentCacheEntry, ContentVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp_ContentVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp_ContentVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp_PackagedObjectPath_MetaData[] = {
		{ "Category", "RemoteContentCacheEntry" },
		{ "ModuleRelativePath", "Public/RemoteContentCacheEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp_PackagedObjectPath = { "PackagedObjectPath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteContentCacheEntry, PackagedObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp_PackagedObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp_PackagedObjectPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp__isPackaged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RemoteContentCacheEntry" },
		{ "ModuleRelativePath", "Public/RemoteContentCacheEntry.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp__isPackaged_SetBit(void* Obj)
	{
		((FRemoteContentCacheEntry*)Obj)->_isPackaged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp__isPackaged = { "_isPackaged", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRemoteContentCacheEntry), &Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp__isPackaged_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp__isPackaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp__isPackaged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp_Schema,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp_Uri,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp_ContentVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp_PackagedObjectPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::NewProp__isPackaged,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteContentCache,
		nullptr,
		&NewStructOps,
		"RemoteContentCacheEntry",
		sizeof(FRemoteContentCacheEntry),
		alignof(FRemoteContentCacheEntry),
		Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteContentCacheEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RemoteContentCache();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RemoteContentCacheEntry"), sizeof(FRemoteContentCacheEntry), Get_Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRemoteContentCacheEntry_Hash() { return 1724560224U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
