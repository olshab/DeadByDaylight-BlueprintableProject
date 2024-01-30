// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/GlobalLoadingSpinnerPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalLoadingSpinnerPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UGlobalLoadingSpinnerPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UGlobalLoadingSpinnerPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void UGlobalLoadingSpinnerPresenter::StaticRegisterNativesUGlobalLoadingSpinnerPresenter()
	{
	}
	UClass* Z_Construct_UClass_UGlobalLoadingSpinnerPresenter_NoRegister()
	{
		return UGlobalLoadingSpinnerPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UGlobalLoadingSpinnerPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalLoadSpinnerWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GlobalLoadSpinnerWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGlobalLoadingSpinnerPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlobalLoadingSpinnerPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GlobalLoadingSpinnerPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GlobalLoadingSpinnerPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlobalLoadingSpinnerPresenter_Statics::NewProp_GlobalLoadSpinnerWidgetClass_MetaData[] = {
		{ "Category", "GlobalLoadingSpinnerPresenter" },
		{ "ModuleRelativePath", "Public/GlobalLoadingSpinnerPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGlobalLoadingSpinnerPresenter_Statics::NewProp_GlobalLoadSpinnerWidgetClass = { "GlobalLoadSpinnerWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGlobalLoadingSpinnerPresenter, GlobalLoadSpinnerWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGlobalLoadingSpinnerPresenter_Statics::NewProp_GlobalLoadSpinnerWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalLoadingSpinnerPresenter_Statics::NewProp_GlobalLoadSpinnerWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGlobalLoadingSpinnerPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlobalLoadingSpinnerPresenter_Statics::NewProp_GlobalLoadSpinnerWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGlobalLoadingSpinnerPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGlobalLoadingSpinnerPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGlobalLoadingSpinnerPresenter_Statics::ClassParams = {
		&UGlobalLoadingSpinnerPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGlobalLoadingSpinnerPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalLoadingSpinnerPresenter_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGlobalLoadingSpinnerPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalLoadingSpinnerPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGlobalLoadingSpinnerPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGlobalLoadingSpinnerPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGlobalLoadingSpinnerPresenter, 3641476963);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UGlobalLoadingSpinnerPresenter>()
	{
		return UGlobalLoadingSpinnerPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGlobalLoadingSpinnerPresenter(Z_Construct_UClass_UGlobalLoadingSpinnerPresenter, &UGlobalLoadingSpinnerPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UGlobalLoadingSpinnerPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGlobalLoadingSpinnerPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
