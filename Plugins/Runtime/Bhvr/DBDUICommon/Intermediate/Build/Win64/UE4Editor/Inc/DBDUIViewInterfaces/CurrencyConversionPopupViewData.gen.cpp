// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/CurrencyConversionPopupViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurrencyConversionPopupViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UCurrencyConversionPopupViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UCurrencyConversionPopupViewData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UGenericPopupViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
// End Cross Module References
	void UCurrencyConversionPopupViewData::StaticRegisterNativesUCurrencyConversionPopupViewData()
	{
	}
	UClass* Z_Construct_UClass_UCurrencyConversionPopupViewData_NoRegister()
	{
		return UCurrencyConversionPopupViewData::StaticClass();
	}
	struct Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FromCurrencyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromCurrencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FromCurrencyType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromCurrencyAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FromCurrencyAmount;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ToCurrencyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToCurrencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ToCurrencyType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToCurrencyAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ToCurrencyAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupViewData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CurrencyConversionPopupViewData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CurrencyConversionPopupViewData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "CurrencyConversionPopupViewData" },
		{ "ModuleRelativePath", "Public/CurrencyConversionPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurrencyConversionPopupViewData, EventName), METADATA_PARAMS(Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_EventName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_FromCurrencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_FromCurrencyType_MetaData[] = {
		{ "Category", "CurrencyConversionPopupViewData" },
		{ "ModuleRelativePath", "Public/CurrencyConversionPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_FromCurrencyType = { "FromCurrencyType", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurrencyConversionPopupViewData, FromCurrencyType), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_FromCurrencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_FromCurrencyType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_FromCurrencyAmount_MetaData[] = {
		{ "Category", "CurrencyConversionPopupViewData" },
		{ "ModuleRelativePath", "Public/CurrencyConversionPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_FromCurrencyAmount = { "FromCurrencyAmount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurrencyConversionPopupViewData, FromCurrencyAmount), METADATA_PARAMS(Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_FromCurrencyAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_FromCurrencyAmount_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_ToCurrencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_ToCurrencyType_MetaData[] = {
		{ "Category", "CurrencyConversionPopupViewData" },
		{ "ModuleRelativePath", "Public/CurrencyConversionPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_ToCurrencyType = { "ToCurrencyType", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurrencyConversionPopupViewData, ToCurrencyType), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_ToCurrencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_ToCurrencyType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_ToCurrencyAmount_MetaData[] = {
		{ "Category", "CurrencyConversionPopupViewData" },
		{ "ModuleRelativePath", "Public/CurrencyConversionPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_ToCurrencyAmount = { "ToCurrencyAmount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurrencyConversionPopupViewData, ToCurrencyAmount), METADATA_PARAMS(Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_ToCurrencyAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_ToCurrencyAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_FromCurrencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_FromCurrencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_FromCurrencyAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_ToCurrencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_ToCurrencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::NewProp_ToCurrencyAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurrencyConversionPopupViewData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::ClassParams = {
		&UCurrencyConversionPopupViewData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurrencyConversionPopupViewData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCurrencyConversionPopupViewData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCurrencyConversionPopupViewData, 1339133395);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UCurrencyConversionPopupViewData>()
	{
		return UCurrencyConversionPopupViewData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurrencyConversionPopupViewData(Z_Construct_UClass_UCurrencyConversionPopupViewData, &UCurrencyConversionPopupViewData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UCurrencyConversionPopupViewData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurrencyConversionPopupViewData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
