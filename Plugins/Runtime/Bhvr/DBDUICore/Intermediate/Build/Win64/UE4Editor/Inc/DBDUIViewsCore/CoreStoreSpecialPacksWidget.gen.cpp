// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreStoreSpecialPacksWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreStoreSpecialPacksWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreSpecialPacksWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreSpecialPacksWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreBaseSubTabsWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreSpecialPacksViewInterface_NoRegister();
// End Cross Module References
	void UCoreStoreSpecialPacksWidget::StaticRegisterNativesUCoreStoreSpecialPacksWidget()
	{
	}
	UClass* Z_Construct_UClass_UCoreStoreSpecialPacksWidget_NoRegister()
	{
		return UCoreStoreSpecialPacksWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreStoreSpecialPacksWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreStoreSpecialPacksWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreStoreBaseSubTabsWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreSpecialPacksWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreStoreSpecialPacksWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreSpecialPacksWidget.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreStoreSpecialPacksWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStoreSpecialPacksViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreStoreSpecialPacksWidget, IStoreSpecialPacksViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreStoreSpecialPacksWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStoreSpecialPacksWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreStoreSpecialPacksWidget_Statics::ClassParams = {
		&UCoreStoreSpecialPacksWidget::StaticClass,
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
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreStoreSpecialPacksWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreSpecialPacksWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreStoreSpecialPacksWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreStoreSpecialPacksWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreStoreSpecialPacksWidget, 3994732745);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreStoreSpecialPacksWidget>()
	{
		return UCoreStoreSpecialPacksWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreStoreSpecialPacksWidget(Z_Construct_UClass_UCoreStoreSpecialPacksWidget, &UCoreStoreSpecialPacksWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreStoreSpecialPacksWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStoreSpecialPacksWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
