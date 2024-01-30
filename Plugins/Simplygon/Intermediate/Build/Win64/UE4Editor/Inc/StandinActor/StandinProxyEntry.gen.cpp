// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StandinActor/Public/StandinProxyEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStandinProxyEntry() {}
// Cross Module References
	STANDINACTOR_API UScriptStruct* Z_Construct_UScriptStruct_FStandinProxyEntry();
	UPackage* Z_Construct_UPackage__Script_StandinActor();
	STANDINACTOR_API UClass* Z_Construct_UClass_AStandInMeshActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FStandinProxyEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STANDINACTOR_API uint32 Get_Z_Construct_UScriptStruct_FStandinProxyEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStandinProxyEntry, Z_Construct_UPackage__Script_StandinActor(), TEXT("StandinProxyEntry"), sizeof(FStandinProxyEntry), Get_Z_Construct_UScriptStruct_FStandinProxyEntry_Hash());
	}
	return Singleton;
}
template<> STANDINACTOR_API UScriptStruct* StaticStruct<FStandinProxyEntry>()
{
	return FStandinProxyEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStandinProxyEntry(FStandinProxyEntry::StaticStruct, TEXT("/Script/StandinActor"), TEXT("StandinProxyEntry"), false, nullptr, nullptr);
static struct FScriptStruct_StandinActor_StaticRegisterNativesFStandinProxyEntry
{
	FScriptStruct_StandinActor_StaticRegisterNativesFStandinProxyEntry()
	{
		UScriptStruct::DeferCppStructOps<FStandinProxyEntry>(FName(TEXT("StandinProxyEntry")));
	}
} ScriptStruct_StandinActor_StaticRegisterNativesFStandinProxyEntry;
	struct Z_Construct_UScriptStruct_FStandinProxyEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandinActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_StandinActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Textures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Textures;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StandinProxyEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStandinProxyEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_StandinActor_MetaData[] = {
		{ "Category", "StandinProxyEntry" },
		{ "ModuleRelativePath", "Public/StandinProxyEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FLazyObjectPropertyParams Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_StandinActor = { "StandinActor", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStandinProxyEntry, StandinActor), Z_Construct_UClass_AStandInMeshActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_StandinActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_StandinActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StandinProxyEntry" },
		{ "ModuleRelativePath", "Public/StandinProxyEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStandinProxyEntry, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_Material_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StandinProxyEntry" },
		{ "ModuleRelativePath", "Public/StandinProxyEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStandinProxyEntry, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_Textures_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StandinProxyEntry" },
		{ "ModuleRelativePath", "Public/StandinProxyEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStandinProxyEntry, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_Textures_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_Key_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StandinProxyEntry" },
		{ "ModuleRelativePath", "Public/StandinProxyEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStandinProxyEntry, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_StandinActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_Textures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_Textures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::NewProp_Key,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StandinActor,
		nullptr,
		&NewStructOps,
		"StandinProxyEntry",
		sizeof(FStandinProxyEntry),
		alignof(FStandinProxyEntry),
		Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStandinProxyEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStandinProxyEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StandinActor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StandinProxyEntry"), sizeof(FStandinProxyEntry), Get_Z_Construct_UScriptStruct_FStandinProxyEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStandinProxyEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStandinProxyEntry_Hash() { return 2544268215U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
