// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/SimplygonOpacityCaster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimplygonOpacityCaster() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonOpacityCaster_NoRegister();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonOpacityCaster();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonMaterialCaster();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FOpacityCasterSettings();
// End Cross Module References
	void USimplygonOpacityCaster::StaticRegisterNativesUSimplygonOpacityCaster()
	{
	}
	UClass* Z_Construct_UClass_USimplygonOpacityCaster_NoRegister()
	{
		return USimplygonOpacityCaster::StaticClass();
	}
	struct Z_Construct_UClass_USimplygonOpacityCaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityCasterSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OpacityCasterSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimplygonOpacityCaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimplygonMaterialCaster,
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplygonOpacityCaster_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimplygonOpacityCaster.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimplygonOpacityCaster.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplygonOpacityCaster_Statics::NewProp_OpacityCasterSettings_MetaData[] = {
		{ "Category", "SimplygonOpacityCaster" },
		{ "ModuleRelativePath", "Public/SimplygonOpacityCaster.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimplygonOpacityCaster_Statics::NewProp_OpacityCasterSettings = { "OpacityCasterSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimplygonOpacityCaster, OpacityCasterSettings), Z_Construct_UScriptStruct_FOpacityCasterSettings, METADATA_PARAMS(Z_Construct_UClass_USimplygonOpacityCaster_Statics::NewProp_OpacityCasterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplygonOpacityCaster_Statics::NewProp_OpacityCasterSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimplygonOpacityCaster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplygonOpacityCaster_Statics::NewProp_OpacityCasterSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimplygonOpacityCaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimplygonOpacityCaster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimplygonOpacityCaster_Statics::ClassParams = {
		&USimplygonOpacityCaster::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USimplygonOpacityCaster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USimplygonOpacityCaster_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimplygonOpacityCaster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimplygonOpacityCaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimplygonOpacityCaster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimplygonOpacityCaster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimplygonOpacityCaster, 1021665231);
	template<> SIMPLYGONUOBJECTS_API UClass* StaticClass<USimplygonOpacityCaster>()
	{
		return USimplygonOpacityCaster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimplygonOpacityCaster(Z_Construct_UClass_USimplygonOpacityCaster, &USimplygonOpacityCaster::StaticClass, TEXT("/Script/SimplygonUObjects"), TEXT("USimplygonOpacityCaster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimplygonOpacityCaster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
