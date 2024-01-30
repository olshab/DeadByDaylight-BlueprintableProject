// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/EventEntryCollectionTabWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventEntryCollectionTabWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UEventEntryCollectionTabWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UEventEntryCollectionTabWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UEventEntryRewardsTabWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
// End Cross Module References
	void UEventEntryCollectionTabWidget::StaticRegisterNativesUEventEntryCollectionTabWidget()
	{
	}
	UClass* Z_Construct_UClass_UEventEntryCollectionTabWidget_NoRegister()
	{
		return UEventEntryCollectionTabWidget::StaticClass();
	}
	struct Z_Construct_UClass_UEventEntryCollectionTabWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventEntryCollectionTabWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventEntryRewardsTabWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryCollectionTabWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EventEntryCollectionTabWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EventEntryCollectionTabWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventEntryCollectionTabWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventEntryCollectionTabWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventEntryCollectionTabWidget_Statics::ClassParams = {
		&UEventEntryCollectionTabWidget::StaticClass,
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
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEventEntryCollectionTabWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryCollectionTabWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventEntryCollectionTabWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventEntryCollectionTabWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventEntryCollectionTabWidget, 1271761640);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UEventEntryCollectionTabWidget>()
	{
		return UEventEntryCollectionTabWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventEntryCollectionTabWidget(Z_Construct_UClass_UEventEntryCollectionTabWidget, &UEventEntryCollectionTabWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UEventEntryCollectionTabWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventEntryCollectionTabWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
