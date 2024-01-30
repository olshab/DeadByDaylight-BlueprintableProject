// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/AmbientOcclusionMaskCaster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmbientOcclusionMaskCaster() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_UAmbientOcclusionMaskCaster_NoRegister();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_UAmbientOcclusionMaskCaster();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_UBaseColorCaster();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
	void UAmbientOcclusionMaskCaster::StaticRegisterNativesUAmbientOcclusionMaskCaster()
	{
	}
	UClass* Z_Construct_UClass_UAmbientOcclusionMaskCaster_NoRegister()
	{
		return UAmbientOcclusionMaskCaster::StaticClass();
	}
	struct Z_Construct_UClass_UAmbientOcclusionMaskCaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAmbientOcclusionMaskCaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseColorCaster,
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmbientOcclusionMaskCaster_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AmbientOcclusionMaskCaster.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AmbientOcclusionMaskCaster.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAmbientOcclusionMaskCaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAmbientOcclusionMaskCaster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAmbientOcclusionMaskCaster_Statics::ClassParams = {
		&UAmbientOcclusionMaskCaster::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAmbientOcclusionMaskCaster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAmbientOcclusionMaskCaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAmbientOcclusionMaskCaster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAmbientOcclusionMaskCaster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAmbientOcclusionMaskCaster, 1626209481);
	template<> SIMPLYGONUOBJECTS_API UClass* StaticClass<UAmbientOcclusionMaskCaster>()
	{
		return UAmbientOcclusionMaskCaster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAmbientOcclusionMaskCaster(Z_Construct_UClass_UAmbientOcclusionMaskCaster, &UAmbientOcclusionMaskCaster::StaticClass, TEXT("/Script/SimplygonUObjects"), TEXT("UAmbientOcclusionMaskCaster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAmbientOcclusionMaskCaster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
