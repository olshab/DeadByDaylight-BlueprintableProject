// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreStoreCharactersWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreStoreCharactersWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCharactersWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCharactersWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreBaseSubTabsWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCharactersViewInterface_NoRegister();
// End Cross Module References
	void UCoreStoreCharactersWidget::StaticRegisterNativesUCoreStoreCharactersWidget()
	{
	}
	UClass* Z_Construct_UClass_UCoreStoreCharactersWidget_NoRegister()
	{
		return UCoreStoreCharactersWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreStoreCharactersWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedCharacterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedCharacterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerksToast_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerksToast;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreStoreCharactersWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreStoreBaseSubTabsWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreStoreCharactersWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersWidget_Statics::NewProp_SelectedCharacterName_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreCharactersWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCharactersWidget_Statics::NewProp_SelectedCharacterName = { "SelectedCharacterName", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersWidget, SelectedCharacterName), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersWidget_Statics::NewProp_SelectedCharacterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersWidget_Statics::NewProp_SelectedCharacterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersWidget_Statics::NewProp_PerksToast_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreCharactersWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCharactersWidget_Statics::NewProp_PerksToast = { "PerksToast", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersWidget, PerksToast), Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersWidget_Statics::NewProp_PerksToast_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersWidget_Statics::NewProp_PerksToast_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreStoreCharactersWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersWidget_Statics::NewProp_SelectedCharacterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersWidget_Statics::NewProp_PerksToast,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreStoreCharactersWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStoreCharactersViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreStoreCharactersWidget, IStoreCharactersViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreStoreCharactersWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStoreCharactersWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreStoreCharactersWidget_Statics::ClassParams = {
		&UCoreStoreCharactersWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCoreStoreCharactersWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreStoreCharactersWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreStoreCharactersWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreStoreCharactersWidget, 2368676615);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreStoreCharactersWidget>()
	{
		return UCoreStoreCharactersWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreStoreCharactersWidget(Z_Construct_UClass_UCoreStoreCharactersWidget, &UCoreStoreCharactersWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreStoreCharactersWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStoreCharactersWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
