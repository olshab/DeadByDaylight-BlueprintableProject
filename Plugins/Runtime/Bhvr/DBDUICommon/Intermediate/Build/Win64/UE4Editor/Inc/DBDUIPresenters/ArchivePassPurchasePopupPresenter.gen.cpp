// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/ArchivePassPurchasePopupPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchivePassPurchasePopupPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UArchivePassPurchasePopupPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UArchivePassPurchasePopupPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UGenericPopupPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
// End Cross Module References
	void UArchivePassPurchasePopupPresenter::StaticRegisterNativesUArchivePassPurchasePopupPresenter()
	{
	}
	UClass* Z_Construct_UClass_UArchivePassPurchasePopupPresenter_NoRegister()
	{
		return UArchivePassPurchasePopupPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UArchivePassPurchasePopupPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchivePassPurchasePopupPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchivePassPurchasePopupPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ArchivePassPurchasePopupPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArchivePassPurchasePopupPresenter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchivePassPurchasePopupPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchivePassPurchasePopupPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchivePassPurchasePopupPresenter_Statics::ClassParams = {
		&UArchivePassPurchasePopupPresenter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UArchivePassPurchasePopupPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchivePassPurchasePopupPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchivePassPurchasePopupPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchivePassPurchasePopupPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchivePassPurchasePopupPresenter, 3384912025);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UArchivePassPurchasePopupPresenter>()
	{
		return UArchivePassPurchasePopupPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchivePassPurchasePopupPresenter(Z_Construct_UClass_UArchivePassPurchasePopupPresenter, &UArchivePassPurchasePopupPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UArchivePassPurchasePopupPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchivePassPurchasePopupPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
