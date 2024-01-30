// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/RankViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRankViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FRankViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FRankTooltipViewData();
// End Cross Module References
class UScriptStruct* FRankViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FRankViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRankViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("RankViewData"), sizeof(FRankViewData), Get_Z_Construct_UScriptStruct_FRankViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FRankViewData>()
{
	return FRankViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRankViewData(FRankViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("RankViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFRankViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFRankViewData()
	{
		UScriptStruct::DeferCppStructOps<FRankViewData>(FName(TEXT("RankViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFRankViewData;
	struct Z_Construct_UScriptStruct_FRankViewData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tooltipViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RankViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRankViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRankViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankViewData_Statics::NewProp_Rank_MetaData[] = {
		{ "Category", "RankViewData" },
		{ "ModuleRelativePath", "Public/RankViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRankViewData_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRankViewData, Rank), METADATA_PARAMS(Z_Construct_UScriptStruct_FRankViewData_Statics::NewProp_Rank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankViewData_Statics::NewProp_Rank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankViewData_Statics::NewProp_IsKiller_MetaData[] = {
		{ "Category", "RankViewData" },
		{ "ModuleRelativePath", "Public/RankViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRankViewData_Statics::NewProp_IsKiller_SetBit(void* Obj)
	{
		((FRankViewData*)Obj)->IsKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRankViewData_Statics::NewProp_IsKiller = { "IsKiller", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRankViewData), &Z_Construct_UScriptStruct_FRankViewData_Statics::NewProp_IsKiller_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRankViewData_Statics::NewProp_IsKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankViewData_Statics::NewProp_IsKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankViewData_Statics::NewProp_tooltipViewData_MetaData[] = {
		{ "Category", "RankViewData" },
		{ "ModuleRelativePath", "Public/RankViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRankViewData_Statics::NewProp_tooltipViewData = { "tooltipViewData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRankViewData, tooltipViewData), Z_Construct_UScriptStruct_FRankTooltipViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRankViewData_Statics::NewProp_tooltipViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankViewData_Statics::NewProp_tooltipViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRankViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankViewData_Statics::NewProp_Rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankViewData_Statics::NewProp_IsKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankViewData_Statics::NewProp_tooltipViewData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRankViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"RankViewData",
		sizeof(FRankViewData),
		alignof(FRankViewData),
		Z_Construct_UScriptStruct_FRankViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRankViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRankViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRankViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RankViewData"), sizeof(FRankViewData), Get_Z_Construct_UScriptStruct_FRankViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRankViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRankViewData_Hash() { return 3213440454U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
