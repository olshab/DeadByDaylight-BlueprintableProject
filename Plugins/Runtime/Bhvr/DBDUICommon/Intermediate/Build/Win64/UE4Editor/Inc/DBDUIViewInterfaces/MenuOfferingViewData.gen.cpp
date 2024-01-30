// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/MenuOfferingViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuOfferingViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UMenuOfferingViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UMenuOfferingViewData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UMenuLoadoutPartViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	void UMenuOfferingViewData::StaticRegisterNativesUMenuOfferingViewData()
	{
	}
	UClass* Z_Construct_UClass_UMenuOfferingViewData_NoRegister()
	{
		return UMenuOfferingViewData::StaticClass();
	}
	struct Z_Construct_UClass_UMenuOfferingViewData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMenuOfferingViewData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMenuLoadoutPartViewData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuOfferingViewData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MenuOfferingViewData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MenuOfferingViewData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMenuOfferingViewData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuOfferingViewData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMenuOfferingViewData_Statics::ClassParams = {
		&UMenuOfferingViewData::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMenuOfferingViewData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuOfferingViewData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMenuOfferingViewData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMenuOfferingViewData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMenuOfferingViewData, 1492580849);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UMenuOfferingViewData>()
	{
		return UMenuOfferingViewData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMenuOfferingViewData(Z_Construct_UClass_UMenuOfferingViewData, &UMenuOfferingViewData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UMenuOfferingViewData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuOfferingViewData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
