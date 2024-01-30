// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ProgressionSystemInfoPopupViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProgressionSystemInfoPopupViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UProgressionSystemInfoPopupViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UProgressionSystemInfoPopupViewData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UGenericPopupViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	void UProgressionSystemInfoPopupViewData::StaticRegisterNativesUProgressionSystemInfoPopupViewData()
	{
	}
	UClass* Z_Construct_UClass_UProgressionSystemInfoPopupViewData_NoRegister()
	{
		return UProgressionSystemInfoPopupViewData::StaticClass();
	}
	struct Z_Construct_UClass_UProgressionSystemInfoPopupViewData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProgressionSystemInfoPopupViewData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupViewData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressionSystemInfoPopupViewData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ProgressionSystemInfoPopupViewData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ProgressionSystemInfoPopupViewData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProgressionSystemInfoPopupViewData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProgressionSystemInfoPopupViewData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProgressionSystemInfoPopupViewData_Statics::ClassParams = {
		&UProgressionSystemInfoPopupViewData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UProgressionSystemInfoPopupViewData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProgressionSystemInfoPopupViewData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProgressionSystemInfoPopupViewData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProgressionSystemInfoPopupViewData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProgressionSystemInfoPopupViewData, 1988150342);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UProgressionSystemInfoPopupViewData>()
	{
		return UProgressionSystemInfoPopupViewData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProgressionSystemInfoPopupViewData(Z_Construct_UClass_UProgressionSystemInfoPopupViewData, &UProgressionSystemInfoPopupViewData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UProgressionSystemInfoPopupViewData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProgressionSystemInfoPopupViewData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
