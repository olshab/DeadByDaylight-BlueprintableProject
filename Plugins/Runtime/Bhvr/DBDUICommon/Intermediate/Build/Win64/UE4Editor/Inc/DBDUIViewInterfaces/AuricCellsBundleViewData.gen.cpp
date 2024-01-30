// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/AuricCellsBundleViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuricCellsBundleViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FAuricCellsBundleViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FAuricCellsBundleViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuricCellsBundleViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("AuricCellsBundleViewData"), sizeof(FAuricCellsBundleViewData), Get_Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FAuricCellsBundleViewData>()
{
	return FAuricCellsBundleViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAuricCellsBundleViewData(FAuricCellsBundleViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("AuricCellsBundleViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFAuricCellsBundleViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFAuricCellsBundleViewData()
	{
		UScriptStruct::DeferCppStructOps<FAuricCellsBundleViewData>(FName(TEXT("AuricCellsBundleViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFAuricCellsBundleViewData;
	struct Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_IconTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BundleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_BundleName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrencyAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayedPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayedPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonusPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BonusPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitedTimeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LimitedTimeText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AuricCellsBundleViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuricCellsBundleViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "AuricCellsBundleViewData" },
		{ "ModuleRelativePath", "Public/AuricCellsBundleViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuricCellsBundleViewData, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_IconTexture_MetaData[] = {
		{ "Category", "AuricCellsBundleViewData" },
		{ "ModuleRelativePath", "Public/AuricCellsBundleViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_IconTexture = { "IconTexture", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuricCellsBundleViewData, IconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_IconTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_IconTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_BundleName_MetaData[] = {
		{ "Category", "AuricCellsBundleViewData" },
		{ "ModuleRelativePath", "Public/AuricCellsBundleViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_BundleName = { "BundleName", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuricCellsBundleViewData, BundleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_BundleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_BundleName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_CurrencyAmount_MetaData[] = {
		{ "Category", "AuricCellsBundleViewData" },
		{ "ModuleRelativePath", "Public/AuricCellsBundleViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_CurrencyAmount = { "CurrencyAmount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuricCellsBundleViewData, CurrencyAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_CurrencyAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_CurrencyAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_DisplayedPrice_MetaData[] = {
		{ "Category", "AuricCellsBundleViewData" },
		{ "ModuleRelativePath", "Public/AuricCellsBundleViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_DisplayedPrice = { "DisplayedPrice", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuricCellsBundleViewData, DisplayedPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_DisplayedPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_DisplayedPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_BonusPercentage_MetaData[] = {
		{ "Category", "AuricCellsBundleViewData" },
		{ "ModuleRelativePath", "Public/AuricCellsBundleViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_BonusPercentage = { "BonusPercentage", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuricCellsBundleViewData, BonusPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_BonusPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_BonusPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_LimitedTimeText_MetaData[] = {
		{ "Category", "AuricCellsBundleViewData" },
		{ "ModuleRelativePath", "Public/AuricCellsBundleViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_LimitedTimeText = { "LimitedTimeText", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuricCellsBundleViewData, LimitedTimeText), METADATA_PARAMS(Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_LimitedTimeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_LimitedTimeText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_IconTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_BundleName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_CurrencyAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_DisplayedPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_BonusPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::NewProp_LimitedTimeText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"AuricCellsBundleViewData",
		sizeof(FAuricCellsBundleViewData),
		alignof(FAuricCellsBundleViewData),
		Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAuricCellsBundleViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AuricCellsBundleViewData"), sizeof(FAuricCellsBundleViewData), Get_Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAuricCellsBundleViewData_Hash() { return 3829896192U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
