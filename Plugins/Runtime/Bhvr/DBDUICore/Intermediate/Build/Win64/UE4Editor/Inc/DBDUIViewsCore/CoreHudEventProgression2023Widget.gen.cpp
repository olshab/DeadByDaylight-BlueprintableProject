// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreHudEventProgression2023Widget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreHudEventProgression2023Widget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreHudEventProgression2023Widget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreHudEventProgression2023Widget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UHudEventProgression2023ViewInterface_NoRegister();
// End Cross Module References
	void UCoreHudEventProgression2023Widget::StaticRegisterNativesUCoreHudEventProgression2023Widget()
	{
	}
	UClass* Z_Construct_UClass_UCoreHudEventProgression2023Widget_NoRegister()
	{
		return UCoreHudEventProgression2023Widget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreHudEventProgression2023Widget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreHudEventProgression2023Widget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseHudWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudEventProgression2023Widget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreHudEventProgression2023Widget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreHudEventProgression2023Widget.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreHudEventProgression2023Widget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHudEventProgression2023ViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreHudEventProgression2023Widget, IHudEventProgression2023ViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreHudEventProgression2023Widget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreHudEventProgression2023Widget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreHudEventProgression2023Widget_Statics::ClassParams = {
		&UCoreHudEventProgression2023Widget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreHudEventProgression2023Widget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudEventProgression2023Widget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreHudEventProgression2023Widget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreHudEventProgression2023Widget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreHudEventProgression2023Widget, 528886603);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreHudEventProgression2023Widget>()
	{
		return UCoreHudEventProgression2023Widget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreHudEventProgression2023Widget(Z_Construct_UClass_UCoreHudEventProgression2023Widget, &UCoreHudEventProgression2023Widget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreHudEventProgression2023Widget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreHudEventProgression2023Widget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
