// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkXboxOneApuHeapInitializationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkXboxOneApuHeapInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAkXboxOneApuHeapInitializationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkXboxOneApuHeapInitializationSettings"), sizeof(FAkXboxOneApuHeapInitializationSettings), Get_Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkXboxOneApuHeapInitializationSettings>()
{
	return FAkXboxOneApuHeapInitializationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings(FAkXboxOneApuHeapInitializationSettings::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkXboxOneApuHeapInitializationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkXboxOneApuHeapInitializationSettings
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkXboxOneApuHeapInitializationSettings()
	{
		UScriptStruct::DeferCppStructOps<FAkXboxOneApuHeapInitializationSettings>(FName(TEXT("AkXboxOneApuHeapInitializationSettings")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkXboxOneApuHeapInitializationSettings;
	struct Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CachedSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonCachedSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NonCachedSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkXboxOneApuHeapInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkXboxOneApuHeapInitializationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::NewProp_CachedSize_MetaData[] = {
		{ "Category", "AkXboxOneApuHeapInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkXboxOneApuHeapInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::NewProp_CachedSize = { "CachedSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkXboxOneApuHeapInitializationSettings, CachedSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::NewProp_CachedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::NewProp_CachedSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::NewProp_NonCachedSize_MetaData[] = {
		{ "Category", "AkXboxOneApuHeapInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkXboxOneApuHeapInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::NewProp_NonCachedSize = { "NonCachedSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkXboxOneApuHeapInitializationSettings, NonCachedSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::NewProp_NonCachedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::NewProp_NonCachedSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::NewProp_CachedSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::NewProp_NonCachedSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkXboxOneApuHeapInitializationSettings",
		sizeof(FAkXboxOneApuHeapInitializationSettings),
		alignof(FAkXboxOneApuHeapInitializationSettings),
		Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkXboxOneApuHeapInitializationSettings"), sizeof(FAkXboxOneApuHeapInitializationSettings), Get_Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Hash() { return 608781946U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
