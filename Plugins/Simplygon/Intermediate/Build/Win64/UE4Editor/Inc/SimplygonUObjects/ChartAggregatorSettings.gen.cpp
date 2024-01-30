// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/ChartAggregatorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChartAggregatorSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FChartAggregatorSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EChartAggregatorMode();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_ESurfaceAreaScale();
// End Cross Module References
class UScriptStruct* FChartAggregatorSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FChartAggregatorSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChartAggregatorSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("ChartAggregatorSettings"), sizeof(FChartAggregatorSettings), Get_Z_Construct_UScriptStruct_FChartAggregatorSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FChartAggregatorSettings>()
{
	return FChartAggregatorSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChartAggregatorSettings(FChartAggregatorSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("ChartAggregatorSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFChartAggregatorSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFChartAggregatorSettings()
	{
		UScriptStruct::DeferCppStructOps<FChartAggregatorSettings>(FName(TEXT("ChartAggregatorSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFChartAggregatorSettings;
	struct Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChartAggregatorMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChartAggregatorMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChartAggregatorMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SurfaceAreaScale_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceAreaScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SurfaceAreaScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalTexCoordLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OriginalTexCoordLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalTexCoordName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OriginalTexCoordName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeparateOverlappingCharts_MetaData[];
#endif
		static void NewProp_SeparateOverlappingCharts_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SeparateOverlappingCharts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalChartProportionsChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OriginalChartProportionsChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockUVRotation_MetaData[];
#endif
		static void NewProp_LockUVRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LockUVRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChartAggregatorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChartAggregatorSettings>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_ChartAggregatorMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_ChartAggregatorMode_MetaData[] = {
		{ "Category", "ChartAggregatorSettings" },
		{ "ModuleRelativePath", "Public/ChartAggregatorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_ChartAggregatorMode = { "ChartAggregatorMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChartAggregatorSettings, ChartAggregatorMode), Z_Construct_UEnum_SimplygonUObjects_EChartAggregatorMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_ChartAggregatorMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_ChartAggregatorMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_SurfaceAreaScale_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_SurfaceAreaScale_MetaData[] = {
		{ "Category", "ChartAggregatorSettings" },
		{ "ModuleRelativePath", "Public/ChartAggregatorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_SurfaceAreaScale = { "SurfaceAreaScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChartAggregatorSettings, SurfaceAreaScale), Z_Construct_UEnum_SimplygonUObjects_ESurfaceAreaScale, METADATA_PARAMS(Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_SurfaceAreaScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_SurfaceAreaScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_OriginalTexCoordLevel_MetaData[] = {
		{ "Category", "ChartAggregatorSettings" },
		{ "ModuleRelativePath", "Public/ChartAggregatorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_OriginalTexCoordLevel = { "OriginalTexCoordLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChartAggregatorSettings, OriginalTexCoordLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_OriginalTexCoordLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_OriginalTexCoordLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_OriginalTexCoordName_MetaData[] = {
		{ "Category", "ChartAggregatorSettings" },
		{ "ModuleRelativePath", "Public/ChartAggregatorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_OriginalTexCoordName = { "OriginalTexCoordName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChartAggregatorSettings, OriginalTexCoordName), METADATA_PARAMS(Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_OriginalTexCoordName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_OriginalTexCoordName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_SeparateOverlappingCharts_MetaData[] = {
		{ "Category", "ChartAggregatorSettings" },
		{ "ModuleRelativePath", "Public/ChartAggregatorSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_SeparateOverlappingCharts_SetBit(void* Obj)
	{
		((FChartAggregatorSettings*)Obj)->SeparateOverlappingCharts = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_SeparateOverlappingCharts = { "SeparateOverlappingCharts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FChartAggregatorSettings), &Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_SeparateOverlappingCharts_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_SeparateOverlappingCharts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_SeparateOverlappingCharts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_OriginalChartProportionsChannel_MetaData[] = {
		{ "Category", "ChartAggregatorSettings" },
		{ "ModuleRelativePath", "Public/ChartAggregatorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_OriginalChartProportionsChannel = { "OriginalChartProportionsChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChartAggregatorSettings, OriginalChartProportionsChannel), METADATA_PARAMS(Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_OriginalChartProportionsChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_OriginalChartProportionsChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_LockUVRotation_MetaData[] = {
		{ "Category", "ChartAggregatorSettings" },
		{ "ModuleRelativePath", "Public/ChartAggregatorSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_LockUVRotation_SetBit(void* Obj)
	{
		((FChartAggregatorSettings*)Obj)->LockUVRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_LockUVRotation = { "LockUVRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FChartAggregatorSettings), &Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_LockUVRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_LockUVRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_LockUVRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_ChartAggregatorMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_ChartAggregatorMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_SurfaceAreaScale_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_SurfaceAreaScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_OriginalTexCoordLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_OriginalTexCoordName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_SeparateOverlappingCharts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_OriginalChartProportionsChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::NewProp_LockUVRotation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		nullptr,
		&NewStructOps,
		"ChartAggregatorSettings",
		sizeof(FChartAggregatorSettings),
		alignof(FChartAggregatorSettings),
		Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChartAggregatorSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChartAggregatorSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChartAggregatorSettings"), sizeof(FChartAggregatorSettings), Get_Z_Construct_UScriptStruct_FChartAggregatorSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChartAggregatorSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChartAggregatorSettings_Hash() { return 3329528904U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
