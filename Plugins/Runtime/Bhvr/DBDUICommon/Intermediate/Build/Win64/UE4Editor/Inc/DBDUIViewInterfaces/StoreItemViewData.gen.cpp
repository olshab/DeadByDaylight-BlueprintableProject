// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/StoreItemViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreItemViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreItemViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreItemViewData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPriceTagViewData();
// End Cross Module References
	void UStoreItemViewData::StaticRegisterNativesUStoreItemViewData()
	{
	}
	UClass* Z_Construct_UClass_UStoreItemViewData_NoRegister()
	{
		return UStoreItemViewData::StaticClass();
	}
	struct Z_Construct_UClass_UStoreItemViewData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PriceTagData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriceTagData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PriceTagData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInStore_MetaData[];
#endif
		static void NewProp_IsInStore_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInStore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNewInStore_MetaData[];
#endif
		static void NewProp_IsNewInStore_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsNewInStore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitedTimeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LimitedTimeText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscountTimeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DiscountTimeText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreItemViewData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreItemViewData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StoreItemViewData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StoreItemViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_PriceTagData_Inner = { "PriceTagData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPriceTagViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_PriceTagData_MetaData[] = {
		{ "Category", "StoreItemViewData" },
		{ "ModuleRelativePath", "Public/StoreItemViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_PriceTagData = { "PriceTagData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreItemViewData, PriceTagData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_PriceTagData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_PriceTagData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_IsInStore_MetaData[] = {
		{ "Category", "StoreItemViewData" },
		{ "ModuleRelativePath", "Public/StoreItemViewData.h" },
	};
#endif
	void Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_IsInStore_SetBit(void* Obj)
	{
		((UStoreItemViewData*)Obj)->IsInStore = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_IsInStore = { "IsInStore", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStoreItemViewData), &Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_IsInStore_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_IsInStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_IsInStore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_IsNewInStore_MetaData[] = {
		{ "Category", "StoreItemViewData" },
		{ "ModuleRelativePath", "Public/StoreItemViewData.h" },
	};
#endif
	void Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_IsNewInStore_SetBit(void* Obj)
	{
		((UStoreItemViewData*)Obj)->IsNewInStore = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_IsNewInStore = { "IsNewInStore", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStoreItemViewData), &Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_IsNewInStore_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_IsNewInStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_IsNewInStore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_LimitedTimeText_MetaData[] = {
		{ "Category", "StoreItemViewData" },
		{ "ModuleRelativePath", "Public/StoreItemViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_LimitedTimeText = { "LimitedTimeText", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreItemViewData, LimitedTimeText), METADATA_PARAMS(Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_LimitedTimeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_LimitedTimeText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_DiscountTimeText_MetaData[] = {
		{ "Category", "StoreItemViewData" },
		{ "ModuleRelativePath", "Public/StoreItemViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_DiscountTimeText = { "DiscountTimeText", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreItemViewData, DiscountTimeText), METADATA_PARAMS(Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_DiscountTimeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_DiscountTimeText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStoreItemViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_PriceTagData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_PriceTagData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_IsInStore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_IsNewInStore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_LimitedTimeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreItemViewData_Statics::NewProp_DiscountTimeText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreItemViewData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStoreItemViewData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoreItemViewData_Statics::ClassParams = {
		&UStoreItemViewData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStoreItemViewData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStoreItemViewData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStoreItemViewData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreItemViewData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreItemViewData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoreItemViewData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoreItemViewData, 4220074995);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UStoreItemViewData>()
	{
		return UStoreItemViewData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoreItemViewData(Z_Construct_UClass_UStoreItemViewData, &UStoreItemViewData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UStoreItemViewData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreItemViewData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
