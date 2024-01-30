// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/CustomizationItemOriginViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizationItemOriginViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationItemOriginViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EOriginWidgetState();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPriceTagViewData();
// End Cross Module References
class UScriptStruct* FCustomizationItemOriginViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizationItemOriginViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("CustomizationItemOriginViewData"), sizeof(FCustomizationItemOriginViewData), Get_Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FCustomizationItemOriginViewData>()
{
	return FCustomizationItemOriginViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomizationItemOriginViewData(FCustomizationItemOriginViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("CustomizationItemOriginViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCustomizationItemOriginViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCustomizationItemOriginViewData()
	{
		UScriptStruct::DeferCppStructOps<FCustomizationItemOriginViewData>(FName(TEXT("CustomizationItemOriginViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCustomizationItemOriginViewData;
	struct Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Args_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Args_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Args;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrencyData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CustomizationItemOriginViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizationItemOriginViewData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::NewProp_State_MetaData[] = {
		{ "Category", "CustomizationItemOriginViewData" },
		{ "ModuleRelativePath", "Public/CustomizationItemOriginViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationItemOriginViewData, State), Z_Construct_UEnum_DBDUIViewInterfaces_EOriginWidgetState, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::NewProp_Args_Inner = { "Args", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::NewProp_Args_MetaData[] = {
		{ "Category", "CustomizationItemOriginViewData" },
		{ "ModuleRelativePath", "Public/CustomizationItemOriginViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationItemOriginViewData, Args), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::NewProp_Args_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::NewProp_Args_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::NewProp_CurrencyData_MetaData[] = {
		{ "Category", "CustomizationItemOriginViewData" },
		{ "ModuleRelativePath", "Public/CustomizationItemOriginViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::NewProp_CurrencyData = { "CurrencyData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationItemOriginViewData, CurrencyData), Z_Construct_UScriptStruct_FPriceTagViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::NewProp_CurrencyData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::NewProp_CurrencyData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::NewProp_Args_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::NewProp_Args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::NewProp_CurrencyData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"CustomizationItemOriginViewData",
		sizeof(FCustomizationItemOriginViewData),
		alignof(FCustomizationItemOriginViewData),
		Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizationItemOriginViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomizationItemOriginViewData"), sizeof(FCustomizationItemOriginViewData), Get_Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomizationItemOriginViewData_Hash() { return 834506876U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
