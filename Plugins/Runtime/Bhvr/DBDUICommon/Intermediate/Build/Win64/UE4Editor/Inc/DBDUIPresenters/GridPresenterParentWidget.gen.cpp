// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/GridPresenterParentWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridPresenterParentWidget() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UGridPresenterParentWidget_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UGridPresenterParentWidget();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenterParentWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	UMG_API UClass* Z_Construct_UClass_UGridPanel_NoRegister();
// End Cross Module References
	void UGridPresenterParentWidget::StaticRegisterNativesUGridPresenterParentWidget()
	{
	}
	UClass* Z_Construct_UClass_UGridPresenterParentWidget_NoRegister()
	{
		return UGridPresenterParentWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGridPresenterParentWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Container;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridPresenterParentWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresenterParentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPresenterParentWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GridPresenterParentWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GridPresenterParentWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPresenterParentWidget_Statics::NewProp_Container_MetaData[] = {
		{ "Category", "GridPresenterParentWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GridPresenterParentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridPresenterParentWidget_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridPresenterParentWidget, Container), Z_Construct_UClass_UGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGridPresenterParentWidget_Statics::NewProp_Container_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridPresenterParentWidget_Statics::NewProp_Container_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridPresenterParentWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPresenterParentWidget_Statics::NewProp_Container,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridPresenterParentWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridPresenterParentWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGridPresenterParentWidget_Statics::ClassParams = {
		&UGridPresenterParentWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGridPresenterParentWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridPresenterParentWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridPresenterParentWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridPresenterParentWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridPresenterParentWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGridPresenterParentWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGridPresenterParentWidget, 98120419);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UGridPresenterParentWidget>()
	{
		return UGridPresenterParentWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGridPresenterParentWidget(Z_Construct_UClass_UGridPresenterParentWidget, &UGridPresenterParentWidget::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UGridPresenterParentWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridPresenterParentWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
