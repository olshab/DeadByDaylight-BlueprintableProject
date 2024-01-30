// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ArchiveNodeObjectiveViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveNodeObjectiveViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EQuestProgressionType();
// End Cross Module References
class UScriptStruct* FArchiveNodeObjectiveViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("ArchiveNodeObjectiveViewData"), sizeof(FArchiveNodeObjectiveViewData), Get_Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FArchiveNodeObjectiveViewData>()
{
	return FArchiveNodeObjectiveViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArchiveNodeObjectiveViewData(FArchiveNodeObjectiveViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("ArchiveNodeObjectiveViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchiveNodeObjectiveViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchiveNodeObjectiveViewData()
	{
		UScriptStruct::DeferCppStructOps<FArchiveNodeObjectiveViewData>(FName(TEXT("ArchiveNodeObjectiveViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchiveNodeObjectiveViewData;
	struct Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxProgress;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProgressionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProgressionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCommunityObjective_MetaData[];
#endif
		static void NewProp_IsCommunityObjective_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCommunityObjective;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArchiveNodeObjectiveViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchiveNodeObjectiveViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "ArchiveNodeObjectiveViewData" },
		{ "ModuleRelativePath", "Public/ArchiveNodeObjectiveViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveNodeObjectiveViewData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_CurrentProgress_MetaData[] = {
		{ "Category", "ArchiveNodeObjectiveViewData" },
		{ "ModuleRelativePath", "Public/ArchiveNodeObjectiveViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveNodeObjectiveViewData, CurrentProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_CurrentProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_CurrentProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_MaxProgress_MetaData[] = {
		{ "Category", "ArchiveNodeObjectiveViewData" },
		{ "ModuleRelativePath", "Public/ArchiveNodeObjectiveViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_MaxProgress = { "MaxProgress", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveNodeObjectiveViewData, MaxProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_MaxProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_MaxProgress_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_ProgressionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_ProgressionType_MetaData[] = {
		{ "Category", "ArchiveNodeObjectiveViewData" },
		{ "ModuleRelativePath", "Public/ArchiveNodeObjectiveViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_ProgressionType = { "ProgressionType", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveNodeObjectiveViewData, ProgressionType), Z_Construct_UEnum_DBDSharedTypes_EQuestProgressionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_ProgressionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_ProgressionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_IsCommunityObjective_MetaData[] = {
		{ "Category", "ArchiveNodeObjectiveViewData" },
		{ "ModuleRelativePath", "Public/ArchiveNodeObjectiveViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_IsCommunityObjective_SetBit(void* Obj)
	{
		((FArchiveNodeObjectiveViewData*)Obj)->IsCommunityObjective = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_IsCommunityObjective = { "IsCommunityObjective", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FArchiveNodeObjectiveViewData), &Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_IsCommunityObjective_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_IsCommunityObjective_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_IsCommunityObjective_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_CurrentProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_MaxProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_ProgressionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_ProgressionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::NewProp_IsCommunityObjective,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"ArchiveNodeObjectiveViewData",
		sizeof(FArchiveNodeObjectiveViewData),
		alignof(FArchiveNodeObjectiveViewData),
		Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArchiveNodeObjectiveViewData"), sizeof(FArchiveNodeObjectiveViewData), Get_Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData_Hash() { return 1578507357U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
