// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/SimplygonGeometryDataCaster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimplygonGeometryDataCaster() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonGeometryDataCaster_NoRegister();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonGeometryDataCaster();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonMaterialCaster();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryDataCasterSettings();
// End Cross Module References
	void USimplygonGeometryDataCaster::StaticRegisterNativesUSimplygonGeometryDataCaster()
	{
	}
	UClass* Z_Construct_UClass_USimplygonGeometryDataCaster_NoRegister()
	{
		return USimplygonGeometryDataCaster::StaticClass();
	}
	struct Z_Construct_UClass_USimplygonGeometryDataCaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryDataCasterSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeometryDataCasterSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimplygonGeometryDataCaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimplygonMaterialCaster,
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplygonGeometryDataCaster_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimplygonGeometryDataCaster.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimplygonGeometryDataCaster.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplygonGeometryDataCaster_Statics::NewProp_GeometryDataCasterSettings_MetaData[] = {
		{ "Category", "SimplygonGeometryDataCaster" },
		{ "ModuleRelativePath", "Public/SimplygonGeometryDataCaster.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimplygonGeometryDataCaster_Statics::NewProp_GeometryDataCasterSettings = { "GeometryDataCasterSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimplygonGeometryDataCaster, GeometryDataCasterSettings), Z_Construct_UScriptStruct_FGeometryDataCasterSettings, METADATA_PARAMS(Z_Construct_UClass_USimplygonGeometryDataCaster_Statics::NewProp_GeometryDataCasterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplygonGeometryDataCaster_Statics::NewProp_GeometryDataCasterSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimplygonGeometryDataCaster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplygonGeometryDataCaster_Statics::NewProp_GeometryDataCasterSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimplygonGeometryDataCaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimplygonGeometryDataCaster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimplygonGeometryDataCaster_Statics::ClassParams = {
		&USimplygonGeometryDataCaster::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USimplygonGeometryDataCaster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USimplygonGeometryDataCaster_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimplygonGeometryDataCaster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimplygonGeometryDataCaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimplygonGeometryDataCaster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimplygonGeometryDataCaster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimplygonGeometryDataCaster, 2644608803);
	template<> SIMPLYGONUOBJECTS_API UClass* StaticClass<USimplygonGeometryDataCaster>()
	{
		return USimplygonGeometryDataCaster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimplygonGeometryDataCaster(Z_Construct_UClass_USimplygonGeometryDataCaster, &USimplygonGeometryDataCaster::StaticClass, TEXT("/Script/SimplygonUObjects"), TEXT("USimplygonGeometryDataCaster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimplygonGeometryDataCaster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif