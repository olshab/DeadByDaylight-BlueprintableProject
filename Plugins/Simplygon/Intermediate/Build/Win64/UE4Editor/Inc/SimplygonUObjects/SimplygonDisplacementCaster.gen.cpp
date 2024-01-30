// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/SimplygonDisplacementCaster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimplygonDisplacementCaster() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonDisplacementCaster_NoRegister();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonDisplacementCaster();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonMaterialCaster();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FDisplacementCasterSettings();
// End Cross Module References
	void USimplygonDisplacementCaster::StaticRegisterNativesUSimplygonDisplacementCaster()
	{
	}
	UClass* Z_Construct_UClass_USimplygonDisplacementCaster_NoRegister()
	{
		return USimplygonDisplacementCaster::StaticClass();
	}
	struct Z_Construct_UClass_USimplygonDisplacementCaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplacementCasterSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplacementCasterSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimplygonDisplacementCaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimplygonMaterialCaster,
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplygonDisplacementCaster_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimplygonDisplacementCaster.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimplygonDisplacementCaster.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplygonDisplacementCaster_Statics::NewProp_DisplacementCasterSettings_MetaData[] = {
		{ "Category", "SimplygonDisplacementCaster" },
		{ "ModuleRelativePath", "Public/SimplygonDisplacementCaster.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimplygonDisplacementCaster_Statics::NewProp_DisplacementCasterSettings = { "DisplacementCasterSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimplygonDisplacementCaster, DisplacementCasterSettings), Z_Construct_UScriptStruct_FDisplacementCasterSettings, METADATA_PARAMS(Z_Construct_UClass_USimplygonDisplacementCaster_Statics::NewProp_DisplacementCasterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplygonDisplacementCaster_Statics::NewProp_DisplacementCasterSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimplygonDisplacementCaster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplygonDisplacementCaster_Statics::NewProp_DisplacementCasterSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimplygonDisplacementCaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimplygonDisplacementCaster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimplygonDisplacementCaster_Statics::ClassParams = {
		&USimplygonDisplacementCaster::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USimplygonDisplacementCaster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USimplygonDisplacementCaster_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimplygonDisplacementCaster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimplygonDisplacementCaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimplygonDisplacementCaster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimplygonDisplacementCaster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimplygonDisplacementCaster, 2084983240);
	template<> SIMPLYGONUOBJECTS_API UClass* StaticClass<USimplygonDisplacementCaster>()
	{
		return USimplygonDisplacementCaster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimplygonDisplacementCaster(Z_Construct_UClass_USimplygonDisplacementCaster, &USimplygonDisplacementCaster::StaticClass, TEXT("/Script/SimplygonUObjects"), TEXT("USimplygonDisplacementCaster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimplygonDisplacementCaster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
