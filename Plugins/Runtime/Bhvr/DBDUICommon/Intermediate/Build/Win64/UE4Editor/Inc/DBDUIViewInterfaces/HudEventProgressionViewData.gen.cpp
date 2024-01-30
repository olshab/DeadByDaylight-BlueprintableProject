// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/HudEventProgressionViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudEventProgressionViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FHudEventProgressionViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
class UScriptStruct* FHudEventProgressionViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FHudEventProgressionViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHudEventProgressionViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("HudEventProgressionViewData"), sizeof(FHudEventProgressionViewData), Get_Z_Construct_UScriptStruct_FHudEventProgressionViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FHudEventProgressionViewData>()
{
	return FHudEventProgressionViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHudEventProgressionViewData(FHudEventProgressionViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("HudEventProgressionViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFHudEventProgressionViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFHudEventProgressionViewData()
	{
		UScriptStruct::DeferCppStructOps<FHudEventProgressionViewData>(FName(TEXT("HudEventProgressionViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFHudEventProgressionViewData;
	struct Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressBanked_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProgressBanked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressPending_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProgressPending;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressCapacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProgressCapacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProgressMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HudEventProgressionViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHudEventProgressionViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::NewProp_ProgressBanked_MetaData[] = {
		{ "Category", "HudEventProgressionViewData" },
		{ "ModuleRelativePath", "Public/HudEventProgressionViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::NewProp_ProgressBanked = { "ProgressBanked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHudEventProgressionViewData, ProgressBanked), METADATA_PARAMS(Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::NewProp_ProgressBanked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::NewProp_ProgressBanked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::NewProp_ProgressPending_MetaData[] = {
		{ "Category", "HudEventProgressionViewData" },
		{ "ModuleRelativePath", "Public/HudEventProgressionViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::NewProp_ProgressPending = { "ProgressPending", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHudEventProgressionViewData, ProgressPending), METADATA_PARAMS(Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::NewProp_ProgressPending_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::NewProp_ProgressPending_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::NewProp_ProgressCapacity_MetaData[] = {
		{ "Category", "HudEventProgressionViewData" },
		{ "ModuleRelativePath", "Public/HudEventProgressionViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::NewProp_ProgressCapacity = { "ProgressCapacity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHudEventProgressionViewData, ProgressCapacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::NewProp_ProgressCapacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::NewProp_ProgressCapacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::NewProp_ProgressMax_MetaData[] = {
		{ "Category", "HudEventProgressionViewData" },
		{ "ModuleRelativePath", "Public/HudEventProgressionViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::NewProp_ProgressMax = { "ProgressMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHudEventProgressionViewData, ProgressMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::NewProp_ProgressMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::NewProp_ProgressMax_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::NewProp_ProgressBanked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::NewProp_ProgressPending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::NewProp_ProgressCapacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::NewProp_ProgressMax,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"HudEventProgressionViewData",
		sizeof(FHudEventProgressionViewData),
		alignof(FHudEventProgressionViewData),
		Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHudEventProgressionViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHudEventProgressionViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HudEventProgressionViewData"), sizeof(FHudEventProgressionViewData), Get_Z_Construct_UScriptStruct_FHudEventProgressionViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHudEventProgressionViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHudEventProgressionViewData_Hash() { return 1457243787U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
