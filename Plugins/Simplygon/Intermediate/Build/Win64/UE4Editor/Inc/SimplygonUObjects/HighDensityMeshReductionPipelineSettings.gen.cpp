// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/HighDensityMeshReductionPipelineSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHighDensityMeshReductionPipelineSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FHighDensityMeshReductionPipelineSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FSimplygonPipelineSettings();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings();
// End Cross Module References

static_assert(std::is_polymorphic<FHighDensityMeshReductionPipelineSettings>() == std::is_polymorphic<FSimplygonPipelineSettings>(), "USTRUCT FHighDensityMeshReductionPipelineSettings cannot be polymorphic unless super FSimplygonPipelineSettings is polymorphic");

class UScriptStruct* FHighDensityMeshReductionPipelineSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FHighDensityMeshReductionPipelineSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHighDensityMeshReductionPipelineSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("HighDensityMeshReductionPipelineSettings"), sizeof(FHighDensityMeshReductionPipelineSettings), Get_Z_Construct_UScriptStruct_FHighDensityMeshReductionPipelineSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FHighDensityMeshReductionPipelineSettings>()
{
	return FHighDensityMeshReductionPipelineSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHighDensityMeshReductionPipelineSettings(FHighDensityMeshReductionPipelineSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("HighDensityMeshReductionPipelineSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFHighDensityMeshReductionPipelineSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFHighDensityMeshReductionPipelineSettings()
	{
		UScriptStruct::DeferCppStructOps<FHighDensityMeshReductionPipelineSettings>(FName(TEXT("HighDensityMeshReductionPipelineSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFHighDensityMeshReductionPipelineSettings;
	struct Z_Construct_UScriptStruct_FHighDensityMeshReductionPipelineSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighDensityMeshReductionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HighDensityMeshReductionSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHighDensityMeshReductionPipelineSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HighDensityMeshReductionPipelineSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHighDensityMeshReductionPipelineSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHighDensityMeshReductionPipelineSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHighDensityMeshReductionPipelineSettings_Statics::NewProp_HighDensityMeshReductionSettings_MetaData[] = {
		{ "Category", "HighDensityMeshReductionPipelineSettings" },
		{ "ModuleRelativePath", "Public/HighDensityMeshReductionPipelineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHighDensityMeshReductionPipelineSettings_Statics::NewProp_HighDensityMeshReductionSettings = { "HighDensityMeshReductionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHighDensityMeshReductionPipelineSettings, HighDensityMeshReductionSettings), Z_Construct_UScriptStruct_FHighDensityMeshReductionSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FHighDensityMeshReductionPipelineSettings_Statics::NewProp_HighDensityMeshReductionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHighDensityMeshReductionPipelineSettings_Statics::NewProp_HighDensityMeshReductionSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHighDensityMeshReductionPipelineSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHighDensityMeshReductionPipelineSettings_Statics::NewProp_HighDensityMeshReductionSettings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHighDensityMeshReductionPipelineSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		Z_Construct_UScriptStruct_FSimplygonPipelineSettings,
		&NewStructOps,
		"HighDensityMeshReductionPipelineSettings",
		sizeof(FHighDensityMeshReductionPipelineSettings),
		alignof(FHighDensityMeshReductionPipelineSettings),
		Z_Construct_UScriptStruct_FHighDensityMeshReductionPipelineSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHighDensityMeshReductionPipelineSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHighDensityMeshReductionPipelineSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHighDensityMeshReductionPipelineSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHighDensityMeshReductionPipelineSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHighDensityMeshReductionPipelineSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HighDensityMeshReductionPipelineSettings"), sizeof(FHighDensityMeshReductionPipelineSettings), Get_Z_Construct_UScriptStruct_FHighDensityMeshReductionPipelineSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHighDensityMeshReductionPipelineSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHighDensityMeshReductionPipelineSettings_Hash() { return 2095075956U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
