// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/StoreCharactersFiltersData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreCharactersFiltersData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FStoreCharactersFiltersData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemRarity();
// End Cross Module References
class UScriptStruct* FStoreCharactersFiltersData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStoreCharactersFiltersData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("StoreCharactersFiltersData"), sizeof(FStoreCharactersFiltersData), Get_Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FStoreCharactersFiltersData>()
{
	return FStoreCharactersFiltersData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStoreCharactersFiltersData(FStoreCharactersFiltersData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("StoreCharactersFiltersData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFStoreCharactersFiltersData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFStoreCharactersFiltersData()
	{
		UScriptStruct::DeferCppStructOps<FStoreCharactersFiltersData>(FName(TEXT("StoreCharactersFiltersData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFStoreCharactersFiltersData;
	struct Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFavorite_MetaData[];
#endif
		static void NewProp_IsFavorite_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFavorite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOwned_MetaData[];
#endif
		static void NewProp_IsOwned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOwned;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RarityFiltersMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RarityFiltersMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RarityFiltersMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RarityFiltersMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RarityFiltersMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StoreCharactersFiltersData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStoreCharactersFiltersData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::NewProp_IsFavorite_MetaData[] = {
		{ "Category", "StoreCharactersFiltersData" },
		{ "ModuleRelativePath", "Public/StoreCharactersFiltersData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::NewProp_IsFavorite_SetBit(void* Obj)
	{
		((FStoreCharactersFiltersData*)Obj)->IsFavorite = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::NewProp_IsFavorite = { "IsFavorite", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStoreCharactersFiltersData), &Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::NewProp_IsFavorite_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::NewProp_IsFavorite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::NewProp_IsFavorite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::NewProp_IsOwned_MetaData[] = {
		{ "Category", "StoreCharactersFiltersData" },
		{ "ModuleRelativePath", "Public/StoreCharactersFiltersData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::NewProp_IsOwned_SetBit(void* Obj)
	{
		((FStoreCharactersFiltersData*)Obj)->IsOwned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::NewProp_IsOwned = { "IsOwned", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStoreCharactersFiltersData), &Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::NewProp_IsOwned_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::NewProp_IsOwned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::NewProp_IsOwned_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::NewProp_RarityFiltersMap_ValueProp = { "RarityFiltersMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::NewProp_RarityFiltersMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::NewProp_RarityFiltersMap_Key_KeyProp = { "RarityFiltersMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::NewProp_RarityFiltersMap_MetaData[] = {
		{ "Category", "StoreCharactersFiltersData" },
		{ "ModuleRelativePath", "Public/StoreCharactersFiltersData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::NewProp_RarityFiltersMap = { "RarityFiltersMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreCharactersFiltersData, RarityFiltersMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::NewProp_RarityFiltersMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::NewProp_RarityFiltersMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::NewProp_IsFavorite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::NewProp_IsOwned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::NewProp_RarityFiltersMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::NewProp_RarityFiltersMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::NewProp_RarityFiltersMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::NewProp_RarityFiltersMap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"StoreCharactersFiltersData",
		sizeof(FStoreCharactersFiltersData),
		alignof(FStoreCharactersFiltersData),
		Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStoreCharactersFiltersData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StoreCharactersFiltersData"), sizeof(FStoreCharactersFiltersData), Get_Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStoreCharactersFiltersData_Hash() { return 1643967713U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
