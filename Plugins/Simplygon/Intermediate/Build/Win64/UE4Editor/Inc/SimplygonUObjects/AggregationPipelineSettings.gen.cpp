// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/AggregationPipelineSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAggregationPipelineSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FAggregationPipelineSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FSimplygonPipelineSettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FAggregationSettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FVisibilitySettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCullingSettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FVertexWeightSettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeTessellationSettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FMappingImageSettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonMaterialCaster_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAggregationPipelineSettings>() == std::is_polymorphic<FSimplygonPipelineSettings>(), "USTRUCT FAggregationPipelineSettings cannot be polymorphic unless super FSimplygonPipelineSettings is polymorphic");

class UScriptStruct* FAggregationPipelineSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FAggregationPipelineSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAggregationPipelineSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("AggregationPipelineSettings"), sizeof(FAggregationPipelineSettings), Get_Z_Construct_UScriptStruct_FAggregationPipelineSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FAggregationPipelineSettings>()
{
	return FAggregationPipelineSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAggregationPipelineSettings(FAggregationPipelineSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("AggregationPipelineSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFAggregationPipelineSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFAggregationPipelineSettings()
	{
		UScriptStruct::DeferCppStructOps<FAggregationPipelineSettings>(FName(TEXT("AggregationPipelineSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFAggregationPipelineSettings;
	struct Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AggregationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AggregationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilitySettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisibilitySettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryCullingSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeometryCullingSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexWeightSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexWeightSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeTessellationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributeTessellationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MappingImageSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MappingImageSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerateLightmapTexCoordSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GenerateLightmapTexCoordSettings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialPropertyCasters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialPropertyCasters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialPropertyCasters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AggregationPipelineSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAggregationPipelineSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_AggregationSettings_MetaData[] = {
		{ "Category", "AggregationPipelineSettings" },
		{ "ModuleRelativePath", "Public/AggregationPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_AggregationSettings = { "AggregationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregationPipelineSettings, AggregationSettings), Z_Construct_UScriptStruct_FAggregationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_AggregationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_AggregationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_VisibilitySettings_MetaData[] = {
		{ "Category", "AggregationPipelineSettings" },
		{ "ModuleRelativePath", "Public/AggregationPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_VisibilitySettings = { "VisibilitySettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregationPipelineSettings, VisibilitySettings), Z_Construct_UScriptStruct_FVisibilitySettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_VisibilitySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_VisibilitySettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_GeometryCullingSettings_MetaData[] = {
		{ "Category", "AggregationPipelineSettings" },
		{ "ModuleRelativePath", "Public/AggregationPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_GeometryCullingSettings = { "GeometryCullingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregationPipelineSettings, GeometryCullingSettings), Z_Construct_UScriptStruct_FGeometryCullingSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_GeometryCullingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_GeometryCullingSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_VertexWeightSettings_MetaData[] = {
		{ "Category", "AggregationPipelineSettings" },
		{ "ModuleRelativePath", "Public/AggregationPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_VertexWeightSettings = { "VertexWeightSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregationPipelineSettings, VertexWeightSettings), Z_Construct_UScriptStruct_FVertexWeightSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_VertexWeightSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_VertexWeightSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_AttributeTessellationSettings_MetaData[] = {
		{ "Category", "AggregationPipelineSettings" },
		{ "ModuleRelativePath", "Public/AggregationPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_AttributeTessellationSettings = { "AttributeTessellationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregationPipelineSettings, AttributeTessellationSettings), Z_Construct_UScriptStruct_FAttributeTessellationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_AttributeTessellationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_AttributeTessellationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_MappingImageSettings_MetaData[] = {
		{ "Category", "AggregationPipelineSettings" },
		{ "ModuleRelativePath", "Public/AggregationPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_MappingImageSettings = { "MappingImageSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregationPipelineSettings, MappingImageSettings), Z_Construct_UScriptStruct_FMappingImageSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_MappingImageSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_MappingImageSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_GenerateLightmapTexCoordSettings_MetaData[] = {
		{ "Category", "AggregationPipelineSettings" },
		{ "ModuleRelativePath", "Public/AggregationPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_GenerateLightmapTexCoordSettings = { "GenerateLightmapTexCoordSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregationPipelineSettings, GenerateLightmapTexCoordSettings), Z_Construct_UScriptStruct_FGenerateLightmapTexCoordSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_GenerateLightmapTexCoordSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_GenerateLightmapTexCoordSettings_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_MaterialPropertyCasters_Inner = { "MaterialPropertyCasters", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USimplygonMaterialCaster_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_MaterialPropertyCasters_MetaData[] = {
		{ "Category", "AggregationPipelineSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AggregationPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_MaterialPropertyCasters = { "MaterialPropertyCasters", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregationPipelineSettings, MaterialPropertyCasters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_MaterialPropertyCasters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_MaterialPropertyCasters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_AggregationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_VisibilitySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_GeometryCullingSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_VertexWeightSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_AttributeTessellationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_MappingImageSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_GenerateLightmapTexCoordSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_MaterialPropertyCasters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::NewProp_MaterialPropertyCasters,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		Z_Construct_UScriptStruct_FSimplygonPipelineSettings,
		&NewStructOps,
		"AggregationPipelineSettings",
		sizeof(FAggregationPipelineSettings),
		alignof(FAggregationPipelineSettings),
		Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAggregationPipelineSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAggregationPipelineSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AggregationPipelineSettings"), sizeof(FAggregationPipelineSettings), Get_Z_Construct_UScriptStruct_FAggregationPipelineSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAggregationPipelineSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAggregationPipelineSettings_Hash() { return 4285690672U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
