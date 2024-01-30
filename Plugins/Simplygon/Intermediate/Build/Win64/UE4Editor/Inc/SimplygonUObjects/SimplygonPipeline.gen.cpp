// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/SimplygonPipeline.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimplygonPipeline() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonPipeline_NoRegister();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonPipeline();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
	void USimplygonPipeline::StaticRegisterNativesUSimplygonPipeline()
	{
	}
	UClass* Z_Construct_UClass_USimplygonPipeline_NoRegister()
	{
		return USimplygonPipeline::StaticClass();
	}
	struct Z_Construct_UClass_USimplygonPipeline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimplygonPipeline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplygonPipeline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimplygonPipeline.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimplygonPipeline.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimplygonPipeline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimplygonPipeline>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimplygonPipeline_Statics::ClassParams = {
		&USimplygonPipeline::StaticClass,
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
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USimplygonPipeline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimplygonPipeline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimplygonPipeline()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimplygonPipeline_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimplygonPipeline, 1228574735);
	template<> SIMPLYGONUOBJECTS_API UClass* StaticClass<USimplygonPipeline>()
	{
		return USimplygonPipeline::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimplygonPipeline(Z_Construct_UClass_USimplygonPipeline, &USimplygonPipeline::StaticClass, TEXT("/Script/SimplygonUObjects"), TEXT("USimplygonPipeline"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimplygonPipeline);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
