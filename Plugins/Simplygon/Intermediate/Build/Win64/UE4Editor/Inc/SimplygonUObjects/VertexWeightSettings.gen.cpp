// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/VertexWeightSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexWeightSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FVertexWeightSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EWeightsFromColorComponent();
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EWeightsFromColorMode();
// End Cross Module References
class UScriptStruct* FVertexWeightSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FVertexWeightSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexWeightSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("VertexWeightSettings"), sizeof(FVertexWeightSettings), Get_Z_Construct_UScriptStruct_FVertexWeightSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FVertexWeightSettings>()
{
	return FVertexWeightSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVertexWeightSettings(FVertexWeightSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("VertexWeightSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFVertexWeightSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFVertexWeightSettings()
	{
		UScriptStruct::DeferCppStructOps<FVertexWeightSettings>(FName(TEXT("VertexWeightSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFVertexWeightSettings;
	struct Z_Construct_UScriptStruct_FVertexWeightSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseVertexWeightsInReducer_MetaData[];
#endif
		static void NewProp_UseVertexWeightsInReducer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseVertexWeightsInReducer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseVertexWeightsInTexcoordGenerator_MetaData[];
#endif
		static void NewProp_UseVertexWeightsInTexcoordGenerator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseVertexWeightsInTexcoordGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightsFromColorLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeightsFromColorLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightsFromColorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeightsFromColorName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeightsFromColorComponent_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightsFromColorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WeightsFromColorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightsFromColorMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeightsFromColorMultiplier;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeightsFromColorMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightsFromColorMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WeightsFromColorMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VertexWeightSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexWeightSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_UseVertexWeightsInReducer_MetaData[] = {
		{ "Category", "VertexWeightSettings" },
		{ "ModuleRelativePath", "Public/VertexWeightSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_UseVertexWeightsInReducer_SetBit(void* Obj)
	{
		((FVertexWeightSettings*)Obj)->UseVertexWeightsInReducer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_UseVertexWeightsInReducer = { "UseVertexWeightsInReducer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FVertexWeightSettings), &Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_UseVertexWeightsInReducer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_UseVertexWeightsInReducer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_UseVertexWeightsInReducer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_UseVertexWeightsInTexcoordGenerator_MetaData[] = {
		{ "Category", "VertexWeightSettings" },
		{ "ModuleRelativePath", "Public/VertexWeightSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_UseVertexWeightsInTexcoordGenerator_SetBit(void* Obj)
	{
		((FVertexWeightSettings*)Obj)->UseVertexWeightsInTexcoordGenerator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_UseVertexWeightsInTexcoordGenerator = { "UseVertexWeightsInTexcoordGenerator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FVertexWeightSettings), &Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_UseVertexWeightsInTexcoordGenerator_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_UseVertexWeightsInTexcoordGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_UseVertexWeightsInTexcoordGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorLevel_MetaData[] = {
		{ "Category", "VertexWeightSettings" },
		{ "ModuleRelativePath", "Public/VertexWeightSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorLevel = { "WeightsFromColorLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexWeightSettings, WeightsFromColorLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorName_MetaData[] = {
		{ "Category", "VertexWeightSettings" },
		{ "ModuleRelativePath", "Public/VertexWeightSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorName = { "WeightsFromColorName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexWeightSettings, WeightsFromColorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorComponent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorComponent_MetaData[] = {
		{ "Category", "VertexWeightSettings" },
		{ "ModuleRelativePath", "Public/VertexWeightSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorComponent = { "WeightsFromColorComponent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexWeightSettings, WeightsFromColorComponent), Z_Construct_UEnum_SimplygonUObjects_EWeightsFromColorComponent, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorMultiplier_MetaData[] = {
		{ "Category", "VertexWeightSettings" },
		{ "ModuleRelativePath", "Public/VertexWeightSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorMultiplier = { "WeightsFromColorMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexWeightSettings, WeightsFromColorMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorMultiplier_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorMode_MetaData[] = {
		{ "Category", "VertexWeightSettings" },
		{ "ModuleRelativePath", "Public/VertexWeightSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorMode = { "WeightsFromColorMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVertexWeightSettings, WeightsFromColorMode), Z_Construct_UEnum_SimplygonUObjects_EWeightsFromColorMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_UseVertexWeightsInReducer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_UseVertexWeightsInTexcoordGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorComponent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::NewProp_WeightsFromColorMode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		nullptr,
		&NewStructOps,
		"VertexWeightSettings",
		sizeof(FVertexWeightSettings),
		alignof(FVertexWeightSettings),
		Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVertexWeightSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVertexWeightSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VertexWeightSettings"), sizeof(FVertexWeightSettings), Get_Z_Construct_UScriptStruct_FVertexWeightSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVertexWeightSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVertexWeightSettings_Hash() { return 3128522672U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
