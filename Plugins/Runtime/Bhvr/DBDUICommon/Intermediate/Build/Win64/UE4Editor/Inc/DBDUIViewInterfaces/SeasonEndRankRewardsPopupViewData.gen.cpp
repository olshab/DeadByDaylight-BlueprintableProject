// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/SeasonEndRankRewardsPopupViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeasonEndRankRewardsPopupViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_USeasonEndRankRewardsPopupViewData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UGenericPopupViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FRewardWrapperViewData();
// End Cross Module References
	void USeasonEndRankRewardsPopupViewData::StaticRegisterNativesUSeasonEndRankRewardsPopupViewData()
	{
	}
	UClass* Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_NoRegister()
	{
		return USeasonEndRankRewardsPopupViewData::StaticClass();
	}
	struct Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldKillerRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OldKillerRank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldSurvivorRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OldSurvivorRank;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SurvivorRewards_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorRewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SurvivorRewards;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KillerRewards_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerRewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KillerRewards;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupViewData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SeasonEndRankRewardsPopupViewData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SeasonEndRankRewardsPopupViewData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::NewProp_OldKillerRank_MetaData[] = {
		{ "Category", "SeasonEndRankRewardsPopupViewData" },
		{ "ModuleRelativePath", "Public/SeasonEndRankRewardsPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::NewProp_OldKillerRank = { "OldKillerRank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USeasonEndRankRewardsPopupViewData, OldKillerRank), METADATA_PARAMS(Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::NewProp_OldKillerRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::NewProp_OldKillerRank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::NewProp_OldSurvivorRank_MetaData[] = {
		{ "Category", "SeasonEndRankRewardsPopupViewData" },
		{ "ModuleRelativePath", "Public/SeasonEndRankRewardsPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::NewProp_OldSurvivorRank = { "OldSurvivorRank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USeasonEndRankRewardsPopupViewData, OldSurvivorRank), METADATA_PARAMS(Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::NewProp_OldSurvivorRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::NewProp_OldSurvivorRank_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::NewProp_SurvivorRewards_Inner = { "SurvivorRewards", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRewardWrapperViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::NewProp_SurvivorRewards_MetaData[] = {
		{ "Category", "SeasonEndRankRewardsPopupViewData" },
		{ "ModuleRelativePath", "Public/SeasonEndRankRewardsPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::NewProp_SurvivorRewards = { "SurvivorRewards", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USeasonEndRankRewardsPopupViewData, SurvivorRewards), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::NewProp_SurvivorRewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::NewProp_SurvivorRewards_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::NewProp_KillerRewards_Inner = { "KillerRewards", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRewardWrapperViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::NewProp_KillerRewards_MetaData[] = {
		{ "Category", "SeasonEndRankRewardsPopupViewData" },
		{ "ModuleRelativePath", "Public/SeasonEndRankRewardsPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::NewProp_KillerRewards = { "KillerRewards", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USeasonEndRankRewardsPopupViewData, KillerRewards), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::NewProp_KillerRewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::NewProp_KillerRewards_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::NewProp_OldKillerRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::NewProp_OldSurvivorRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::NewProp_SurvivorRewards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::NewProp_SurvivorRewards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::NewProp_KillerRewards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::NewProp_KillerRewards,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USeasonEndRankRewardsPopupViewData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::ClassParams = {
		&USeasonEndRankRewardsPopupViewData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USeasonEndRankRewardsPopupViewData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USeasonEndRankRewardsPopupViewData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USeasonEndRankRewardsPopupViewData, 3526079927);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<USeasonEndRankRewardsPopupViewData>()
	{
		return USeasonEndRankRewardsPopupViewData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USeasonEndRankRewardsPopupViewData(Z_Construct_UClass_USeasonEndRankRewardsPopupViewData, &USeasonEndRankRewardsPopupViewData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("USeasonEndRankRewardsPopupViewData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USeasonEndRankRewardsPopupViewData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
