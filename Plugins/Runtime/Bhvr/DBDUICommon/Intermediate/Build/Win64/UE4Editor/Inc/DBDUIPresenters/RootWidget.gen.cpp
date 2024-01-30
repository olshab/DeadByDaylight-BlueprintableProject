// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/RootWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootWidget() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_URootWidget_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_URootWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
// End Cross Module References
	void URootWidget::StaticRegisterNativesURootWidget()
	{
	}
	UClass* Z_Construct_UClass_URootWidget_NoRegister()
	{
		return URootWidget::StaticClass();
	}
	struct Z_Construct_UClass_URootWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__canvasPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__canvasPanel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URootWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RootWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RootWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootWidget_Statics::NewProp__canvasPanel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RootWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URootWidget_Statics::NewProp__canvasPanel = { "_canvasPanel", nullptr, (EPropertyFlags)0x004000000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootWidget, _canvasPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URootWidget_Statics::NewProp__canvasPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootWidget_Statics::NewProp__canvasPanel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URootWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootWidget_Statics::NewProp__canvasPanel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URootWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URootWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URootWidget_Statics::ClassParams = {
		&URootWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URootWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URootWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URootWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URootWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URootWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URootWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URootWidget, 2363456012);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<URootWidget>()
	{
		return URootWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URootWidget(Z_Construct_UClass_URootWidget, &URootWidget::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("URootWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URootWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
