// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ArchivesVignetteViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchivesVignetteViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchivesVignetteViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData();
// End Cross Module References
class UScriptStruct* FArchivesVignetteViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FArchivesVignetteViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchivesVignetteViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("ArchivesVignetteViewData"), sizeof(FArchivesVignetteViewData), Get_Z_Construct_UScriptStruct_FArchivesVignetteViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FArchivesVignetteViewData>()
{
	return FArchivesVignetteViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArchivesVignetteViewData(FArchivesVignetteViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("ArchivesVignetteViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchivesVignetteViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchivesVignetteViewData()
	{
		UScriptStruct::DeferCppStructOps<FArchivesVignetteViewData>(FName(TEXT("ArchivesVignetteViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchivesVignetteViewData;
	struct Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VignetteId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VignetteId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Subtitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastShownProgressValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastShownProgressValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CinematicsNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CinematicsNumber;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Entries;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArchivesVignetteViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchivesVignetteViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_VignetteId_MetaData[] = {
		{ "Category", "ArchivesVignetteViewData" },
		{ "ModuleRelativePath", "Public/ArchivesVignetteViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_VignetteId = { "VignetteId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesVignetteViewData, VignetteId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_VignetteId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_VignetteId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "ArchivesVignetteViewData" },
		{ "ModuleRelativePath", "Public/ArchivesVignetteViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesVignetteViewData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_Subtitle_MetaData[] = {
		{ "Category", "ArchivesVignetteViewData" },
		{ "ModuleRelativePath", "Public/ArchivesVignetteViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_Subtitle = { "Subtitle", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesVignetteViewData, Subtitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_Subtitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_Subtitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_LastShownProgressValue_MetaData[] = {
		{ "Category", "ArchivesVignetteViewData" },
		{ "ModuleRelativePath", "Public/ArchivesVignetteViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_LastShownProgressValue = { "LastShownProgressValue", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesVignetteViewData, LastShownProgressValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_LastShownProgressValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_LastShownProgressValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_CurrentProgress_MetaData[] = {
		{ "Category", "ArchivesVignetteViewData" },
		{ "ModuleRelativePath", "Public/ArchivesVignetteViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesVignetteViewData, CurrentProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_CurrentProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_CurrentProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_MaxProgress_MetaData[] = {
		{ "Category", "ArchivesVignetteViewData" },
		{ "ModuleRelativePath", "Public/ArchivesVignetteViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_MaxProgress = { "MaxProgress", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesVignetteViewData, MaxProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_MaxProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_MaxProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_CinematicsNumber_MetaData[] = {
		{ "Category", "ArchivesVignetteViewData" },
		{ "ModuleRelativePath", "Public/ArchivesVignetteViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_CinematicsNumber = { "CinematicsNumber", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesVignetteViewData, CinematicsNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_CinematicsNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_CinematicsNumber_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_Entries_MetaData[] = {
		{ "Category", "ArchivesVignetteViewData" },
		{ "ModuleRelativePath", "Public/ArchivesVignetteViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesVignetteViewData, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_Entries_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_VignetteId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_Subtitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_LastShownProgressValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_CurrentProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_MaxProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_CinematicsNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_Entries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::NewProp_Entries,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"ArchivesVignetteViewData",
		sizeof(FArchivesVignetteViewData),
		alignof(FArchivesVignetteViewData),
		Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArchivesVignetteViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArchivesVignetteViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArchivesVignetteViewData"), sizeof(FArchivesVignetteViewData), Get_Z_Construct_UScriptStruct_FArchivesVignetteViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArchivesVignetteViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArchivesVignetteViewData_Hash() { return 4199966582U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
