// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/ReductionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReductionSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FReductionSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EReductionPerformanceMode();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EReductionTargetStopCondition();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EReductionHeuristics();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_ESymmetryAxis();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EDataCreationPreferences();
// End Cross Module References
class UScriptStruct* FReductionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FReductionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReductionSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("ReductionSettings"), sizeof(FReductionSettings), Get_Z_Construct_UScriptStruct_FReductionSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FReductionSettings>()
{
	return FReductionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReductionSettings(FReductionSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("ReductionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFReductionSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFReductionSettings()
	{
		UScriptStruct::DeferCppStructOps<FReductionSettings>(FName(TEXT("ReductionSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFReductionSettings;
	struct Z_Construct_UScriptStruct_FReductionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionTargetTriangleRatioEnabled_MetaData[];
#endif
		static void NewProp_ReductionTargetTriangleRatioEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReductionTargetTriangleRatioEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionTargetTriangleRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReductionTargetTriangleRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionTargetTriangleCountEnabled_MetaData[];
#endif
		static void NewProp_ReductionTargetTriangleCountEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReductionTargetTriangleCountEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionTargetTriangleCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReductionTargetTriangleCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionTargetMaxDeviationEnabled_MetaData[];
#endif
		static void NewProp_ReductionTargetMaxDeviationEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReductionTargetMaxDeviationEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionTargetMaxDeviation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReductionTargetMaxDeviation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionTargetOnScreenSizeEnabled_MetaData[];
#endif
		static void NewProp_ReductionTargetOnScreenSizeEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReductionTargetOnScreenSizeEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionTargetOnScreenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReductionTargetOnScreenSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReductionPerformanceMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionPerformanceMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReductionPerformanceMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReductionTargetStopCondition_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionTargetStopCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReductionTargetStopCondition;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReductionHeuristics_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionHeuristics_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReductionHeuristics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GeometryImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaterialImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextureImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadingImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadingImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GroupImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VertexColorImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeSetImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EdgeSetImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinningImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SkinningImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutwardMoveMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutwardMoveMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InwardMoveMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InwardMoveMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEdgeLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxEdgeLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeepSymmetry_MetaData[];
#endif
		static void NewProp_KeepSymmetry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_KeepSymmetry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseSymmetryQuadRetriangulator_MetaData[];
#endif
		static void NewProp_UseSymmetryQuadRetriangulator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseSymmetryQuadRetriangulator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAutomaticSymmetryDetection_MetaData[];
#endif
		static void NewProp_UseAutomaticSymmetryDetection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAutomaticSymmetryDetection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SymmetryDetectionTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SymmetryDetectionTolerance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SymmetryAxis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SymmetryAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SymmetryAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SymmetryOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SymmetryOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateGeomorphGeometry_MetaData[];
#endif
		static void NewProp_CreateGeomorphGeometry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CreateGeomorphGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerateGeomorphData_MetaData[];
#endif
		static void NewProp_GenerateGeomorphData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GenerateGeomorphData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataCreationPreferences_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataCreationPreferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DataCreationPreferences;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseHighQualityNormalCalculation_MetaData[];
#endif
		static void NewProp_UseHighQualityNormalCalculation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseHighQualityNormalCalculation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockGeometricBorder_MetaData[];
#endif
		static void NewProp_LockGeometricBorder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LockGeometricBorder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MergeGeometries_MetaData[];
#endif
		static void NewProp_MergeGeometries_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MergeGeometries;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowDegenerateTexCoords_MetaData[];
#endif
		static void NewProp_AllowDegenerateTexCoords_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowDegenerateTexCoords;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreserveQuadFlags_MetaData[];
#endif
		static void NewProp_PreserveQuadFlags_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PreserveQuadFlags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReductionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReductionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetTriangleRatioEnabled_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetTriangleRatioEnabled_SetBit(void* Obj)
	{
		((FReductionSettings*)Obj)->ReductionTargetTriangleRatioEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetTriangleRatioEnabled = { "ReductionTargetTriangleRatioEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FReductionSettings), &Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetTriangleRatioEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetTriangleRatioEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetTriangleRatioEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetTriangleRatio_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetTriangleRatio = { "ReductionTargetTriangleRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionSettings, ReductionTargetTriangleRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetTriangleRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetTriangleRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetTriangleCountEnabled_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetTriangleCountEnabled_SetBit(void* Obj)
	{
		((FReductionSettings*)Obj)->ReductionTargetTriangleCountEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetTriangleCountEnabled = { "ReductionTargetTriangleCountEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FReductionSettings), &Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetTriangleCountEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetTriangleCountEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetTriangleCountEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetTriangleCount_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetTriangleCount = { "ReductionTargetTriangleCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionSettings, ReductionTargetTriangleCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetTriangleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetTriangleCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetMaxDeviationEnabled_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetMaxDeviationEnabled_SetBit(void* Obj)
	{
		((FReductionSettings*)Obj)->ReductionTargetMaxDeviationEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetMaxDeviationEnabled = { "ReductionTargetMaxDeviationEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FReductionSettings), &Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetMaxDeviationEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetMaxDeviationEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetMaxDeviationEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetMaxDeviation_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetMaxDeviation = { "ReductionTargetMaxDeviation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionSettings, ReductionTargetMaxDeviation), METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetMaxDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetMaxDeviation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetOnScreenSizeEnabled_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetOnScreenSizeEnabled_SetBit(void* Obj)
	{
		((FReductionSettings*)Obj)->ReductionTargetOnScreenSizeEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetOnScreenSizeEnabled = { "ReductionTargetOnScreenSizeEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FReductionSettings), &Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetOnScreenSizeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetOnScreenSizeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetOnScreenSizeEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetOnScreenSize_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetOnScreenSize = { "ReductionTargetOnScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionSettings, ReductionTargetOnScreenSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetOnScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetOnScreenSize_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionPerformanceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionPerformanceMode_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionPerformanceMode = { "ReductionPerformanceMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionSettings, ReductionPerformanceMode), Z_Construct_UEnum_SimplygonUObjects_EReductionPerformanceMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionPerformanceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionPerformanceMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetStopCondition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetStopCondition_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetStopCondition = { "ReductionTargetStopCondition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionSettings, ReductionTargetStopCondition), Z_Construct_UEnum_SimplygonUObjects_EReductionTargetStopCondition, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetStopCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetStopCondition_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionHeuristics_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionHeuristics_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionHeuristics = { "ReductionHeuristics", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionSettings, ReductionHeuristics), Z_Construct_UEnum_SimplygonUObjects_EReductionHeuristics, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionHeuristics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionHeuristics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_GeometryImportance_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_GeometryImportance = { "GeometryImportance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionSettings, GeometryImportance), METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_GeometryImportance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_GeometryImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_MaterialImportance_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_MaterialImportance = { "MaterialImportance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionSettings, MaterialImportance), METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_MaterialImportance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_MaterialImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_TextureImportance_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_TextureImportance = { "TextureImportance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionSettings, TextureImportance), METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_TextureImportance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_TextureImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ShadingImportance_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ShadingImportance = { "ShadingImportance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionSettings, ShadingImportance), METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ShadingImportance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ShadingImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_GroupImportance_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_GroupImportance = { "GroupImportance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionSettings, GroupImportance), METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_GroupImportance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_GroupImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_VertexColorImportance_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_VertexColorImportance = { "VertexColorImportance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionSettings, VertexColorImportance), METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_VertexColorImportance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_VertexColorImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_EdgeSetImportance_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_EdgeSetImportance = { "EdgeSetImportance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionSettings, EdgeSetImportance), METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_EdgeSetImportance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_EdgeSetImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_SkinningImportance_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_SkinningImportance = { "SkinningImportance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionSettings, SkinningImportance), METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_SkinningImportance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_SkinningImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_OutwardMoveMultiplier_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_OutwardMoveMultiplier = { "OutwardMoveMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionSettings, OutwardMoveMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_OutwardMoveMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_OutwardMoveMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_InwardMoveMultiplier_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_InwardMoveMultiplier = { "InwardMoveMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionSettings, InwardMoveMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_InwardMoveMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_InwardMoveMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_MaxEdgeLength_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_MaxEdgeLength = { "MaxEdgeLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionSettings, MaxEdgeLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_MaxEdgeLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_MaxEdgeLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_KeepSymmetry_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_KeepSymmetry_SetBit(void* Obj)
	{
		((FReductionSettings*)Obj)->KeepSymmetry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_KeepSymmetry = { "KeepSymmetry", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FReductionSettings), &Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_KeepSymmetry_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_KeepSymmetry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_KeepSymmetry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_UseSymmetryQuadRetriangulator_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_UseSymmetryQuadRetriangulator_SetBit(void* Obj)
	{
		((FReductionSettings*)Obj)->UseSymmetryQuadRetriangulator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_UseSymmetryQuadRetriangulator = { "UseSymmetryQuadRetriangulator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FReductionSettings), &Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_UseSymmetryQuadRetriangulator_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_UseSymmetryQuadRetriangulator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_UseSymmetryQuadRetriangulator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_UseAutomaticSymmetryDetection_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_UseAutomaticSymmetryDetection_SetBit(void* Obj)
	{
		((FReductionSettings*)Obj)->UseAutomaticSymmetryDetection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_UseAutomaticSymmetryDetection = { "UseAutomaticSymmetryDetection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FReductionSettings), &Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_UseAutomaticSymmetryDetection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_UseAutomaticSymmetryDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_UseAutomaticSymmetryDetection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_SymmetryDetectionTolerance_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_SymmetryDetectionTolerance = { "SymmetryDetectionTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionSettings, SymmetryDetectionTolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_SymmetryDetectionTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_SymmetryDetectionTolerance_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_SymmetryAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_SymmetryAxis_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_SymmetryAxis = { "SymmetryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionSettings, SymmetryAxis), Z_Construct_UEnum_SimplygonUObjects_ESymmetryAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_SymmetryAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_SymmetryAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_SymmetryOffset_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_SymmetryOffset = { "SymmetryOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionSettings, SymmetryOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_SymmetryOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_SymmetryOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_CreateGeomorphGeometry_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_CreateGeomorphGeometry_SetBit(void* Obj)
	{
		((FReductionSettings*)Obj)->CreateGeomorphGeometry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_CreateGeomorphGeometry = { "CreateGeomorphGeometry", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FReductionSettings), &Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_CreateGeomorphGeometry_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_CreateGeomorphGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_CreateGeomorphGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_GenerateGeomorphData_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_GenerateGeomorphData_SetBit(void* Obj)
	{
		((FReductionSettings*)Obj)->GenerateGeomorphData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_GenerateGeomorphData = { "GenerateGeomorphData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FReductionSettings), &Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_GenerateGeomorphData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_GenerateGeomorphData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_GenerateGeomorphData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_DataCreationPreferences_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_DataCreationPreferences_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_DataCreationPreferences = { "DataCreationPreferences", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionSettings, DataCreationPreferences), Z_Construct_UEnum_SimplygonUObjects_EDataCreationPreferences, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_DataCreationPreferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_DataCreationPreferences_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_UseHighQualityNormalCalculation_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_UseHighQualityNormalCalculation_SetBit(void* Obj)
	{
		((FReductionSettings*)Obj)->UseHighQualityNormalCalculation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_UseHighQualityNormalCalculation = { "UseHighQualityNormalCalculation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FReductionSettings), &Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_UseHighQualityNormalCalculation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_UseHighQualityNormalCalculation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_UseHighQualityNormalCalculation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_LockGeometricBorder_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_LockGeometricBorder_SetBit(void* Obj)
	{
		((FReductionSettings*)Obj)->LockGeometricBorder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_LockGeometricBorder = { "LockGeometricBorder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FReductionSettings), &Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_LockGeometricBorder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_LockGeometricBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_LockGeometricBorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_MergeGeometries_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_MergeGeometries_SetBit(void* Obj)
	{
		((FReductionSettings*)Obj)->MergeGeometries = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_MergeGeometries = { "MergeGeometries", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FReductionSettings), &Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_MergeGeometries_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_MergeGeometries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_MergeGeometries_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_AllowDegenerateTexCoords_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_AllowDegenerateTexCoords_SetBit(void* Obj)
	{
		((FReductionSettings*)Obj)->AllowDegenerateTexCoords = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_AllowDegenerateTexCoords = { "AllowDegenerateTexCoords", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FReductionSettings), &Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_AllowDegenerateTexCoords_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_AllowDegenerateTexCoords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_AllowDegenerateTexCoords_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ProcessSelectionSetID_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ProcessSelectionSetID = { "ProcessSelectionSetID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionSettings, ProcessSelectionSetID), METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ProcessSelectionSetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ProcessSelectionSetID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ProcessSelectionSetName_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ProcessSelectionSetName = { "ProcessSelectionSetName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionSettings, ProcessSelectionSetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ProcessSelectionSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ProcessSelectionSetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_KeepUnprocessedSceneMeshes_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_KeepUnprocessedSceneMeshes_SetBit(void* Obj)
	{
		((FReductionSettings*)Obj)->KeepUnprocessedSceneMeshes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_KeepUnprocessedSceneMeshes = { "KeepUnprocessedSceneMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FReductionSettings), &Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_KeepUnprocessedSceneMeshes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_KeepUnprocessedSceneMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_KeepUnprocessedSceneMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_PreserveQuadFlags_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/ReductionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_PreserveQuadFlags_SetBit(void* Obj)
	{
		((FReductionSettings*)Obj)->PreserveQuadFlags = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_PreserveQuadFlags = { "PreserveQuadFlags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FReductionSettings), &Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_PreserveQuadFlags_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_PreserveQuadFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_PreserveQuadFlags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReductionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetTriangleRatioEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetTriangleRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetTriangleCountEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetTriangleCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetMaxDeviationEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetMaxDeviation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetOnScreenSizeEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetOnScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionPerformanceMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionPerformanceMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetStopCondition_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionTargetStopCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionHeuristics_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ReductionHeuristics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_GeometryImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_MaterialImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_TextureImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ShadingImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_GroupImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_VertexColorImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_EdgeSetImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_SkinningImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_OutwardMoveMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_InwardMoveMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_MaxEdgeLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_KeepSymmetry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_UseSymmetryQuadRetriangulator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_UseAutomaticSymmetryDetection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_SymmetryDetectionTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_SymmetryAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_SymmetryAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_SymmetryOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_CreateGeomorphGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_GenerateGeomorphData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_DataCreationPreferences_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_DataCreationPreferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_UseHighQualityNormalCalculation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_LockGeometricBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_MergeGeometries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_AllowDegenerateTexCoords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ProcessSelectionSetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_ProcessSelectionSetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_KeepUnprocessedSceneMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionSettings_Statics::NewProp_PreserveQuadFlags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReductionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		nullptr,
		&NewStructOps,
		"ReductionSettings",
		sizeof(FReductionSettings),
		alignof(FReductionSettings),
		Z_Construct_UScriptStruct_FReductionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReductionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReductionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReductionSettings"), sizeof(FReductionSettings), Get_Z_Construct_UScriptStruct_FReductionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FReductionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReductionSettings_Hash() { return 1619787705U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
