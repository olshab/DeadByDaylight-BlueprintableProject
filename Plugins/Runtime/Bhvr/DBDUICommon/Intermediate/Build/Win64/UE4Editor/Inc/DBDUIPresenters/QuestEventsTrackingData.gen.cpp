// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/QuestEventsTrackingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestEventsTrackingData() {}
// Cross Module References
	DBDUIPRESENTERS_API UScriptStruct* Z_Construct_UScriptStruct_FQuestEventsTrackingData();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EQuestOperationType();
// End Cross Module References
class UScriptStruct* FQuestEventsTrackingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIPRESENTERS_API uint32 Get_Z_Construct_UScriptStruct_FQuestEventsTrackingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestEventsTrackingData, Z_Construct_UPackage__Script_DBDUIPresenters(), TEXT("QuestEventsTrackingData"), sizeof(FQuestEventsTrackingData), Get_Z_Construct_UScriptStruct_FQuestEventsTrackingData_Hash());
	}
	return Singleton;
}
template<> DBDUIPRESENTERS_API UScriptStruct* StaticStruct<FQuestEventsTrackingData>()
{
	return FQuestEventsTrackingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuestEventsTrackingData(FQuestEventsTrackingData::StaticStruct, TEXT("/Script/DBDUIPresenters"), TEXT("QuestEventsTrackingData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIPresenters_StaticRegisterNativesFQuestEventsTrackingData
{
	FScriptStruct_DBDUIPresenters_StaticRegisterNativesFQuestEventsTrackingData()
	{
		UScriptStruct::DeferCppStructOps<FQuestEventsTrackingData>(FName(TEXT("QuestEventsTrackingData")));
	}
} ScriptStruct_DBDUIPresenters_StaticRegisterNativesFQuestEventsTrackingData;
	struct Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestEventId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QuestEventId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentProgressionValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentProgressionValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxProgressionValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxProgressionValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OperationType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OperationType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/QuestEventsTrackingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestEventsTrackingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::NewProp_QuestEventId_MetaData[] = {
		{ "Category", "QuestEventsTrackingData" },
		{ "ModuleRelativePath", "Public/QuestEventsTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::NewProp_QuestEventId = { "QuestEventId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestEventsTrackingData, QuestEventId), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::NewProp_QuestEventId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::NewProp_QuestEventId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::NewProp_CurrentProgressionValue_MetaData[] = {
		{ "Category", "QuestEventsTrackingData" },
		{ "ModuleRelativePath", "Public/QuestEventsTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::NewProp_CurrentProgressionValue = { "CurrentProgressionValue", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestEventsTrackingData, CurrentProgressionValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::NewProp_CurrentProgressionValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::NewProp_CurrentProgressionValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::NewProp_MaxProgressionValue_MetaData[] = {
		{ "Category", "QuestEventsTrackingData" },
		{ "ModuleRelativePath", "Public/QuestEventsTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::NewProp_MaxProgressionValue = { "MaxProgressionValue", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestEventsTrackingData, MaxProgressionValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::NewProp_MaxProgressionValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::NewProp_MaxProgressionValue_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::NewProp_OperationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::NewProp_OperationType_MetaData[] = {
		{ "Category", "QuestEventsTrackingData" },
		{ "ModuleRelativePath", "Public/QuestEventsTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::NewProp_OperationType = { "OperationType", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestEventsTrackingData, OperationType), Z_Construct_UEnum_DBDSharedTypes_EQuestOperationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::NewProp_OperationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::NewProp_OperationType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::NewProp_QuestEventId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::NewProp_CurrentProgressionValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::NewProp_MaxProgressionValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::NewProp_OperationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::NewProp_OperationType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
		nullptr,
		&NewStructOps,
		"QuestEventsTrackingData",
		sizeof(FQuestEventsTrackingData),
		alignof(FQuestEventsTrackingData),
		Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestEventsTrackingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuestEventsTrackingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIPresenters();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuestEventsTrackingData"), sizeof(FQuestEventsTrackingData), Get_Z_Construct_UScriptStruct_FQuestEventsTrackingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuestEventsTrackingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuestEventsTrackingData_Hash() { return 2295474588U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
