// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreStoreCharactersBioWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreStoreCharactersBioWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCharactersBioWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCharactersBioWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCharactersBioViewInterface_NoRegister();
// End Cross Module References
	void UCoreStoreCharactersBioWidget::StaticRegisterNativesUCoreStoreCharactersBioWidget()
	{
	}
	UClass* Z_Construct_UClass_UCoreStoreCharactersBioWidget_NoRegister()
	{
		return UCoreStoreCharactersBioWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreStoreCharactersBioWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scroll_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scroll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreStoreCharactersBioWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersBioWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreStoreCharactersBioWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersBioWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersBioWidget_Statics::NewProp_TextContent_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreCharactersBioWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersBioWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCharactersBioWidget_Statics::NewProp_TextContent = { "TextContent", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersBioWidget, TextContent), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersBioWidget_Statics::NewProp_TextContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersBioWidget_Statics::NewProp_TextContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersBioWidget_Statics::NewProp_Scroll_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreCharactersBioWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersBioWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCharactersBioWidget_Statics::NewProp_Scroll = { "Scroll", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersBioWidget, Scroll), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersBioWidget_Statics::NewProp_Scroll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersBioWidget_Statics::NewProp_Scroll_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreStoreCharactersBioWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersBioWidget_Statics::NewProp_TextContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersBioWidget_Statics::NewProp_Scroll,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreStoreCharactersBioWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStoreCharactersBioViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreStoreCharactersBioWidget, IStoreCharactersBioViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreStoreCharactersBioWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStoreCharactersBioWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreStoreCharactersBioWidget_Statics::ClassParams = {
		&UCoreStoreCharactersBioWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCoreStoreCharactersBioWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersBioWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersBioWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersBioWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreStoreCharactersBioWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreStoreCharactersBioWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreStoreCharactersBioWidget, 4049380287);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreStoreCharactersBioWidget>()
	{
		return UCoreStoreCharactersBioWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreStoreCharactersBioWidget(Z_Construct_UClass_UCoreStoreCharactersBioWidget, &UCoreStoreCharactersBioWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreStoreCharactersBioWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStoreCharactersBioWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
