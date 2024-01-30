// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/AggregationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAggregationSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FAggregationSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
class UScriptStruct* FAggregationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FAggregationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAggregationSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("AggregationSettings"), sizeof(FAggregationSettings), Get_Z_Construct_UScriptStruct_FAggregationSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FAggregationSettings>()
{
	return FAggregationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAggregationSettings(FAggregationSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("AggregationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFAggregationSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFAggregationSettings()
	{
		UScriptStruct::DeferCppStructOps<FAggregationSettings>(FName(TEXT("AggregationSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFAggregationSettings;
	struct Z_Construct_UScriptStruct_FAggregationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MergeGeometries_MetaData[];
#endif
		static void NewProp_MergeGeometries_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MergeGeometries;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableGeometryCulling_MetaData[];
#endif
		static void NewProp_EnableGeometryCulling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableGeometryCulling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryCullingPrecision_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GeometryCullingPrecision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubdivideGeometryBasedOnUVTiles_MetaData[];
#endif
		static void NewProp_SubdivideGeometryBasedOnUVTiles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SubdivideGeometryBasedOnUVTiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubdivisionTileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubdivisionTileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessSelectionSetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProcessSelectionSetID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessSelectionSetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProcessSelectionSetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeepUnprocessedSceneMeshes_MetaData[];
#endif
		static void NewProp_KeepUnprocessedSceneMeshes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_KeepUnprocessedSceneMeshes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AggregationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAggregationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_MergeGeometries_MetaData[] = {
		{ "Category", "AggregationSettings" },
		{ "ModuleRelativePath", "Public/AggregationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_MergeGeometries_SetBit(void* Obj)
	{
		((FAggregationSettings*)Obj)->MergeGeometries = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_MergeGeometries = { "MergeGeometries", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAggregationSettings), &Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_MergeGeometries_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_MergeGeometries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_MergeGeometries_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_EnableGeometryCulling_MetaData[] = {
		{ "Category", "AggregationSettings" },
		{ "ModuleRelativePath", "Public/AggregationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_EnableGeometryCulling_SetBit(void* Obj)
	{
		((FAggregationSettings*)Obj)->EnableGeometryCulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_EnableGeometryCulling = { "EnableGeometryCulling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAggregationSettings), &Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_EnableGeometryCulling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_EnableGeometryCulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_EnableGeometryCulling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_GeometryCullingPrecision_MetaData[] = {
		{ "Category", "AggregationSettings" },
		{ "ModuleRelativePath", "Public/AggregationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_GeometryCullingPrecision = { "GeometryCullingPrecision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregationSettings, GeometryCullingPrecision), METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_GeometryCullingPrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_GeometryCullingPrecision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_SubdivideGeometryBasedOnUVTiles_MetaData[] = {
		{ "Category", "AggregationSettings" },
		{ "ModuleRelativePath", "Public/AggregationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_SubdivideGeometryBasedOnUVTiles_SetBit(void* Obj)
	{
		((FAggregationSettings*)Obj)->SubdivideGeometryBasedOnUVTiles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_SubdivideGeometryBasedOnUVTiles = { "SubdivideGeometryBasedOnUVTiles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAggregationSettings), &Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_SubdivideGeometryBasedOnUVTiles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_SubdivideGeometryBasedOnUVTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_SubdivideGeometryBasedOnUVTiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_SubdivisionTileSize_MetaData[] = {
		{ "Category", "AggregationSettings" },
		{ "ModuleRelativePath", "Public/AggregationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_SubdivisionTileSize = { "SubdivisionTileSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregationSettings, SubdivisionTileSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_SubdivisionTileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_SubdivisionTileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_ProcessSelectionSetID_MetaData[] = {
		{ "Category", "AggregationSettings" },
		{ "ModuleRelativePath", "Public/AggregationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_ProcessSelectionSetID = { "ProcessSelectionSetID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregationSettings, ProcessSelectionSetID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_ProcessSelectionSetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_ProcessSelectionSetID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_ProcessSelectionSetName_MetaData[] = {
		{ "Category", "AggregationSettings" },
		{ "ModuleRelativePath", "Public/AggregationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_ProcessSelectionSetName = { "ProcessSelectionSetName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregationSettings, ProcessSelectionSetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_ProcessSelectionSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_ProcessSelectionSetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_KeepUnprocessedSceneMeshes_MetaData[] = {
		{ "Category", "AggregationSettings" },
		{ "ModuleRelativePath", "Public/AggregationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_KeepUnprocessedSceneMeshes_SetBit(void* Obj)
	{
		((FAggregationSettings*)Obj)->KeepUnprocessedSceneMeshes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_KeepUnprocessedSceneMeshes = { "KeepUnprocessedSceneMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAggregationSettings), &Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_KeepUnprocessedSceneMeshes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_KeepUnprocessedSceneMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_KeepUnprocessedSceneMeshes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAggregationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_MergeGeometries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_EnableGeometryCulling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_GeometryCullingPrecision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_SubdivideGeometryBasedOnUVTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_SubdivisionTileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_ProcessSelectionSetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_ProcessSelectionSetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregationSettings_Statics::NewProp_KeepUnprocessedSceneMeshes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAggregationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		nullptr,
		&NewStructOps,
		"AggregationSettings",
		sizeof(FAggregationSettings),
		alignof(FAggregationSettings),
		Z_Construct_UScriptStruct_FAggregationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAggregationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAggregationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AggregationSettings"), sizeof(FAggregationSettings), Get_Z_Construct_UScriptStruct_FAggregationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAggregationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAggregationSettings_Hash() { return 2617422425U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
