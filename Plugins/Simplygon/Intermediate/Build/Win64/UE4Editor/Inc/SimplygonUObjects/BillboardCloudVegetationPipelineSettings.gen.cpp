// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/BillboardCloudVegetationPipelineSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBillboardCloudVegetationPipelineSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FSimplygonPipelineSettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FBillboardCloudSettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeTessellationSettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FMappingImageSettings();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonMaterialCaster_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FBillboardCloudVegetationPipelineSettings>() == std::is_polymorphic<FSimplygonPipelineSettings>(), "USTRUCT FBillboardCloudVegetationPipelineSettings cannot be polymorphic unless super FSimplygonPipelineSettings is polymorphic");

class UScriptStruct* FBillboardCloudVegetationPipelineSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("BillboardCloudVegetationPipelineSettings"), sizeof(FBillboardCloudVegetationPipelineSettings), Get_Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FBillboardCloudVegetationPipelineSettings>()
{
	return FBillboardCloudVegetationPipelineSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBillboardCloudVegetationPipelineSettings(FBillboardCloudVegetationPipelineSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("BillboardCloudVegetationPipelineSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFBillboardCloudVegetationPipelineSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFBillboardCloudVegetationPipelineSettings()
	{
		UScriptStruct::DeferCppStructOps<FBillboardCloudVegetationPipelineSettings>(FName(TEXT("BillboardCloudVegetationPipelineSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFBillboardCloudVegetationPipelineSettings;
	struct Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BillboardCloudSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BillboardCloudSettings;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BillboardCloudVegetationPipelineSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBillboardCloudVegetationPipelineSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::NewProp_BillboardCloudSettings_MetaData[] = {
		{ "Category", "BillboardCloudVegetationPipelineSettings" },
		{ "ModuleRelativePath", "Public/BillboardCloudVegetationPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::NewProp_BillboardCloudSettings = { "BillboardCloudSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBillboardCloudVegetationPipelineSettings, BillboardCloudSettings), Z_Construct_UScriptStruct_FBillboardCloudSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::NewProp_BillboardCloudSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::NewProp_BillboardCloudSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::NewProp_AttributeTessellationSettings_MetaData[] = {
		{ "Category", "BillboardCloudVegetationPipelineSettings" },
		{ "ModuleRelativePath", "Public/BillboardCloudVegetationPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::NewProp_AttributeTessellationSettings = { "AttributeTessellationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBillboardCloudVegetationPipelineSettings, AttributeTessellationSettings), Z_Construct_UScriptStruct_FAttributeTessellationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::NewProp_AttributeTessellationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::NewProp_AttributeTessellationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::NewProp_MappingImageSettings_MetaData[] = {
		{ "Category", "BillboardCloudVegetationPipelineSettings" },
		{ "ModuleRelativePath", "Public/BillboardCloudVegetationPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::NewProp_MappingImageSettings = { "MappingImageSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBillboardCloudVegetationPipelineSettings, MappingImageSettings), Z_Construct_UScriptStruct_FMappingImageSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::NewProp_MappingImageSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::NewProp_MappingImageSettings_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::NewProp_MaterialPropertyCasters_Inner = { "MaterialPropertyCasters", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USimplygonMaterialCaster_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::NewProp_MaterialPropertyCasters_MetaData[] = {
		{ "Category", "BillboardCloudVegetationPipelineSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BillboardCloudVegetationPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::NewProp_MaterialPropertyCasters = { "MaterialPropertyCasters", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBillboardCloudVegetationPipelineSettings, MaterialPropertyCasters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::NewProp_MaterialPropertyCasters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::NewProp_MaterialPropertyCasters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::NewProp_BillboardCloudSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::NewProp_AttributeTessellationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::NewProp_MappingImageSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::NewProp_MaterialPropertyCasters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::NewProp_MaterialPropertyCasters,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		Z_Construct_UScriptStruct_FSimplygonPipelineSettings,
		&NewStructOps,
		"BillboardCloudVegetationPipelineSettings",
		sizeof(FBillboardCloudVegetationPipelineSettings),
		alignof(FBillboardCloudVegetationPipelineSettings),
		Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BillboardCloudVegetationPipelineSettings"), sizeof(FBillboardCloudVegetationPipelineSettings), Get_Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBillboardCloudVegetationPipelineSettings_Hash() { return 1262328683U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
