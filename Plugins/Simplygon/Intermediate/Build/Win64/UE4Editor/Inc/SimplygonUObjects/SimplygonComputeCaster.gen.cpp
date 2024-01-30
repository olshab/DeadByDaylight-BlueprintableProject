// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/SimplygonComputeCaster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimplygonComputeCaster() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonComputeCaster_NoRegister();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonComputeCaster();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonMaterialCaster();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FComputeCasterSettings();
// End Cross Module References
	void USimplygonComputeCaster::StaticRegisterNativesUSimplygonComputeCaster()
	{
	}
	UClass* Z_Construct_UClass_USimplygonComputeCaster_NoRegister()
	{
		return USimplygonComputeCaster::StaticClass();
	}
	struct Z_Construct_UClass_USimplygonComputeCaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComputeCasterSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComputeCasterSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimplygonComputeCaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimplygonMaterialCaster,
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplygonComputeCaster_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimplygonComputeCaster.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimplygonComputeCaster.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplygonComputeCaster_Statics::NewProp_ComputeCasterSettings_MetaData[] = {
		{ "Category", "SimplygonComputeCaster" },
		{ "ModuleRelativePath", "Public/SimplygonComputeCaster.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimplygonComputeCaster_Statics::NewProp_ComputeCasterSettings = { "ComputeCasterSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimplygonComputeCaster, ComputeCasterSettings), Z_Construct_UScriptStruct_FComputeCasterSettings, METADATA_PARAMS(Z_Construct_UClass_USimplygonComputeCaster_Statics::NewProp_ComputeCasterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplygonComputeCaster_Statics::NewProp_ComputeCasterSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimplygonComputeCaster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplygonComputeCaster_Statics::NewProp_ComputeCasterSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimplygonComputeCaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimplygonComputeCaster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimplygonComputeCaster_Statics::ClassParams = {
		&USimplygonComputeCaster::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USimplygonComputeCaster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USimplygonComputeCaster_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimplygonComputeCaster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimplygonComputeCaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimplygonComputeCaster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimplygonComputeCaster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimplygonComputeCaster, 4222666263);
	template<> SIMPLYGONUOBJECTS_API UClass* StaticClass<USimplygonComputeCaster>()
	{
		return USimplygonComputeCaster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimplygonComputeCaster(Z_Construct_UClass_USimplygonComputeCaster, &USimplygonComputeCaster::StaticClass, TEXT("/Script/SimplygonUObjects"), TEXT("USimplygonComputeCaster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimplygonComputeCaster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
