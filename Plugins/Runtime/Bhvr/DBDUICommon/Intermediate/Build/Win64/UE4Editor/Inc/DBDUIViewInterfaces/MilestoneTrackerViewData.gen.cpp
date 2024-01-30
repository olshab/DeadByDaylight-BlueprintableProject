// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/MilestoneTrackerViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMilestoneTrackerViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FMilestoneTrackerViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData();
// End Cross Module References
class UScriptStruct* FMilestoneTrackerViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMilestoneTrackerViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("MilestoneTrackerViewData"), sizeof(FMilestoneTrackerViewData), Get_Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FMilestoneTrackerViewData>()
{
	return FMilestoneTrackerViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMilestoneTrackerViewData(FMilestoneTrackerViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("MilestoneTrackerViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFMilestoneTrackerViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFMilestoneTrackerViewData()
	{
		UScriptStruct::DeferCppStructOps<FMilestoneTrackerViewData>(FName(TEXT("MilestoneTrackerViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFMilestoneTrackerViewData;
	struct Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MilestoneRewardsList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MilestoneRewardsList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MilestoneRewardsList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserMilestonePointData_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserMilestonePointData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MilestoneTrackerViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMilestoneTrackerViewData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Statics::NewProp_MilestoneRewardsList_Inner = { "MilestoneRewardsList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Statics::NewProp_MilestoneRewardsList_MetaData[] = {
		{ "Category", "MilestoneTrackerViewData" },
		{ "ModuleRelativePath", "Public/MilestoneTrackerViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Statics::NewProp_MilestoneRewardsList = { "MilestoneRewardsList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMilestoneTrackerViewData, MilestoneRewardsList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Statics::NewProp_MilestoneRewardsList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Statics::NewProp_MilestoneRewardsList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Statics::NewProp_UserMilestonePointData_MetaData[] = {
		{ "Category", "MilestoneTrackerViewData" },
		{ "ModuleRelativePath", "Public/MilestoneTrackerViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Statics::NewProp_UserMilestonePointData = { "UserMilestonePointData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMilestoneTrackerViewData, UserMilestonePointData), METADATA_PARAMS(Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Statics::NewProp_UserMilestonePointData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Statics::NewProp_UserMilestonePointData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Statics::NewProp_MilestoneRewardsList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Statics::NewProp_MilestoneRewardsList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Statics::NewProp_UserMilestonePointData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"MilestoneTrackerViewData",
		sizeof(FMilestoneTrackerViewData),
		alignof(FMilestoneTrackerViewData),
		Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMilestoneTrackerViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MilestoneTrackerViewData"), sizeof(FMilestoneTrackerViewData), Get_Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMilestoneTrackerViewData_Hash() { return 3912441361U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
