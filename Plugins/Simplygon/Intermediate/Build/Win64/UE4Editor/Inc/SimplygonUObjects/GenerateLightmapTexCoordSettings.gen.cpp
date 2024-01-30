// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/GenerateLightmapTexCoordSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateLightmapTexCoordSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EChartAggregatorMode();
// End Cross Module References
class UScriptStruct* FGenerateLightmapTexCoordSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("GenerateLightmapTexCoordSettings"), sizeof(FGenerateLightmapTexCoordSettings), Get_Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FGenerateLightmapTexCoordSettings>()
{
	return FGenerateLightmapTexCoordSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGenerateLightmapTexCoordSettings(FGenerateLightmapTexCoordSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("GenerateLightmapTexCoordSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFGenerateLightmapTexCoordSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFGenerateLightmapTexCoordSettings()
	{
		UScriptStruct::DeferCppStructOps<FGenerateLightmapTexCoordSettings>(FName(TEXT("GenerateLightmapTexCoordSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFGenerateLightmapTexCoordSettings;
	struct Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerateLightmapTexCoord_MetaData[];
#endif
		static void NewProp_GenerateLightmapTexCoord_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GenerateLightmapTexCoord;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmapTexCoordLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightmapTexCoordLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmapTexCoordName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LightmapTexCoordName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChartAggregatorMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChartAggregatorMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChartAggregatorMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GutterSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GutterSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GenerateLightmapTexCoordSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenerateLightmapTexCoordSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_GenerateLightmapTexCoord_MetaData[] = {
		{ "Category", "GenerateLightmapTexCoordSettings" },
		{ "ModuleRelativePath", "Public/GenerateLightmapTexCoordSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_GenerateLightmapTexCoord_SetBit(void* Obj)
	{
		((FGenerateLightmapTexCoordSettings*)Obj)->GenerateLightmapTexCoord = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_GenerateLightmapTexCoord = { "GenerateLightmapTexCoord", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FGenerateLightmapTexCoordSettings), &Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_GenerateLightmapTexCoord_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_GenerateLightmapTexCoord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_GenerateLightmapTexCoord_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_LightmapTexCoordLevel_MetaData[] = {
		{ "Category", "GenerateLightmapTexCoordSettings" },
		{ "ModuleRelativePath", "Public/GenerateLightmapTexCoordSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_LightmapTexCoordLevel = { "LightmapTexCoordLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGenerateLightmapTexCoordSettings, LightmapTexCoordLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_LightmapTexCoordLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_LightmapTexCoordLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_LightmapTexCoordName_MetaData[] = {
		{ "Category", "GenerateLightmapTexCoordSettings" },
		{ "ModuleRelativePath", "Public/GenerateLightmapTexCoordSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_LightmapTexCoordName = { "LightmapTexCoordName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGenerateLightmapTexCoordSettings, LightmapTexCoordName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_LightmapTexCoordName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_LightmapTexCoordName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_ChartAggregatorMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_ChartAggregatorMode_MetaData[] = {
		{ "Category", "GenerateLightmapTexCoordSettings" },
		{ "ModuleRelativePath", "Public/GenerateLightmapTexCoordSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_ChartAggregatorMode = { "ChartAggregatorMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGenerateLightmapTexCoordSettings, ChartAggregatorMode), Z_Construct_UEnum_SimplygonUObjects_EChartAggregatorMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_ChartAggregatorMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_ChartAggregatorMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_TextureWidth_MetaData[] = {
		{ "Category", "GenerateLightmapTexCoordSettings" },
		{ "ModuleRelativePath", "Public/GenerateLightmapTexCoordSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_TextureWidth = { "TextureWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGenerateLightmapTexCoordSettings, TextureWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_TextureWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_TextureWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_TextureHeight_MetaData[] = {
		{ "Category", "GenerateLightmapTexCoordSettings" },
		{ "ModuleRelativePath", "Public/GenerateLightmapTexCoordSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_TextureHeight = { "TextureHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGenerateLightmapTexCoordSettings, TextureHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_TextureHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_TextureHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_GutterSpace_MetaData[] = {
		{ "Category", "GenerateLightmapTexCoordSettings" },
		{ "ModuleRelativePath", "Public/GenerateLightmapTexCoordSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_GutterSpace = { "GutterSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGenerateLightmapTexCoordSettings, GutterSpace), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_GutterSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_GutterSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_GenerateLightmapTexCoord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_LightmapTexCoordLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_LightmapTexCoordName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_ChartAggregatorMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_ChartAggregatorMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_TextureWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_TextureHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::NewProp_GutterSpace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		nullptr,
		&NewStructOps,
		"GenerateLightmapTexCoordSettings",
		sizeof(FGenerateLightmapTexCoordSettings),
		alignof(FGenerateLightmapTexCoordSettings),
		Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GenerateLightmapTexCoordSettings"), sizeof(FGenerateLightmapTexCoordSettings), Get_Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings_Hash() { return 2284792895U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
