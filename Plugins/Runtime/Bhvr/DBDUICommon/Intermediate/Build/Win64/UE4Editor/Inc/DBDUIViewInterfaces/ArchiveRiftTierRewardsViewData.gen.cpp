// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ArchiveRiftTierRewardsViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveRiftTierRewardsViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_ETierType();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FRewardWrapperViewData();
// End Cross Module References
class UScriptStruct* FArchiveRiftTierRewardsViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("ArchiveRiftTierRewardsViewData"), sizeof(FArchiveRiftTierRewardsViewData), Get_Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FArchiveRiftTierRewardsViewData>()
{
	return FArchiveRiftTierRewardsViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArchiveRiftTierRewardsViewData(FArchiveRiftTierRewardsViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("ArchiveRiftTierRewardsViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchiveRiftTierRewardsViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchiveRiftTierRewardsViewData()
	{
		UScriptStruct::DeferCppStructOps<FArchiveRiftTierRewardsViewData>(FName(TEXT("ArchiveRiftTierRewardsViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchiveRiftTierRewardsViewData;
	struct Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Tier;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TierType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TierType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TierType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TierProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TierProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPremiumUnlocked_MetaData[];
#endif
		static void NewProp_IsPremiumUnlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPremiumUnlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCurrentTier_MetaData[];
#endif
		static void NewProp_IsCurrentTier_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCurrentTier;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FreeRewards_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FreeRewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FreeRewards;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PremiumRewards_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PremiumRewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PremiumRewards;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArchiveRiftTierRewardsViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchiveRiftTierRewardsViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_Tier_MetaData[] = {
		{ "Category", "ArchiveRiftTierRewardsViewData" },
		{ "ModuleRelativePath", "Public/ArchiveRiftTierRewardsViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_Tier = { "Tier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveRiftTierRewardsViewData, Tier), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_Tier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_Tier_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_TierType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_TierType_MetaData[] = {
		{ "Category", "ArchiveRiftTierRewardsViewData" },
		{ "ModuleRelativePath", "Public/ArchiveRiftTierRewardsViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_TierType = { "TierType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveRiftTierRewardsViewData, TierType), Z_Construct_UEnum_DBDUIViewInterfaces_ETierType, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_TierType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_TierType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_TierProgress_MetaData[] = {
		{ "Category", "ArchiveRiftTierRewardsViewData" },
		{ "ModuleRelativePath", "Public/ArchiveRiftTierRewardsViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_TierProgress = { "TierProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveRiftTierRewardsViewData, TierProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_TierProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_TierProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_IsPremiumUnlocked_MetaData[] = {
		{ "Category", "ArchiveRiftTierRewardsViewData" },
		{ "ModuleRelativePath", "Public/ArchiveRiftTierRewardsViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_IsPremiumUnlocked_SetBit(void* Obj)
	{
		((FArchiveRiftTierRewardsViewData*)Obj)->IsPremiumUnlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_IsPremiumUnlocked = { "IsPremiumUnlocked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FArchiveRiftTierRewardsViewData), &Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_IsPremiumUnlocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_IsPremiumUnlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_IsPremiumUnlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_IsCurrentTier_MetaData[] = {
		{ "Category", "ArchiveRiftTierRewardsViewData" },
		{ "ModuleRelativePath", "Public/ArchiveRiftTierRewardsViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_IsCurrentTier_SetBit(void* Obj)
	{
		((FArchiveRiftTierRewardsViewData*)Obj)->IsCurrentTier = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_IsCurrentTier = { "IsCurrentTier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FArchiveRiftTierRewardsViewData), &Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_IsCurrentTier_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_IsCurrentTier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_IsCurrentTier_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_FreeRewards_Inner = { "FreeRewards", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRewardWrapperViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_FreeRewards_MetaData[] = {
		{ "Category", "ArchiveRiftTierRewardsViewData" },
		{ "ModuleRelativePath", "Public/ArchiveRiftTierRewardsViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_FreeRewards = { "FreeRewards", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveRiftTierRewardsViewData, FreeRewards), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_FreeRewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_FreeRewards_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_PremiumRewards_Inner = { "PremiumRewards", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRewardWrapperViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_PremiumRewards_MetaData[] = {
		{ "Category", "ArchiveRiftTierRewardsViewData" },
		{ "ModuleRelativePath", "Public/ArchiveRiftTierRewardsViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_PremiumRewards = { "PremiumRewards", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveRiftTierRewardsViewData, PremiumRewards), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_PremiumRewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_PremiumRewards_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_Tier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_TierType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_TierType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_TierProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_IsPremiumUnlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_IsCurrentTier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_FreeRewards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_FreeRewards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_PremiumRewards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::NewProp_PremiumRewards,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"ArchiveRiftTierRewardsViewData",
		sizeof(FArchiveRiftTierRewardsViewData),
		alignof(FArchiveRiftTierRewardsViewData),
		Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArchiveRiftTierRewardsViewData"), sizeof(FArchiveRiftTierRewardsViewData), Get_Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData_Hash() { return 1354650010U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
