// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/AuricCellsViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuricCellsViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FAuricCellsViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FAuricCellsBundleViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData();
// End Cross Module References
class UScriptStruct* FAuricCellsViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FAuricCellsViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuricCellsViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("AuricCellsViewData"), sizeof(FAuricCellsViewData), Get_Z_Construct_UScriptStruct_FAuricCellsViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FAuricCellsViewData>()
{
	return FAuricCellsViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAuricCellsViewData(FAuricCellsViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("AuricCellsViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFAuricCellsViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFAuricCellsViewData()
	{
		UScriptStruct::DeferCppStructOps<FAuricCellsViewData>(FName(TEXT("AuricCellsViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFAuricCellsViewData;
	struct Z_Construct_UScriptStruct_FAuricCellsViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bundles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bundles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bundles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPurchase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FirstPurchase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaxIncludeMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TaxIncludeMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuricCellsViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AuricCellsViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAuricCellsViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuricCellsViewData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAuricCellsViewData_Statics::NewProp_Bundles_Inner = { "Bundles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAuricCellsBundleViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuricCellsViewData_Statics::NewProp_Bundles_MetaData[] = {
		{ "Category", "AuricCellsViewData" },
		{ "ModuleRelativePath", "Public/AuricCellsViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAuricCellsViewData_Statics::NewProp_Bundles = { "Bundles", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuricCellsViewData, Bundles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuricCellsViewData_Statics::NewProp_Bundles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuricCellsViewData_Statics::NewProp_Bundles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuricCellsViewData_Statics::NewProp_FirstPurchase_MetaData[] = {
		{ "Category", "AuricCellsViewData" },
		{ "ModuleRelativePath", "Public/AuricCellsViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAuricCellsViewData_Statics::NewProp_FirstPurchase = { "FirstPurchase", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuricCellsViewData, FirstPurchase), Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuricCellsViewData_Statics::NewProp_FirstPurchase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuricCellsViewData_Statics::NewProp_FirstPurchase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuricCellsViewData_Statics::NewProp_TaxIncludeMessage_MetaData[] = {
		{ "Category", "AuricCellsViewData" },
		{ "ModuleRelativePath", "Public/AuricCellsViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAuricCellsViewData_Statics::NewProp_TaxIncludeMessage = { "TaxIncludeMessage", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuricCellsViewData, TaxIncludeMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAuricCellsViewData_Statics::NewProp_TaxIncludeMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuricCellsViewData_Statics::NewProp_TaxIncludeMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuricCellsViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuricCellsViewData_Statics::NewProp_Bundles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuricCellsViewData_Statics::NewProp_Bundles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuricCellsViewData_Statics::NewProp_FirstPurchase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuricCellsViewData_Statics::NewProp_TaxIncludeMessage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuricCellsViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"AuricCellsViewData",
		sizeof(FAuricCellsViewData),
		alignof(FAuricCellsViewData),
		Z_Construct_UScriptStruct_FAuricCellsViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuricCellsViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAuricCellsViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuricCellsViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAuricCellsViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAuricCellsViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AuricCellsViewData"), sizeof(FAuricCellsViewData), Get_Z_Construct_UScriptStruct_FAuricCellsViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAuricCellsViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAuricCellsViewData_Hash() { return 3216505364U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
