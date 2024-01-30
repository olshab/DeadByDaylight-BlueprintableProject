// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/OutputMaterialSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOutputMaterialSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FOutputMaterialSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
class UScriptStruct* FOutputMaterialSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FOutputMaterialSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOutputMaterialSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("OutputMaterialSettings"), sizeof(FOutputMaterialSettings), Get_Z_Construct_UScriptStruct_FOutputMaterialSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FOutputMaterialSettings>()
{
	return FOutputMaterialSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOutputMaterialSettings(FOutputMaterialSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("OutputMaterialSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFOutputMaterialSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFOutputMaterialSettings()
	{
		UScriptStruct::DeferCppStructOps<FOutputMaterialSettings>(FName(TEXT("OutputMaterialSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFOutputMaterialSettings;
	struct Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultisamplingLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MultisamplingLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GutterSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GutterSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OutputMaterialSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOutputMaterialSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::NewProp_TextureWidth_MetaData[] = {
		{ "Category", "OutputMaterialSettings" },
		{ "ModuleRelativePath", "Public/OutputMaterialSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::NewProp_TextureWidth = { "TextureWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutputMaterialSettings, TextureWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::NewProp_TextureWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::NewProp_TextureWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::NewProp_TextureHeight_MetaData[] = {
		{ "Category", "OutputMaterialSettings" },
		{ "ModuleRelativePath", "Public/OutputMaterialSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::NewProp_TextureHeight = { "TextureHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutputMaterialSettings, TextureHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::NewProp_TextureHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::NewProp_TextureHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::NewProp_MultisamplingLevel_MetaData[] = {
		{ "Category", "OutputMaterialSettings" },
		{ "ModuleRelativePath", "Public/OutputMaterialSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::NewProp_MultisamplingLevel = { "MultisamplingLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutputMaterialSettings, MultisamplingLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::NewProp_MultisamplingLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::NewProp_MultisamplingLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::NewProp_GutterSpace_MetaData[] = {
		{ "Category", "OutputMaterialSettings" },
		{ "ModuleRelativePath", "Public/OutputMaterialSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::NewProp_GutterSpace = { "GutterSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutputMaterialSettings, GutterSpace), METADATA_PARAMS(Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::NewProp_GutterSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::NewProp_GutterSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::NewProp_TextureWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::NewProp_TextureHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::NewProp_MultisamplingLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::NewProp_GutterSpace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		nullptr,
		&NewStructOps,
		"OutputMaterialSettings",
		sizeof(FOutputMaterialSettings),
		alignof(FOutputMaterialSettings),
		Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOutputMaterialSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOutputMaterialSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OutputMaterialSettings"), sizeof(FOutputMaterialSettings), Get_Z_Construct_UScriptStruct_FOutputMaterialSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOutputMaterialSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOutputMaterialSettings_Hash() { return 1881223918U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
