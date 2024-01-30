// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/RemeshingSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemeshingSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FRemeshingSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EHoleFilling();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_ERemeshingMode();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_ESurfaceTransferMode();
// End Cross Module References
class UScriptStruct* FRemeshingSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FRemeshingSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemeshingSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("RemeshingSettings"), sizeof(FRemeshingSettings), Get_Z_Construct_UScriptStruct_FRemeshingSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FRemeshingSettings>()
{
	return FRemeshingSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRemeshingSettings(FRemeshingSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("RemeshingSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFRemeshingSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFRemeshingSettings()
	{
		UScriptStruct::DeferCppStructOps<FRemeshingSettings>(FName(TEXT("RemeshingSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFRemeshingSettings;
	struct Z_Construct_UScriptStruct_FRemeshingSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnScreenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OnScreenSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HoleFilling_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoleFilling_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HoleFilling;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RemeshingMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemeshingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RemeshingMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SurfaceTransferMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceTransferMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SurfaceTransferMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HardEdgeAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HardEdgeAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransferNormals_MetaData[];
#endif
		static void NewProp_TransferNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TransferNormals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransferColors_MetaData[];
#endif
		static void NewProp_TransferColors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TransferColors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopulateAttributeTessellationDisplacement_MetaData[];
#endif
		static void NewProp_PopulateAttributeTessellationDisplacement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PopulateAttributeTessellationDisplacement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometricalAccuracy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GeometricalAccuracy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopologicalAccuracy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TopologicalAccuracy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemeshingModeManualPositionX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemeshingModeManualPositionX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemeshingModeManualPositionY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemeshingModeManualPositionY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemeshingModeManualPositionZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemeshingModeManualPositionZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessSelectionSetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProcessSelectionSetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessSelectionSetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProcessSelectionSetID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeepUnprocessedSceneMeshes_MetaData[];
#endif
		static void NewProp_KeepUnprocessedSceneMeshes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_KeepUnprocessedSceneMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceSoftEdgesWithinTextureCharts_MetaData[];
#endif
		static void NewProp_ForceSoftEdgesWithinTextureCharts_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceSoftEdgesWithinTextureCharts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemeshingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RemeshingSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemeshingSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_OnScreenSize_MetaData[] = {
		{ "Category", "RemeshingSettings" },
		{ "ModuleRelativePath", "Public/RemeshingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_OnScreenSize = { "OnScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemeshingSettings, OnScreenSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_OnScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_OnScreenSize_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_HoleFilling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_HoleFilling_MetaData[] = {
		{ "Category", "RemeshingSettings" },
		{ "ModuleRelativePath", "Public/RemeshingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_HoleFilling = { "HoleFilling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemeshingSettings, HoleFilling), Z_Construct_UEnum_SimplygonUObjects_EHoleFilling, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_HoleFilling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_HoleFilling_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_RemeshingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_RemeshingMode_MetaData[] = {
		{ "Category", "RemeshingSettings" },
		{ "ModuleRelativePath", "Public/RemeshingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_RemeshingMode = { "RemeshingMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemeshingSettings, RemeshingMode), Z_Construct_UEnum_SimplygonUObjects_ERemeshingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_RemeshingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_RemeshingMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_SurfaceTransferMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_SurfaceTransferMode_MetaData[] = {
		{ "Category", "RemeshingSettings" },
		{ "ModuleRelativePath", "Public/RemeshingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_SurfaceTransferMode = { "SurfaceTransferMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemeshingSettings, SurfaceTransferMode), Z_Construct_UEnum_SimplygonUObjects_ESurfaceTransferMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_SurfaceTransferMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_SurfaceTransferMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_HardEdgeAngle_MetaData[] = {
		{ "Category", "RemeshingSettings" },
		{ "ModuleRelativePath", "Public/RemeshingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_HardEdgeAngle = { "HardEdgeAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemeshingSettings, HardEdgeAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_HardEdgeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_HardEdgeAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_TransferNormals_MetaData[] = {
		{ "Category", "RemeshingSettings" },
		{ "ModuleRelativePath", "Public/RemeshingSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_TransferNormals_SetBit(void* Obj)
	{
		((FRemeshingSettings*)Obj)->TransferNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_TransferNormals = { "TransferNormals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRemeshingSettings), &Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_TransferNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_TransferNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_TransferNormals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_TransferColors_MetaData[] = {
		{ "Category", "RemeshingSettings" },
		{ "ModuleRelativePath", "Public/RemeshingSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_TransferColors_SetBit(void* Obj)
	{
		((FRemeshingSettings*)Obj)->TransferColors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_TransferColors = { "TransferColors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRemeshingSettings), &Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_TransferColors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_TransferColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_TransferColors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_PopulateAttributeTessellationDisplacement_MetaData[] = {
		{ "Category", "RemeshingSettings" },
		{ "ModuleRelativePath", "Public/RemeshingSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_PopulateAttributeTessellationDisplacement_SetBit(void* Obj)
	{
		((FRemeshingSettings*)Obj)->PopulateAttributeTessellationDisplacement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_PopulateAttributeTessellationDisplacement = { "PopulateAttributeTessellationDisplacement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRemeshingSettings), &Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_PopulateAttributeTessellationDisplacement_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_PopulateAttributeTessellationDisplacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_PopulateAttributeTessellationDisplacement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_GeometricalAccuracy_MetaData[] = {
		{ "Category", "RemeshingSettings" },
		{ "ModuleRelativePath", "Public/RemeshingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_GeometricalAccuracy = { "GeometricalAccuracy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemeshingSettings, GeometricalAccuracy), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_GeometricalAccuracy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_GeometricalAccuracy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_TopologicalAccuracy_MetaData[] = {
		{ "Category", "RemeshingSettings" },
		{ "ModuleRelativePath", "Public/RemeshingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_TopologicalAccuracy = { "TopologicalAccuracy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemeshingSettings, TopologicalAccuracy), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_TopologicalAccuracy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_TopologicalAccuracy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_RemeshingModeManualPositionX_MetaData[] = {
		{ "Category", "RemeshingSettings" },
		{ "ModuleRelativePath", "Public/RemeshingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_RemeshingModeManualPositionX = { "RemeshingModeManualPositionX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemeshingSettings, RemeshingModeManualPositionX), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_RemeshingModeManualPositionX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_RemeshingModeManualPositionX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_RemeshingModeManualPositionY_MetaData[] = {
		{ "Category", "RemeshingSettings" },
		{ "ModuleRelativePath", "Public/RemeshingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_RemeshingModeManualPositionY = { "RemeshingModeManualPositionY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemeshingSettings, RemeshingModeManualPositionY), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_RemeshingModeManualPositionY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_RemeshingModeManualPositionY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_RemeshingModeManualPositionZ_MetaData[] = {
		{ "Category", "RemeshingSettings" },
		{ "ModuleRelativePath", "Public/RemeshingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_RemeshingModeManualPositionZ = { "RemeshingModeManualPositionZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemeshingSettings, RemeshingModeManualPositionZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_RemeshingModeManualPositionZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_RemeshingModeManualPositionZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_ProcessSelectionSetName_MetaData[] = {
		{ "Category", "RemeshingSettings" },
		{ "ModuleRelativePath", "Public/RemeshingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_ProcessSelectionSetName = { "ProcessSelectionSetName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemeshingSettings, ProcessSelectionSetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_ProcessSelectionSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_ProcessSelectionSetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_ProcessSelectionSetID_MetaData[] = {
		{ "Category", "RemeshingSettings" },
		{ "ModuleRelativePath", "Public/RemeshingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_ProcessSelectionSetID = { "ProcessSelectionSetID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemeshingSettings, ProcessSelectionSetID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_ProcessSelectionSetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_ProcessSelectionSetID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_KeepUnprocessedSceneMeshes_MetaData[] = {
		{ "Category", "RemeshingSettings" },
		{ "ModuleRelativePath", "Public/RemeshingSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_KeepUnprocessedSceneMeshes_SetBit(void* Obj)
	{
		((FRemeshingSettings*)Obj)->KeepUnprocessedSceneMeshes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_KeepUnprocessedSceneMeshes = { "KeepUnprocessedSceneMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRemeshingSettings), &Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_KeepUnprocessedSceneMeshes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_KeepUnprocessedSceneMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_KeepUnprocessedSceneMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_ForceSoftEdgesWithinTextureCharts_MetaData[] = {
		{ "Category", "RemeshingSettings" },
		{ "ModuleRelativePath", "Public/RemeshingSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_ForceSoftEdgesWithinTextureCharts_SetBit(void* Obj)
	{
		((FRemeshingSettings*)Obj)->ForceSoftEdgesWithinTextureCharts = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_ForceSoftEdgesWithinTextureCharts = { "ForceSoftEdgesWithinTextureCharts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRemeshingSettings), &Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_ForceSoftEdgesWithinTextureCharts_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_ForceSoftEdgesWithinTextureCharts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_ForceSoftEdgesWithinTextureCharts_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemeshingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_OnScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_HoleFilling_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_HoleFilling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_RemeshingMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_RemeshingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_SurfaceTransferMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_SurfaceTransferMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_HardEdgeAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_TransferNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_TransferColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_PopulateAttributeTessellationDisplacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_GeometricalAccuracy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_TopologicalAccuracy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_RemeshingModeManualPositionX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_RemeshingModeManualPositionY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_RemeshingModeManualPositionZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_ProcessSelectionSetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_ProcessSelectionSetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_KeepUnprocessedSceneMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingSettings_Statics::NewProp_ForceSoftEdgesWithinTextureCharts,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemeshingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		nullptr,
		&NewStructOps,
		"RemeshingSettings",
		sizeof(FRemeshingSettings),
		alignof(FRemeshingSettings),
		Z_Construct_UScriptStruct_FRemeshingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemeshingSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRemeshingSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RemeshingSettings"), sizeof(FRemeshingSettings), Get_Z_Construct_UScriptStruct_FRemeshingSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRemeshingSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRemeshingSettings_Hash() { return 2207952441U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
