// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/NormalCaster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNormalCaster() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_UNormalCaster_NoRegister();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_UNormalCaster();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonNormalCaster();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
	void UNormalCaster::StaticRegisterNativesUNormalCaster()
	{
	}
	UClass* Z_Construct_UClass_UNormalCaster_NoRegister()
	{
		return UNormalCaster::StaticClass();
	}
	struct Z_Construct_UClass_UNormalCaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNormalCaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimplygonNormalCaster,
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNormalCaster_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NormalCaster.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NormalCaster.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNormalCaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNormalCaster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNormalCaster_Statics::ClassParams = {
		&UNormalCaster::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNormalCaster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNormalCaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNormalCaster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNormalCaster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNormalCaster, 326476873);
	template<> SIMPLYGONUOBJECTS_API UClass* StaticClass<UNormalCaster>()
	{
		return UNormalCaster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNormalCaster(Z_Construct_UClass_UNormalCaster, &UNormalCaster::StaticClass, TEXT("/Script/SimplygonUObjects"), TEXT("UNormalCaster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNormalCaster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
