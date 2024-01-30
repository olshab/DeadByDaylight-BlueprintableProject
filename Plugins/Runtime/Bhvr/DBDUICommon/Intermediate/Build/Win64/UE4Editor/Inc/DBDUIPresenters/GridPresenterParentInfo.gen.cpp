// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/GridPresenterParentInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridPresenterParentInfo() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UGridPresenterParentInfo_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UGridPresenterParentInfo();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenterParentInfo();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UGridPresenterParentInfo::StaticRegisterNativesUGridPresenterParentInfo()
	{
	}
	UClass* Z_Construct_UClass_UGridPresenterParentInfo_NoRegister()
	{
		return UGridPresenterParentInfo::StaticClass();
	}
	struct Z_Construct_UClass_UGridPresenterParentInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Padding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nudge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Nudge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Row;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Column_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Column;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridPresenterParentInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresenterParentInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPresenterParentInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GridPresenterParentInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GridPresenterParentInfo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "GridPresenterParentInfo" },
		{ "ModuleRelativePath", "Public/GridPresenterParentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridPresenterParentInfo, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_HorizontalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "GridPresenterParentInfo" },
		{ "ModuleRelativePath", "Public/GridPresenterParentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridPresenterParentInfo, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_VerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "GridPresenterParentInfo" },
		{ "ModuleRelativePath", "Public/GridPresenterParentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridPresenterParentInfo, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_Padding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_Nudge_MetaData[] = {
		{ "Category", "GridPresenterParentInfo" },
		{ "ModuleRelativePath", "Public/GridPresenterParentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_Nudge = { "Nudge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridPresenterParentInfo, Nudge), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_Nudge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_Nudge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_Row_MetaData[] = {
		{ "Category", "GridPresenterParentInfo" },
		{ "ModuleRelativePath", "Public/GridPresenterParentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridPresenterParentInfo, Row), METADATA_PARAMS(Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_Row_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_Row_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_Column_MetaData[] = {
		{ "Category", "GridPresenterParentInfo" },
		{ "ModuleRelativePath", "Public/GridPresenterParentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_Column = { "Column", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridPresenterParentInfo, Column), METADATA_PARAMS(Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_Column_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_Column_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridPresenterParentInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_HorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_VerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_Padding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_Nudge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_Row,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPresenterParentInfo_Statics::NewProp_Column,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridPresenterParentInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridPresenterParentInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGridPresenterParentInfo_Statics::ClassParams = {
		&UGridPresenterParentInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGridPresenterParentInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridPresenterParentInfo_Statics::PropPointers),
		0,
		0x002010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridPresenterParentInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridPresenterParentInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridPresenterParentInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGridPresenterParentInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGridPresenterParentInfo, 2024986537);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UGridPresenterParentInfo>()
	{
		return UGridPresenterParentInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGridPresenterParentInfo(Z_Construct_UClass_UGridPresenterParentInfo, &UGridPresenterParentInfo::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UGridPresenterParentInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridPresenterParentInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
