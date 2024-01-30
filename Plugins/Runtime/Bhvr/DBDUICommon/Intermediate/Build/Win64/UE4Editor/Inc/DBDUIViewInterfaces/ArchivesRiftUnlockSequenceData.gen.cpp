// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ArchivesRiftUnlockSequenceData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchivesRiftUnlockSequenceData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
class UScriptStruct* FArchivesRiftUnlockSequenceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("ArchivesRiftUnlockSequenceData"), sizeof(FArchivesRiftUnlockSequenceData), Get_Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FArchivesRiftUnlockSequenceData>()
{
	return FArchivesRiftUnlockSequenceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArchivesRiftUnlockSequenceData(FArchivesRiftUnlockSequenceData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("ArchivesRiftUnlockSequenceData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchivesRiftUnlockSequenceData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchivesRiftUnlockSequenceData()
	{
		UScriptStruct::DeferCppStructOps<FArchivesRiftUnlockSequenceData>(FName(TEXT("ArchivesRiftUnlockSequenceData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchivesRiftUnlockSequenceData;
	struct Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentTier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousTier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreviousTier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPremiumUnlocked_MetaData[];
#endif
		static void NewProp_IsPremiumUnlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPremiumUnlocked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArchivesRiftUnlockSequenceData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchivesRiftUnlockSequenceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics::NewProp_CurrentTier_MetaData[] = {
		{ "Category", "ArchivesRiftUnlockSequenceData" },
		{ "ModuleRelativePath", "Public/ArchivesRiftUnlockSequenceData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics::NewProp_CurrentTier = { "CurrentTier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesRiftUnlockSequenceData, CurrentTier), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics::NewProp_CurrentTier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics::NewProp_CurrentTier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics::NewProp_PreviousTier_MetaData[] = {
		{ "Category", "ArchivesRiftUnlockSequenceData" },
		{ "ModuleRelativePath", "Public/ArchivesRiftUnlockSequenceData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics::NewProp_PreviousTier = { "PreviousTier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesRiftUnlockSequenceData, PreviousTier), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics::NewProp_PreviousTier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics::NewProp_PreviousTier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics::NewProp_IsPremiumUnlocked_MetaData[] = {
		{ "Category", "ArchivesRiftUnlockSequenceData" },
		{ "ModuleRelativePath", "Public/ArchivesRiftUnlockSequenceData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics::NewProp_IsPremiumUnlocked_SetBit(void* Obj)
	{
		((FArchivesRiftUnlockSequenceData*)Obj)->IsPremiumUnlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics::NewProp_IsPremiumUnlocked = { "IsPremiumUnlocked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FArchivesRiftUnlockSequenceData), &Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics::NewProp_IsPremiumUnlocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics::NewProp_IsPremiumUnlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics::NewProp_IsPremiumUnlocked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics::NewProp_CurrentTier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics::NewProp_PreviousTier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics::NewProp_IsPremiumUnlocked,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"ArchivesRiftUnlockSequenceData",
		sizeof(FArchivesRiftUnlockSequenceData),
		alignof(FArchivesRiftUnlockSequenceData),
		Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArchivesRiftUnlockSequenceData"), sizeof(FArchivesRiftUnlockSequenceData), Get_Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArchivesRiftUnlockSequenceData_Hash() { return 4290697617U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
