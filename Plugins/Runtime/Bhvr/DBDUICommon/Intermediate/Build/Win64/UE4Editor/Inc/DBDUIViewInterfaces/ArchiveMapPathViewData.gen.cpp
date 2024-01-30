// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ArchiveMapPathViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveMapPathViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveMapPathViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EArchivePathStatus();
// End Cross Module References
class UScriptStruct* FArchiveMapPathViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FArchiveMapPathViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchiveMapPathViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("ArchiveMapPathViewData"), sizeof(FArchiveMapPathViewData), Get_Z_Construct_UScriptStruct_FArchiveMapPathViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FArchiveMapPathViewData>()
{
	return FArchiveMapPathViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArchiveMapPathViewData(FArchiveMapPathViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("ArchiveMapPathViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchiveMapPathViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchiveMapPathViewData()
	{
		UScriptStruct::DeferCppStructOps<FArchiveMapPathViewData>(FName(TEXT("ArchiveMapPathViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchiveMapPathViewData;
	struct Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPositon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartPositon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPositon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndPositon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartNodeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StartNodeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndNodeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EndNodeId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArchiveMapPathViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchiveMapPathViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_StartPositon_MetaData[] = {
		{ "Category", "ArchiveMapPathViewData" },
		{ "ModuleRelativePath", "Public/ArchiveMapPathViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_StartPositon = { "StartPositon", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveMapPathViewData, StartPositon), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_StartPositon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_StartPositon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_EndPositon_MetaData[] = {
		{ "Category", "ArchiveMapPathViewData" },
		{ "ModuleRelativePath", "Public/ArchiveMapPathViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_EndPositon = { "EndPositon", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveMapPathViewData, EndPositon), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_EndPositon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_EndPositon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_StartNodeId_MetaData[] = {
		{ "Category", "ArchiveMapPathViewData" },
		{ "ModuleRelativePath", "Public/ArchiveMapPathViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_StartNodeId = { "StartNodeId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveMapPathViewData, StartNodeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_StartNodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_StartNodeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_EndNodeId_MetaData[] = {
		{ "Category", "ArchiveMapPathViewData" },
		{ "ModuleRelativePath", "Public/ArchiveMapPathViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_EndNodeId = { "EndNodeId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveMapPathViewData, EndNodeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_EndNodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_EndNodeId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "ArchiveMapPathViewData" },
		{ "ModuleRelativePath", "Public/ArchiveMapPathViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveMapPathViewData, Status), Z_Construct_UEnum_DBDUIViewInterfaces_EArchivePathStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_StartPositon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_EndPositon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_StartNodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_EndNodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"ArchiveMapPathViewData",
		sizeof(FArchiveMapPathViewData),
		alignof(FArchiveMapPathViewData),
		Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArchiveMapPathViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArchiveMapPathViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArchiveMapPathViewData"), sizeof(FArchiveMapPathViewData), Get_Z_Construct_UScriptStruct_FArchiveMapPathViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArchiveMapPathViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArchiveMapPathViewData_Hash() { return 2264217548U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
