// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/StoreCharactersSelectionViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreCharactersSelectionViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCharacterItemViewData_NoRegister();
// End Cross Module References
class UScriptStruct* FStoreCharactersSelectionViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("StoreCharactersSelectionViewData"), sizeof(FStoreCharactersSelectionViewData), Get_Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FStoreCharactersSelectionViewData>()
{
	return FStoreCharactersSelectionViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStoreCharactersSelectionViewData(FStoreCharactersSelectionViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("StoreCharactersSelectionViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFStoreCharactersSelectionViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFStoreCharactersSelectionViewData()
	{
		UScriptStruct::DeferCppStructOps<FStoreCharactersSelectionViewData>(FName(TEXT("StoreCharactersSelectionViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFStoreCharactersSelectionViewData;
	struct Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Characters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Characters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Characters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedCharacterIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedCharacterIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StoreCharactersSelectionViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStoreCharactersSelectionViewData>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Statics::NewProp_Characters_Inner = { "Characters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStoreCharacterItemViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Statics::NewProp_Characters_MetaData[] = {
		{ "Category", "StoreCharactersSelectionViewData" },
		{ "ModuleRelativePath", "Public/StoreCharactersSelectionViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Statics::NewProp_Characters = { "Characters", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreCharactersSelectionViewData, Characters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Statics::NewProp_Characters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Statics::NewProp_Characters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Statics::NewProp_SelectedCharacterIndex_MetaData[] = {
		{ "Category", "StoreCharactersSelectionViewData" },
		{ "ModuleRelativePath", "Public/StoreCharactersSelectionViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Statics::NewProp_SelectedCharacterIndex = { "SelectedCharacterIndex", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreCharactersSelectionViewData, SelectedCharacterIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Statics::NewProp_SelectedCharacterIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Statics::NewProp_SelectedCharacterIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Statics::NewProp_Characters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Statics::NewProp_Characters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Statics::NewProp_SelectedCharacterIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"StoreCharactersSelectionViewData",
		sizeof(FStoreCharactersSelectionViewData),
		alignof(FStoreCharactersSelectionViewData),
		Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StoreCharactersSelectionViewData"), sizeof(FStoreCharactersSelectionViewData), Get_Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStoreCharactersSelectionViewData_Hash() { return 3929622134U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
