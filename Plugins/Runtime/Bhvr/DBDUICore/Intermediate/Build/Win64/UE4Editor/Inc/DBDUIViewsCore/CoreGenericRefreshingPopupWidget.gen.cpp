// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreGenericRefreshingPopupWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreGenericRefreshingPopupWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreGenericRefreshingPopupWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreGenericRefreshingPopupWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreGenericPopupWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UGenericRefreshingPopupViewInterface_NoRegister();
// End Cross Module References
	void UCoreGenericRefreshingPopupWidget::StaticRegisterNativesUCoreGenericRefreshingPopupWidget()
	{
	}
	UClass* Z_Construct_UClass_UCoreGenericRefreshingPopupWidget_NoRegister()
	{
		return UCoreGenericRefreshingPopupWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreGenericRefreshingPopupWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreGenericRefreshingPopupWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreGenericPopupWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreGenericRefreshingPopupWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreGenericRefreshingPopupWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreGenericRefreshingPopupWidget.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreGenericRefreshingPopupWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGenericRefreshingPopupViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreGenericRefreshingPopupWidget, IGenericRefreshingPopupViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreGenericRefreshingPopupWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreGenericRefreshingPopupWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreGenericRefreshingPopupWidget_Statics::ClassParams = {
		&UCoreGenericRefreshingPopupWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreGenericRefreshingPopupWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGenericRefreshingPopupWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreGenericRefreshingPopupWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreGenericRefreshingPopupWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreGenericRefreshingPopupWidget, 1600066154);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreGenericRefreshingPopupWidget>()
	{
		return UCoreGenericRefreshingPopupWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreGenericRefreshingPopupWidget(Z_Construct_UClass_UCoreGenericRefreshingPopupWidget, &UCoreGenericRefreshingPopupWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreGenericRefreshingPopupWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreGenericRefreshingPopupWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
