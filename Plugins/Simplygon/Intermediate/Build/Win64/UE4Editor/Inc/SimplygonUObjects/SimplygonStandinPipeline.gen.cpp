// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/SimplygonStandinPipeline.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimplygonStandinPipeline() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonStandinPipeline_NoRegister();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonStandinPipeline();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FChartAggregatorSettings();
// End Cross Module References
	void USimplygonStandinPipeline::StaticRegisterNativesUSimplygonStandinPipeline()
	{
	}
	UClass* Z_Construct_UClass_USimplygonStandinPipeline_NoRegister()
	{
		return USimplygonStandinPipeline::StaticClass();
	}
	struct Z_Construct_UClass_USimplygonStandinPipeline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChartAggregatorSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChartAggregatorSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimplygonStandinPipeline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplygonStandinPipeline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimplygonStandinPipeline.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimplygonStandinPipeline.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplygonStandinPipeline_Statics::NewProp_ChartAggregatorSettings_MetaData[] = {
		{ "Category", "SimplygonStandinPipeline" },
		{ "ModuleRelativePath", "Public/SimplygonStandinPipeline.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimplygonStandinPipeline_Statics::NewProp_ChartAggregatorSettings = { "ChartAggregatorSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimplygonStandinPipeline, ChartAggregatorSettings), Z_Construct_UScriptStruct_FChartAggregatorSettings, METADATA_PARAMS(Z_Construct_UClass_USimplygonStandinPipeline_Statics::NewProp_ChartAggregatorSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplygonStandinPipeline_Statics::NewProp_ChartAggregatorSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimplygonStandinPipeline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplygonStandinPipeline_Statics::NewProp_ChartAggregatorSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimplygonStandinPipeline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimplygonStandinPipeline>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimplygonStandinPipeline_Statics::ClassParams = {
		&USimplygonStandinPipeline::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USimplygonStandinPipeline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USimplygonStandinPipeline_Statics::PropPointers),
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USimplygonStandinPipeline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimplygonStandinPipeline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimplygonStandinPipeline()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimplygonStandinPipeline_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimplygonStandinPipeline, 718653518);
	template<> SIMPLYGONUOBJECTS_API UClass* StaticClass<USimplygonStandinPipeline>()
	{
		return USimplygonStandinPipeline::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimplygonStandinPipeline(Z_Construct_UClass_USimplygonStandinPipeline, &USimplygonStandinPipeline::StaticClass, TEXT("/Script/SimplygonUObjects"), TEXT("USimplygonStandinPipeline"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimplygonStandinPipeline);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
