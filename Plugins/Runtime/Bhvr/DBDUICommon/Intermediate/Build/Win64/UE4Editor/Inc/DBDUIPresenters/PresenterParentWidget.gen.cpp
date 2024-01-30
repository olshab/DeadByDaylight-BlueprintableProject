// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/PresenterParentWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePresenterParentWidget() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenterParentWidget_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenterParentWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
// End Cross Module References
	void UPresenterParentWidget::StaticRegisterNativesUPresenterParentWidget()
	{
	}
	UClass* Z_Construct_UClass_UPresenterParentWidget_NoRegister()
	{
		return UPresenterParentWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPresenterParentWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPresenterParentWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresenterParentWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PresenterParentWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PresenterParentWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPresenterParentWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPresenterParentWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPresenterParentWidget_Statics::ClassParams = {
		&UPresenterParentWidget::StaticClass,
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
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPresenterParentWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPresenterParentWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPresenterParentWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPresenterParentWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPresenterParentWidget, 4036351270);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UPresenterParentWidget>()
	{
		return UPresenterParentWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPresenterParentWidget(Z_Construct_UClass_UPresenterParentWidget, &UPresenterParentWidget::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UPresenterParentWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPresenterParentWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
