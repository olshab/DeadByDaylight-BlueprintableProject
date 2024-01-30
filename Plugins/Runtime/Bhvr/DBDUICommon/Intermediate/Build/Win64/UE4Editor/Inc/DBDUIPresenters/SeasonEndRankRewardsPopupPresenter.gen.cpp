// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/SeasonEndRankRewardsPopupPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeasonEndRankRewardsPopupPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USeasonEndRankRewardsPopupPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USeasonEndRankRewardsPopupPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UGenericPopupPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
// End Cross Module References
	void USeasonEndRankRewardsPopupPresenter::StaticRegisterNativesUSeasonEndRankRewardsPopupPresenter()
	{
	}
	UClass* Z_Construct_UClass_USeasonEndRankRewardsPopupPresenter_NoRegister()
	{
		return USeasonEndRankRewardsPopupPresenter::StaticClass();
	}
	struct Z_Construct_UClass_USeasonEndRankRewardsPopupPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USeasonEndRankRewardsPopupPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USeasonEndRankRewardsPopupPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SeasonEndRankRewardsPopupPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SeasonEndRankRewardsPopupPresenter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USeasonEndRankRewardsPopupPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USeasonEndRankRewardsPopupPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USeasonEndRankRewardsPopupPresenter_Statics::ClassParams = {
		&USeasonEndRankRewardsPopupPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USeasonEndRankRewardsPopupPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USeasonEndRankRewardsPopupPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USeasonEndRankRewardsPopupPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USeasonEndRankRewardsPopupPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USeasonEndRankRewardsPopupPresenter, 2925535452);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<USeasonEndRankRewardsPopupPresenter>()
	{
		return USeasonEndRankRewardsPopupPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USeasonEndRankRewardsPopupPresenter(Z_Construct_UClass_USeasonEndRankRewardsPopupPresenter, &USeasonEndRankRewardsPopupPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("USeasonEndRankRewardsPopupPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USeasonEndRankRewardsPopupPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
