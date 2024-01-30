// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreSortButtonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreSortButtonWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSortButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSortButtonWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
// End Cross Module References
	void UCoreSortButtonWidget::StaticRegisterNativesUCoreSortButtonWidget()
	{
	}
	UClass* Z_Construct_UClass_UCoreSortButtonWidget_NoRegister()
	{
		return UCoreSortButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreSortButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortByRTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SortByRTB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreSortButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSortButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreSortButtonWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreSortButtonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSortButtonWidget_Statics::NewProp_SortByRTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreSortButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreSortButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreSortButtonWidget_Statics::NewProp_SortByRTB = { "SortByRTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSortButtonWidget, SortByRTB), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreSortButtonWidget_Statics::NewProp_SortByRTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSortButtonWidget_Statics::NewProp_SortByRTB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreSortButtonWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSortButtonWidget_Statics::NewProp_SortByRTB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreSortButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreSortButtonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreSortButtonWidget_Statics::ClassParams = {
		&UCoreSortButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCoreSortButtonWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSortButtonWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreSortButtonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSortButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreSortButtonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreSortButtonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreSortButtonWidget, 790786979);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreSortButtonWidget>()
	{
		return UCoreSortButtonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreSortButtonWidget(Z_Construct_UClass_UCoreSortButtonWidget, &UCoreSortButtonWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreSortButtonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreSortButtonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
