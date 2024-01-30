// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/AttributeTessellationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeTessellationSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeTessellationSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EAttributeTessellationDensityMode();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_ETransformationSpace();
// End Cross Module References
class UScriptStruct* FAttributeTessellationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FAttributeTessellationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeTessellationSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("AttributeTessellationSettings"), sizeof(FAttributeTessellationSettings), Get_Z_Construct_UScriptStruct_FAttributeTessellationSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FAttributeTessellationSettings>()
{
	return FAttributeTessellationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAttributeTessellationSettings(FAttributeTessellationSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("AttributeTessellationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFAttributeTessellationSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFAttributeTessellationSettings()
	{
		UScriptStruct::DeferCppStructOps<FAttributeTessellationSettings>(FName(TEXT("AttributeTessellationSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFAttributeTessellationSettings;
	struct Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableAttributeTessellation_MetaData[];
#endif
		static void NewProp_EnableAttributeTessellation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableAttributeTessellation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttributeTessellationDensityMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeTessellationDensityMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttributeTessellationDensityMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransformationSpace_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformationSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TransformationSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAreaOfTessellatedValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAreaOfTessellatedValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLengthOfTessellatedValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxLengthOfTessellatedValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnScreenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OnScreenSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlyAllowOneLevelOfDifference_MetaData[];
#endif
		static void NewProp_OnlyAllowOneLevelOfDifference_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OnlyAllowOneLevelOfDifference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTessellationLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinTessellationLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTessellationLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTessellationLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTotalValuesCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTotalValuesCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AttributeTessellationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeTessellationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_EnableAttributeTessellation_MetaData[] = {
		{ "Category", "AttributeTessellationSettings" },
		{ "ModuleRelativePath", "Public/AttributeTessellationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_EnableAttributeTessellation_SetBit(void* Obj)
	{
		((FAttributeTessellationSettings*)Obj)->EnableAttributeTessellation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_EnableAttributeTessellation = { "EnableAttributeTessellation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAttributeTessellationSettings), &Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_EnableAttributeTessellation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_EnableAttributeTessellation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_EnableAttributeTessellation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_AttributeTessellationDensityMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_AttributeTessellationDensityMode_MetaData[] = {
		{ "Category", "AttributeTessellationSettings" },
		{ "ModuleRelativePath", "Public/AttributeTessellationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_AttributeTessellationDensityMode = { "AttributeTessellationDensityMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributeTessellationSettings, AttributeTessellationDensityMode), Z_Construct_UEnum_SimplygonUObjects_EAttributeTessellationDensityMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_AttributeTessellationDensityMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_AttributeTessellationDensityMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_TransformationSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_TransformationSpace_MetaData[] = {
		{ "Category", "AttributeTessellationSettings" },
		{ "ModuleRelativePath", "Public/AttributeTessellationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_TransformationSpace = { "TransformationSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributeTessellationSettings, TransformationSpace), Z_Construct_UEnum_SimplygonUObjects_ETransformationSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_TransformationSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_TransformationSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_MaxAreaOfTessellatedValue_MetaData[] = {
		{ "Category", "AttributeTessellationSettings" },
		{ "ModuleRelativePath", "Public/AttributeTessellationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_MaxAreaOfTessellatedValue = { "MaxAreaOfTessellatedValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributeTessellationSettings, MaxAreaOfTessellatedValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_MaxAreaOfTessellatedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_MaxAreaOfTessellatedValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_MaxLengthOfTessellatedValue_MetaData[] = {
		{ "Category", "AttributeTessellationSettings" },
		{ "ModuleRelativePath", "Public/AttributeTessellationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_MaxLengthOfTessellatedValue = { "MaxLengthOfTessellatedValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributeTessellationSettings, MaxLengthOfTessellatedValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_MaxLengthOfTessellatedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_MaxLengthOfTessellatedValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_OnScreenSize_MetaData[] = {
		{ "Category", "AttributeTessellationSettings" },
		{ "ModuleRelativePath", "Public/AttributeTessellationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_OnScreenSize = { "OnScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributeTessellationSettings, OnScreenSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_OnScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_OnScreenSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_OnlyAllowOneLevelOfDifference_MetaData[] = {
		{ "Category", "AttributeTessellationSettings" },
		{ "ModuleRelativePath", "Public/AttributeTessellationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_OnlyAllowOneLevelOfDifference_SetBit(void* Obj)
	{
		((FAttributeTessellationSettings*)Obj)->OnlyAllowOneLevelOfDifference = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_OnlyAllowOneLevelOfDifference = { "OnlyAllowOneLevelOfDifference", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAttributeTessellationSettings), &Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_OnlyAllowOneLevelOfDifference_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_OnlyAllowOneLevelOfDifference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_OnlyAllowOneLevelOfDifference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_MinTessellationLevel_MetaData[] = {
		{ "Category", "AttributeTessellationSettings" },
		{ "ModuleRelativePath", "Public/AttributeTessellationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_MinTessellationLevel = { "MinTessellationLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributeTessellationSettings, MinTessellationLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_MinTessellationLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_MinTessellationLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_MaxTessellationLevel_MetaData[] = {
		{ "Category", "AttributeTessellationSettings" },
		{ "ModuleRelativePath", "Public/AttributeTessellationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_MaxTessellationLevel = { "MaxTessellationLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributeTessellationSettings, MaxTessellationLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_MaxTessellationLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_MaxTessellationLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_MaxTotalValuesCount_MetaData[] = {
		{ "Category", "AttributeTessellationSettings" },
		{ "ModuleRelativePath", "Public/AttributeTessellationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_MaxTotalValuesCount = { "MaxTotalValuesCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributeTessellationSettings, MaxTotalValuesCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_MaxTotalValuesCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_MaxTotalValuesCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_EnableAttributeTessellation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_AttributeTessellationDensityMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_AttributeTessellationDensityMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_TransformationSpace_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_TransformationSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_MaxAreaOfTessellatedValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_MaxLengthOfTessellatedValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_OnScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_OnlyAllowOneLevelOfDifference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_MinTessellationLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_MaxTessellationLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::NewProp_MaxTotalValuesCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		nullptr,
		&NewStructOps,
		"AttributeTessellationSettings",
		sizeof(FAttributeTessellationSettings),
		alignof(FAttributeTessellationSettings),
		Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttributeTessellationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAttributeTessellationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AttributeTessellationSettings"), sizeof(FAttributeTessellationSettings), Get_Z_Construct_UScriptStruct_FAttributeTessellationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAttributeTessellationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAttributeTessellationSettings_Hash() { return 1737350018U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
