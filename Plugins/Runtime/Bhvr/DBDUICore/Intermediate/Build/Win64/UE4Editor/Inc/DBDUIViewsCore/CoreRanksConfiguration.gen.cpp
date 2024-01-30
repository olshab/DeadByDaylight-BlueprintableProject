// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreRanksConfiguration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreRanksConfiguration() {}
// Cross Module References
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FCoreRanksConfiguration();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
// End Cross Module References
class UScriptStruct* FCoreRanksConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWSCORE_API uint32 Get_Z_Construct_UScriptStruct_FCoreRanksConfiguration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoreRanksConfiguration, Z_Construct_UPackage__Script_DBDUIViewsCore(), TEXT("CoreRanksConfiguration"), sizeof(FCoreRanksConfiguration), Get_Z_Construct_UScriptStruct_FCoreRanksConfiguration_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWSCORE_API UScriptStruct* StaticStruct<FCoreRanksConfiguration>()
{
	return FCoreRanksConfiguration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCoreRanksConfiguration(FCoreRanksConfiguration::StaticStruct, TEXT("/Script/DBDUIViewsCore"), TEXT("CoreRanksConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewsCore_StaticRegisterNativesFCoreRanksConfiguration
{
	FScriptStruct_DBDUIViewsCore_StaticRegisterNativesFCoreRanksConfiguration()
	{
		UScriptStruct::DeferCppStructOps<FCoreRanksConfiguration>(FName(TEXT("CoreRanksConfiguration")));
	}
} ScriptStruct_DBDUIViewsCore_StaticRegisterNativesFCoreRanksConfiguration;
	struct Z_Construct_UScriptStruct_FCoreRanksConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankBackgroundImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RankBackgroundImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NumberColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoreRanksConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CoreRanksConfiguration.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoreRanksConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoreRanksConfiguration>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoreRanksConfiguration_Statics::NewProp_RankBackgroundImage_MetaData[] = {
		{ "Category", "CoreRanksConfiguration" },
		{ "ModuleRelativePath", "Public/CoreRanksConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCoreRanksConfiguration_Statics::NewProp_RankBackgroundImage = { "RankBackgroundImage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCoreRanksConfiguration, RankBackgroundImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoreRanksConfiguration_Statics::NewProp_RankBackgroundImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreRanksConfiguration_Statics::NewProp_RankBackgroundImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoreRanksConfiguration_Statics::NewProp_NumberColor_MetaData[] = {
		{ "Category", "CoreRanksConfiguration" },
		{ "ModuleRelativePath", "Public/CoreRanksConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoreRanksConfiguration_Statics::NewProp_NumberColor = { "NumberColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCoreRanksConfiguration, NumberColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoreRanksConfiguration_Statics::NewProp_NumberColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreRanksConfiguration_Statics::NewProp_NumberColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoreRanksConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreRanksConfiguration_Statics::NewProp_RankBackgroundImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreRanksConfiguration_Statics::NewProp_NumberColor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoreRanksConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
		nullptr,
		&NewStructOps,
		"CoreRanksConfiguration",
		sizeof(FCoreRanksConfiguration),
		alignof(FCoreRanksConfiguration),
		Z_Construct_UScriptStruct_FCoreRanksConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreRanksConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoreRanksConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreRanksConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoreRanksConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCoreRanksConfiguration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CoreRanksConfiguration"), sizeof(FCoreRanksConfiguration), Get_Z_Construct_UScriptStruct_FCoreRanksConfiguration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCoreRanksConfiguration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCoreRanksConfiguration_Hash() { return 1357278834U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
