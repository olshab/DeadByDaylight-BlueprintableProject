// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/FlipbookPipeline.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlipbookPipeline() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_UFlipbookPipeline_NoRegister();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_UFlipbookPipeline();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonPipeline();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FFlipbookPipelineSettings();
// End Cross Module References
	void UFlipbookPipeline::StaticRegisterNativesUFlipbookPipeline()
	{
	}
	UClass* Z_Construct_UClass_UFlipbookPipeline_NoRegister()
	{
		return UFlipbookPipeline::StaticClass();
	}
	struct Z_Construct_UClass_UFlipbookPipeline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlipbookPipeline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimplygonPipeline,
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlipbookPipeline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FlipbookPipeline.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FlipbookPipeline.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlipbookPipeline_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "FlipbookPipeline" },
		{ "ModuleRelativePath", "Public/FlipbookPipeline.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlipbookPipeline_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlipbookPipeline, Settings), Z_Construct_UScriptStruct_FFlipbookPipelineSettings, METADATA_PARAMS(Z_Construct_UClass_UFlipbookPipeline_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlipbookPipeline_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlipbookPipeline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlipbookPipeline_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlipbookPipeline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlipbookPipeline>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlipbookPipeline_Statics::ClassParams = {
		&UFlipbookPipeline::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlipbookPipeline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlipbookPipeline_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlipbookPipeline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlipbookPipeline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlipbookPipeline()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlipbookPipeline_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlipbookPipeline, 1731687481);
	template<> SIMPLYGONUOBJECTS_API UClass* StaticClass<UFlipbookPipeline>()
	{
		return UFlipbookPipeline::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlipbookPipeline(Z_Construct_UClass_UFlipbookPipeline, &UFlipbookPipeline::StaticClass, TEXT("/Script/SimplygonUObjects"), TEXT("UFlipbookPipeline"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlipbookPipeline);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
