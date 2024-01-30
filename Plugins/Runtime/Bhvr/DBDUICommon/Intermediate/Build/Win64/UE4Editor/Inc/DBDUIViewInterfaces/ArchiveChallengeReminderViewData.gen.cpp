// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ArchiveChallengeReminderViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveChallengeReminderViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveNodeViewData();
// End Cross Module References
class UScriptStruct* FArchiveChallengeReminderViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("ArchiveChallengeReminderViewData"), sizeof(FArchiveChallengeReminderViewData), Get_Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FArchiveChallengeReminderViewData>()
{
	return FArchiveChallengeReminderViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArchiveChallengeReminderViewData(FArchiveChallengeReminderViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("ArchiveChallengeReminderViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchiveChallengeReminderViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchiveChallengeReminderViewData()
	{
		UScriptStruct::DeferCppStructOps<FArchiveChallengeReminderViewData>(FName(TEXT("ArchiveChallengeReminderViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchiveChallengeReminderViewData;
	struct Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TomeSourceSubtitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TomeSourceSubtitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArchiveChallengeReminderViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchiveChallengeReminderViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData_Statics::NewProp_NodeViewData_MetaData[] = {
		{ "Category", "ArchiveChallengeReminderViewData" },
		{ "ModuleRelativePath", "Public/ArchiveChallengeReminderViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData_Statics::NewProp_NodeViewData = { "NodeViewData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveChallengeReminderViewData, NodeViewData), Z_Construct_UScriptStruct_FArchiveNodeViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData_Statics::NewProp_NodeViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData_Statics::NewProp_NodeViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData_Statics::NewProp_TomeSourceSubtitle_MetaData[] = {
		{ "Category", "ArchiveChallengeReminderViewData" },
		{ "ModuleRelativePath", "Public/ArchiveChallengeReminderViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData_Statics::NewProp_TomeSourceSubtitle = { "TomeSourceSubtitle", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveChallengeReminderViewData, TomeSourceSubtitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData_Statics::NewProp_TomeSourceSubtitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData_Statics::NewProp_TomeSourceSubtitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData_Statics::NewProp_NodeViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData_Statics::NewProp_TomeSourceSubtitle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"ArchiveChallengeReminderViewData",
		sizeof(FArchiveChallengeReminderViewData),
		alignof(FArchiveChallengeReminderViewData),
		Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArchiveChallengeReminderViewData"), sizeof(FArchiveChallengeReminderViewData), Get_Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData_Hash() { return 446955557U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
