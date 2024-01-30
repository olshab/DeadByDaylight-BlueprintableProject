// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ExecutionerStatusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExecutionerStatusData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UExecutionerStatusData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UExecutionerStatusData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UKillerStatusData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	void UExecutionerStatusData::StaticRegisterNativesUExecutionerStatusData()
	{
	}
	UClass* Z_Construct_UClass_UExecutionerStatusData_NoRegister()
	{
		return UExecutionerStatusData::StaticClass();
	}
	struct Z_Construct_UClass_UExecutionerStatusData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgonyProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgonyProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExecutionerStatusData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerStatusData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExecutionerStatusData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ExecutionerStatusData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ExecutionerStatusData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExecutionerStatusData_Statics::NewProp_AgonyProgress_MetaData[] = {
		{ "Category", "ExecutionerStatusData" },
		{ "ModuleRelativePath", "Public/ExecutionerStatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExecutionerStatusData_Statics::NewProp_AgonyProgress = { "AgonyProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExecutionerStatusData, AgonyProgress), METADATA_PARAMS(Z_Construct_UClass_UExecutionerStatusData_Statics::NewProp_AgonyProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExecutionerStatusData_Statics::NewProp_AgonyProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExecutionerStatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExecutionerStatusData_Statics::NewProp_AgonyProgress,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExecutionerStatusData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExecutionerStatusData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExecutionerStatusData_Statics::ClassParams = {
		&UExecutionerStatusData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UExecutionerStatusData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UExecutionerStatusData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UExecutionerStatusData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExecutionerStatusData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExecutionerStatusData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExecutionerStatusData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExecutionerStatusData, 770409886);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UExecutionerStatusData>()
	{
		return UExecutionerStatusData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExecutionerStatusData(Z_Construct_UClass_UExecutionerStatusData, &UExecutionerStatusData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UExecutionerStatusData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExecutionerStatusData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
