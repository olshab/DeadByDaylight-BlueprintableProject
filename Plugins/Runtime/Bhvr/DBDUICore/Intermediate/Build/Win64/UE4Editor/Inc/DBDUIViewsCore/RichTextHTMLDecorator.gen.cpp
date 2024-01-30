// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/RichTextHTMLDecorator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRichTextHTMLDecorator() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_URichTextHTMLDecorator_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_URichTextHTMLDecorator();
	UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
// End Cross Module References
	void URichTextHTMLDecorator::StaticRegisterNativesURichTextHTMLDecorator()
	{
	}
	UClass* Z_Construct_UClass_URichTextHTMLDecorator_NoRegister()
	{
		return URichTextHTMLDecorator::StaticClass();
	}
	struct Z_Construct_UClass_URichTextHTMLDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URichTextHTMLDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URichTextBlockDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextHTMLDecorator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RichTextHTMLDecorator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RichTextHTMLDecorator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URichTextHTMLDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URichTextHTMLDecorator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URichTextHTMLDecorator_Statics::ClassParams = {
		&URichTextHTMLDecorator::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URichTextHTMLDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextHTMLDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URichTextHTMLDecorator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URichTextHTMLDecorator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URichTextHTMLDecorator, 4031755213);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<URichTextHTMLDecorator>()
	{
		return URichTextHTMLDecorator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URichTextHTMLDecorator(Z_Construct_UClass_URichTextHTMLDecorator, &URichTextHTMLDecorator::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("URichTextHTMLDecorator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URichTextHTMLDecorator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
