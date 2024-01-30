// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/FoliageSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FFoliageSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
class UScriptStruct* FFoliageSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FFoliageSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFoliageSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("FoliageSettings"), sizeof(FFoliageSettings), Get_Z_Construct_UScriptStruct_FFoliageSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FFoliageSettings>()
{
	return FFoliageSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFoliageSettings(FFoliageSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("FoliageSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFFoliageSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFFoliageSettings()
	{
		UScriptStruct::DeferCppStructOps<FFoliageSettings>(FName(TEXT("FoliageSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFFoliageSettings;
	struct Z_Construct_UScriptStruct_FFoliageSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeparateTrunkAndFoliage_MetaData[];
#endif
		static void NewProp_SeparateTrunkAndFoliage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SeparateTrunkAndFoliage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaintainLeafConnections_MetaData[];
#endif
		static void NewProp_MaintainLeafConnections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MaintainLeafConnections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeparateFoliageTriangleRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeparateFoliageTriangleRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeparateFoliageTriangleThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SeparateFoliageTriangleThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeparateFoliageAreaThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeparateFoliageAreaThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeparateFoliageSizeThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeparateFoliageSizeThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrunkReductionRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrunkReductionRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FoliageSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFoliageSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateTrunkAndFoliage_MetaData[] = {
		{ "Category", "FoliageSettings" },
		{ "ModuleRelativePath", "Public/FoliageSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateTrunkAndFoliage_SetBit(void* Obj)
	{
		((FFoliageSettings*)Obj)->SeparateTrunkAndFoliage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateTrunkAndFoliage = { "SeparateTrunkAndFoliage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FFoliageSettings), &Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateTrunkAndFoliage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateTrunkAndFoliage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateTrunkAndFoliage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_MaintainLeafConnections_MetaData[] = {
		{ "Category", "FoliageSettings" },
		{ "ModuleRelativePath", "Public/FoliageSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_MaintainLeafConnections_SetBit(void* Obj)
	{
		((FFoliageSettings*)Obj)->MaintainLeafConnections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_MaintainLeafConnections = { "MaintainLeafConnections", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FFoliageSettings), &Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_MaintainLeafConnections_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_MaintainLeafConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_MaintainLeafConnections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateFoliageTriangleRatio_MetaData[] = {
		{ "Category", "FoliageSettings" },
		{ "ModuleRelativePath", "Public/FoliageSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateFoliageTriangleRatio = { "SeparateFoliageTriangleRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoliageSettings, SeparateFoliageTriangleRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateFoliageTriangleRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateFoliageTriangleRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateFoliageTriangleThreshold_MetaData[] = {
		{ "Category", "FoliageSettings" },
		{ "ModuleRelativePath", "Public/FoliageSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateFoliageTriangleThreshold = { "SeparateFoliageTriangleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoliageSettings, SeparateFoliageTriangleThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateFoliageTriangleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateFoliageTriangleThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateFoliageAreaThreshold_MetaData[] = {
		{ "Category", "FoliageSettings" },
		{ "ModuleRelativePath", "Public/FoliageSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateFoliageAreaThreshold = { "SeparateFoliageAreaThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoliageSettings, SeparateFoliageAreaThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateFoliageAreaThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateFoliageAreaThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateFoliageSizeThreshold_MetaData[] = {
		{ "Category", "FoliageSettings" },
		{ "ModuleRelativePath", "Public/FoliageSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateFoliageSizeThreshold = { "SeparateFoliageSizeThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoliageSettings, SeparateFoliageSizeThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateFoliageSizeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateFoliageSizeThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_TrunkReductionRatio_MetaData[] = {
		{ "Category", "FoliageSettings" },
		{ "ModuleRelativePath", "Public/FoliageSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_TrunkReductionRatio = { "TrunkReductionRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoliageSettings, TrunkReductionRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_TrunkReductionRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_TrunkReductionRatio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFoliageSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateTrunkAndFoliage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_MaintainLeafConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateFoliageTriangleRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateFoliageTriangleThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateFoliageAreaThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_SeparateFoliageSizeThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageSettings_Statics::NewProp_TrunkReductionRatio,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFoliageSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		nullptr,
		&NewStructOps,
		"FoliageSettings",
		sizeof(FFoliageSettings),
		alignof(FFoliageSettings),
		Z_Construct_UScriptStruct_FFoliageSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFoliageSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFoliageSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FoliageSettings"), sizeof(FFoliageSettings), Get_Z_Construct_UScriptStruct_FFoliageSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFoliageSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFoliageSettings_Hash() { return 1583331115U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
