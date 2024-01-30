// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/StandinNearPipeline.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStandinNearPipeline() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_UStandinNearPipeline_NoRegister();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_UStandinNearPipeline();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonStandinPipeline();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FAggregationPipelineSettings();
// End Cross Module References
	void UStandinNearPipeline::StaticRegisterNativesUStandinNearPipeline()
	{
	}
	UClass* Z_Construct_UClass_UStandinNearPipeline_NoRegister()
	{
		return UStandinNearPipeline::StaticClass();
	}
	struct Z_Construct_UClass_UStandinNearPipeline_Statics
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
	UObject* (*const Z_Construct_UClass_UStandinNearPipeline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimplygonStandinPipeline,
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStandinNearPipeline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StandinNearPipeline.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StandinNearPipeline.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStandinNearPipeline_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "StandinNearPipeline" },
		{ "ModuleRelativePath", "Public/StandinNearPipeline.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStandinNearPipeline_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStandinNearPipeline, Settings), Z_Construct_UScriptStruct_FAggregationPipelineSettings, METADATA_PARAMS(Z_Construct_UClass_UStandinNearPipeline_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStandinNearPipeline_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStandinNearPipeline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStandinNearPipeline_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStandinNearPipeline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStandinNearPipeline>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStandinNearPipeline_Statics::ClassParams = {
		&UStandinNearPipeline::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStandinNearPipeline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStandinNearPipeline_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStandinNearPipeline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStandinNearPipeline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStandinNearPipeline()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStandinNearPipeline_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStandinNearPipeline, 1480820660);
	template<> SIMPLYGONUOBJECTS_API UClass* StaticClass<UStandinNearPipeline>()
	{
		return UStandinNearPipeline::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStandinNearPipeline(Z_Construct_UClass_UStandinNearPipeline, &UStandinNearPipeline::StaticClass, TEXT("/Script/SimplygonUObjects"), TEXT("UStandinNearPipeline"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStandinNearPipeline);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
