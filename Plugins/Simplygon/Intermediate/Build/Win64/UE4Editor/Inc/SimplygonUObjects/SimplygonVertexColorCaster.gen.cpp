// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/SimplygonVertexColorCaster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimplygonVertexColorCaster() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonVertexColorCaster_NoRegister();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonVertexColorCaster();
	SIMPLYGONUOBJECTS_API UClass* Z_Construct_UClass_USimplygonMaterialCaster();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FVertexColorCasterSettings();
// End Cross Module References
	void USimplygonVertexColorCaster::StaticRegisterNativesUSimplygonVertexColorCaster()
	{
	}
	UClass* Z_Construct_UClass_USimplygonVertexColorCaster_NoRegister()
	{
		return USimplygonVertexColorCaster::StaticClass();
	}
	struct Z_Construct_UClass_USimplygonVertexColorCaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorCasterSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexColorCasterSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimplygonVertexColorCaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimplygonMaterialCaster,
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplygonVertexColorCaster_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimplygonVertexColorCaster.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimplygonVertexColorCaster.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplygonVertexColorCaster_Statics::NewProp_VertexColorCasterSettings_MetaData[] = {
		{ "Category", "SimplygonVertexColorCaster" },
		{ "ModuleRelativePath", "Public/SimplygonVertexColorCaster.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimplygonVertexColorCaster_Statics::NewProp_VertexColorCasterSettings = { "VertexColorCasterSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimplygonVertexColorCaster, VertexColorCasterSettings), Z_Construct_UScriptStruct_FVertexColorCasterSettings, METADATA_PARAMS(Z_Construct_UClass_USimplygonVertexColorCaster_Statics::NewProp_VertexColorCasterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplygonVertexColorCaster_Statics::NewProp_VertexColorCasterSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimplygonVertexColorCaster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplygonVertexColorCaster_Statics::NewProp_VertexColorCasterSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimplygonVertexColorCaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimplygonVertexColorCaster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimplygonVertexColorCaster_Statics::ClassParams = {
		&USimplygonVertexColorCaster::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USimplygonVertexColorCaster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USimplygonVertexColorCaster_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimplygonVertexColorCaster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimplygonVertexColorCaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimplygonVertexColorCaster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimplygonVertexColorCaster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimplygonVertexColorCaster, 2905860703);
	template<> SIMPLYGONUOBJECTS_API UClass* StaticClass<USimplygonVertexColorCaster>()
	{
		return USimplygonVertexColorCaster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimplygonVertexColorCaster(Z_Construct_UClass_USimplygonVertexColorCaster, &USimplygonVertexColorCaster::StaticClass, TEXT("/Script/SimplygonUObjects"), TEXT("USimplygonVertexColorCaster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimplygonVertexColorCaster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
