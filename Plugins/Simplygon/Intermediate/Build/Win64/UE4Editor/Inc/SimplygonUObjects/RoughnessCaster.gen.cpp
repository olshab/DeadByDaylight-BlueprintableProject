// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/RoughnessCaster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoughnessCaster() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_URoughnessCaster_NoRegister();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_URoughnessCaster();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_UBaseColorCaster();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
	void URoughnessCaster::StaticRegisterNativesURoughnessCaster()
	{
	}
	UClass* Z_Construct_UClass_URoughnessCaster_NoRegister()
	{
		return URoughnessCaster::StaticClass();
	}
	struct Z_Construct_UClass_URoughnessCaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URoughnessCaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseColorCaster,
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoughnessCaster_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RoughnessCaster.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RoughnessCaster.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URoughnessCaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoughnessCaster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URoughnessCaster_Statics::ClassParams = {
		&URoughnessCaster::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URoughnessCaster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URoughnessCaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URoughnessCaster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URoughnessCaster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URoughnessCaster, 1171041684);
	template<> SIMPLYGONUOBJECTS_API UClass* StaticClass<URoughnessCaster>()
	{
		return URoughnessCaster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URoughnessCaster(Z_Construct_UClass_URoughnessCaster, &URoughnessCaster::StaticClass, TEXT("/Script/SimplygonUObjects"), TEXT("URoughnessCaster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URoughnessCaster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
