// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/MilestoneTrackerItemViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMilestoneTrackerItemViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EMilestoneTrackerItemState();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister();
// End Cross Module References
class UScriptStruct* FMilestoneTrackerItemViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("MilestoneTrackerItemViewData"), sizeof(FMilestoneTrackerItemViewData), Get_Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FMilestoneTrackerItemViewData>()
{
	return FMilestoneTrackerItemViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMilestoneTrackerItemViewData(FMilestoneTrackerItemViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("MilestoneTrackerItemViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFMilestoneTrackerItemViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFMilestoneTrackerItemViewData()
	{
		UScriptStruct::DeferCppStructOps<FMilestoneTrackerItemViewData>(FName(TEXT("MilestoneTrackerItemViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFMilestoneTrackerItemViewData;
	struct Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EventPoints;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MilestoneTrackerItemViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMilestoneTrackerItemViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics::NewProp_EventPoints_MetaData[] = {
		{ "Category", "MilestoneTrackerItemViewData" },
		{ "ModuleRelativePath", "Public/MilestoneTrackerItemViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics::NewProp_EventPoints = { "EventPoints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMilestoneTrackerItemViewData, EventPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics::NewProp_EventPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics::NewProp_EventPoints_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics::NewProp_State_MetaData[] = {
		{ "Category", "MilestoneTrackerItemViewData" },
		{ "ModuleRelativePath", "Public/MilestoneTrackerItemViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMilestoneTrackerItemViewData, State), Z_Construct_UEnum_DBDUIViewInterfaces_EMilestoneTrackerItemState, METADATA_PARAMS(Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics::NewProp_RewardData_MetaData[] = {
		{ "Category", "MilestoneTrackerItemViewData" },
		{ "ModuleRelativePath", "Public/MilestoneTrackerItemViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics::NewProp_RewardData = { "RewardData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMilestoneTrackerItemViewData, RewardData), Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics::NewProp_RewardData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics::NewProp_RewardData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics::NewProp_EventPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics::NewProp_RewardData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"MilestoneTrackerItemViewData",
		sizeof(FMilestoneTrackerItemViewData),
		alignof(FMilestoneTrackerItemViewData),
		Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MilestoneTrackerItemViewData"), sizeof(FMilestoneTrackerItemViewData), Get_Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData_Hash() { return 2349229988U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
