// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/SubtitlesEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubtitlesEntry() {}
// Cross Module References
	DBDUIPRESENTERS_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitlesEntry();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
// End Cross Module References
class UScriptStruct* FSubtitlesEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIPRESENTERS_API uint32 Get_Z_Construct_UScriptStruct_FSubtitlesEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubtitlesEntry, Z_Construct_UPackage__Script_DBDUIPresenters(), TEXT("SubtitlesEntry"), sizeof(FSubtitlesEntry), Get_Z_Construct_UScriptStruct_FSubtitlesEntry_Hash());
	}
	return Singleton;
}
template<> DBDUIPRESENTERS_API UScriptStruct* StaticStruct<FSubtitlesEntry>()
{
	return FSubtitlesEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubtitlesEntry(FSubtitlesEntry::StaticStruct, TEXT("/Script/DBDUIPresenters"), TEXT("SubtitlesEntry"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIPresenters_StaticRegisterNativesFSubtitlesEntry
{
	FScriptStruct_DBDUIPresenters_StaticRegisterNativesFSubtitlesEntry()
	{
		UScriptStruct::DeferCppStructOps<FSubtitlesEntry>(FName(TEXT("SubtitlesEntry")));
	}
} ScriptStruct_DBDUIPresenters_StaticRegisterNativesFSubtitlesEntry;
	struct Z_Construct_UScriptStruct_FSubtitlesEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_subtitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_subtitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isAOneLiner_MetaData[];
#endif
		static void NewProp_isAOneLiner_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAOneLiner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasDurationOverride_MetaData[];
#endif
		static void NewProp_hasDurationOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasDurationOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_durationOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_durationOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SubtitlesEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubtitlesEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::NewProp_subtitle_MetaData[] = {
		{ "Category", "SubtitlesEntry" },
		{ "ModuleRelativePath", "Public/SubtitlesEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::NewProp_subtitle = { "subtitle", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubtitlesEntry, subtitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::NewProp_subtitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::NewProp_subtitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::NewProp_isAOneLiner_MetaData[] = {
		{ "Category", "SubtitlesEntry" },
		{ "ModuleRelativePath", "Public/SubtitlesEntry.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::NewProp_isAOneLiner_SetBit(void* Obj)
	{
		((FSubtitlesEntry*)Obj)->isAOneLiner = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::NewProp_isAOneLiner = { "isAOneLiner", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSubtitlesEntry), &Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::NewProp_isAOneLiner_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::NewProp_isAOneLiner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::NewProp_isAOneLiner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::NewProp_hasDurationOverride_MetaData[] = {
		{ "Category", "SubtitlesEntry" },
		{ "ModuleRelativePath", "Public/SubtitlesEntry.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::NewProp_hasDurationOverride_SetBit(void* Obj)
	{
		((FSubtitlesEntry*)Obj)->hasDurationOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::NewProp_hasDurationOverride = { "hasDurationOverride", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSubtitlesEntry), &Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::NewProp_hasDurationOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::NewProp_hasDurationOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::NewProp_hasDurationOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::NewProp_durationOverride_MetaData[] = {
		{ "Category", "SubtitlesEntry" },
		{ "ModuleRelativePath", "Public/SubtitlesEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::NewProp_durationOverride = { "durationOverride", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubtitlesEntry, durationOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::NewProp_durationOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::NewProp_durationOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::NewProp_subtitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::NewProp_isAOneLiner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::NewProp_hasDurationOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::NewProp_durationOverride,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
		nullptr,
		&NewStructOps,
		"SubtitlesEntry",
		sizeof(FSubtitlesEntry),
		alignof(FSubtitlesEntry),
		Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubtitlesEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubtitlesEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIPresenters();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubtitlesEntry"), sizeof(FSubtitlesEntry), Get_Z_Construct_UScriptStruct_FSubtitlesEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubtitlesEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubtitlesEntry_Hash() { return 2337960200U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
