// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/MilestoneTrackerEventBasedSkinViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMilestoneTrackerEventBasedSkinViewData() {}
// Cross Module References
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
// End Cross Module References
class UScriptStruct* FMilestoneTrackerEventBasedSkinViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWSCORE_API uint32 Get_Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData, Z_Construct_UPackage__Script_DBDUIViewsCore(), TEXT("MilestoneTrackerEventBasedSkinViewData"), sizeof(FMilestoneTrackerEventBasedSkinViewData), Get_Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWSCORE_API UScriptStruct* StaticStruct<FMilestoneTrackerEventBasedSkinViewData>()
{
	return FMilestoneTrackerEventBasedSkinViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData(FMilestoneTrackerEventBasedSkinViewData::StaticStruct, TEXT("/Script/DBDUIViewsCore"), TEXT("MilestoneTrackerEventBasedSkinViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewsCore_StaticRegisterNativesFMilestoneTrackerEventBasedSkinViewData
{
	FScriptStruct_DBDUIViewsCore_StaticRegisterNativesFMilestoneTrackerEventBasedSkinViewData()
	{
		UScriptStruct::DeferCppStructOps<FMilestoneTrackerEventBasedSkinViewData>(FName(TEXT("MilestoneTrackerEventBasedSkinViewData")));
	}
} ScriptStruct_DBDUIViewsCore_StaticRegisterNativesFMilestoneTrackerEventBasedSkinViewData;
	struct Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MilestoneTrackerBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MilestoneTrackerBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MilestoneTrackerHighlightBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MilestoneTrackerHighlightBar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MilestoneTrackerEventBasedSkinViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMilestoneTrackerEventBasedSkinViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData_Statics::NewProp_MilestoneTrackerBackground_MetaData[] = {
		{ "Category", "MilestoneTrackerEventBasedSkinViewData" },
		{ "ModuleRelativePath", "Public/MilestoneTrackerEventBasedSkinViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData_Statics::NewProp_MilestoneTrackerBackground = { "MilestoneTrackerBackground", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMilestoneTrackerEventBasedSkinViewData, MilestoneTrackerBackground), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData_Statics::NewProp_MilestoneTrackerBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData_Statics::NewProp_MilestoneTrackerBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData_Statics::NewProp_MilestoneTrackerHighlightBar_MetaData[] = {
		{ "Category", "MilestoneTrackerEventBasedSkinViewData" },
		{ "ModuleRelativePath", "Public/MilestoneTrackerEventBasedSkinViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData_Statics::NewProp_MilestoneTrackerHighlightBar = { "MilestoneTrackerHighlightBar", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMilestoneTrackerEventBasedSkinViewData, MilestoneTrackerHighlightBar), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData_Statics::NewProp_MilestoneTrackerHighlightBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData_Statics::NewProp_MilestoneTrackerHighlightBar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData_Statics::NewProp_MilestoneTrackerBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData_Statics::NewProp_MilestoneTrackerHighlightBar,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
		nullptr,
		&NewStructOps,
		"MilestoneTrackerEventBasedSkinViewData",
		sizeof(FMilestoneTrackerEventBasedSkinViewData),
		alignof(FMilestoneTrackerEventBasedSkinViewData),
		Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MilestoneTrackerEventBasedSkinViewData"), sizeof(FMilestoneTrackerEventBasedSkinViewData), Get_Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData_Hash() { return 878128336U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
