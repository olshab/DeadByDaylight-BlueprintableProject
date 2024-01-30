// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/ParameterizerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParameterizerSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FParameterizerSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
class UScriptStruct* FParameterizerSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FParameterizerSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParameterizerSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("ParameterizerSettings"), sizeof(FParameterizerSettings), Get_Z_Construct_UScriptStruct_FParameterizerSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FParameterizerSettings>()
{
	return FParameterizerSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParameterizerSettings(FParameterizerSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("ParameterizerSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFParameterizerSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFParameterizerSettings()
	{
		UScriptStruct::DeferCppStructOps<FParameterizerSettings>(FName(TEXT("ParameterizerSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFParameterizerSettings;
	struct Z_Construct_UScriptStruct_FParameterizerSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStretch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxStretch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LargeChartsImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LargeChartsImportance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterizerSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ParameterizerSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParameterizerSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParameterizerSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterizerSettings_Statics::NewProp_MaxStretch_MetaData[] = {
		{ "Category", "ParameterizerSettings" },
		{ "ModuleRelativePath", "Public/ParameterizerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParameterizerSettings_Statics::NewProp_MaxStretch = { "MaxStretch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterizerSettings, MaxStretch), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterizerSettings_Statics::NewProp_MaxStretch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterizerSettings_Statics::NewProp_MaxStretch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterizerSettings_Statics::NewProp_LargeChartsImportance_MetaData[] = {
		{ "Category", "ParameterizerSettings" },
		{ "ModuleRelativePath", "Public/ParameterizerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParameterizerSettings_Statics::NewProp_LargeChartsImportance = { "LargeChartsImportance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterizerSettings, LargeChartsImportance), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterizerSettings_Statics::NewProp_LargeChartsImportance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterizerSettings_Statics::NewProp_LargeChartsImportance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParameterizerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterizerSettings_Statics::NewProp_MaxStretch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterizerSettings_Statics::NewProp_LargeChartsImportance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParameterizerSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		nullptr,
		&NewStructOps,
		"ParameterizerSettings",
		sizeof(FParameterizerSettings),
		alignof(FParameterizerSettings),
		Z_Construct_UScriptStruct_FParameterizerSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterizerSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterizerSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterizerSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParameterizerSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParameterizerSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParameterizerSettings"), sizeof(FParameterizerSettings), Get_Z_Construct_UScriptStruct_FParameterizerSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FParameterizerSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParameterizerSettings_Hash() { return 3456261654U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
