// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/UnlockPersonalPerksPopupViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnlockPersonalPerksPopupViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UUnlockPersonalPerksPopupViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UUnlockPersonalPerksPopupViewData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UGenericPopupViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UMenuPerkViewData_NoRegister();
// End Cross Module References
	void UUnlockPersonalPerksPopupViewData::StaticRegisterNativesUUnlockPersonalPerksPopupViewData()
	{
	}
	UClass* Z_Construct_UClass_UUnlockPersonalPerksPopupViewData_NoRegister()
	{
		return UUnlockPersonalPerksPopupViewData::StaticClass();
	}
	struct Z_Construct_UClass_UUnlockPersonalPerksPopupViewData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerksData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerksData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerksData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnlockPersonalPerksPopupViewData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupViewData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnlockPersonalPerksPopupViewData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UnlockPersonalPerksPopupViewData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UnlockPersonalPerksPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnlockPersonalPerksPopupViewData_Statics::NewProp_PerksData_Inner = { "PerksData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMenuPerkViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnlockPersonalPerksPopupViewData_Statics::NewProp_PerksData_MetaData[] = {
		{ "Category", "UnlockPersonalPerksPopupViewData" },
		{ "ModuleRelativePath", "Public/UnlockPersonalPerksPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnlockPersonalPerksPopupViewData_Statics::NewProp_PerksData = { "PerksData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnlockPersonalPerksPopupViewData, PerksData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUnlockPersonalPerksPopupViewData_Statics::NewProp_PerksData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnlockPersonalPerksPopupViewData_Statics::NewProp_PerksData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnlockPersonalPerksPopupViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnlockPersonalPerksPopupViewData_Statics::NewProp_PerksData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnlockPersonalPerksPopupViewData_Statics::NewProp_PerksData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnlockPersonalPerksPopupViewData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnlockPersonalPerksPopupViewData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUnlockPersonalPerksPopupViewData_Statics::ClassParams = {
		&UUnlockPersonalPerksPopupViewData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUnlockPersonalPerksPopupViewData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUnlockPersonalPerksPopupViewData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUnlockPersonalPerksPopupViewData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnlockPersonalPerksPopupViewData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnlockPersonalPerksPopupViewData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUnlockPersonalPerksPopupViewData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUnlockPersonalPerksPopupViewData, 3090888903);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UUnlockPersonalPerksPopupViewData>()
	{
		return UUnlockPersonalPerksPopupViewData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUnlockPersonalPerksPopupViewData(Z_Construct_UClass_UUnlockPersonalPerksPopupViewData, &UUnlockPersonalPerksPopupViewData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UUnlockPersonalPerksPopupViewData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnlockPersonalPerksPopupViewData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
