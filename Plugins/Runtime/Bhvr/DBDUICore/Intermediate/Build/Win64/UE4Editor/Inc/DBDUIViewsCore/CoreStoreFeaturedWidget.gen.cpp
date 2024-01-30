// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreStoreFeaturedWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreStoreFeaturedWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreFeaturedWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreFeaturedWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_OnFeaturedCharacterClickedDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreFeaturedViewInterface_NoRegister();
// End Cross Module References
	void UCoreStoreFeaturedWidget::StaticRegisterNativesUCoreStoreFeaturedWidget()
	{
	}
	UClass* Z_Construct_UClass_UCoreStoreFeaturedWidget_NoRegister()
	{
		return UCoreStoreFeaturedWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__featuredItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__featuredItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__featuredItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizationItemContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomizationItemContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__featuredCharacterSelectedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__featuredCharacterSelectedDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreStoreFeaturedWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::NewProp__featuredItems_Inner = { "_featuredItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::NewProp__featuredItems_MetaData[] = {
		{ "Category", "CoreStoreFeaturedWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::NewProp__featuredItems = { "_featuredItems", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreFeaturedWidget, _featuredItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::NewProp__featuredItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::NewProp__featuredItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::NewProp_CustomizationItemContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreFeaturedWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::NewProp_CustomizationItemContainer = { "CustomizationItemContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreFeaturedWidget, CustomizationItemContainer), Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::NewProp_CustomizationItemContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::NewProp_CustomizationItemContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::NewProp_CharacterContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreFeaturedWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::NewProp_CharacterContainer = { "CharacterContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreFeaturedWidget, CharacterContainer), Z_Construct_UClass_UCoreStoreFeaturedCharacterContainerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::NewProp_CharacterContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::NewProp_CharacterContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::NewProp__featuredCharacterSelectedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreStoreFeaturedWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::NewProp__featuredCharacterSelectedDelegate = { "_featuredCharacterSelectedDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreFeaturedWidget, _featuredCharacterSelectedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_OnFeaturedCharacterClickedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::NewProp__featuredCharacterSelectedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::NewProp__featuredCharacterSelectedDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::NewProp__featuredItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::NewProp__featuredItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::NewProp_CustomizationItemContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::NewProp_CharacterContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::NewProp__featuredCharacterSelectedDelegate,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStoreFeaturedViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreStoreFeaturedWidget, IStoreFeaturedViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStoreFeaturedWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::ClassParams = {
		&UCoreStoreFeaturedWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreStoreFeaturedWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreStoreFeaturedWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreStoreFeaturedWidget, 1689124073);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreStoreFeaturedWidget>()
	{
		return UCoreStoreFeaturedWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreStoreFeaturedWidget(Z_Construct_UClass_UCoreStoreFeaturedWidget, &UCoreStoreFeaturedWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreStoreFeaturedWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStoreFeaturedWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
