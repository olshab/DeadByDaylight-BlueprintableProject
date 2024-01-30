// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/HudEndGameScenarioPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudEndGameScenarioPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudEndGameScenarioPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudEndGameScenarioPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void UHudEndGameScenarioPresenter::StaticRegisterNativesUHudEndGameScenarioPresenter()
	{
	}
	UClass* Z_Construct_UClass_UHudEndGameScenarioPresenter_NoRegister()
	{
		return UHudEndGameScenarioPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UHudEndGameScenarioPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndGameCollapseBarWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EndGameCollapseBarWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHudEndGameScenarioPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHudPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudEndGameScenarioPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HudEndGameScenarioPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HudEndGameScenarioPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudEndGameScenarioPresenter_Statics::NewProp_EndGameCollapseBarWidgetClass_MetaData[] = {
		{ "Category", "HudEndGameScenarioPresenter" },
		{ "ModuleRelativePath", "Public/HudEndGameScenarioPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHudEndGameScenarioPresenter_Statics::NewProp_EndGameCollapseBarWidgetClass = { "EndGameCollapseBarWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudEndGameScenarioPresenter, EndGameCollapseBarWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UHudEndGameScenarioPresenter_Statics::NewProp_EndGameCollapseBarWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudEndGameScenarioPresenter_Statics::NewProp_EndGameCollapseBarWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHudEndGameScenarioPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudEndGameScenarioPresenter_Statics::NewProp_EndGameCollapseBarWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHudEndGameScenarioPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHudEndGameScenarioPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHudEndGameScenarioPresenter_Statics::ClassParams = {
		&UHudEndGameScenarioPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHudEndGameScenarioPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHudEndGameScenarioPresenter_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHudEndGameScenarioPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHudEndGameScenarioPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHudEndGameScenarioPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHudEndGameScenarioPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHudEndGameScenarioPresenter, 1382422601);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UHudEndGameScenarioPresenter>()
	{
		return UHudEndGameScenarioPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHudEndGameScenarioPresenter(Z_Construct_UClass_UHudEndGameScenarioPresenter, &UHudEndGameScenarioPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UHudEndGameScenarioPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudEndGameScenarioPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
