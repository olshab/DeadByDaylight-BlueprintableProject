// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/MenuItemViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuItemViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UMenuItemViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UMenuItemViewData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UMenuLoadoutPartViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	void UMenuItemViewData::StaticRegisterNativesUMenuItemViewData()
	{
	}
	UClass* Z_Construct_UClass_UMenuItemViewData_NoRegister()
	{
		return UMenuItemViewData::StaticClass();
	}
	struct Z_Construct_UClass_UMenuItemViewData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMenuItemViewData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMenuLoadoutPartViewData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuItemViewData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MenuItemViewData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MenuItemViewData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMenuItemViewData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuItemViewData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMenuItemViewData_Statics::ClassParams = {
		&UMenuItemViewData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMenuItemViewData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuItemViewData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMenuItemViewData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMenuItemViewData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMenuItemViewData, 1574145298);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UMenuItemViewData>()
	{
		return UMenuItemViewData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMenuItemViewData(Z_Construct_UClass_UMenuItemViewData, &UMenuItemViewData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UMenuItemViewData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuItemViewData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
