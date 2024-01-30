// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/ProcessingPopupPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProcessingPopupPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UProcessingPopupPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UProcessingPopupPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UBasePopupPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
// End Cross Module References
	void UProcessingPopupPresenter::StaticRegisterNativesUProcessingPopupPresenter()
	{
	}
	UClass* Z_Construct_UClass_UProcessingPopupPresenter_NoRegister()
	{
		return UProcessingPopupPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UProcessingPopupPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProcessingPopupPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasePopupPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProcessingPopupPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ProcessingPopupPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ProcessingPopupPresenter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProcessingPopupPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProcessingPopupPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProcessingPopupPresenter_Statics::ClassParams = {
		&UProcessingPopupPresenter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UProcessingPopupPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProcessingPopupPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProcessingPopupPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProcessingPopupPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProcessingPopupPresenter, 133449095);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UProcessingPopupPresenter>()
	{
		return UProcessingPopupPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProcessingPopupPresenter(Z_Construct_UClass_UProcessingPopupPresenter, &UProcessingPopupPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UProcessingPopupPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProcessingPopupPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
