// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/RichTextNestedTagsDecorator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRichTextNestedTagsDecorator() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_URichTextNestedTagsDecorator_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_URichTextNestedTagsDecorator();
	UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
// End Cross Module References
	void URichTextNestedTagsDecorator::StaticRegisterNativesURichTextNestedTagsDecorator()
	{
	}
	UClass* Z_Construct_UClass_URichTextNestedTagsDecorator_NoRegister()
	{
		return URichTextNestedTagsDecorator::StaticClass();
	}
	struct Z_Construct_UClass_URichTextNestedTagsDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URichTextNestedTagsDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URichTextBlockDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextNestedTagsDecorator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RichTextNestedTagsDecorator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RichTextNestedTagsDecorator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URichTextNestedTagsDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URichTextNestedTagsDecorator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URichTextNestedTagsDecorator_Statics::ClassParams = {
		&URichTextNestedTagsDecorator::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URichTextNestedTagsDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextNestedTagsDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URichTextNestedTagsDecorator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URichTextNestedTagsDecorator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URichTextNestedTagsDecorator, 1468378194);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<URichTextNestedTagsDecorator>()
	{
		return URichTextNestedTagsDecorator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URichTextNestedTagsDecorator(Z_Construct_UClass_URichTextNestedTagsDecorator, &URichTextNestedTagsDecorator::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("URichTextNestedTagsDecorator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URichTextNestedTagsDecorator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
