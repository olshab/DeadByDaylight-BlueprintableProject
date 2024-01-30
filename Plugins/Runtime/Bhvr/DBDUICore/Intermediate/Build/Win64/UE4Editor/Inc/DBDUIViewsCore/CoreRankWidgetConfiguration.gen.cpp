// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreRankWidgetConfiguration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreRankWidgetConfiguration() {}
// Cross Module References
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FCoreRanksConfiguration();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FCoreRankWidgetConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWSCORE_API uint32 Get_Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration, Z_Construct_UPackage__Script_DBDUIViewsCore(), TEXT("CoreRankWidgetConfiguration"), sizeof(FCoreRankWidgetConfiguration), Get_Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWSCORE_API UScriptStruct* StaticStruct<FCoreRankWidgetConfiguration>()
{
	return FCoreRankWidgetConfiguration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCoreRankWidgetConfiguration(FCoreRankWidgetConfiguration::StaticStruct, TEXT("/Script/DBDUIViewsCore"), TEXT("CoreRankWidgetConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewsCore_StaticRegisterNativesFCoreRankWidgetConfiguration
{
	FScriptStruct_DBDUIViewsCore_StaticRegisterNativesFCoreRankWidgetConfiguration()
	{
		UScriptStruct::DeferCppStructOps<FCoreRankWidgetConfiguration>(FName(TEXT("CoreRankWidgetConfiguration")));
	}
} ScriptStruct_DBDUIViewsCore_StaticRegisterNativesFCoreRankWidgetConfiguration;
	struct Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SurvivorRanks_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SurvivorRanks_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorRanks_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SurvivorRanks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KillerRanks_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KillerRanks_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerRanks_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_KillerRanks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RankNumberImages_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RankNumberImages_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankNumberImages_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RankNumberImages;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CoreRankWidgetConfiguration.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoreRankWidgetConfiguration>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_SurvivorRanks_ValueProp = { "SurvivorRanks", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCoreRanksConfiguration, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_SurvivorRanks_Key_KeyProp = { "SurvivorRanks_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_SurvivorRanks_MetaData[] = {
		{ "Category", "CoreRankWidgetConfiguration" },
		{ "ModuleRelativePath", "Public/CoreRankWidgetConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_SurvivorRanks = { "SurvivorRanks", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCoreRankWidgetConfiguration, SurvivorRanks), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_SurvivorRanks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_SurvivorRanks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_KillerRanks_ValueProp = { "KillerRanks", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCoreRanksConfiguration, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_KillerRanks_Key_KeyProp = { "KillerRanks_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_KillerRanks_MetaData[] = {
		{ "Category", "CoreRankWidgetConfiguration" },
		{ "ModuleRelativePath", "Public/CoreRankWidgetConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_KillerRanks = { "KillerRanks", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCoreRankWidgetConfiguration, KillerRanks), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_KillerRanks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_KillerRanks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_RankNumberImages_ValueProp = { "RankNumberImages", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_RankNumberImages_Key_KeyProp = { "RankNumberImages_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_RankNumberImages_MetaData[] = {
		{ "Category", "CoreRankWidgetConfiguration" },
		{ "ModuleRelativePath", "Public/CoreRankWidgetConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_RankNumberImages = { "RankNumberImages", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCoreRankWidgetConfiguration, RankNumberImages), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_RankNumberImages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_RankNumberImages_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_SurvivorRanks_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_SurvivorRanks_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_SurvivorRanks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_KillerRanks_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_KillerRanks_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_KillerRanks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_RankNumberImages_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_RankNumberImages_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::NewProp_RankNumberImages,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
		nullptr,
		&NewStructOps,
		"CoreRankWidgetConfiguration",
		sizeof(FCoreRankWidgetConfiguration),
		alignof(FCoreRankWidgetConfiguration),
		Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CoreRankWidgetConfiguration"), sizeof(FCoreRankWidgetConfiguration), Get_Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration_Hash() { return 391560492U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
