// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/UnlockPersonalPerksPopupPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnlockPersonalPerksPopupPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UUnlockPersonalPerksPopupPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UUnlockPersonalPerksPopupPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UGenericPopupPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UMenuPerkViewData_NoRegister();
// End Cross Module References
	void UUnlockPersonalPerksPopupPresenter::StaticRegisterNativesUUnlockPersonalPerksPopupPresenter()
	{
	}
	UClass* Z_Construct_UClass_UUnlockPersonalPerksPopupPresenter_NoRegister()
	{
		return UUnlockPersonalPerksPopupPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UUnlockPersonalPerksPopupPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__perksData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perksData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__perksData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnlockPersonalPerksPopupPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnlockPersonalPerksPopupPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UnlockPersonalPerksPopupPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UnlockPersonalPerksPopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnlockPersonalPerksPopupPresenter_Statics::NewProp__perksData_Inner = { "_perksData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMenuPerkViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnlockPersonalPerksPopupPresenter_Statics::NewProp__perksData_MetaData[] = {
		{ "Category", "UnlockPersonalPerksPopupPresenter" },
		{ "ModuleRelativePath", "Public/UnlockPersonalPerksPopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnlockPersonalPerksPopupPresenter_Statics::NewProp__perksData = { "_perksData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnlockPersonalPerksPopupPresenter, _perksData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUnlockPersonalPerksPopupPresenter_Statics::NewProp__perksData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnlockPersonalPerksPopupPresenter_Statics::NewProp__perksData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnlockPersonalPerksPopupPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnlockPersonalPerksPopupPresenter_Statics::NewProp__perksData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnlockPersonalPerksPopupPresenter_Statics::NewProp__perksData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnlockPersonalPerksPopupPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnlockPersonalPerksPopupPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUnlockPersonalPerksPopupPresenter_Statics::ClassParams = {
		&UUnlockPersonalPerksPopupPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUnlockPersonalPerksPopupPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUnlockPersonalPerksPopupPresenter_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUnlockPersonalPerksPopupPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnlockPersonalPerksPopupPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnlockPersonalPerksPopupPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUnlockPersonalPerksPopupPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUnlockPersonalPerksPopupPresenter, 999487845);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UUnlockPersonalPerksPopupPresenter>()
	{
		return UUnlockPersonalPerksPopupPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUnlockPersonalPerksPopupPresenter(Z_Construct_UClass_UUnlockPersonalPerksPopupPresenter, &UUnlockPersonalPerksPopupPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UUnlockPersonalPerksPopupPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnlockPersonalPerksPopupPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
