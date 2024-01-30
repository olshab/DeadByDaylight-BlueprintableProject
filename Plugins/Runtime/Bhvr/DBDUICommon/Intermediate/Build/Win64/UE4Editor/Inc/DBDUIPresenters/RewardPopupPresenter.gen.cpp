// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/RewardPopupPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRewardPopupPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_URewardPopupPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_URewardPopupPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UGenericPopupPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
// End Cross Module References
	void URewardPopupPresenter::StaticRegisterNativesURewardPopupPresenter()
	{
	}
	UClass* Z_Construct_UClass_URewardPopupPresenter_NoRegister()
	{
		return URewardPopupPresenter::StaticClass();
	}
	struct Z_Construct_UClass_URewardPopupPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URewardPopupPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URewardPopupPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RewardPopupPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RewardPopupPresenter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URewardPopupPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URewardPopupPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URewardPopupPresenter_Statics::ClassParams = {
		&URewardPopupPresenter::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URewardPopupPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URewardPopupPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URewardPopupPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URewardPopupPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URewardPopupPresenter, 3588667078);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<URewardPopupPresenter>()
	{
		return URewardPopupPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URewardPopupPresenter(Z_Construct_UClass_URewardPopupPresenter, &URewardPopupPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("URewardPopupPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URewardPopupPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
