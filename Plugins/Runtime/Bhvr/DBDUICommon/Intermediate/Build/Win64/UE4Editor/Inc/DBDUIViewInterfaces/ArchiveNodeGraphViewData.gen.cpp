// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ArchiveNodeGraphViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveNodeGraphViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveNodeGraphViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveNodeViewData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FArchiveNodeGraphViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchiveNodeGraphViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("ArchiveNodeGraphViewData"), sizeof(FArchiveNodeGraphViewData), Get_Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FArchiveNodeGraphViewData>()
{
	return FArchiveNodeGraphViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArchiveNodeGraphViewData(FArchiveNodeGraphViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("ArchiveNodeGraphViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchiveNodeGraphViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchiveNodeGraphViewData()
	{
		UScriptStruct::DeferCppStructOps<FArchiveNodeGraphViewData>(FName(TEXT("ArchiveNodeGraphViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchiveNodeGraphViewData;
	struct Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Neighbors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Neighbors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Neighbors;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PathIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathIndices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArchiveNodeGraphViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchiveNodeGraphViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "ArchiveNodeGraphViewData" },
		{ "ModuleRelativePath", "Public/ArchiveNodeGraphViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveNodeGraphViewData, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_ViewData_MetaData[] = {
		{ "Category", "ArchiveNodeGraphViewData" },
		{ "ModuleRelativePath", "Public/ArchiveNodeGraphViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_ViewData = { "ViewData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveNodeGraphViewData, ViewData), Z_Construct_UScriptStruct_FArchiveNodeViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_ViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_ViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "ArchiveNodeGraphViewData" },
		{ "ModuleRelativePath", "Public/ArchiveNodeGraphViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveNodeGraphViewData, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_Neighbors_Inner = { "Neighbors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_Neighbors_MetaData[] = {
		{ "Category", "ArchiveNodeGraphViewData" },
		{ "ModuleRelativePath", "Public/ArchiveNodeGraphViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_Neighbors = { "Neighbors", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveNodeGraphViewData, Neighbors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_Neighbors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_Neighbors_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_PathIndices_Inner = { "PathIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_PathIndices_MetaData[] = {
		{ "Category", "ArchiveNodeGraphViewData" },
		{ "ModuleRelativePath", "Public/ArchiveNodeGraphViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_PathIndices = { "PathIndices", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveNodeGraphViewData, PathIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_PathIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_PathIndices_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_ViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_Neighbors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_Neighbors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_PathIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::NewProp_PathIndices,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"ArchiveNodeGraphViewData",
		sizeof(FArchiveNodeGraphViewData),
		alignof(FArchiveNodeGraphViewData),
		Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArchiveNodeGraphViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArchiveNodeGraphViewData"), sizeof(FArchiveNodeGraphViewData), Get_Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArchiveNodeGraphViewData_Hash() { return 1969049616U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
