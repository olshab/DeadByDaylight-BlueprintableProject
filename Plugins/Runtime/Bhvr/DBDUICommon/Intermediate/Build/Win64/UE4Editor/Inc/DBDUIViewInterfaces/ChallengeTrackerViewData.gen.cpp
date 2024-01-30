// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ChallengeTrackerViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeTrackerViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeTrackerViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData();
// End Cross Module References
class UScriptStruct* FChallengeTrackerViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FChallengeTrackerViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeTrackerViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("ChallengeTrackerViewData"), sizeof(FChallengeTrackerViewData), Get_Z_Construct_UScriptStruct_FChallengeTrackerViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FChallengeTrackerViewData>()
{
	return FChallengeTrackerViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChallengeTrackerViewData(FChallengeTrackerViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("ChallengeTrackerViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFChallengeTrackerViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFChallengeTrackerViewData()
	{
		UScriptStruct::DeferCppStructOps<FChallengeTrackerViewData>(FName(TEXT("ChallengeTrackerViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFChallengeTrackerViewData;
	struct Z_Construct_UScriptStruct_FChallengeTrackerViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ChallengeTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProgressionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeTrackerViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeTrackerViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChallengeTrackerViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeTrackerViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeTrackerViewData_Statics::NewProp_ChallengeTitle_MetaData[] = {
		{ "Category", "ChallengeTrackerViewData" },
		{ "ModuleRelativePath", "Public/ChallengeTrackerViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FChallengeTrackerViewData_Statics::NewProp_ChallengeTitle = { "ChallengeTitle", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeTrackerViewData, ChallengeTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeTrackerViewData_Statics::NewProp_ChallengeTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeTrackerViewData_Statics::NewProp_ChallengeTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeTrackerViewData_Statics::NewProp_ProgressionData_MetaData[] = {
		{ "Category", "ChallengeTrackerViewData" },
		{ "ModuleRelativePath", "Public/ChallengeTrackerViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeTrackerViewData_Statics::NewProp_ProgressionData = { "ProgressionData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeTrackerViewData, ProgressionData), Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeTrackerViewData_Statics::NewProp_ProgressionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeTrackerViewData_Statics::NewProp_ProgressionData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeTrackerViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeTrackerViewData_Statics::NewProp_ChallengeTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeTrackerViewData_Statics::NewProp_ProgressionData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeTrackerViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"ChallengeTrackerViewData",
		sizeof(FChallengeTrackerViewData),
		alignof(FChallengeTrackerViewData),
		Z_Construct_UScriptStruct_FChallengeTrackerViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeTrackerViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeTrackerViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeTrackerViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChallengeTrackerViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChallengeTrackerViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChallengeTrackerViewData"), sizeof(FChallengeTrackerViewData), Get_Z_Construct_UScriptStruct_FChallengeTrackerViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChallengeTrackerViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChallengeTrackerViewData_Hash() { return 1787512562U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
