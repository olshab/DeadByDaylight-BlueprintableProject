// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/NormalCasterSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNormalCasterSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FNormalCasterSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EOpacityChannelComponent();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EDitherType();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EFillMode();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EOutputPixelFormat();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EOutputImageFileFormat();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EOutputDDSCompressionType();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EFlipBackfacingMode();
// End Cross Module References
class UScriptStruct* FNormalCasterSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FNormalCasterSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNormalCasterSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("NormalCasterSettings"), sizeof(FNormalCasterSettings), Get_Z_Construct_UScriptStruct_FNormalCasterSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FNormalCasterSettings>()
{
	return FNormalCasterSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNormalCasterSettings(FNormalCasterSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("NormalCasterSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFNormalCasterSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFNormalCasterSettings()
	{
		UScriptStruct::DeferCppStructOps<FNormalCasterSettings>(FName(TEXT("NormalCasterSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFNormalCasterSettings;
	struct Z_Construct_UScriptStruct_FNormalCasterSettings_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlipBackfacingNormals_MetaData[];
#endif
		static void NewProp_FlipBackfacingNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FlipBackfacingNormals;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FlipBackfacingMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlipBackfacingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FlipBackfacingMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerateTangentSpaceNormals_MetaData[];
#endif
		static void NewProp_GenerateTangentSpaceNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GenerateTangentSpaceNormals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlipGreen_MetaData[];
#endif
		static void NewProp_FlipGreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FlipGreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalculateBitangentPerFragment_MetaData[];
#endif
		static void NewProp_CalculateBitangentPerFragment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CalculateBitangentPerFragment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalizeInterpolatedTangentSpace_MetaData[];
#endif
		static void NewProp_NormalizeInterpolatedTangentSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NormalizeInterpolatedTangentSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NormalCasterSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNormalCasterSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_MaterialChannel_MetaData[] = {
		{ "Category", "NormalCasterSettings" },
		{ "ModuleRelativePath", "Public/NormalCasterSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_MaterialChannel = { "MaterialChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNormalCasterSettings, MaterialChannel), METADATA_PARAMS(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_MaterialChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_MaterialChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OpacityChannel_MetaData[] = {
		{ "Category", "NormalCasterSettings" },
		{ "ModuleRelativePath", "Public/NormalCasterSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OpacityChannel = { "OpacityChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNormalCasterSettings, OpacityChannel), METADATA_PARAMS(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OpacityChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OpacityChannel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OpacityChannelComponent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OpacityChannelComponent_MetaData[] = {
		{ "Category", "NormalCasterSettings" },
		{ "ModuleRelativePath", "Public/NormalCasterSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OpacityChannelComponent = { "OpacityChannelComponent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNormalCasterSettings, OpacityChannelComponent), Z_Construct_UEnum_SimplygonUObjects_EOpacityChannelComponent, METADATA_PARAMS(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OpacityChannelComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OpacityChannelComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_DitherType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_DitherType_MetaData[] = {
		{ "Category", "NormalCasterSettings" },
		{ "ModuleRelativePath", "Public/NormalCasterSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_DitherType = { "DitherType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNormalCasterSettings, DitherType), Z_Construct_UEnum_SimplygonUObjects_EDitherType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_DitherType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_DitherType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FillMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FillMode_MetaData[] = {
		{ "Category", "NormalCasterSettings" },
		{ "ModuleRelativePath", "Public/NormalCasterSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FillMode = { "FillMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNormalCasterSettings, FillMode), Z_Construct_UEnum_SimplygonUObjects_EFillMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FillMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FillMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_Dilation_MetaData[] = {
		{ "Category", "NormalCasterSettings" },
		{ "ModuleRelativePath", "Public/NormalCasterSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_Dilation = { "Dilation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNormalCasterSettings, Dilation), METADATA_PARAMS(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_Dilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_Dilation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_UseMultisampling_MetaData[] = {
		{ "Category", "NormalCasterSettings" },
		{ "ModuleRelativePath", "Public/NormalCasterSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_UseMultisampling_SetBit(void* Obj)
	{
		((FNormalCasterSettings*)Obj)->UseMultisampling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_UseMultisampling = { "UseMultisampling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNormalCasterSettings), &Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_UseMultisampling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_UseMultisampling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_UseMultisampling_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OutputPixelFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OutputPixelFormat_MetaData[] = {
		{ "Category", "NormalCasterSettings" },
		{ "ModuleRelativePath", "Public/NormalCasterSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OutputPixelFormat = { "OutputPixelFormat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNormalCasterSettings, OutputPixelFormat), Z_Construct_UEnum_SimplygonUObjects_EOutputPixelFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OutputPixelFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OutputPixelFormat_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OutputImageFileFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OutputImageFileFormat_MetaData[] = {
		{ "Category", "NormalCasterSettings" },
		{ "ModuleRelativePath", "Public/NormalCasterSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OutputImageFileFormat = { "OutputImageFileFormat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNormalCasterSettings, OutputImageFileFormat), Z_Construct_UEnum_SimplygonUObjects_EOutputImageFileFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OutputImageFileFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OutputImageFileFormat_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OutputDDSCompressionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OutputDDSCompressionType_MetaData[] = {
		{ "Category", "NormalCasterSettings" },
		{ "ModuleRelativePath", "Public/NormalCasterSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OutputDDSCompressionType = { "OutputDDSCompressionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNormalCasterSettings, OutputDDSCompressionType), Z_Construct_UEnum_SimplygonUObjects_EOutputDDSCompressionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OutputDDSCompressionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OutputDDSCompressionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FlipBackfacingNormals_MetaData[] = {
		{ "Category", "NormalCasterSettings" },
		{ "ModuleRelativePath", "Public/NormalCasterSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FlipBackfacingNormals_SetBit(void* Obj)
	{
		((FNormalCasterSettings*)Obj)->FlipBackfacingNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FlipBackfacingNormals = { "FlipBackfacingNormals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNormalCasterSettings), &Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FlipBackfacingNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FlipBackfacingNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FlipBackfacingNormals_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FlipBackfacingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FlipBackfacingMode_MetaData[] = {
		{ "Category", "NormalCasterSettings" },
		{ "ModuleRelativePath", "Public/NormalCasterSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FlipBackfacingMode = { "FlipBackfacingMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNormalCasterSettings, FlipBackfacingMode), Z_Construct_UEnum_SimplygonUObjects_EFlipBackfacingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FlipBackfacingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FlipBackfacingMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_GenerateTangentSpaceNormals_MetaData[] = {
		{ "Category", "NormalCasterSettings" },
		{ "ModuleRelativePath", "Public/NormalCasterSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_GenerateTangentSpaceNormals_SetBit(void* Obj)
	{
		((FNormalCasterSettings*)Obj)->GenerateTangentSpaceNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_GenerateTangentSpaceNormals = { "GenerateTangentSpaceNormals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNormalCasterSettings), &Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_GenerateTangentSpaceNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_GenerateTangentSpaceNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_GenerateTangentSpaceNormals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FlipGreen_MetaData[] = {
		{ "Category", "NormalCasterSettings" },
		{ "ModuleRelativePath", "Public/NormalCasterSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FlipGreen_SetBit(void* Obj)
	{
		((FNormalCasterSettings*)Obj)->FlipGreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FlipGreen = { "FlipGreen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNormalCasterSettings), &Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FlipGreen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FlipGreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FlipGreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_CalculateBitangentPerFragment_MetaData[] = {
		{ "Category", "NormalCasterSettings" },
		{ "ModuleRelativePath", "Public/NormalCasterSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_CalculateBitangentPerFragment_SetBit(void* Obj)
	{
		((FNormalCasterSettings*)Obj)->CalculateBitangentPerFragment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_CalculateBitangentPerFragment = { "CalculateBitangentPerFragment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNormalCasterSettings), &Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_CalculateBitangentPerFragment_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_CalculateBitangentPerFragment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_CalculateBitangentPerFragment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_NormalizeInterpolatedTangentSpace_MetaData[] = {
		{ "Category", "NormalCasterSettings" },
		{ "ModuleRelativePath", "Public/NormalCasterSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_NormalizeInterpolatedTangentSpace_SetBit(void* Obj)
	{
		((FNormalCasterSettings*)Obj)->NormalizeInterpolatedTangentSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_NormalizeInterpolatedTangentSpace = { "NormalizeInterpolatedTangentSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNormalCasterSettings), &Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_NormalizeInterpolatedTangentSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_NormalizeInterpolatedTangentSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_NormalizeInterpolatedTangentSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_MaterialChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OpacityChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OpacityChannelComponent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OpacityChannelComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_DitherType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_DitherType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FillMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FillMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_Dilation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_UseMultisampling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OutputPixelFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OutputPixelFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OutputImageFileFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OutputImageFileFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OutputDDSCompressionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_OutputDDSCompressionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FlipBackfacingNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FlipBackfacingMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FlipBackfacingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_GenerateTangentSpaceNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_FlipGreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_CalculateBitangentPerFragment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::NewProp_NormalizeInterpolatedTangentSpace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		nullptr,
		&NewStructOps,
		"NormalCasterSettings",
		sizeof(FNormalCasterSettings),
		alignof(FNormalCasterSettings),
		Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNormalCasterSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNormalCasterSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NormalCasterSettings"), sizeof(FNormalCasterSettings), Get_Z_Construct_UScriptStruct_FNormalCasterSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNormalCasterSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNormalCasterSettings_Hash() { return 2879337838U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
