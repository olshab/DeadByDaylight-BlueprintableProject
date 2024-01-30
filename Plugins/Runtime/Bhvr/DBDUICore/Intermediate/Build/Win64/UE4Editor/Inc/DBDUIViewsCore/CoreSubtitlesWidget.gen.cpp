// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreSubtitlesWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreSubtitlesWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSubtitlesWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSubtitlesWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_USubtitlesViewInterface_NoRegister();
// End Cross Module References
	void UCoreSubtitlesWidget::StaticRegisterNativesUCoreSubtitlesWidget()
	{
	}
	UClass* Z_Construct_UClass_UCoreSubtitlesWidget_NoRegister()
	{
		return UCoreSubtitlesWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreSubtitlesWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitlesTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubtitlesTB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreSubtitlesWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSubtitlesWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreSubtitlesWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreSubtitlesWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_SubtitlesTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreSubtitlesWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreSubtitlesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_SubtitlesTB = { "SubtitlesTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSubtitlesWidget, SubtitlesTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_SubtitlesTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_SubtitlesTB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreSubtitlesWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_SubtitlesTB,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreSubtitlesWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USubtitlesViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreSubtitlesWidget, ISubtitlesViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreSubtitlesWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreSubtitlesWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreSubtitlesWidget_Statics::ClassParams = {
		&UCoreSubtitlesWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCoreSubtitlesWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSubtitlesWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreSubtitlesWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSubtitlesWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreSubtitlesWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreSubtitlesWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreSubtitlesWidget, 2588872357);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreSubtitlesWidget>()
	{
		return UCoreSubtitlesWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreSubtitlesWidget(Z_Construct_UClass_UCoreSubtitlesWidget, &UCoreSubtitlesWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreSubtitlesWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreSubtitlesWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
