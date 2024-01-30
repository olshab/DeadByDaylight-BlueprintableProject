// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/BillboardCloudSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBillboardCloudSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FBillboardCloudSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EBillboardMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FFoliageSettings();
// End Cross Module References
class UScriptStruct* FBillboardCloudSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FBillboardCloudSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBillboardCloudSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("BillboardCloudSettings"), sizeof(FBillboardCloudSettings), Get_Z_Construct_UScriptStruct_FBillboardCloudSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FBillboardCloudSettings>()
{
	return FBillboardCloudSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBillboardCloudSettings(FBillboardCloudSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("BillboardCloudSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFBillboardCloudSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFBillboardCloudSettings()
	{
		UScriptStruct::DeferCppStructOps<FBillboardCloudSettings>(FName(TEXT("BillboardCloudSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFBillboardCloudSettings;
	struct Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BillboardMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BillboardMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BillboardMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FavorVerticalPlanes_MetaData[];
#endif
		static void NewProp_FavorVerticalPlanes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FavorVerticalPlanes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwoSided_MetaData[];
#endif
		static void NewProp_TwoSided_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TwoSided;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseVisibilityWeights_MetaData[];
#endif
		static void NewProp_UseVisibilityWeights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseVisibilityWeights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BillboardDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BillboardDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPlaneCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPlaneCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometricComplexity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GeometricComplexity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FoliageSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BillboardCloudSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBillboardCloudSettings>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_BillboardMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_BillboardMode_MetaData[] = {
		{ "Category", "BillboardCloudSettings" },
		{ "ModuleRelativePath", "Public/BillboardCloudSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_BillboardMode = { "BillboardMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBillboardCloudSettings, BillboardMode), Z_Construct_UEnum_SimplygonUObjects_EBillboardMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_BillboardMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_BillboardMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_FavorVerticalPlanes_MetaData[] = {
		{ "Category", "BillboardCloudSettings" },
		{ "ModuleRelativePath", "Public/BillboardCloudSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_FavorVerticalPlanes_SetBit(void* Obj)
	{
		((FBillboardCloudSettings*)Obj)->FavorVerticalPlanes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_FavorVerticalPlanes = { "FavorVerticalPlanes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBillboardCloudSettings), &Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_FavorVerticalPlanes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_FavorVerticalPlanes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_FavorVerticalPlanes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_TwoSided_MetaData[] = {
		{ "Category", "BillboardCloudSettings" },
		{ "ModuleRelativePath", "Public/BillboardCloudSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_TwoSided_SetBit(void* Obj)
	{
		((FBillboardCloudSettings*)Obj)->TwoSided = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_TwoSided = { "TwoSided", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBillboardCloudSettings), &Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_TwoSided_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_TwoSided_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_TwoSided_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_UseVisibilityWeights_MetaData[] = {
		{ "Category", "BillboardCloudSettings" },
		{ "ModuleRelativePath", "Public/BillboardCloudSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_UseVisibilityWeights_SetBit(void* Obj)
	{
		((FBillboardCloudSettings*)Obj)->UseVisibilityWeights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_UseVisibilityWeights = { "UseVisibilityWeights", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBillboardCloudSettings), &Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_UseVisibilityWeights_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_UseVisibilityWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_UseVisibilityWeights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_BillboardDensity_MetaData[] = {
		{ "Category", "BillboardCloudSettings" },
		{ "ModuleRelativePath", "Public/BillboardCloudSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_BillboardDensity = { "BillboardDensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBillboardCloudSettings, BillboardDensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_BillboardDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_BillboardDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_MaxPlaneCount_MetaData[] = {
		{ "Category", "BillboardCloudSettings" },
		{ "ModuleRelativePath", "Public/BillboardCloudSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_MaxPlaneCount = { "MaxPlaneCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBillboardCloudSettings, MaxPlaneCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_MaxPlaneCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_MaxPlaneCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_GeometricComplexity_MetaData[] = {
		{ "Category", "BillboardCloudSettings" },
		{ "ModuleRelativePath", "Public/BillboardCloudSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_GeometricComplexity = { "GeometricComplexity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBillboardCloudSettings, GeometricComplexity), METADATA_PARAMS(Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_GeometricComplexity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_GeometricComplexity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_UpVector_MetaData[] = {
		{ "Category", "BillboardCloudSettings" },
		{ "ModuleRelativePath", "Public/BillboardCloudSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_UpVector = { "UpVector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBillboardCloudSettings, UpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_UpVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_UpVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_FoliageSettings_MetaData[] = {
		{ "Category", "BillboardCloudSettings" },
		{ "ModuleRelativePath", "Public/BillboardCloudSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_FoliageSettings = { "FoliageSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBillboardCloudSettings, FoliageSettings), Z_Construct_UScriptStruct_FFoliageSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_FoliageSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_FoliageSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_BillboardMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_BillboardMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_FavorVerticalPlanes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_TwoSided,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_UseVisibilityWeights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_BillboardDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_MaxPlaneCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_GeometricComplexity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_UpVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::NewProp_FoliageSettings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		nullptr,
		&NewStructOps,
		"BillboardCloudSettings",
		sizeof(FBillboardCloudSettings),
		alignof(FBillboardCloudSettings),
		Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBillboardCloudSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBillboardCloudSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BillboardCloudSettings"), sizeof(FBillboardCloudSettings), Get_Z_Construct_UScriptStruct_FBillboardCloudSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBillboardCloudSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBillboardCloudSettings_Hash() { return 3091946084U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
