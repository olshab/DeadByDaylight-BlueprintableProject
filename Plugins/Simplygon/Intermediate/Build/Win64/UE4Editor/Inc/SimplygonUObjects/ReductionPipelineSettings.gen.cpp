// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/ReductionPipelineSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReductionPipelineSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FReductionPipelineSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FSimplygonPipelineSettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FReductionSettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FRepairSettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FNormalCalculationSettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FVisibilitySettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FVertexWeightSettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeTessellationSettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FMappingImageSettings();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonMaterialCaster_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FReductionPipelineSettings>() == std::is_polymorphic<FSimplygonPipelineSettings>(), "USTRUCT FReductionPipelineSettings cannot be polymorphic unless super FSimplygonPipelineSettings is polymorphic");

class UScriptStruct* FReductionPipelineSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FReductionPipelineSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReductionPipelineSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("ReductionPipelineSettings"), sizeof(FReductionPipelineSettings), Get_Z_Construct_UScriptStruct_FReductionPipelineSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FReductionPipelineSettings>()
{
	return FReductionPipelineSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReductionPipelineSettings(FReductionPipelineSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("ReductionPipelineSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFReductionPipelineSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFReductionPipelineSettings()
	{
		UScriptStruct::DeferCppStructOps<FReductionPipelineSettings>(FName(TEXT("ReductionPipelineSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFReductionPipelineSettings;
	struct Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReductionSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepairSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RepairSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalCalculationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalCalculationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilitySettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisibilitySettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneSettings;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialPropertyCasters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialPropertyCasters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialPropertyCasters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReductionPipelineSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReductionPipelineSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_ReductionSettings_MetaData[] = {
		{ "Category", "ReductionPipelineSettings" },
		{ "ModuleRelativePath", "Public/ReductionPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_ReductionSettings = { "ReductionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionPipelineSettings, ReductionSettings), Z_Construct_UScriptStruct_FReductionSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_ReductionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_ReductionSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_RepairSettings_MetaData[] = {
		{ "Category", "ReductionPipelineSettings" },
		{ "ModuleRelativePath", "Public/ReductionPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_RepairSettings = { "RepairSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionPipelineSettings, RepairSettings), Z_Construct_UScriptStruct_FRepairSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_RepairSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_RepairSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_NormalCalculationSettings_MetaData[] = {
		{ "Category", "ReductionPipelineSettings" },
		{ "ModuleRelativePath", "Public/ReductionPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_NormalCalculationSettings = { "NormalCalculationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionPipelineSettings, NormalCalculationSettings), Z_Construct_UScriptStruct_FNormalCalculationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_NormalCalculationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_NormalCalculationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_VisibilitySettings_MetaData[] = {
		{ "Category", "ReductionPipelineSettings" },
		{ "ModuleRelativePath", "Public/ReductionPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_VisibilitySettings = { "VisibilitySettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionPipelineSettings, VisibilitySettings), Z_Construct_UScriptStruct_FVisibilitySettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_VisibilitySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_VisibilitySettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_BoneSettings_MetaData[] = {
		{ "Category", "ReductionPipelineSettings" },
		{ "ModuleRelativePath", "Public/ReductionPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_BoneSettings = { "BoneSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionPipelineSettings, BoneSettings), Z_Construct_UScriptStruct_FBoneSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_BoneSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_BoneSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_VertexWeightSettings_MetaData[] = {
		{ "Category", "ReductionPipelineSettings" },
		{ "ModuleRelativePath", "Public/ReductionPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_VertexWeightSettings = { "VertexWeightSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionPipelineSettings, VertexWeightSettings), Z_Construct_UScriptStruct_FVertexWeightSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_VertexWeightSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_VertexWeightSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_AttributeTessellationSettings_MetaData[] = {
		{ "Category", "ReductionPipelineSettings" },
		{ "ModuleRelativePath", "Public/ReductionPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_AttributeTessellationSettings = { "AttributeTessellationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionPipelineSettings, AttributeTessellationSettings), Z_Construct_UScriptStruct_FAttributeTessellationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_AttributeTessellationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_AttributeTessellationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_MappingImageSettings_MetaData[] = {
		{ "Category", "ReductionPipelineSettings" },
		{ "ModuleRelativePath", "Public/ReductionPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_MappingImageSettings = { "MappingImageSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionPipelineSettings, MappingImageSettings), Z_Construct_UScriptStruct_FMappingImageSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_MappingImageSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_MappingImageSettings_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_MaterialPropertyCasters_Inner = { "MaterialPropertyCasters", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USimplygonMaterialCaster_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_MaterialPropertyCasters_MetaData[] = {
		{ "Category", "ReductionPipelineSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ReductionPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_MaterialPropertyCasters = { "MaterialPropertyCasters", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReductionPipelineSettings, MaterialPropertyCasters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_MaterialPropertyCasters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_MaterialPropertyCasters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_ReductionSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_RepairSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_NormalCalculationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_VisibilitySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_BoneSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_VertexWeightSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_AttributeTessellationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_MappingImageSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_MaterialPropertyCasters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::NewProp_MaterialPropertyCasters,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		Z_Construct_UScriptStruct_FSimplygonPipelineSettings,
		&NewStructOps,
		"ReductionPipelineSettings",
		sizeof(FReductionPipelineSettings),
		alignof(FReductionPipelineSettings),
		Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReductionPipelineSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReductionPipelineSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReductionPipelineSettings"), sizeof(FReductionPipelineSettings), Get_Z_Construct_UScriptStruct_FReductionPipelineSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FReductionPipelineSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReductionPipelineSettings_Hash() { return 2384471154U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
