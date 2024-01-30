// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/SimplygonAmbientOcclusionCaster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimplygonAmbientOcclusionCaster() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonAmbientOcclusionCaster_NoRegister();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonAmbientOcclusionCaster();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonMaterialCaster();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings();
// End Cross Module References
	void USimplygonAmbientOcclusionCaster::StaticRegisterNativesUSimplygonAmbientOcclusionCaster()
	{
	}
	UClass* Z_Construct_UClass_USimplygonAmbientOcclusionCaster_NoRegister()
	{
		return USimplygonAmbientOcclusionCaster::StaticClass();
	}
	struct Z_Construct_UClass_USimplygonAmbientOcclusionCaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionCasterSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmbientOcclusionCasterSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimplygonAmbientOcclusionCaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimplygonMaterialCaster,
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplygonAmbientOcclusionCaster_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimplygonAmbientOcclusionCaster.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimplygonAmbientOcclusionCaster.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplygonAmbientOcclusionCaster_Statics::NewProp_AmbientOcclusionCasterSettings_MetaData[] = {
		{ "Category", "SimplygonAmbientOcclusionCaster" },
		{ "ModuleRelativePath", "Public/SimplygonAmbientOcclusionCaster.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimplygonAmbientOcclusionCaster_Statics::NewProp_AmbientOcclusionCasterSettings = { "AmbientOcclusionCasterSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimplygonAmbientOcclusionCaster, AmbientOcclusionCasterSettings), Z_Construct_UScriptStruct_FAmbientOcclusionCasterSettings, METADATA_PARAMS(Z_Construct_UClass_USimplygonAmbientOcclusionCaster_Statics::NewProp_AmbientOcclusionCasterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplygonAmbientOcclusionCaster_Statics::NewProp_AmbientOcclusionCasterSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimplygonAmbientOcclusionCaster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplygonAmbientOcclusionCaster_Statics::NewProp_AmbientOcclusionCasterSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimplygonAmbientOcclusionCaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimplygonAmbientOcclusionCaster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimplygonAmbientOcclusionCaster_Statics::ClassParams = {
		&USimplygonAmbientOcclusionCaster::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USimplygonAmbientOcclusionCaster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USimplygonAmbientOcclusionCaster_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimplygonAmbientOcclusionCaster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimplygonAmbientOcclusionCaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimplygonAmbientOcclusionCaster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimplygonAmbientOcclusionCaster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimplygonAmbientOcclusionCaster, 1802745737);
	template<> SIMPLYGONUOBJECTS_API UClass* StaticClass<USimplygonAmbientOcclusionCaster>()
	{
		return USimplygonAmbientOcclusionCaster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimplygonAmbientOcclusionCaster(Z_Construct_UClass_USimplygonAmbientOcclusionCaster, &USimplygonAmbientOcclusionCaster::StaticClass, TEXT("/Script/SimplygonUObjects"), TEXT("USimplygonAmbientOcclusionCaster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimplygonAmbientOcclusionCaster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
