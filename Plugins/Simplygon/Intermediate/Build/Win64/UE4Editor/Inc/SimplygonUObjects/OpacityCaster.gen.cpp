// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/OpacityCaster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpacityCaster() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_UOpacityCaster_NoRegister();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_UOpacityCaster();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonOpacityCaster();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
	void UOpacityCaster::StaticRegisterNativesUOpacityCaster()
	{
	}
	UClass* Z_Construct_UClass_UOpacityCaster_NoRegister()
	{
		return UOpacityCaster::StaticClass();
	}
	struct Z_Construct_UClass_UOpacityCaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpacityCaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimplygonOpacityCaster,
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpacityCaster_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OpacityCaster.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OpacityCaster.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpacityCaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpacityCaster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpacityCaster_Statics::ClassParams = {
		&UOpacityCaster::StaticClass,
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
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOpacityCaster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpacityCaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpacityCaster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpacityCaster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpacityCaster, 14491328);
	template<> SIMPLYGONUOBJECTS_API UClass* StaticClass<UOpacityCaster>()
	{
		return UOpacityCaster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpacityCaster(Z_Construct_UClass_UOpacityCaster, &UOpacityCaster::StaticClass, TEXT("/Script/SimplygonUObjects"), TEXT("UOpacityCaster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpacityCaster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif