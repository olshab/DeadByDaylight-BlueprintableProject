// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/CurrencyExpirationLabelViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurrencyExpirationLabelViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
class UScriptStruct* FCurrencyExpirationLabelViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("CurrencyExpirationLabelViewData"), sizeof(FCurrencyExpirationLabelViewData), Get_Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FCurrencyExpirationLabelViewData>()
{
	return FCurrencyExpirationLabelViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCurrencyExpirationLabelViewData(FCurrencyExpirationLabelViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("CurrencyExpirationLabelViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCurrencyExpirationLabelViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCurrencyExpirationLabelViewData()
	{
		UScriptStruct::DeferCppStructOps<FCurrencyExpirationLabelViewData>(FName(TEXT("CurrencyExpirationLabelViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCurrencyExpirationLabelViewData;
	struct Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpirationDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ExpirationDate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CurrencyExpirationLabelViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurrencyExpirationLabelViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "CurrencyExpirationLabelViewData" },
		{ "ModuleRelativePath", "Public/CurrencyExpirationLabelViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyExpirationLabelViewData, Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData_Statics::NewProp_Amount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData_Statics::NewProp_ExpirationDate_MetaData[] = {
		{ "Category", "CurrencyExpirationLabelViewData" },
		{ "ModuleRelativePath", "Public/CurrencyExpirationLabelViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData_Statics::NewProp_ExpirationDate = { "ExpirationDate", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyExpirationLabelViewData, ExpirationDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData_Statics::NewProp_ExpirationDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData_Statics::NewProp_ExpirationDate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData_Statics::NewProp_ExpirationDate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"CurrencyExpirationLabelViewData",
		sizeof(FCurrencyExpirationLabelViewData),
		alignof(FCurrencyExpirationLabelViewData),
		Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CurrencyExpirationLabelViewData"), sizeof(FCurrencyExpirationLabelViewData), Get_Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData_Hash() { return 2280283734U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
