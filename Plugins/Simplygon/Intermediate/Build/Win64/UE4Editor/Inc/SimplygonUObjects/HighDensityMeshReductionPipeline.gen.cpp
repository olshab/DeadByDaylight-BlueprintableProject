// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/HighDensityMeshReductionPipeline.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHighDensityMeshReductionPipeline() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_UHighDensityMeshReductionPipeline_NoRegister();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_UHighDensityMeshReductionPipeline();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonPipeline();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FHighDensityMeshReductionPipelineSettings();
// End Cross Module References
	void UHighDensityMeshReductionPipeline::StaticRegisterNativesUHighDensityMeshReductionPipeline()
	{
	}
	UClass* Z_Construct_UClass_UHighDensityMeshReductionPipeline_NoRegister()
	{
		return UHighDensityMeshReductionPipeline::StaticClass();
	}
	struct Z_Construct_UClass_UHighDensityMeshReductionPipeline_Statics
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
	UObject* (*const Z_Construct_UClass_UHighDensityMeshReductionPipeline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimplygonPipeline,
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighDensityMeshReductionPipeline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HighDensityMeshReductionPipeline.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HighDensityMeshReductionPipeline.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighDensityMeshReductionPipeline_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "HighDensityMeshReductionPipeline" },
		{ "ModuleRelativePath", "Public/HighDensityMeshReductionPipeline.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHighDensityMeshReductionPipeline_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHighDensityMeshReductionPipeline, Settings), Z_Construct_UScriptStruct_FHighDensityMeshReductionPipelineSettings, METADATA_PARAMS(Z_Construct_UClass_UHighDensityMeshReductionPipeline_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHighDensityMeshReductionPipeline_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHighDensityMeshReductionPipeline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighDensityMeshReductionPipeline_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHighDensityMeshReductionPipeline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHighDensityMeshReductionPipeline>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHighDensityMeshReductionPipeline_Statics::ClassParams = {
		&UHighDensityMeshReductionPipeline::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHighDensityMeshReductionPipeline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHighDensityMeshReductionPipeline_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHighDensityMeshReductionPipeline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHighDensityMeshReductionPipeline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHighDensityMeshReductionPipeline()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHighDensityMeshReductionPipeline_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHighDensityMeshReductionPipeline, 2103200672);
	template<> SIMPLYGONUOBJECTS_API UClass* StaticClass<UHighDensityMeshReductionPipeline>()
	{
		return UHighDensityMeshReductionPipeline::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHighDensityMeshReductionPipeline(Z_Construct_UClass_UHighDensityMeshReductionPipeline, &UHighDensityMeshReductionPipeline::StaticClass, TEXT("/Script/SimplygonUObjects"), TEXT("UHighDensityMeshReductionPipeline"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHighDensityMeshReductionPipeline);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
