// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/StoreFeaturedCharacterViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreFeaturedCharacterViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FStoreFeaturedCharacterViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("StoreFeaturedCharacterViewData"), sizeof(FStoreFeaturedCharacterViewData), Get_Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FStoreFeaturedCharacterViewData>()
{
	return FStoreFeaturedCharacterViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStoreFeaturedCharacterViewData(FStoreFeaturedCharacterViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("StoreFeaturedCharacterViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFStoreFeaturedCharacterViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFStoreFeaturedCharacterViewData()
	{
		UScriptStruct::DeferCppStructOps<FStoreFeaturedCharacterViewData>(FName(TEXT("StoreFeaturedCharacterViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFStoreFeaturedCharacterViewData;
	struct Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerRole_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerRole;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterPortrait_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterPortrait;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CharacterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StoreFeaturedCharacterViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStoreFeaturedCharacterViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::NewProp_CharacterIndex_MetaData[] = {
		{ "Category", "StoreFeaturedCharacterViewData" },
		{ "ModuleRelativePath", "Public/StoreFeaturedCharacterViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::NewProp_CharacterIndex = { "CharacterIndex", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreFeaturedCharacterViewData, CharacterIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::NewProp_CharacterIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::NewProp_CharacterIndex_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::NewProp_PlayerRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::NewProp_PlayerRole_MetaData[] = {
		{ "Category", "StoreFeaturedCharacterViewData" },
		{ "ModuleRelativePath", "Public/StoreFeaturedCharacterViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::NewProp_PlayerRole = { "PlayerRole", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreFeaturedCharacterViewData, PlayerRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::NewProp_PlayerRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::NewProp_PlayerRole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::NewProp_CharacterPortrait_MetaData[] = {
		{ "Category", "StoreFeaturedCharacterViewData" },
		{ "ModuleRelativePath", "Public/StoreFeaturedCharacterViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::NewProp_CharacterPortrait = { "CharacterPortrait", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreFeaturedCharacterViewData, CharacterPortrait), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::NewProp_CharacterPortrait_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::NewProp_CharacterPortrait_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::NewProp_CharacterName_MetaData[] = {
		{ "Category", "StoreFeaturedCharacterViewData" },
		{ "ModuleRelativePath", "Public/StoreFeaturedCharacterViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreFeaturedCharacterViewData, CharacterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::NewProp_CharacterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::NewProp_CharacterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::NewProp_CharacterIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::NewProp_PlayerRole_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::NewProp_PlayerRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::NewProp_CharacterPortrait,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::NewProp_CharacterName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"StoreFeaturedCharacterViewData",
		sizeof(FStoreFeaturedCharacterViewData),
		alignof(FStoreFeaturedCharacterViewData),
		Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StoreFeaturedCharacterViewData"), sizeof(FStoreFeaturedCharacterViewData), Get_Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStoreFeaturedCharacterViewData_Hash() { return 3080901390U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
