// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ArchivesRiftGenericViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchivesRiftGenericViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchivesRiftGenericViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FArchivesRiftGenericViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchivesRiftGenericViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("ArchivesRiftGenericViewData"), sizeof(FArchivesRiftGenericViewData), Get_Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FArchivesRiftGenericViewData>()
{
	return FArchivesRiftGenericViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArchivesRiftGenericViewData(FArchivesRiftGenericViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("ArchivesRiftGenericViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchivesRiftGenericViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchivesRiftGenericViewData()
	{
		UScriptStruct::DeferCppStructOps<FArchivesRiftGenericViewData>(FName(TEXT("ArchivesRiftGenericViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchivesRiftGenericViewData;
	struct Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentTier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentStars_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentStars;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StarsPerTiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StarsPerTiers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnPass_MetaData[];
#endif
		static void NewProp_OwnPass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OwnPass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowBonusTierTooltip_MetaData[];
#endif
		static void NewProp_ShowBonusTierTooltip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowBonusTierTooltip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArchivesRiftGenericViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchivesRiftGenericViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_EndDate_MetaData[] = {
		{ "Category", "ArchivesRiftGenericViewData" },
		{ "ModuleRelativePath", "Public/ArchivesRiftGenericViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesRiftGenericViewData, EndDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_EndDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_EndDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_CurrentTier_MetaData[] = {
		{ "Category", "ArchivesRiftGenericViewData" },
		{ "ModuleRelativePath", "Public/ArchivesRiftGenericViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_CurrentTier = { "CurrentTier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesRiftGenericViewData, CurrentTier), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_CurrentTier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_CurrentTier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_MaxTier_MetaData[] = {
		{ "Category", "ArchivesRiftGenericViewData" },
		{ "ModuleRelativePath", "Public/ArchivesRiftGenericViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_MaxTier = { "MaxTier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesRiftGenericViewData, MaxTier), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_MaxTier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_MaxTier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_CurrentStars_MetaData[] = {
		{ "Category", "ArchivesRiftGenericViewData" },
		{ "ModuleRelativePath", "Public/ArchivesRiftGenericViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_CurrentStars = { "CurrentStars", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesRiftGenericViewData, CurrentStars), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_CurrentStars_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_CurrentStars_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_StarsPerTiers_MetaData[] = {
		{ "Category", "ArchivesRiftGenericViewData" },
		{ "ModuleRelativePath", "Public/ArchivesRiftGenericViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_StarsPerTiers = { "StarsPerTiers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesRiftGenericViewData, StarsPerTiers), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_StarsPerTiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_StarsPerTiers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_OwnPass_MetaData[] = {
		{ "Category", "ArchivesRiftGenericViewData" },
		{ "ModuleRelativePath", "Public/ArchivesRiftGenericViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_OwnPass_SetBit(void* Obj)
	{
		((FArchivesRiftGenericViewData*)Obj)->OwnPass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_OwnPass = { "OwnPass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FArchivesRiftGenericViewData), &Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_OwnPass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_OwnPass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_OwnPass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_ShowBonusTierTooltip_MetaData[] = {
		{ "Category", "ArchivesRiftGenericViewData" },
		{ "ModuleRelativePath", "Public/ArchivesRiftGenericViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_ShowBonusTierTooltip_SetBit(void* Obj)
	{
		((FArchivesRiftGenericViewData*)Obj)->ShowBonusTierTooltip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_ShowBonusTierTooltip = { "ShowBonusTierTooltip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FArchivesRiftGenericViewData), &Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_ShowBonusTierTooltip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_ShowBonusTierTooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_ShowBonusTierTooltip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_EndDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_CurrentTier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_MaxTier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_CurrentStars,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_StarsPerTiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_OwnPass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::NewProp_ShowBonusTierTooltip,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"ArchivesRiftGenericViewData",
		sizeof(FArchivesRiftGenericViewData),
		alignof(FArchivesRiftGenericViewData),
		Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArchivesRiftGenericViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArchivesRiftGenericViewData"), sizeof(FArchivesRiftGenericViewData), Get_Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArchivesRiftGenericViewData_Hash() { return 2180911502U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
