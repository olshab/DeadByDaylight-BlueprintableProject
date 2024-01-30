// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/PriceTagViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePriceTagViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPriceTagViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
// End Cross Module References
class UScriptStruct* FPriceTagViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FPriceTagViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPriceTagViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("PriceTagViewData"), sizeof(FPriceTagViewData), Get_Z_Construct_UScriptStruct_FPriceTagViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FPriceTagViewData>()
{
	return FPriceTagViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPriceTagViewData(FPriceTagViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("PriceTagViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPriceTagViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPriceTagViewData()
	{
		UScriptStruct::DeferCppStructOps<FPriceTagViewData>(FName(TEXT("PriceTagViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPriceTagViewData;
	struct Z_Construct_UScriptStruct_FPriceTagViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscountValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DiscountValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAffordable_MetaData[];
#endif
		static void NewProp_IsAffordable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAffordable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayDiscountAsOriginalPrice_MetaData[];
#endif
		static void NewProp_DisplayDiscountAsOriginalPrice_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisplayDiscountAsOriginalPrice;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPriceTagViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PriceTagViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPriceTagViewData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "PriceTagViewData" },
		{ "ModuleRelativePath", "Public/PriceTagViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPriceTagViewData, Type), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "PriceTagViewData" },
		{ "ModuleRelativePath", "Public/PriceTagViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPriceTagViewData, Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_Amount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_DiscountValue_MetaData[] = {
		{ "Category", "PriceTagViewData" },
		{ "ModuleRelativePath", "Public/PriceTagViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_DiscountValue = { "DiscountValue", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPriceTagViewData, DiscountValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_DiscountValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_DiscountValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_IsAffordable_MetaData[] = {
		{ "Category", "PriceTagViewData" },
		{ "ModuleRelativePath", "Public/PriceTagViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_IsAffordable_SetBit(void* Obj)
	{
		((FPriceTagViewData*)Obj)->IsAffordable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_IsAffordable = { "IsAffordable", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPriceTagViewData), &Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_IsAffordable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_IsAffordable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_IsAffordable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_DisplayDiscountAsOriginalPrice_MetaData[] = {
		{ "Category", "PriceTagViewData" },
		{ "ModuleRelativePath", "Public/PriceTagViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_DisplayDiscountAsOriginalPrice_SetBit(void* Obj)
	{
		((FPriceTagViewData*)Obj)->DisplayDiscountAsOriginalPrice = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_DisplayDiscountAsOriginalPrice = { "DisplayDiscountAsOriginalPrice", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPriceTagViewData), &Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_DisplayDiscountAsOriginalPrice_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_DisplayDiscountAsOriginalPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_DisplayDiscountAsOriginalPrice_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPriceTagViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_DiscountValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_IsAffordable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPriceTagViewData_Statics::NewProp_DisplayDiscountAsOriginalPrice,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPriceTagViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"PriceTagViewData",
		sizeof(FPriceTagViewData),
		alignof(FPriceTagViewData),
		Z_Construct_UScriptStruct_FPriceTagViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPriceTagViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPriceTagViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPriceTagViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPriceTagViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPriceTagViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PriceTagViewData"), sizeof(FPriceTagViewData), Get_Z_Construct_UScriptStruct_FPriceTagViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPriceTagViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPriceTagViewData_Hash() { return 2218213015U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
