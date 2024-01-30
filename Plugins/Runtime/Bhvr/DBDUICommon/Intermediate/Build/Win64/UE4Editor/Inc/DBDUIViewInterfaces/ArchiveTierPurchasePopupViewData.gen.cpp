// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ArchiveTierPurchasePopupViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveTierPurchasePopupViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveTierPurchasePopupViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveTierPurchasePopupViewData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UGenericPopupViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
// End Cross Module References
	void UArchiveTierPurchasePopupViewData::StaticRegisterNativesUArchiveTierPurchasePopupViewData()
	{
	}
	UClass* Z_Construct_UClass_UArchiveTierPurchasePopupViewData_NoRegister()
	{
		return UArchiveTierPurchasePopupViewData::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ImageTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTiers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentTier;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrencyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrencyType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnitPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnitPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscountPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DiscountPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAffordable_MetaData[];
#endif
		static void NewProp_IsAffordable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAffordable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWalletAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentWalletAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialQuantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InitialQuantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstBonusTier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FirstBonusTier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastBonusTier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastBonusTier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBonusTier_MetaData[];
#endif
		static void NewProp_IsBonusTier_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBonusTier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupViewData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ArchiveTierPurchasePopupViewData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArchiveTierPurchasePopupViewData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_ImageTexture_MetaData[] = {
		{ "Category", "ArchiveTierPurchasePopupViewData" },
		{ "ModuleRelativePath", "Public/ArchiveTierPurchasePopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_ImageTexture = { "ImageTexture", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveTierPurchasePopupViewData, ImageTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_ImageTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_ImageTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_MaxTiers_MetaData[] = {
		{ "Category", "ArchiveTierPurchasePopupViewData" },
		{ "ModuleRelativePath", "Public/ArchiveTierPurchasePopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_MaxTiers = { "MaxTiers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveTierPurchasePopupViewData, MaxTiers), METADATA_PARAMS(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_MaxTiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_MaxTiers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_CurrentTier_MetaData[] = {
		{ "Category", "ArchiveTierPurchasePopupViewData" },
		{ "ModuleRelativePath", "Public/ArchiveTierPurchasePopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_CurrentTier = { "CurrentTier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveTierPurchasePopupViewData, CurrentTier), METADATA_PARAMS(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_CurrentTier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_CurrentTier_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_CurrencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_CurrencyType_MetaData[] = {
		{ "Category", "ArchiveTierPurchasePopupViewData" },
		{ "ModuleRelativePath", "Public/ArchiveTierPurchasePopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_CurrencyType = { "CurrencyType", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveTierPurchasePopupViewData, CurrencyType), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_CurrencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_CurrencyType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_UnitPrice_MetaData[] = {
		{ "Category", "ArchiveTierPurchasePopupViewData" },
		{ "ModuleRelativePath", "Public/ArchiveTierPurchasePopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_UnitPrice = { "UnitPrice", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveTierPurchasePopupViewData, UnitPrice), METADATA_PARAMS(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_UnitPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_UnitPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_DiscountPercentage_MetaData[] = {
		{ "Category", "ArchiveTierPurchasePopupViewData" },
		{ "ModuleRelativePath", "Public/ArchiveTierPurchasePopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_DiscountPercentage = { "DiscountPercentage", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveTierPurchasePopupViewData, DiscountPercentage), METADATA_PARAMS(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_DiscountPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_DiscountPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_IsAffordable_MetaData[] = {
		{ "Category", "ArchiveTierPurchasePopupViewData" },
		{ "ModuleRelativePath", "Public/ArchiveTierPurchasePopupViewData.h" },
	};
#endif
	void Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_IsAffordable_SetBit(void* Obj)
	{
		((UArchiveTierPurchasePopupViewData*)Obj)->IsAffordable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_IsAffordable = { "IsAffordable", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UArchiveTierPurchasePopupViewData), &Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_IsAffordable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_IsAffordable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_IsAffordable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_CurrentWalletAmount_MetaData[] = {
		{ "Category", "ArchiveTierPurchasePopupViewData" },
		{ "ModuleRelativePath", "Public/ArchiveTierPurchasePopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_CurrentWalletAmount = { "CurrentWalletAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveTierPurchasePopupViewData, CurrentWalletAmount), METADATA_PARAMS(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_CurrentWalletAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_CurrentWalletAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_InitialQuantity_MetaData[] = {
		{ "Category", "ArchiveTierPurchasePopupViewData" },
		{ "ModuleRelativePath", "Public/ArchiveTierPurchasePopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_InitialQuantity = { "InitialQuantity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveTierPurchasePopupViewData, InitialQuantity), METADATA_PARAMS(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_InitialQuantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_InitialQuantity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_FirstBonusTier_MetaData[] = {
		{ "Category", "ArchiveTierPurchasePopupViewData" },
		{ "ModuleRelativePath", "Public/ArchiveTierPurchasePopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_FirstBonusTier = { "FirstBonusTier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveTierPurchasePopupViewData, FirstBonusTier), METADATA_PARAMS(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_FirstBonusTier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_FirstBonusTier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_LastBonusTier_MetaData[] = {
		{ "Category", "ArchiveTierPurchasePopupViewData" },
		{ "ModuleRelativePath", "Public/ArchiveTierPurchasePopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_LastBonusTier = { "LastBonusTier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveTierPurchasePopupViewData, LastBonusTier), METADATA_PARAMS(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_LastBonusTier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_LastBonusTier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_IsBonusTier_MetaData[] = {
		{ "Category", "ArchiveTierPurchasePopupViewData" },
		{ "ModuleRelativePath", "Public/ArchiveTierPurchasePopupViewData.h" },
	};
#endif
	void Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_IsBonusTier_SetBit(void* Obj)
	{
		((UArchiveTierPurchasePopupViewData*)Obj)->IsBonusTier = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_IsBonusTier = { "IsBonusTier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UArchiveTierPurchasePopupViewData), &Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_IsBonusTier_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_IsBonusTier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_IsBonusTier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_ImageTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_MaxTiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_CurrentTier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_CurrencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_CurrencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_UnitPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_DiscountPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_IsAffordable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_CurrentWalletAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_InitialQuantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_FirstBonusTier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_LastBonusTier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::NewProp_IsBonusTier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchiveTierPurchasePopupViewData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::ClassParams = {
		&UArchiveTierPurchasePopupViewData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveTierPurchasePopupViewData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveTierPurchasePopupViewData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveTierPurchasePopupViewData, 3664015280);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UArchiveTierPurchasePopupViewData>()
	{
		return UArchiveTierPurchasePopupViewData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveTierPurchasePopupViewData(Z_Construct_UClass_UArchiveTierPurchasePopupViewData, &UArchiveTierPurchasePopupViewData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UArchiveTierPurchasePopupViewData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveTierPurchasePopupViewData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
