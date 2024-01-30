// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/BoneSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoneSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EBoneReductionTargetStopCondition();
// End Cross Module References
class UScriptStruct* FBoneSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FBoneSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("BoneSettings"), sizeof(FBoneSettings), Get_Z_Construct_UScriptStruct_FBoneSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FBoneSettings>()
{
	return FBoneSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoneSettings(FBoneSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("BoneSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFBoneSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFBoneSettings()
	{
		UScriptStruct::DeferCppStructOps<FBoneSettings>(FName(TEXT("BoneSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFBoneSettings;
	struct Z_Construct_UScriptStruct_FBoneSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseBoneReducer_MetaData[];
#endif
		static void NewProp_UseBoneReducer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseBoneReducer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveUnusedBones_MetaData[];
#endif
		static void NewProp_RemoveUnusedBones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RemoveUnusedBones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitBonesPerVertex_MetaData[];
#endif
		static void NewProp_LimitBonesPerVertex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LimitBonesPerVertex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBonePerVertex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxBonePerVertex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneReductionTargetBoneRatioEnabled_MetaData[];
#endif
		static void NewProp_BoneReductionTargetBoneRatioEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoneReductionTargetBoneRatioEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneReductionTargetBoneRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoneReductionTargetBoneRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneReductionTargetBoneCountEnabled_MetaData[];
#endif
		static void NewProp_BoneReductionTargetBoneCountEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoneReductionTargetBoneCountEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneReductionTargetBoneCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneReductionTargetBoneCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneReductionTargetMaxDeviationEnabled_MetaData[];
#endif
		static void NewProp_BoneReductionTargetMaxDeviationEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoneReductionTargetMaxDeviationEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneReductionTargetMaxDeviation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoneReductionTargetMaxDeviation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneReductionTargetOnScreenSizeEnabled_MetaData[];
#endif
		static void NewProp_BoneReductionTargetOnScreenSizeEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoneReductionTargetOnScreenSizeEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneReductionTargetOnScreenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneReductionTargetOnScreenSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneReductionTargetStopCondition_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneReductionTargetStopCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoneReductionTargetStopCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockBoneSelectionSetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LockBoneSelectionSetID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockBoneSelectionSetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LockBoneSelectionSetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveBoneSelectionSetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemoveBoneSelectionSetID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveBoneSelectionSetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RemoveBoneSelectionSetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_UseBoneReducer_MetaData[] = {
		{ "Category", "BoneSettings" },
		{ "ModuleRelativePath", "Public/BoneSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_UseBoneReducer_SetBit(void* Obj)
	{
		((FBoneSettings*)Obj)->UseBoneReducer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_UseBoneReducer = { "UseBoneReducer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBoneSettings), &Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_UseBoneReducer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_UseBoneReducer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_UseBoneReducer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_RemoveUnusedBones_MetaData[] = {
		{ "Category", "BoneSettings" },
		{ "ModuleRelativePath", "Public/BoneSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_RemoveUnusedBones_SetBit(void* Obj)
	{
		((FBoneSettings*)Obj)->RemoveUnusedBones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_RemoveUnusedBones = { "RemoveUnusedBones", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBoneSettings), &Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_RemoveUnusedBones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_RemoveUnusedBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_RemoveUnusedBones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_LimitBonesPerVertex_MetaData[] = {
		{ "Category", "BoneSettings" },
		{ "ModuleRelativePath", "Public/BoneSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_LimitBonesPerVertex_SetBit(void* Obj)
	{
		((FBoneSettings*)Obj)->LimitBonesPerVertex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_LimitBonesPerVertex = { "LimitBonesPerVertex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBoneSettings), &Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_LimitBonesPerVertex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_LimitBonesPerVertex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_LimitBonesPerVertex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_MaxBonePerVertex_MetaData[] = {
		{ "Category", "BoneSettings" },
		{ "ModuleRelativePath", "Public/BoneSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_MaxBonePerVertex = { "MaxBonePerVertex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneSettings, MaxBonePerVertex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_MaxBonePerVertex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_MaxBonePerVertex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetBoneRatioEnabled_MetaData[] = {
		{ "Category", "BoneSettings" },
		{ "ModuleRelativePath", "Public/BoneSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetBoneRatioEnabled_SetBit(void* Obj)
	{
		((FBoneSettings*)Obj)->BoneReductionTargetBoneRatioEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetBoneRatioEnabled = { "BoneReductionTargetBoneRatioEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBoneSettings), &Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetBoneRatioEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetBoneRatioEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetBoneRatioEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetBoneRatio_MetaData[] = {
		{ "Category", "BoneSettings" },
		{ "ModuleRelativePath", "Public/BoneSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetBoneRatio = { "BoneReductionTargetBoneRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneSettings, BoneReductionTargetBoneRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetBoneRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetBoneRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetBoneCountEnabled_MetaData[] = {
		{ "Category", "BoneSettings" },
		{ "ModuleRelativePath", "Public/BoneSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetBoneCountEnabled_SetBit(void* Obj)
	{
		((FBoneSettings*)Obj)->BoneReductionTargetBoneCountEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetBoneCountEnabled = { "BoneReductionTargetBoneCountEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBoneSettings), &Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetBoneCountEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetBoneCountEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetBoneCountEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetBoneCount_MetaData[] = {
		{ "Category", "BoneSettings" },
		{ "ModuleRelativePath", "Public/BoneSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetBoneCount = { "BoneReductionTargetBoneCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneSettings, BoneReductionTargetBoneCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetBoneCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetBoneCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetMaxDeviationEnabled_MetaData[] = {
		{ "Category", "BoneSettings" },
		{ "ModuleRelativePath", "Public/BoneSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetMaxDeviationEnabled_SetBit(void* Obj)
	{
		((FBoneSettings*)Obj)->BoneReductionTargetMaxDeviationEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetMaxDeviationEnabled = { "BoneReductionTargetMaxDeviationEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBoneSettings), &Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetMaxDeviationEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetMaxDeviationEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetMaxDeviationEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetMaxDeviation_MetaData[] = {
		{ "Category", "BoneSettings" },
		{ "ModuleRelativePath", "Public/BoneSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetMaxDeviation = { "BoneReductionTargetMaxDeviation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneSettings, BoneReductionTargetMaxDeviation), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetMaxDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetMaxDeviation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetOnScreenSizeEnabled_MetaData[] = {
		{ "Category", "BoneSettings" },
		{ "ModuleRelativePath", "Public/BoneSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetOnScreenSizeEnabled_SetBit(void* Obj)
	{
		((FBoneSettings*)Obj)->BoneReductionTargetOnScreenSizeEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetOnScreenSizeEnabled = { "BoneReductionTargetOnScreenSizeEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBoneSettings), &Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetOnScreenSizeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetOnScreenSizeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetOnScreenSizeEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetOnScreenSize_MetaData[] = {
		{ "Category", "BoneSettings" },
		{ "ModuleRelativePath", "Public/BoneSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetOnScreenSize = { "BoneReductionTargetOnScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneSettings, BoneReductionTargetOnScreenSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetOnScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetOnScreenSize_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetStopCondition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetStopCondition_MetaData[] = {
		{ "Category", "BoneSettings" },
		{ "ModuleRelativePath", "Public/BoneSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetStopCondition = { "BoneReductionTargetStopCondition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneSettings, BoneReductionTargetStopCondition), Z_Construct_UEnum_SimplygonUObjects_EBoneReductionTargetStopCondition, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetStopCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetStopCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_LockBoneSelectionSetID_MetaData[] = {
		{ "Category", "BoneSettings" },
		{ "ModuleRelativePath", "Public/BoneSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_LockBoneSelectionSetID = { "LockBoneSelectionSetID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneSettings, LockBoneSelectionSetID), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_LockBoneSelectionSetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_LockBoneSelectionSetID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_LockBoneSelectionSetName_MetaData[] = {
		{ "Category", "BoneSettings" },
		{ "ModuleRelativePath", "Public/BoneSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_LockBoneSelectionSetName = { "LockBoneSelectionSetName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneSettings, LockBoneSelectionSetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_LockBoneSelectionSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_LockBoneSelectionSetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_RemoveBoneSelectionSetID_MetaData[] = {
		{ "Category", "BoneSettings" },
		{ "ModuleRelativePath", "Public/BoneSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_RemoveBoneSelectionSetID = { "RemoveBoneSelectionSetID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneSettings, RemoveBoneSelectionSetID), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_RemoveBoneSelectionSetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_RemoveBoneSelectionSetID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_RemoveBoneSelectionSetName_MetaData[] = {
		{ "Category", "BoneSettings" },
		{ "ModuleRelativePath", "Public/BoneSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_RemoveBoneSelectionSetName = { "RemoveBoneSelectionSetName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneSettings, RemoveBoneSelectionSetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_RemoveBoneSelectionSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_RemoveBoneSelectionSetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_UseBoneReducer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_RemoveUnusedBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_LimitBonesPerVertex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_MaxBonePerVertex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetBoneRatioEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetBoneRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetBoneCountEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetBoneCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetMaxDeviationEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetMaxDeviation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetOnScreenSizeEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetOnScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetStopCondition_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_BoneReductionTargetStopCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_LockBoneSelectionSetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_LockBoneSelectionSetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_RemoveBoneSelectionSetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSettings_Statics::NewProp_RemoveBoneSelectionSetName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		nullptr,
		&NewStructOps,
		"BoneSettings",
		sizeof(FBoneSettings),
		alignof(FBoneSettings),
		Z_Construct_UScriptStruct_FBoneSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoneSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoneSettings"), sizeof(FBoneSettings), Get_Z_Construct_UScriptStruct_FBoneSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBoneSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoneSettings_Hash() { return 412354386U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
