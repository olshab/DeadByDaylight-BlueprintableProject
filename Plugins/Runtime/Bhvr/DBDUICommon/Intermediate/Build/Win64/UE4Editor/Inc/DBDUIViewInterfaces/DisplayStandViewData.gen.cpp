// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/DisplayStandViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayStandViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayStandViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FAnchorData();
// End Cross Module References
class UScriptStruct* FDisplayStandViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FDisplayStandViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayStandViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("DisplayStandViewData"), sizeof(FDisplayStandViewData), Get_Z_Construct_UScriptStruct_FDisplayStandViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FDisplayStandViewData>()
{
	return FDisplayStandViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDisplayStandViewData(FDisplayStandViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("DisplayStandViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFDisplayStandViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFDisplayStandViewData()
	{
		UScriptStruct::DeferCppStructOps<FDisplayStandViewData>(FName(TEXT("DisplayStandViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFDisplayStandViewData;
	struct Z_Construct_UScriptStruct_FDisplayStandViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anchors_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Anchors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PositionX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PositionY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SizeY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DisplayStandViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayStandViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::NewProp_Anchors_MetaData[] = {
		{ "Category", "DisplayStandViewData" },
		{ "ModuleRelativePath", "Public/DisplayStandViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::NewProp_Anchors = { "Anchors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisplayStandViewData, Anchors), Z_Construct_UScriptStruct_FAnchorData, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::NewProp_Anchors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::NewProp_Anchors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::NewProp_PositionX_MetaData[] = {
		{ "Category", "DisplayStandViewData" },
		{ "ModuleRelativePath", "Public/DisplayStandViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::NewProp_PositionX = { "PositionX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisplayStandViewData, PositionX), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::NewProp_PositionX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::NewProp_PositionX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::NewProp_PositionY_MetaData[] = {
		{ "Category", "DisplayStandViewData" },
		{ "ModuleRelativePath", "Public/DisplayStandViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::NewProp_PositionY = { "PositionY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisplayStandViewData, PositionY), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::NewProp_PositionY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::NewProp_PositionY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::NewProp_SizeX_MetaData[] = {
		{ "Category", "DisplayStandViewData" },
		{ "ModuleRelativePath", "Public/DisplayStandViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisplayStandViewData, SizeX), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::NewProp_SizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::NewProp_SizeY_MetaData[] = {
		{ "Category", "DisplayStandViewData" },
		{ "ModuleRelativePath", "Public/DisplayStandViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisplayStandViewData, SizeY), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::NewProp_SizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::NewProp_SizeY_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::NewProp_Anchors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::NewProp_PositionX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::NewProp_PositionY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::NewProp_SizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::NewProp_SizeY,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"DisplayStandViewData",
		sizeof(FDisplayStandViewData),
		alignof(FDisplayStandViewData),
		Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayStandViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDisplayStandViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DisplayStandViewData"), sizeof(FDisplayStandViewData), Get_Z_Construct_UScriptStruct_FDisplayStandViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDisplayStandViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDisplayStandViewData_Hash() { return 681577350U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
