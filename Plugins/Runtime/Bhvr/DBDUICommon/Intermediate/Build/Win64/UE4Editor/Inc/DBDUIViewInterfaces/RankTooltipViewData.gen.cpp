// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/RankTooltipViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRankTooltipViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FRankTooltipViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
class UScriptStruct* FRankTooltipViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FRankTooltipViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRankTooltipViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("RankTooltipViewData"), sizeof(FRankTooltipViewData), Get_Z_Construct_UScriptStruct_FRankTooltipViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FRankTooltipViewData>()
{
	return FRankTooltipViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRankTooltipViewData(FRankTooltipViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("RankTooltipViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFRankTooltipViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFRankTooltipViewData()
	{
		UScriptStruct::DeferCppStructOps<FRankTooltipViewData>(FName(TEXT("RankTooltipViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFRankTooltipViewData;
	struct Z_Construct_UScriptStruct_FRankTooltipViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Rank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsKiller_MetaData[];
#endif
		static void NewProp_IsKiller_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RankName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankPipsCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RankPipsCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivePipsCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActivePipsCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RankTooltipViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRankTooltipViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_Rank_MetaData[] = {
		{ "Category", "RankTooltipViewData" },
		{ "ModuleRelativePath", "Public/RankTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRankTooltipViewData, Rank), METADATA_PARAMS(Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_Rank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_Rank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_IsKiller_MetaData[] = {
		{ "Category", "RankTooltipViewData" },
		{ "ModuleRelativePath", "Public/RankTooltipViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_IsKiller_SetBit(void* Obj)
	{
		((FRankTooltipViewData*)Obj)->IsKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_IsKiller = { "IsKiller", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRankTooltipViewData), &Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_IsKiller_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_IsKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_IsKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_RankName_MetaData[] = {
		{ "Category", "RankTooltipViewData" },
		{ "ModuleRelativePath", "Public/RankTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_RankName = { "RankName", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRankTooltipViewData, RankName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_RankName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_RankName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_RankPipsCount_MetaData[] = {
		{ "Category", "RankTooltipViewData" },
		{ "ModuleRelativePath", "Public/RankTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_RankPipsCount = { "RankPipsCount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRankTooltipViewData, RankPipsCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_RankPipsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_RankPipsCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_ActivePipsCount_MetaData[] = {
		{ "Category", "RankTooltipViewData" },
		{ "ModuleRelativePath", "Public/RankTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_ActivePipsCount = { "ActivePipsCount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRankTooltipViewData, ActivePipsCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_ActivePipsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_ActivePipsCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_Rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_IsKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_RankName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_RankPipsCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::NewProp_ActivePipsCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"RankTooltipViewData",
		sizeof(FRankTooltipViewData),
		alignof(FRankTooltipViewData),
		Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRankTooltipViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRankTooltipViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RankTooltipViewData"), sizeof(FRankTooltipViewData), Get_Z_Construct_UScriptStruct_FRankTooltipViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRankTooltipViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRankTooltipViewData_Hash() { return 2030703195U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
