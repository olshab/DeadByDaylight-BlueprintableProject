// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreStoreSpecialPacksHeritageTabWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreStoreSpecialPacksHeritageTabWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreSpecialPacksHeritageTabWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreSpecialPacksHeritageTabWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreSpecialPacksHeritageViewInterface_NoRegister();
// End Cross Module References
	void UCoreStoreSpecialPacksHeritageTabWidget::StaticRegisterNativesUCoreStoreSpecialPacksHeritageTabWidget()
	{
	}
	UClass* Z_Construct_UClass_UCoreStoreSpecialPacksHeritageTabWidget_NoRegister()
	{
		return UCoreStoreSpecialPacksHeritageTabWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreStoreSpecialPacksHeritageTabWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreStoreSpecialPacksHeritageTabWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreSpecialPacksHeritageTabWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreStoreSpecialPacksHeritageTabWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreSpecialPacksHeritageTabWidget.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreStoreSpecialPacksHeritageTabWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStoreSpecialPacksHeritageViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreStoreSpecialPacksHeritageTabWidget, IStoreSpecialPacksHeritageViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreStoreSpecialPacksHeritageTabWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStoreSpecialPacksHeritageTabWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreStoreSpecialPacksHeritageTabWidget_Statics::ClassParams = {
		&UCoreStoreSpecialPacksHeritageTabWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoreStoreSpecialPacksHeritageTabWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreSpecialPacksHeritageTabWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreStoreSpecialPacksHeritageTabWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreStoreSpecialPacksHeritageTabWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreStoreSpecialPacksHeritageTabWidget, 3222577640);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreStoreSpecialPacksHeritageTabWidget>()
	{
		return UCoreStoreSpecialPacksHeritageTabWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreStoreSpecialPacksHeritageTabWidget(Z_Construct_UClass_UCoreStoreSpecialPacksHeritageTabWidget, &UCoreStoreSpecialPacksHeritageTabWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreStoreSpecialPacksHeritageTabWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStoreSpecialPacksHeritageTabWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
