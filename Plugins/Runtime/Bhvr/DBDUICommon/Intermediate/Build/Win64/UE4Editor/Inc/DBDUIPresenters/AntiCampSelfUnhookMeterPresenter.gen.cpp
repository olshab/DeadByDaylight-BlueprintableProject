// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/AntiCampSelfUnhookMeterPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAntiCampSelfUnhookMeterPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UAntiCampSelfUnhookMeterPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UAntiCampSelfUnhookMeterPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void UAntiCampSelfUnhookMeterPresenter::StaticRegisterNativesUAntiCampSelfUnhookMeterPresenter()
	{
	}
	UClass* Z_Construct_UClass_UAntiCampSelfUnhookMeterPresenter_NoRegister()
	{
		return UAntiCampSelfUnhookMeterPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UAntiCampSelfUnhookMeterPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntiCampSelfUnhookMeterWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AntiCampSelfUnhookMeterWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAntiCampSelfUnhookMeterPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHudPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAntiCampSelfUnhookMeterPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AntiCampSelfUnhookMeterPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AntiCampSelfUnhookMeterPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAntiCampSelfUnhookMeterPresenter_Statics::NewProp_AntiCampSelfUnhookMeterWidget_MetaData[] = {
		{ "Category", "AntiCampSelfUnhookMeterPresenter" },
		{ "ModuleRelativePath", "Public/AntiCampSelfUnhookMeterPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAntiCampSelfUnhookMeterPresenter_Statics::NewProp_AntiCampSelfUnhookMeterWidget = { "AntiCampSelfUnhookMeterWidget", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAntiCampSelfUnhookMeterPresenter, AntiCampSelfUnhookMeterWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAntiCampSelfUnhookMeterPresenter_Statics::NewProp_AntiCampSelfUnhookMeterWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAntiCampSelfUnhookMeterPresenter_Statics::NewProp_AntiCampSelfUnhookMeterWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAntiCampSelfUnhookMeterPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAntiCampSelfUnhookMeterPresenter_Statics::NewProp_AntiCampSelfUnhookMeterWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAntiCampSelfUnhookMeterPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAntiCampSelfUnhookMeterPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAntiCampSelfUnhookMeterPresenter_Statics::ClassParams = {
		&UAntiCampSelfUnhookMeterPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAntiCampSelfUnhookMeterPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAntiCampSelfUnhookMeterPresenter_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAntiCampSelfUnhookMeterPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAntiCampSelfUnhookMeterPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAntiCampSelfUnhookMeterPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAntiCampSelfUnhookMeterPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAntiCampSelfUnhookMeterPresenter, 213403976);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UAntiCampSelfUnhookMeterPresenter>()
	{
		return UAntiCampSelfUnhookMeterPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAntiCampSelfUnhookMeterPresenter(Z_Construct_UClass_UAntiCampSelfUnhookMeterPresenter, &UAntiCampSelfUnhookMeterPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UAntiCampSelfUnhookMeterPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAntiCampSelfUnhookMeterPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
