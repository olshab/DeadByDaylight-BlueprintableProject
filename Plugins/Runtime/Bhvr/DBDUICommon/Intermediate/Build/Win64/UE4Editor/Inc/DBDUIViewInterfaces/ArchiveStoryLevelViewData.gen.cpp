// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ArchiveStoryLevelViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveStoryLevelViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveStoryLevelViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveStoryLevelViewData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EArchivesStoryLevelStatus();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
	void UArchiveStoryLevelViewData::StaticRegisterNativesUArchiveStoryLevelViewData()
	{
	}
	UClass* Z_Construct_UClass_UArchiveStoryLevelViewData_NoRegister()
	{
		return UArchiveStoryLevelViewData::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveStoryLevelViewData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartDate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ArchiveStoryLevelViewData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArchiveStoryLevelViewData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "ArchiveStoryLevelViewData" },
		{ "ModuleRelativePath", "Public/ArchiveStoryLevelViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveStoryLevelViewData, Level), METADATA_PARAMS(Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::NewProp_Level_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "ArchiveStoryLevelViewData" },
		{ "ModuleRelativePath", "Public/ArchiveStoryLevelViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveStoryLevelViewData, Status), Z_Construct_UEnum_DBDSharedTypes_EArchivesStoryLevelStatus, METADATA_PARAMS(Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::NewProp_StartDate_MetaData[] = {
		{ "Category", "ArchiveStoryLevelViewData" },
		{ "ModuleRelativePath", "Public/ArchiveStoryLevelViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::NewProp_StartDate = { "StartDate", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveStoryLevelViewData, StartDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::NewProp_StartDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::NewProp_StartDate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::NewProp_StartDate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchiveStoryLevelViewData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::ClassParams = {
		&UArchiveStoryLevelViewData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveStoryLevelViewData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveStoryLevelViewData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveStoryLevelViewData, 2890956636);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UArchiveStoryLevelViewData>()
	{
		return UArchiveStoryLevelViewData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveStoryLevelViewData(Z_Construct_UClass_UArchiveStoryLevelViewData, &UArchiveStoryLevelViewData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UArchiveStoryLevelViewData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveStoryLevelViewData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
