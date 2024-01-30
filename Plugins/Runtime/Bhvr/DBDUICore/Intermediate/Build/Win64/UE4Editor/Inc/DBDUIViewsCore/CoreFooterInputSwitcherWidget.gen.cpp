// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreFooterInputSwitcherWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreFooterInputSwitcherWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreFooterInputSwitcherWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreFooterInputSwitcherWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputSwitcherWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UCoreFooterInputSwitcherWidget::StaticRegisterNativesUCoreFooterInputSwitcherWidget()
	{
	}
	UClass* Z_Construct_UClass_UCoreFooterInputSwitcherWidget_NoRegister()
	{
		return UCoreFooterInputSwitcherWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreFooterInputSwitcherWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__iconTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__iconTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreFooterInputSwitcherWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreInputSwitcherWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreFooterInputSwitcherWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreFooterInputSwitcherWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreFooterInputSwitcherWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreFooterInputSwitcherWidget_Statics::NewProp__iconTexture_MetaData[] = {
		{ "Category", "CoreFooterInputSwitcherWidget" },
		{ "ModuleRelativePath", "Public/CoreFooterInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreFooterInputSwitcherWidget_Statics::NewProp__iconTexture = { "_iconTexture", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreFooterInputSwitcherWidget, _iconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreFooterInputSwitcherWidget_Statics::NewProp__iconTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreFooterInputSwitcherWidget_Statics::NewProp__iconTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreFooterInputSwitcherWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreFooterInputSwitcherWidget_Statics::NewProp__iconTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreFooterInputSwitcherWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreFooterInputSwitcherWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreFooterInputSwitcherWidget_Statics::ClassParams = {
		&UCoreFooterInputSwitcherWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCoreFooterInputSwitcherWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreFooterInputSwitcherWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreFooterInputSwitcherWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreFooterInputSwitcherWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreFooterInputSwitcherWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreFooterInputSwitcherWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreFooterInputSwitcherWidget, 4133428931);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreFooterInputSwitcherWidget>()
	{
		return UCoreFooterInputSwitcherWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreFooterInputSwitcherWidget(Z_Construct_UClass_UCoreFooterInputSwitcherWidget, &UCoreFooterInputSwitcherWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreFooterInputSwitcherWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreFooterInputSwitcherWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
