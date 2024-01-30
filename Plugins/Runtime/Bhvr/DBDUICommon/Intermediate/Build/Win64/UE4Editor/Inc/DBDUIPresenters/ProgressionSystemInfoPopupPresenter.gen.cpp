// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/ProgressionSystemInfoPopupPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProgressionSystemInfoPopupPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UProgressionSystemInfoPopupPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UProgressionSystemInfoPopupPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UGenericPopupPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
// End Cross Module References
	void UProgressionSystemInfoPopupPresenter::StaticRegisterNativesUProgressionSystemInfoPopupPresenter()
	{
	}
	UClass* Z_Construct_UClass_UProgressionSystemInfoPopupPresenter_NoRegister()
	{
		return UProgressionSystemInfoPopupPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UProgressionSystemInfoPopupPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProgressionSystemInfoPopupPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressionSystemInfoPopupPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ProgressionSystemInfoPopupPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ProgressionSystemInfoPopupPresenter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProgressionSystemInfoPopupPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProgressionSystemInfoPopupPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProgressionSystemInfoPopupPresenter_Statics::ClassParams = {
		&UProgressionSystemInfoPopupPresenter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UProgressionSystemInfoPopupPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProgressionSystemInfoPopupPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProgressionSystemInfoPopupPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProgressionSystemInfoPopupPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProgressionSystemInfoPopupPresenter, 933203523);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UProgressionSystemInfoPopupPresenter>()
	{
		return UProgressionSystemInfoPopupPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProgressionSystemInfoPopupPresenter(Z_Construct_UClass_UProgressionSystemInfoPopupPresenter, &UProgressionSystemInfoPopupPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UProgressionSystemInfoPopupPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProgressionSystemInfoPopupPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
