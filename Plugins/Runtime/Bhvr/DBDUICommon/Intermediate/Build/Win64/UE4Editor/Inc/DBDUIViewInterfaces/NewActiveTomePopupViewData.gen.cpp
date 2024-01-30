// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/NewActiveTomePopupViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewActiveTomePopupViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UNewActiveTomePopupViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UNewActiveTomePopupViewData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UGenericPopupViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	void UNewActiveTomePopupViewData::StaticRegisterNativesUNewActiveTomePopupViewData()
	{
	}
	UClass* Z_Construct_UClass_UNewActiveTomePopupViewData_NoRegister()
	{
		return UNewActiveTomePopupViewData::StaticClass();
	}
	struct Z_Construct_UClass_UNewActiveTomePopupViewData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNewActiveTomePopupViewData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupViewData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewActiveTomePopupViewData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NewActiveTomePopupViewData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NewActiveTomePopupViewData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNewActiveTomePopupViewData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewActiveTomePopupViewData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNewActiveTomePopupViewData_Statics::ClassParams = {
		&UNewActiveTomePopupViewData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNewActiveTomePopupViewData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNewActiveTomePopupViewData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNewActiveTomePopupViewData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNewActiveTomePopupViewData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNewActiveTomePopupViewData, 212815353);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UNewActiveTomePopupViewData>()
	{
		return UNewActiveTomePopupViewData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNewActiveTomePopupViewData(Z_Construct_UClass_UNewActiveTomePopupViewData, &UNewActiveTomePopupViewData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UNewActiveTomePopupViewData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNewActiveTomePopupViewData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
