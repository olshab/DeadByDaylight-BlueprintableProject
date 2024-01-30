// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/SpecualarCaster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpecualarCaster() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USpecualarCaster_NoRegister();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USpecualarCaster();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_UBaseColorCaster();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
	void USpecualarCaster::StaticRegisterNativesUSpecualarCaster()
	{
	}
	UClass* Z_Construct_UClass_USpecualarCaster_NoRegister()
	{
		return USpecualarCaster::StaticClass();
	}
	struct Z_Construct_UClass_USpecualarCaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpecualarCaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseColorCaster,
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpecualarCaster_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SpecualarCaster.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SpecualarCaster.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpecualarCaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpecualarCaster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpecualarCaster_Statics::ClassParams = {
		&USpecualarCaster::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USpecualarCaster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpecualarCaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpecualarCaster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpecualarCaster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpecualarCaster, 3888923640);
	template<> SIMPLYGONUOBJECTS_API UClass* StaticClass<USpecualarCaster>()
	{
		return USpecualarCaster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpecualarCaster(Z_Construct_UClass_USpecualarCaster, &USpecualarCaster::StaticClass, TEXT("/Script/SimplygonUObjects"), TEXT("USpecualarCaster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpecualarCaster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
