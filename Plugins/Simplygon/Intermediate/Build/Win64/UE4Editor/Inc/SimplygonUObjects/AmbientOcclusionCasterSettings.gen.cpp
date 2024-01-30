// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/AmbientOcclusionCasterSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmbientOcclusionCasterSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EOpacityChannelComponent();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EDitherType();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EFillMode();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EOutputPixelFormat();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EOutputImageFileFormat();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EOutputDDSCompressionType();
// End Cross Module References
class UScriptStruct* FAmbientOcclusionCasterSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("AmbientOcclusionCasterSettings"), sizeof(FAmbientOcclusionCasterSettings), Get_Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FAmbientOcclusionCasterSettings>()
{
	return FAmbientOcclusionCasterSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAmbientOcclusionCasterSettings(FAmbientOcclusionCasterSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("AmbientOcclusionCasterSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFAmbientOcclusionCasterSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFAmbientOcclusionCasterSettings()
	{
		UScriptStruct::DeferCppStructOps<FAmbientOcclusionCasterSettings>(FName(TEXT("AmbientOcclusionCasterSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFAmbientOcclusionCasterSettings;
	struct Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MaterialChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OpacityChannel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OpacityChannelComponent_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityChannelComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OpacityChannelComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DitherType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DitherType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DitherType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FillMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FillMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FillMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dilation_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Dilation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseMultisampling_MetaData[];
#endif
		static void NewProp_UseMultisampling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseMultisampling;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputPixelFormat_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputPixelFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutputPixelFormat;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputImageFileFormat_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputImageFileFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutputImageFileFormat;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputDDSCompressionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputDDSCompressionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutputDDSCompressionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RaysPerPixel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RaysPerPixel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionFalloff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionFalloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseSimpleOcclusionMode_MetaData[];
#endif
		static void NewProp_UseSimpleOcclusionMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseSimpleOcclusionMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AmbientOcclusionCasterSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAmbientOcclusionCasterSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_MaterialChannel_MetaData[] = {
		{ "Category", "AmbientOcclusionCasterSettings" },
		{ "ModuleRelativePath", "Public/AmbientOcclusionCasterSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_MaterialChannel = { "MaterialChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAmbientOcclusionCasterSettings, MaterialChannel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_MaterialChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_MaterialChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OpacityChannel_MetaData[] = {
		{ "Category", "AmbientOcclusionCasterSettings" },
		{ "ModuleRelativePath", "Public/AmbientOcclusionCasterSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OpacityChannel = { "OpacityChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAmbientOcclusionCasterSettings, OpacityChannel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OpacityChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OpacityChannel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OpacityChannelComponent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OpacityChannelComponent_MetaData[] = {
		{ "Category", "AmbientOcclusionCasterSettings" },
		{ "ModuleRelativePath", "Public/AmbientOcclusionCasterSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OpacityChannelComponent = { "OpacityChannelComponent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAmbientOcclusionCasterSettings, OpacityChannelComponent), Z_Construct_UEnum_SimplygonUObjects_EOpacityChannelComponent, METADATA_PARAMS(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OpacityChannelComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OpacityChannelComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_DitherType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_DitherType_MetaData[] = {
		{ "Category", "AmbientOcclusionCasterSettings" },
		{ "ModuleRelativePath", "Public/AmbientOcclusionCasterSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_DitherType = { "DitherType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAmbientOcclusionCasterSettings, DitherType), Z_Construct_UEnum_SimplygonUObjects_EDitherType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_DitherType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_DitherType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_FillMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_FillMode_MetaData[] = {
		{ "Category", "AmbientOcclusionCasterSettings" },
		{ "ModuleRelativePath", "Public/AmbientOcclusionCasterSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_FillMode = { "FillMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAmbientOcclusionCasterSettings, FillMode), Z_Construct_UEnum_SimplygonUObjects_EFillMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_FillMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_FillMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_Dilation_MetaData[] = {
		{ "Category", "AmbientOcclusionCasterSettings" },
		{ "ModuleRelativePath", "Public/AmbientOcclusionCasterSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_Dilation = { "Dilation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAmbientOcclusionCasterSettings, Dilation), METADATA_PARAMS(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_Dilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_Dilation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_UseMultisampling_MetaData[] = {
		{ "Category", "AmbientOcclusionCasterSettings" },
		{ "ModuleRelativePath", "Public/AmbientOcclusionCasterSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_UseMultisampling_SetBit(void* Obj)
	{
		((FAmbientOcclusionCasterSettings*)Obj)->UseMultisampling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_UseMultisampling = { "UseMultisampling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAmbientOcclusionCasterSettings), &Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_UseMultisampling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_UseMultisampling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_UseMultisampling_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OutputPixelFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OutputPixelFormat_MetaData[] = {
		{ "Category", "AmbientOcclusionCasterSettings" },
		{ "ModuleRelativePath", "Public/AmbientOcclusionCasterSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OutputPixelFormat = { "OutputPixelFormat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAmbientOcclusionCasterSettings, OutputPixelFormat), Z_Construct_UEnum_SimplygonUObjects_EOutputPixelFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OutputPixelFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OutputPixelFormat_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OutputImageFileFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OutputImageFileFormat_MetaData[] = {
		{ "Category", "AmbientOcclusionCasterSettings" },
		{ "ModuleRelativePath", "Public/AmbientOcclusionCasterSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OutputImageFileFormat = { "OutputImageFileFormat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAmbientOcclusionCasterSettings, OutputImageFileFormat), Z_Construct_UEnum_SimplygonUObjects_EOutputImageFileFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OutputImageFileFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OutputImageFileFormat_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OutputDDSCompressionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OutputDDSCompressionType_MetaData[] = {
		{ "Category", "AmbientOcclusionCasterSettings" },
		{ "ModuleRelativePath", "Public/AmbientOcclusionCasterSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OutputDDSCompressionType = { "OutputDDSCompressionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAmbientOcclusionCasterSettings, OutputDDSCompressionType), Z_Construct_UEnum_SimplygonUObjects_EOutputDDSCompressionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OutputDDSCompressionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OutputDDSCompressionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_RaysPerPixel_MetaData[] = {
		{ "Category", "AmbientOcclusionCasterSettings" },
		{ "ModuleRelativePath", "Public/AmbientOcclusionCasterSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_RaysPerPixel = { "RaysPerPixel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAmbientOcclusionCasterSettings, RaysPerPixel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_RaysPerPixel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_RaysPerPixel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OcclusionFalloff_MetaData[] = {
		{ "Category", "AmbientOcclusionCasterSettings" },
		{ "ModuleRelativePath", "Public/AmbientOcclusionCasterSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OcclusionFalloff = { "OcclusionFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAmbientOcclusionCasterSettings, OcclusionFalloff), METADATA_PARAMS(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OcclusionFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OcclusionFalloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OcclusionMultiplier_MetaData[] = {
		{ "Category", "AmbientOcclusionCasterSettings" },
		{ "ModuleRelativePath", "Public/AmbientOcclusionCasterSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OcclusionMultiplier = { "OcclusionMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAmbientOcclusionCasterSettings, OcclusionMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OcclusionMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OcclusionMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_UseSimpleOcclusionMode_MetaData[] = {
		{ "Category", "AmbientOcclusionCasterSettings" },
		{ "ModuleRelativePath", "Public/AmbientOcclusionCasterSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_UseSimpleOcclusionMode_SetBit(void* Obj)
	{
		((FAmbientOcclusionCasterSettings*)Obj)->UseSimpleOcclusionMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_UseSimpleOcclusionMode = { "UseSimpleOcclusionMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAmbientOcclusionCasterSettings), &Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_UseSimpleOcclusionMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_UseSimpleOcclusionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_UseSimpleOcclusionMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_MaterialChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OpacityChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OpacityChannelComponent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OpacityChannelComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_DitherType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_DitherType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_FillMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_FillMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_Dilation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_UseMultisampling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OutputPixelFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OutputPixelFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OutputImageFileFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OutputImageFileFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OutputDDSCompressionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OutputDDSCompressionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_RaysPerPixel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OcclusionFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_OcclusionMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::NewProp_UseSimpleOcclusionMode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		nullptr,
		&NewStructOps,
		"AmbientOcclusionCasterSettings",
		sizeof(FAmbientOcclusionCasterSettings),
		alignof(FAmbientOcclusionCasterSettings),
		Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AmbientOcclusionCasterSettings"), sizeof(FAmbientOcclusionCasterSettings), Get_Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings_Hash() { return 1151791936U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
