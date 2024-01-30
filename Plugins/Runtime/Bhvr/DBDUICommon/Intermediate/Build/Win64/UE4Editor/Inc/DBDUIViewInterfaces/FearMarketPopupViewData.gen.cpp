// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/FearMarketPopupViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFearMarketPopupViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UFearMarketPopupViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UFearMarketPopupViewData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UGenericPopupViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UMenuPerkViewData_NoRegister();
// End Cross Module References
	void UFearMarketPopupViewData::StaticRegisterNativesUFearMarketPopupViewData()
	{
	}
	UClass* Z_Construct_UClass_UFearMarketPopupViewData_NoRegister()
	{
		return UFearMarketPopupViewData::StaticClass();
	}
	struct Z_Construct_UClass_UFearMarketPopupViewData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Cost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodpointConversion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BloodpointConversion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPurchased_MetaData[];
#endif
		static void NewProp_IsPurchased_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPurchased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlreadyOwned_MetaData[];
#endif
		static void NewProp_AlreadyOwned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlreadyOwned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailableTokens_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AvailableTokens;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFearMarketPopupViewData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupViewData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFearMarketPopupViewData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FearMarketPopupViewData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FearMarketPopupViewData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_ItemData_MetaData[] = {
		{ "Category", "FearMarketPopupViewData" },
		{ "ModuleRelativePath", "Public/FearMarketPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFearMarketPopupViewData, ItemData), Z_Construct_UClass_UMenuPerkViewData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_ItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_ItemData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_Cost_MetaData[] = {
		{ "Category", "FearMarketPopupViewData" },
		{ "ModuleRelativePath", "Public/FearMarketPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFearMarketPopupViewData, Cost), METADATA_PARAMS(Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_Cost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_Cost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_BloodpointConversion_MetaData[] = {
		{ "Category", "FearMarketPopupViewData" },
		{ "ModuleRelativePath", "Public/FearMarketPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_BloodpointConversion = { "BloodpointConversion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFearMarketPopupViewData, BloodpointConversion), METADATA_PARAMS(Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_BloodpointConversion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_BloodpointConversion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_IsPurchased_MetaData[] = {
		{ "Category", "FearMarketPopupViewData" },
		{ "ModuleRelativePath", "Public/FearMarketPopupViewData.h" },
	};
#endif
	void Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_IsPurchased_SetBit(void* Obj)
	{
		((UFearMarketPopupViewData*)Obj)->IsPurchased = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_IsPurchased = { "IsPurchased", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFearMarketPopupViewData), &Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_IsPurchased_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_IsPurchased_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_IsPurchased_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_AlreadyOwned_MetaData[] = {
		{ "Category", "FearMarketPopupViewData" },
		{ "ModuleRelativePath", "Public/FearMarketPopupViewData.h" },
	};
#endif
	void Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_AlreadyOwned_SetBit(void* Obj)
	{
		((UFearMarketPopupViewData*)Obj)->AlreadyOwned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_AlreadyOwned = { "AlreadyOwned", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFearMarketPopupViewData), &Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_AlreadyOwned_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_AlreadyOwned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_AlreadyOwned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_AvailableTokens_MetaData[] = {
		{ "Category", "FearMarketPopupViewData" },
		{ "ModuleRelativePath", "Public/FearMarketPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_AvailableTokens = { "AvailableTokens", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFearMarketPopupViewData, AvailableTokens), METADATA_PARAMS(Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_AvailableTokens_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_AvailableTokens_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFearMarketPopupViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_ItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_Cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_BloodpointConversion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_IsPurchased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_AlreadyOwned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFearMarketPopupViewData_Statics::NewProp_AvailableTokens,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFearMarketPopupViewData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFearMarketPopupViewData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFearMarketPopupViewData_Statics::ClassParams = {
		&UFearMarketPopupViewData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFearMarketPopupViewData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFearMarketPopupViewData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFearMarketPopupViewData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFearMarketPopupViewData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFearMarketPopupViewData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFearMarketPopupViewData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFearMarketPopupViewData, 149550759);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UFearMarketPopupViewData>()
	{
		return UFearMarketPopupViewData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFearMarketPopupViewData(Z_Construct_UClass_UFearMarketPopupViewData, &UFearMarketPopupViewData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UFearMarketPopupViewData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFearMarketPopupViewData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
