// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/RemeshingPipelineSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemeshingPipelineSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FRemeshingPipelineSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FSimplygonPipelineSettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FRemeshingSettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCullingSettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FVisibilitySettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeTessellationSettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FMappingImageSettings();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonMaterialCaster_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FRemeshingPipelineSettings>() == std::is_polymorphic<FSimplygonPipelineSettings>(), "USTRUCT FRemeshingPipelineSettings cannot be polymorphic unless super FSimplygonPipelineSettings is polymorphic");

class UScriptStruct* FRemeshingPipelineSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemeshingPipelineSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("RemeshingPipelineSettings"), sizeof(FRemeshingPipelineSettings), Get_Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FRemeshingPipelineSettings>()
{
	return FRemeshingPipelineSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRemeshingPipelineSettings(FRemeshingPipelineSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("RemeshingPipelineSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFRemeshingPipelineSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFRemeshingPipelineSettings()
	{
		UScriptStruct::DeferCppStructOps<FRemeshingPipelineSettings>(FName(TEXT("RemeshingPipelineSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFRemeshingPipelineSettings;
	struct Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemeshingSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemeshingSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryCullingSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeometryCullingSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilitySettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisibilitySettings;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RemeshingPipelineSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemeshingPipelineSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_RemeshingSettings_MetaData[] = {
		{ "Category", "RemeshingPipelineSettings" },
		{ "ModuleRelativePath", "Public/RemeshingPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_RemeshingSettings = { "RemeshingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemeshingPipelineSettings, RemeshingSettings), Z_Construct_UScriptStruct_FRemeshingSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_RemeshingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_RemeshingSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_BoneSettings_MetaData[] = {
		{ "Category", "RemeshingPipelineSettings" },
		{ "ModuleRelativePath", "Public/RemeshingPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_BoneSettings = { "BoneSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemeshingPipelineSettings, BoneSettings), Z_Construct_UScriptStruct_FBoneSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_BoneSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_BoneSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_GeometryCullingSettings_MetaData[] = {
		{ "Category", "RemeshingPipelineSettings" },
		{ "ModuleRelativePath", "Public/RemeshingPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_GeometryCullingSettings = { "GeometryCullingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemeshingPipelineSettings, GeometryCullingSettings), Z_Construct_UScriptStruct_FGeometryCullingSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_GeometryCullingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_GeometryCullingSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_VisibilitySettings_MetaData[] = {
		{ "Category", "RemeshingPipelineSettings" },
		{ "ModuleRelativePath", "Public/RemeshingPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_VisibilitySettings = { "VisibilitySettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemeshingPipelineSettings, VisibilitySettings), Z_Construct_UScriptStruct_FVisibilitySettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_VisibilitySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_VisibilitySettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_AttributeTessellationSettings_MetaData[] = {
		{ "Category", "RemeshingPipelineSettings" },
		{ "ModuleRelativePath", "Public/RemeshingPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_AttributeTessellationSettings = { "AttributeTessellationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemeshingPipelineSettings, AttributeTessellationSettings), Z_Construct_UScriptStruct_FAttributeTessellationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_AttributeTessellationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_AttributeTessellationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_MappingImageSettings_MetaData[] = {
		{ "Category", "RemeshingPipelineSettings" },
		{ "ModuleRelativePath", "Public/RemeshingPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_MappingImageSettings = { "MappingImageSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemeshingPipelineSettings, MappingImageSettings), Z_Construct_UScriptStruct_FMappingImageSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_MappingImageSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_MappingImageSettings_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_MaterialPropertyCasters_Inner = { "MaterialPropertyCasters", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USimplygonMaterialCaster_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_MaterialPropertyCasters_MetaData[] = {
		{ "Category", "RemeshingPipelineSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RemeshingPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_MaterialPropertyCasters = { "MaterialPropertyCasters", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemeshingPipelineSettings, MaterialPropertyCasters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_MaterialPropertyCasters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_MaterialPropertyCasters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_RemeshingSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_BoneSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_GeometryCullingSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_VisibilitySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_AttributeTessellationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_MappingImageSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_MaterialPropertyCasters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::NewProp_MaterialPropertyCasters,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		Z_Construct_UScriptStruct_FSimplygonPipelineSettings,
		&NewStructOps,
		"RemeshingPipelineSettings",
		sizeof(FRemeshingPipelineSettings),
		alignof(FRemeshingPipelineSettings),
		Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemeshingPipelineSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RemeshingPipelineSettings"), sizeof(FRemeshingPipelineSettings), Get_Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRemeshingPipelineSettings_Hash() { return 3928929610U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
