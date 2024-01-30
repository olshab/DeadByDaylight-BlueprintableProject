// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/InputMaterialSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputMaterialSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FInputMaterialSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
class UScriptStruct* FInputMaterialSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FInputMaterialSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputMaterialSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("InputMaterialSettings"), sizeof(FInputMaterialSettings), Get_Z_Construct_UScriptStruct_FInputMaterialSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FInputMaterialSettings>()
{
	return FInputMaterialSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputMaterialSettings(FInputMaterialSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("InputMaterialSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFInputMaterialSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFInputMaterialSettings()
	{
		UScriptStruct::DeferCppStructOps<FInputMaterialSettings>(FName(TEXT("InputMaterialSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFInputMaterialSettings;
	struct Z_Construct_UScriptStruct_FInputMaterialSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialMapping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMaterialSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InputMaterialSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputMaterialSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputMaterialSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMaterialSettings_Statics::NewProp_MaterialMapping_MetaData[] = {
		{ "Category", "InputMaterialSettings" },
		{ "ModuleRelativePath", "Public/InputMaterialSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInputMaterialSettings_Statics::NewProp_MaterialMapping = { "MaterialMapping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMaterialSettings, MaterialMapping), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMaterialSettings_Statics::NewProp_MaterialMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMaterialSettings_Statics::NewProp_MaterialMapping_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputMaterialSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMaterialSettings_Statics::NewProp_MaterialMapping,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputMaterialSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		nullptr,
		&NewStructOps,
		"InputMaterialSettings",
		sizeof(FInputMaterialSettings),
		alignof(FInputMaterialSettings),
		Z_Construct_UScriptStruct_FInputMaterialSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMaterialSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMaterialSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMaterialSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputMaterialSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputMaterialSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputMaterialSettings"), sizeof(FInputMaterialSettings), Get_Z_Construct_UScriptStruct_FInputMaterialSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputMaterialSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputMaterialSettings_Hash() { return 886748850U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
