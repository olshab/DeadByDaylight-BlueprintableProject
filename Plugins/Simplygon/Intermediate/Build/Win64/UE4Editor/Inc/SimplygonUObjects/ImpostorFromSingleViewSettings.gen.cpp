// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/ImpostorFromSingleViewSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImpostorFromSingleViewSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FImpostorFromSingleViewSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("ImpostorFromSingleViewSettings"), sizeof(FImpostorFromSingleViewSettings), Get_Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FImpostorFromSingleViewSettings>()
{
	return FImpostorFromSingleViewSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FImpostorFromSingleViewSettings(FImpostorFromSingleViewSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("ImpostorFromSingleViewSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFImpostorFromSingleViewSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFImpostorFromSingleViewSettings()
	{
		UScriptStruct::DeferCppStructOps<FImpostorFromSingleViewSettings>(FName(TEXT("ImpostorFromSingleViewSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFImpostorFromSingleViewSettings;
	struct Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseTightFitting_MetaData[];
#endif
		static void NewProp_UseTightFitting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseTightFitting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TightFittingDepthOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TightFittingDepthOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwoSided_MetaData[];
#endif
		static void NewProp_TwoSided_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TwoSided;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexCoordPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TexCoordPadding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ImpostorFromSingleViewSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImpostorFromSingleViewSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_UseTightFitting_MetaData[] = {
		{ "Category", "ImpostorFromSingleViewSettings" },
		{ "ModuleRelativePath", "Public/ImpostorFromSingleViewSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_UseTightFitting_SetBit(void* Obj)
	{
		((FImpostorFromSingleViewSettings*)Obj)->UseTightFitting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_UseTightFitting = { "UseTightFitting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FImpostorFromSingleViewSettings), &Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_UseTightFitting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_UseTightFitting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_UseTightFitting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_TightFittingDepthOffset_MetaData[] = {
		{ "Category", "ImpostorFromSingleViewSettings" },
		{ "ModuleRelativePath", "Public/ImpostorFromSingleViewSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_TightFittingDepthOffset = { "TightFittingDepthOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImpostorFromSingleViewSettings, TightFittingDepthOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_TightFittingDepthOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_TightFittingDepthOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_TwoSided_MetaData[] = {
		{ "Category", "ImpostorFromSingleViewSettings" },
		{ "ModuleRelativePath", "Public/ImpostorFromSingleViewSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_TwoSided_SetBit(void* Obj)
	{
		((FImpostorFromSingleViewSettings*)Obj)->TwoSided = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_TwoSided = { "TwoSided", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FImpostorFromSingleViewSettings), &Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_TwoSided_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_TwoSided_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_TwoSided_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_ViewDirection_MetaData[] = {
		{ "Category", "ImpostorFromSingleViewSettings" },
		{ "ModuleRelativePath", "Public/ImpostorFromSingleViewSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_ViewDirection = { "ViewDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImpostorFromSingleViewSettings, ViewDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_ViewDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_ViewDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_TexCoordPadding_MetaData[] = {
		{ "Category", "ImpostorFromSingleViewSettings" },
		{ "ModuleRelativePath", "Public/ImpostorFromSingleViewSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_TexCoordPadding = { "TexCoordPadding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImpostorFromSingleViewSettings, TexCoordPadding), METADATA_PARAMS(Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_TexCoordPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_TexCoordPadding_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_UseTightFitting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_TightFittingDepthOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_TwoSided,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_ViewDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::NewProp_TexCoordPadding,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		nullptr,
		&NewStructOps,
		"ImpostorFromSingleViewSettings",
		sizeof(FImpostorFromSingleViewSettings),
		alignof(FImpostorFromSingleViewSettings),
		Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ImpostorFromSingleViewSettings"), sizeof(FImpostorFromSingleViewSettings), Get_Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FImpostorFromSingleViewSettings_Hash() { return 4029062880U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
