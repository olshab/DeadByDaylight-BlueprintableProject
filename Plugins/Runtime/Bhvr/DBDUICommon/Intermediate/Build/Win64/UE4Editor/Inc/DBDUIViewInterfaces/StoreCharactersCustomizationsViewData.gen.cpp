// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/StoreCharactersCustomizationsViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreCharactersCustomizationsViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FStoreCategoryViewData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECustomizationCategory();
// End Cross Module References
class UScriptStruct* FStoreCharactersCustomizationsViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("StoreCharactersCustomizationsViewData"), sizeof(FStoreCharactersCustomizationsViewData), Get_Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FStoreCharactersCustomizationsViewData>()
{
	return FStoreCharactersCustomizationsViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStoreCharactersCustomizationsViewData(FStoreCharactersCustomizationsViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("StoreCharactersCustomizationsViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFStoreCharactersCustomizationsViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFStoreCharactersCustomizationsViewData()
	{
		UScriptStruct::DeferCppStructOps<FStoreCharactersCustomizationsViewData>(FName(TEXT("StoreCharactersCustomizationsViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFStoreCharactersCustomizationsViewData;
	struct Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Customizations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Customizations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Customizations;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SelectedCustomizationIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedCustomizationIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelectedCustomizationIds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSelectedCustomizations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSelectedCustomizations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Categories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Categories;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectedCategory_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SelectedCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StoreCharactersCustomizationsViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStoreCharactersCustomizationsViewData>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_Customizations_Inner = { "Customizations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_Customizations_MetaData[] = {
		{ "Category", "StoreCharactersCustomizationsViewData" },
		{ "ModuleRelativePath", "Public/StoreCharactersCustomizationsViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_Customizations = { "Customizations", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreCharactersCustomizationsViewData, Customizations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_Customizations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_Customizations_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_SelectedCustomizationIds_Inner = { "SelectedCustomizationIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_SelectedCustomizationIds_MetaData[] = {
		{ "Category", "StoreCharactersCustomizationsViewData" },
		{ "ModuleRelativePath", "Public/StoreCharactersCustomizationsViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_SelectedCustomizationIds = { "SelectedCustomizationIds", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreCharactersCustomizationsViewData, SelectedCustomizationIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_SelectedCustomizationIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_SelectedCustomizationIds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_MaxSelectedCustomizations_MetaData[] = {
		{ "Category", "StoreCharactersCustomizationsViewData" },
		{ "ModuleRelativePath", "Public/StoreCharactersCustomizationsViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_MaxSelectedCustomizations = { "MaxSelectedCustomizations", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreCharactersCustomizationsViewData, MaxSelectedCustomizations), METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_MaxSelectedCustomizations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_MaxSelectedCustomizations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStoreCategoryViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_Categories_MetaData[] = {
		{ "Category", "StoreCharactersCustomizationsViewData" },
		{ "ModuleRelativePath", "Public/StoreCharactersCustomizationsViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreCharactersCustomizationsViewData, Categories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_Categories_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_Categories_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_SelectedCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_SelectedCategory_MetaData[] = {
		{ "Category", "StoreCharactersCustomizationsViewData" },
		{ "ModuleRelativePath", "Public/StoreCharactersCustomizationsViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_SelectedCategory = { "SelectedCategory", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreCharactersCustomizationsViewData, SelectedCategory), Z_Construct_UEnum_DBDSharedTypes_ECustomizationCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_SelectedCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_SelectedCategory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_Customizations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_Customizations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_SelectedCustomizationIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_SelectedCustomizationIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_MaxSelectedCustomizations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_Categories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_Categories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_SelectedCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::NewProp_SelectedCategory,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"StoreCharactersCustomizationsViewData",
		sizeof(FStoreCharactersCustomizationsViewData),
		alignof(FStoreCharactersCustomizationsViewData),
		Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StoreCharactersCustomizationsViewData"), sizeof(FStoreCharactersCustomizationsViewData), Get_Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStoreCharactersCustomizationsViewData_Hash() { return 2475593086U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
