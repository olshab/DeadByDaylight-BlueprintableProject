// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/GenericPopupViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenericPopupViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UGenericPopupViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UGenericPopupViewData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UBasePopupViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPopupButtonViewData();
// End Cross Module References
	void UGenericPopupViewData::StaticRegisterNativesUGenericPopupViewData()
	{
	}
	UClass* Z_Construct_UClass_UGenericPopupViewData_NoRegister()
	{
		return UGenericPopupViewData::StaticClass();
	}
	struct Z_Construct_UClass_UGenericPopupViewData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProgressionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegressionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RegressionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlternativeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlternativeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenericPopupViewData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasePopupViewData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericPopupViewData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GenericPopupViewData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GenericPopupViewData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericPopupViewData_Statics::NewProp_ProgressionData_MetaData[] = {
		{ "Category", "GenericPopupViewData" },
		{ "ModuleRelativePath", "Public/GenericPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenericPopupViewData_Statics::NewProp_ProgressionData = { "ProgressionData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericPopupViewData, ProgressionData), Z_Construct_UScriptStruct_FPopupButtonViewData, METADATA_PARAMS(Z_Construct_UClass_UGenericPopupViewData_Statics::NewProp_ProgressionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericPopupViewData_Statics::NewProp_ProgressionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericPopupViewData_Statics::NewProp_RegressionData_MetaData[] = {
		{ "Category", "GenericPopupViewData" },
		{ "ModuleRelativePath", "Public/GenericPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenericPopupViewData_Statics::NewProp_RegressionData = { "RegressionData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericPopupViewData, RegressionData), Z_Construct_UScriptStruct_FPopupButtonViewData, METADATA_PARAMS(Z_Construct_UClass_UGenericPopupViewData_Statics::NewProp_RegressionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericPopupViewData_Statics::NewProp_RegressionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericPopupViewData_Statics::NewProp_AlternativeData_MetaData[] = {
		{ "Category", "GenericPopupViewData" },
		{ "ModuleRelativePath", "Public/GenericPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenericPopupViewData_Statics::NewProp_AlternativeData = { "AlternativeData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericPopupViewData, AlternativeData), Z_Construct_UScriptStruct_FPopupButtonViewData, METADATA_PARAMS(Z_Construct_UClass_UGenericPopupViewData_Statics::NewProp_AlternativeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericPopupViewData_Statics::NewProp_AlternativeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenericPopupViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericPopupViewData_Statics::NewProp_ProgressionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericPopupViewData_Statics::NewProp_RegressionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericPopupViewData_Statics::NewProp_AlternativeData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenericPopupViewData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenericPopupViewData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGenericPopupViewData_Statics::ClassParams = {
		&UGenericPopupViewData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGenericPopupViewData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGenericPopupViewData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGenericPopupViewData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericPopupViewData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenericPopupViewData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGenericPopupViewData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGenericPopupViewData, 1183917791);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UGenericPopupViewData>()
	{
		return UGenericPopupViewData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGenericPopupViewData(Z_Construct_UClass_UGenericPopupViewData, &UGenericPopupViewData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UGenericPopupViewData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenericPopupViewData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
