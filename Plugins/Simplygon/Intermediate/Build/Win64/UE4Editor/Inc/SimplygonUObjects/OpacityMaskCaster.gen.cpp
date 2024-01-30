// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/OpacityMaskCaster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpacityMaskCaster() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_UOpacityMaskCaster_NoRegister();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_UOpacityMaskCaster();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonOpacityCaster();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
	void UOpacityMaskCaster::StaticRegisterNativesUOpacityMaskCaster()
	{
	}
	UClass* Z_Construct_UClass_UOpacityMaskCaster_NoRegister()
	{
		return UOpacityMaskCaster::StaticClass();
	}
	struct Z_Construct_UClass_UOpacityMaskCaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpacityMaskCaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimplygonOpacityCaster,
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpacityMaskCaster_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OpacityMaskCaster.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OpacityMaskCaster.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpacityMaskCaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpacityMaskCaster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpacityMaskCaster_Statics::ClassParams = {
		&UOpacityMaskCaster::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOpacityMaskCaster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpacityMaskCaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpacityMaskCaster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpacityMaskCaster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpacityMaskCaster, 2038789558);
	template<> SIMPLYGONUOBJECTS_API UClass* StaticClass<UOpacityMaskCaster>()
	{
		return UOpacityMaskCaster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpacityMaskCaster(Z_Construct_UClass_UOpacityMaskCaster, &UOpacityMaskCaster::StaticClass, TEXT("/Script/SimplygonUObjects"), TEXT("UOpacityMaskCaster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpacityMaskCaster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
