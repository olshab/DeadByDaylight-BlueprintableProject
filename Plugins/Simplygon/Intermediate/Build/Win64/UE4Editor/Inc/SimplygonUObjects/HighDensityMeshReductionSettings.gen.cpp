// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/HighDensityMeshReductionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHighDensityMeshReductionSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EStopCondition();
// End Cross Module References
class UScriptStruct* FHighDensityMeshReductionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("HighDensityMeshReductionSettings"), sizeof(FHighDensityMeshReductionSettings), Get_Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FHighDensityMeshReductionSettings>()
{
	return FHighDensityMeshReductionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHighDensityMeshReductionSettings(FHighDensityMeshReductionSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("HighDensityMeshReductionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFHighDensityMeshReductionSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFHighDensityMeshReductionSettings()
	{
		UScriptStruct::DeferCppStructOps<FHighDensityMeshReductionSettings>(FName(TEXT("HighDensityMeshReductionSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFHighDensityMeshReductionSettings;
	struct Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnScreenSizeEnabled_MetaData[];
#endif
		static void NewProp_OnScreenSizeEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OnScreenSizeEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnScreenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OnScreenSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDeviationEnabled_MetaData[];
#endif
		static void NewProp_MaxDeviationEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MaxDeviationEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDeviation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDeviation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StopCondition_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StopCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessSelectionSetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProcessSelectionSetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HighDensityMeshReductionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHighDensityMeshReductionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_OnScreenSizeEnabled_MetaData[] = {
		{ "Category", "HighDensityMeshReductionSettings" },
		{ "ModuleRelativePath", "Public/HighDensityMeshReductionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_OnScreenSizeEnabled_SetBit(void* Obj)
	{
		((FHighDensityMeshReductionSettings*)Obj)->OnScreenSizeEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_OnScreenSizeEnabled = { "OnScreenSizeEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FHighDensityMeshReductionSettings), &Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_OnScreenSizeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_OnScreenSizeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_OnScreenSizeEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_OnScreenSize_MetaData[] = {
		{ "Category", "HighDensityMeshReductionSettings" },
		{ "ModuleRelativePath", "Public/HighDensityMeshReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_OnScreenSize = { "OnScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHighDensityMeshReductionSettings, OnScreenSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_OnScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_OnScreenSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_MaxDeviationEnabled_MetaData[] = {
		{ "Category", "HighDensityMeshReductionSettings" },
		{ "ModuleRelativePath", "Public/HighDensityMeshReductionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_MaxDeviationEnabled_SetBit(void* Obj)
	{
		((FHighDensityMeshReductionSettings*)Obj)->MaxDeviationEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_MaxDeviationEnabled = { "MaxDeviationEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FHighDensityMeshReductionSettings), &Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_MaxDeviationEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_MaxDeviationEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_MaxDeviationEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_MaxDeviation_MetaData[] = {
		{ "Category", "HighDensityMeshReductionSettings" },
		{ "ModuleRelativePath", "Public/HighDensityMeshReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_MaxDeviation = { "MaxDeviation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHighDensityMeshReductionSettings, MaxDeviation), METADATA_PARAMS(Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_MaxDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_MaxDeviation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_StopCondition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_StopCondition_MetaData[] = {
		{ "Category", "HighDensityMeshReductionSettings" },
		{ "ModuleRelativePath", "Public/HighDensityMeshReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_StopCondition = { "StopCondition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHighDensityMeshReductionSettings, StopCondition), Z_Construct_UEnum_SimplygonUObjects_EStopCondition, METADATA_PARAMS(Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_StopCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_StopCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_ProcessSelectionSetName_MetaData[] = {
		{ "Category", "HighDensityMeshReductionSettings" },
		{ "ModuleRelativePath", "Public/HighDensityMeshReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_ProcessSelectionSetName = { "ProcessSelectionSetName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHighDensityMeshReductionSettings, ProcessSelectionSetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_ProcessSelectionSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_ProcessSelectionSetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_OnScreenSizeEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_OnScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_MaxDeviationEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_MaxDeviation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_StopCondition_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_StopCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::NewProp_ProcessSelectionSetName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		nullptr,
		&NewStructOps,
		"HighDensityMeshReductionSettings",
		sizeof(FHighDensityMeshReductionSettings),
		alignof(FHighDensityMeshReductionSettings),
		Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HighDensityMeshReductionSettings"), sizeof(FHighDensityMeshReductionSettings), Get_Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings_Hash() { return 4063999228U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
