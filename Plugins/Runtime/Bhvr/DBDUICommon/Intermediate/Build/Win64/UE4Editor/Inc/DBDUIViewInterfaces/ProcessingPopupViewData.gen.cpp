// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ProcessingPopupViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProcessingPopupViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UProcessingPopupViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UProcessingPopupViewData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UBasePopupViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	void UProcessingPopupViewData::StaticRegisterNativesUProcessingPopupViewData()
	{
	}
	UClass* Z_Construct_UClass_UProcessingPopupViewData_NoRegister()
	{
		return UProcessingPopupViewData::StaticClass();
	}
	struct Z_Construct_UClass_UProcessingPopupViewData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProcessingPopupViewData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasePopupViewData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProcessingPopupViewData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ProcessingPopupViewData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ProcessingPopupViewData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProcessingPopupViewData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProcessingPopupViewData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProcessingPopupViewData_Statics::ClassParams = {
		&UProcessingPopupViewData::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProcessingPopupViewData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProcessingPopupViewData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProcessingPopupViewData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProcessingPopupViewData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProcessingPopupViewData, 2289231052);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UProcessingPopupViewData>()
	{
		return UProcessingPopupViewData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProcessingPopupViewData(Z_Construct_UClass_UProcessingPopupViewData, &UProcessingPopupViewData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UProcessingPopupViewData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProcessingPopupViewData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
