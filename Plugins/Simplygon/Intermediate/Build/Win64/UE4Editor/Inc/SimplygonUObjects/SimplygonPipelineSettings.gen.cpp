// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/SimplygonPipelineSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimplygonPipelineSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FSimplygonPipelineSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
class UScriptStruct* FSimplygonPipelineSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FSimplygonPipelineSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimplygonPipelineSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("SimplygonPipelineSettings"), sizeof(FSimplygonPipelineSettings), Get_Z_Construct_UScriptStruct_FSimplygonPipelineSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FSimplygonPipelineSettings>()
{
	return FSimplygonPipelineSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSimplygonPipelineSettings(FSimplygonPipelineSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("SimplygonPipelineSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFSimplygonPipelineSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFSimplygonPipelineSettings()
	{
		UScriptStruct::DeferCppStructOps<FSimplygonPipelineSettings>(FName(TEXT("SimplygonPipelineSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFSimplygonPipelineSettings;
	struct Z_Construct_UScriptStruct_FSimplygonPipelineSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimplygonPipelineSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimplygonPipelineSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimplygonPipelineSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimplygonPipelineSettings>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimplygonPipelineSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		nullptr,
		&NewStructOps,
		"SimplygonPipelineSettings",
		sizeof(FSimplygonPipelineSettings),
		alignof(FSimplygonPipelineSettings),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimplygonPipelineSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimplygonPipelineSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimplygonPipelineSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSimplygonPipelineSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SimplygonPipelineSettings"), sizeof(FSimplygonPipelineSettings), Get_Z_Construct_UScriptStruct_FSimplygonPipelineSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSimplygonPipelineSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSimplygonPipelineSettings_Hash() { return 213621438U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
