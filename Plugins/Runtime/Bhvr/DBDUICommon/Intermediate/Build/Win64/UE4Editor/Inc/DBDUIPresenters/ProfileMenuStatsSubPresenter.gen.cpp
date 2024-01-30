// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/ProfileMenuStatsSubPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfileMenuStatsSubPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UProfileMenuStatsSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UProfileMenuStatsSubPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USubPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UProfileMenuStatsViewInterface_NoRegister();
// End Cross Module References
	void UProfileMenuStatsSubPresenter::StaticRegisterNativesUProfileMenuStatsSubPresenter()
	{
	}
	UClass* Z_Construct_UClass_UProfileMenuStatsSubPresenter_NoRegister()
	{
		return UProfileMenuStatsSubPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UProfileMenuStatsSubPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__profileMenuStatsWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__profileMenuStatsWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProfileMenuStatsSubPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuStatsSubPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ProfileMenuStatsSubPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ProfileMenuStatsSubPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuStatsSubPresenter_Statics::NewProp__profileMenuStatsWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfileMenuStatsSubPresenter" },
		{ "ModuleRelativePath", "Public/ProfileMenuStatsSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UProfileMenuStatsSubPresenter_Statics::NewProp__profileMenuStatsWidget = { "_profileMenuStatsWidget", nullptr, (EPropertyFlags)0x0044000000002005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProfileMenuStatsSubPresenter, _profileMenuStatsWidget), Z_Construct_UClass_UProfileMenuStatsViewInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProfileMenuStatsSubPresenter_Statics::NewProp__profileMenuStatsWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuStatsSubPresenter_Statics::NewProp__profileMenuStatsWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProfileMenuStatsSubPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProfileMenuStatsSubPresenter_Statics::NewProp__profileMenuStatsWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProfileMenuStatsSubPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProfileMenuStatsSubPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProfileMenuStatsSubPresenter_Statics::ClassParams = {
		&UProfileMenuStatsSubPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProfileMenuStatsSubPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuStatsSubPresenter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProfileMenuStatsSubPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuStatsSubPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProfileMenuStatsSubPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProfileMenuStatsSubPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProfileMenuStatsSubPresenter, 3805835711);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UProfileMenuStatsSubPresenter>()
	{
		return UProfileMenuStatsSubPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProfileMenuStatsSubPresenter(Z_Construct_UClass_UProfileMenuStatsSubPresenter, &UProfileMenuStatsSubPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UProfileMenuStatsSubPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProfileMenuStatsSubPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
