// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/MappingImageSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMappingImageSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FMappingImageSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_ETexCoordGeneratorType();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FChartAggregatorSettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FParameterizerSettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FInputMaterialSettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FOutputMaterialSettings();
// End Cross Module References
class UScriptStruct* FMappingImageSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FMappingImageSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMappingImageSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("MappingImageSettings"), sizeof(FMappingImageSettings), Get_Z_Construct_UScriptStruct_FMappingImageSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FMappingImageSettings>()
{
	return FMappingImageSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMappingImageSettings(FMappingImageSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("MappingImageSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFMappingImageSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFMappingImageSettings()
	{
		UScriptStruct::DeferCppStructOps<FMappingImageSettings>(FName(TEXT("MappingImageSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFMappingImageSettings;
	struct Z_Construct_UScriptStruct_FMappingImageSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerateMappingImage_MetaData[];
#endif
		static void NewProp_GenerateMappingImage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GenerateMappingImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerateTexCoords_MetaData[];
#endif
		static void NewProp_GenerateTexCoords_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GenerateTexCoords;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerateTangents_MetaData[];
#endif
		static void NewProp_GenerateTangents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GenerateTangents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplaceMappingImages_MetaData[];
#endif
		static void NewProp_ReplaceMappingImages_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReplaceMappingImages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseFullRetexturing_MetaData[];
#endif
		static void NewProp_UseFullRetexturing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseFullRetexturing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyNewMaterialIds_MetaData[];
#endif
		static void NewProp_ApplyNewMaterialIds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ApplyNewMaterialIds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAutomaticTextureSize_MetaData[];
#endif
		static void NewProp_UseAutomaticTextureSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAutomaticTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutomaticTextureSizeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutomaticTextureSizeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcePower2Texture_MetaData[];
#endif
		static void NewProp_ForcePower2Texture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForcePower2Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlyParameterizeInvalidUVs_MetaData[];
#endif
		static void NewProp_OnlyParameterizeInvalidUVs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OnlyParameterizeInvalidUVs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowTransparencyMapping_MetaData[];
#endif
		static void NewProp_AllowTransparencyMapping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowTransparencyMapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumLayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumLayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexCoordLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TexCoordLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexCoordName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TexCoordName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TexCoordGeneratorType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexCoordGeneratorType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TexCoordGeneratorType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputMaterialCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutputMaterialCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputMaterialCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InputMaterialCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChartAggregatorSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChartAggregatorSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterizerSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterizerSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputMaterialSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputMaterialSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputMaterialSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutputMaterialSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputMaterialSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutputMaterialSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingImageSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MappingImageSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMappingImageSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_GenerateMappingImage_MetaData[] = {
		{ "Category", "MappingImageSettings" },
		{ "ModuleRelativePath", "Public/MappingImageSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_GenerateMappingImage_SetBit(void* Obj)
	{
		((FMappingImageSettings*)Obj)->GenerateMappingImage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_GenerateMappingImage = { "GenerateMappingImage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMappingImageSettings), &Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_GenerateMappingImage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_GenerateMappingImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_GenerateMappingImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_GenerateTexCoords_MetaData[] = {
		{ "Category", "MappingImageSettings" },
		{ "ModuleRelativePath", "Public/MappingImageSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_GenerateTexCoords_SetBit(void* Obj)
	{
		((FMappingImageSettings*)Obj)->GenerateTexCoords = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_GenerateTexCoords = { "GenerateTexCoords", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMappingImageSettings), &Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_GenerateTexCoords_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_GenerateTexCoords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_GenerateTexCoords_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_GenerateTangents_MetaData[] = {
		{ "Category", "MappingImageSettings" },
		{ "ModuleRelativePath", "Public/MappingImageSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_GenerateTangents_SetBit(void* Obj)
	{
		((FMappingImageSettings*)Obj)->GenerateTangents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_GenerateTangents = { "GenerateTangents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMappingImageSettings), &Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_GenerateTangents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_GenerateTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_GenerateTangents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ReplaceMappingImages_MetaData[] = {
		{ "Category", "MappingImageSettings" },
		{ "ModuleRelativePath", "Public/MappingImageSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ReplaceMappingImages_SetBit(void* Obj)
	{
		((FMappingImageSettings*)Obj)->ReplaceMappingImages = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ReplaceMappingImages = { "ReplaceMappingImages", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMappingImageSettings), &Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ReplaceMappingImages_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ReplaceMappingImages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ReplaceMappingImages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_UseFullRetexturing_MetaData[] = {
		{ "Category", "MappingImageSettings" },
		{ "ModuleRelativePath", "Public/MappingImageSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_UseFullRetexturing_SetBit(void* Obj)
	{
		((FMappingImageSettings*)Obj)->UseFullRetexturing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_UseFullRetexturing = { "UseFullRetexturing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMappingImageSettings), &Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_UseFullRetexturing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_UseFullRetexturing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_UseFullRetexturing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ApplyNewMaterialIds_MetaData[] = {
		{ "Category", "MappingImageSettings" },
		{ "ModuleRelativePath", "Public/MappingImageSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ApplyNewMaterialIds_SetBit(void* Obj)
	{
		((FMappingImageSettings*)Obj)->ApplyNewMaterialIds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ApplyNewMaterialIds = { "ApplyNewMaterialIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMappingImageSettings), &Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ApplyNewMaterialIds_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ApplyNewMaterialIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ApplyNewMaterialIds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_UseAutomaticTextureSize_MetaData[] = {
		{ "Category", "MappingImageSettings" },
		{ "ModuleRelativePath", "Public/MappingImageSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_UseAutomaticTextureSize_SetBit(void* Obj)
	{
		((FMappingImageSettings*)Obj)->UseAutomaticTextureSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_UseAutomaticTextureSize = { "UseAutomaticTextureSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMappingImageSettings), &Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_UseAutomaticTextureSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_UseAutomaticTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_UseAutomaticTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_AutomaticTextureSizeMultiplier_MetaData[] = {
		{ "Category", "MappingImageSettings" },
		{ "ModuleRelativePath", "Public/MappingImageSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_AutomaticTextureSizeMultiplier = { "AutomaticTextureSizeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMappingImageSettings, AutomaticTextureSizeMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_AutomaticTextureSizeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_AutomaticTextureSizeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ForcePower2Texture_MetaData[] = {
		{ "Category", "MappingImageSettings" },
		{ "ModuleRelativePath", "Public/MappingImageSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ForcePower2Texture_SetBit(void* Obj)
	{
		((FMappingImageSettings*)Obj)->ForcePower2Texture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ForcePower2Texture = { "ForcePower2Texture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMappingImageSettings), &Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ForcePower2Texture_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ForcePower2Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ForcePower2Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_OnlyParameterizeInvalidUVs_MetaData[] = {
		{ "Category", "MappingImageSettings" },
		{ "ModuleRelativePath", "Public/MappingImageSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_OnlyParameterizeInvalidUVs_SetBit(void* Obj)
	{
		((FMappingImageSettings*)Obj)->OnlyParameterizeInvalidUVs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_OnlyParameterizeInvalidUVs = { "OnlyParameterizeInvalidUVs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMappingImageSettings), &Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_OnlyParameterizeInvalidUVs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_OnlyParameterizeInvalidUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_OnlyParameterizeInvalidUVs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_AllowTransparencyMapping_MetaData[] = {
		{ "Category", "MappingImageSettings" },
		{ "ModuleRelativePath", "Public/MappingImageSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_AllowTransparencyMapping_SetBit(void* Obj)
	{
		((FMappingImageSettings*)Obj)->AllowTransparencyMapping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_AllowTransparencyMapping = { "AllowTransparencyMapping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMappingImageSettings), &Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_AllowTransparencyMapping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_AllowTransparencyMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_AllowTransparencyMapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_MaximumLayers_MetaData[] = {
		{ "Category", "MappingImageSettings" },
		{ "ModuleRelativePath", "Public/MappingImageSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_MaximumLayers = { "MaximumLayers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMappingImageSettings, MaximumLayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_MaximumLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_MaximumLayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_TexCoordLevel_MetaData[] = {
		{ "Category", "MappingImageSettings" },
		{ "ModuleRelativePath", "Public/MappingImageSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_TexCoordLevel = { "TexCoordLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMappingImageSettings, TexCoordLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_TexCoordLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_TexCoordLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_TexCoordName_MetaData[] = {
		{ "Category", "MappingImageSettings" },
		{ "ModuleRelativePath", "Public/MappingImageSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_TexCoordName = { "TexCoordName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMappingImageSettings, TexCoordName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_TexCoordName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_TexCoordName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_TexCoordGeneratorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_TexCoordGeneratorType_MetaData[] = {
		{ "Category", "MappingImageSettings" },
		{ "ModuleRelativePath", "Public/MappingImageSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_TexCoordGeneratorType = { "TexCoordGeneratorType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMappingImageSettings, TexCoordGeneratorType), Z_Construct_UEnum_SimplygonUObjects_ETexCoordGeneratorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_TexCoordGeneratorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_TexCoordGeneratorType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_OutputMaterialCount_MetaData[] = {
		{ "Category", "MappingImageSettings" },
		{ "ModuleRelativePath", "Public/MappingImageSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_OutputMaterialCount = { "OutputMaterialCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMappingImageSettings, OutputMaterialCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_OutputMaterialCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_OutputMaterialCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_InputMaterialCount_MetaData[] = {
		{ "Category", "MappingImageSettings" },
		{ "ModuleRelativePath", "Public/MappingImageSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_InputMaterialCount = { "InputMaterialCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMappingImageSettings, InputMaterialCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_InputMaterialCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_InputMaterialCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ChartAggregatorSettings_MetaData[] = {
		{ "Category", "MappingImageSettings" },
		{ "ModuleRelativePath", "Public/MappingImageSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ChartAggregatorSettings = { "ChartAggregatorSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMappingImageSettings, ChartAggregatorSettings), Z_Construct_UScriptStruct_FChartAggregatorSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ChartAggregatorSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ChartAggregatorSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ParameterizerSettings_MetaData[] = {
		{ "Category", "MappingImageSettings" },
		{ "ModuleRelativePath", "Public/MappingImageSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ParameterizerSettings = { "ParameterizerSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMappingImageSettings, ParameterizerSettings), Z_Construct_UScriptStruct_FParameterizerSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ParameterizerSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ParameterizerSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_InputMaterialSettings_Inner = { "InputMaterialSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputMaterialSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_InputMaterialSettings_MetaData[] = {
		{ "Category", "MappingImageSettings" },
		{ "ModuleRelativePath", "Public/MappingImageSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_InputMaterialSettings = { "InputMaterialSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMappingImageSettings, InputMaterialSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_InputMaterialSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_InputMaterialSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_OutputMaterialSettings_Inner = { "OutputMaterialSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOutputMaterialSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_OutputMaterialSettings_MetaData[] = {
		{ "Category", "MappingImageSettings" },
		{ "ModuleRelativePath", "Public/MappingImageSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_OutputMaterialSettings = { "OutputMaterialSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMappingImageSettings, OutputMaterialSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_OutputMaterialSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_OutputMaterialSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMappingImageSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_GenerateMappingImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_GenerateTexCoords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_GenerateTangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ReplaceMappingImages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_UseFullRetexturing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ApplyNewMaterialIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_UseAutomaticTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_AutomaticTextureSizeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ForcePower2Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_OnlyParameterizeInvalidUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_AllowTransparencyMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_MaximumLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_TexCoordLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_TexCoordName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_TexCoordGeneratorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_TexCoordGeneratorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_OutputMaterialCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_InputMaterialCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ChartAggregatorSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_ParameterizerSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_InputMaterialSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_InputMaterialSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_OutputMaterialSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingImageSettings_Statics::NewProp_OutputMaterialSettings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMappingImageSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		nullptr,
		&NewStructOps,
		"MappingImageSettings",
		sizeof(FMappingImageSettings),
		alignof(FMappingImageSettings),
		Z_Construct_UScriptStruct_FMappingImageSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingImageSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMappingImageSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMappingImageSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MappingImageSettings"), sizeof(FMappingImageSettings), Get_Z_Construct_UScriptStruct_FMappingImageSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMappingImageSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMappingImageSettings_Hash() { return 3839129079U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
