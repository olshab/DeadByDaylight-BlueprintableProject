// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/VisibilitySettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisibilitySettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FVisibilitySettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EComputeVisibilityMode();
// End Cross Module References
class UScriptStruct* FVisibilitySettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FVisibilitySettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVisibilitySettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("VisibilitySettings"), sizeof(FVisibilitySettings), Get_Z_Construct_UScriptStruct_FVisibilitySettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FVisibilitySettings>()
{
	return FVisibilitySettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVisibilitySettings(FVisibilitySettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("VisibilitySettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFVisibilitySettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFVisibilitySettings()
	{
		UScriptStruct::DeferCppStructOps<FVisibilitySettings>(FName(TEXT("VisibilitySettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFVisibilitySettings;
	struct Z_Construct_UScriptStruct_FVisibilitySettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseVisibilityWeightsInReducer_MetaData[];
#endif
		static void NewProp_UseVisibilityWeightsInReducer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseVisibilityWeightsInReducer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseVisibilityWeightsInTexcoordGenerator_MetaData[];
#endif
		static void NewProp_UseVisibilityWeightsInTexcoordGenerator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseVisibilityWeightsInTexcoordGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityWeightsPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VisibilityWeightsPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CullOccludedGeometry_MetaData[];
#endif
		static void NewProp_CullOccludedGeometry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CullOccludedGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceVisibilityCalculation_MetaData[];
#endif
		static void NewProp_ForceVisibilityCalculation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceVisibilityCalculation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseBackfaceCulling_MetaData[];
#endif
		static void NewProp_UseBackfaceCulling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseBackfaceCulling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSelectionSetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CameraSelectionSetID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSelectionSetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CameraSelectionSetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OccluderSelectionSetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OccluderSelectionSetID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OccluderSelectionSetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OccluderSelectionSetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FillNonVisibleAreaThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FillNonVisibleAreaThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveTrianglesNotOccludingOtherTriangles_MetaData[];
#endif
		static void NewProp_RemoveTrianglesNotOccludingOtherTriangles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RemoveTrianglesNotOccludingOtherTriangles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConservativeMode_MetaData[];
#endif
		static void NewProp_ConservativeMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ConservativeMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ComputeVisibilityMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComputeVisibilityMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ComputeVisibilityMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisibilitySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VisibilitySettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVisibilitySettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_UseVisibilityWeightsInReducer_MetaData[] = {
		{ "Category", "VisibilitySettings" },
		{ "ModuleRelativePath", "Public/VisibilitySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_UseVisibilityWeightsInReducer_SetBit(void* Obj)
	{
		((FVisibilitySettings*)Obj)->UseVisibilityWeightsInReducer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_UseVisibilityWeightsInReducer = { "UseVisibilityWeightsInReducer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FVisibilitySettings), &Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_UseVisibilityWeightsInReducer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_UseVisibilityWeightsInReducer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_UseVisibilityWeightsInReducer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_UseVisibilityWeightsInTexcoordGenerator_MetaData[] = {
		{ "Category", "VisibilitySettings" },
		{ "ModuleRelativePath", "Public/VisibilitySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_UseVisibilityWeightsInTexcoordGenerator_SetBit(void* Obj)
	{
		((FVisibilitySettings*)Obj)->UseVisibilityWeightsInTexcoordGenerator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_UseVisibilityWeightsInTexcoordGenerator = { "UseVisibilityWeightsInTexcoordGenerator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FVisibilitySettings), &Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_UseVisibilityWeightsInTexcoordGenerator_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_UseVisibilityWeightsInTexcoordGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_UseVisibilityWeightsInTexcoordGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_VisibilityWeightsPower_MetaData[] = {
		{ "Category", "VisibilitySettings" },
		{ "ModuleRelativePath", "Public/VisibilitySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_VisibilityWeightsPower = { "VisibilityWeightsPower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVisibilitySettings, VisibilityWeightsPower), METADATA_PARAMS(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_VisibilityWeightsPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_VisibilityWeightsPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_CullOccludedGeometry_MetaData[] = {
		{ "Category", "VisibilitySettings" },
		{ "ModuleRelativePath", "Public/VisibilitySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_CullOccludedGeometry_SetBit(void* Obj)
	{
		((FVisibilitySettings*)Obj)->CullOccludedGeometry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_CullOccludedGeometry = { "CullOccludedGeometry", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FVisibilitySettings), &Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_CullOccludedGeometry_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_CullOccludedGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_CullOccludedGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_ForceVisibilityCalculation_MetaData[] = {
		{ "Category", "VisibilitySettings" },
		{ "ModuleRelativePath", "Public/VisibilitySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_ForceVisibilityCalculation_SetBit(void* Obj)
	{
		((FVisibilitySettings*)Obj)->ForceVisibilityCalculation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_ForceVisibilityCalculation = { "ForceVisibilityCalculation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FVisibilitySettings), &Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_ForceVisibilityCalculation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_ForceVisibilityCalculation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_ForceVisibilityCalculation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_UseBackfaceCulling_MetaData[] = {
		{ "Category", "VisibilitySettings" },
		{ "ModuleRelativePath", "Public/VisibilitySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_UseBackfaceCulling_SetBit(void* Obj)
	{
		((FVisibilitySettings*)Obj)->UseBackfaceCulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_UseBackfaceCulling = { "UseBackfaceCulling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FVisibilitySettings), &Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_UseBackfaceCulling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_UseBackfaceCulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_UseBackfaceCulling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_CameraSelectionSetID_MetaData[] = {
		{ "Category", "VisibilitySettings" },
		{ "ModuleRelativePath", "Public/VisibilitySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_CameraSelectionSetID = { "CameraSelectionSetID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVisibilitySettings, CameraSelectionSetID), METADATA_PARAMS(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_CameraSelectionSetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_CameraSelectionSetID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_CameraSelectionSetName_MetaData[] = {
		{ "Category", "VisibilitySettings" },
		{ "ModuleRelativePath", "Public/VisibilitySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_CameraSelectionSetName = { "CameraSelectionSetName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVisibilitySettings, CameraSelectionSetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_CameraSelectionSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_CameraSelectionSetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_OccluderSelectionSetID_MetaData[] = {
		{ "Category", "VisibilitySettings" },
		{ "ModuleRelativePath", "Public/VisibilitySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_OccluderSelectionSetID = { "OccluderSelectionSetID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVisibilitySettings, OccluderSelectionSetID), METADATA_PARAMS(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_OccluderSelectionSetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_OccluderSelectionSetID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_OccluderSelectionSetName_MetaData[] = {
		{ "Category", "VisibilitySettings" },
		{ "ModuleRelativePath", "Public/VisibilitySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_OccluderSelectionSetName = { "OccluderSelectionSetName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVisibilitySettings, OccluderSelectionSetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_OccluderSelectionSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_OccluderSelectionSetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_FillNonVisibleAreaThreshold_MetaData[] = {
		{ "Category", "VisibilitySettings" },
		{ "ModuleRelativePath", "Public/VisibilitySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_FillNonVisibleAreaThreshold = { "FillNonVisibleAreaThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVisibilitySettings, FillNonVisibleAreaThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_FillNonVisibleAreaThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_FillNonVisibleAreaThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_RemoveTrianglesNotOccludingOtherTriangles_MetaData[] = {
		{ "Category", "VisibilitySettings" },
		{ "ModuleRelativePath", "Public/VisibilitySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_RemoveTrianglesNotOccludingOtherTriangles_SetBit(void* Obj)
	{
		((FVisibilitySettings*)Obj)->RemoveTrianglesNotOccludingOtherTriangles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_RemoveTrianglesNotOccludingOtherTriangles = { "RemoveTrianglesNotOccludingOtherTriangles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FVisibilitySettings), &Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_RemoveTrianglesNotOccludingOtherTriangles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_RemoveTrianglesNotOccludingOtherTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_RemoveTrianglesNotOccludingOtherTriangles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_ConservativeMode_MetaData[] = {
		{ "Category", "VisibilitySettings" },
		{ "ModuleRelativePath", "Public/VisibilitySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_ConservativeMode_SetBit(void* Obj)
	{
		((FVisibilitySettings*)Obj)->ConservativeMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_ConservativeMode = { "ConservativeMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FVisibilitySettings), &Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_ConservativeMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_ConservativeMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_ConservativeMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_ComputeVisibilityMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_ComputeVisibilityMode_MetaData[] = {
		{ "Category", "VisibilitySettings" },
		{ "ModuleRelativePath", "Public/VisibilitySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_ComputeVisibilityMode = { "ComputeVisibilityMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVisibilitySettings, ComputeVisibilityMode), Z_Construct_UEnum_SimplygonUObjects_EComputeVisibilityMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_ComputeVisibilityMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_ComputeVisibilityMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVisibilitySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_UseVisibilityWeightsInReducer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_UseVisibilityWeightsInTexcoordGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_VisibilityWeightsPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_CullOccludedGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_ForceVisibilityCalculation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_UseBackfaceCulling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_CameraSelectionSetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_CameraSelectionSetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_OccluderSelectionSetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_OccluderSelectionSetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_FillNonVisibleAreaThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_RemoveTrianglesNotOccludingOtherTriangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_ConservativeMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_ComputeVisibilityMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisibilitySettings_Statics::NewProp_ComputeVisibilityMode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVisibilitySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		nullptr,
		&NewStructOps,
		"VisibilitySettings",
		sizeof(FVisibilitySettings),
		alignof(FVisibilitySettings),
		Z_Construct_UScriptStruct_FVisibilitySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisibilitySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVisibilitySettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVisibilitySettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VisibilitySettings"), sizeof(FVisibilitySettings), Get_Z_Construct_UScriptStruct_FVisibilitySettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVisibilitySettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVisibilitySettings_Hash() { return 2367451964U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
