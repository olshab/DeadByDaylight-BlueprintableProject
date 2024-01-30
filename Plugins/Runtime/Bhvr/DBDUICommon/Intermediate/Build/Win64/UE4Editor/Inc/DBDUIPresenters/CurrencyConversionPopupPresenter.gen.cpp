// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/CurrencyConversionPopupPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurrencyConversionPopupPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UCurrencyConversionPopupPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UCurrencyConversionPopupPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UGenericPopupPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
// End Cross Module References
	void UCurrencyConversionPopupPresenter::StaticRegisterNativesUCurrencyConversionPopupPresenter()
	{
	}
	UClass* Z_Construct_UClass_UCurrencyConversionPopupPresenter_NoRegister()
	{
		return UCurrencyConversionPopupPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UCurrencyConversionPopupPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurrencyConversionPopupPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrencyConversionPopupPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CurrencyConversionPopupPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CurrencyConversionPopupPresenter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurrencyConversionPopupPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurrencyConversionPopupPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCurrencyConversionPopupPresenter_Statics::ClassParams = {
		&UCurrencyConversionPopupPresenter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCurrencyConversionPopupPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyConversionPopupPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurrencyConversionPopupPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCurrencyConversionPopupPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCurrencyConversionPopupPresenter, 2230017814);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UCurrencyConversionPopupPresenter>()
	{
		return UCurrencyConversionPopupPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurrencyConversionPopupPresenter(Z_Construct_UClass_UCurrencyConversionPopupPresenter, &UCurrencyConversionPopupPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UCurrencyConversionPopupPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurrencyConversionPopupPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
