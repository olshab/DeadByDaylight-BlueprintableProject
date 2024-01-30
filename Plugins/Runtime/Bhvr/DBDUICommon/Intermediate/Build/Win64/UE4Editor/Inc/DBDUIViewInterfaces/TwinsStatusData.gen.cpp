// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/TwinsStatusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinsStatusData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UTwinsStatusData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UTwinsStatusData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UKillerStatusData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	void UTwinsStatusData::StaticRegisterNativesUTwinsStatusData()
	{
	}
	UClass* Z_Construct_UClass_UTwinsStatusData_NoRegister()
	{
		return UTwinsStatusData::StaticClass();
	}
	struct Z_Construct_UClass_UTwinsStatusData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwinsActive_MetaData[];
#endif
		static void NewProp_TwinsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TwinsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwinsStatusData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerStatusData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinsStatusData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TwinsStatusData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TwinsStatusData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinsStatusData_Statics::NewProp_TwinsActive_MetaData[] = {
		{ "Category", "TwinsStatusData" },
		{ "ModuleRelativePath", "Public/TwinsStatusData.h" },
	};
#endif
	void Z_Construct_UClass_UTwinsStatusData_Statics::NewProp_TwinsActive_SetBit(void* Obj)
	{
		((UTwinsStatusData*)Obj)->TwinsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTwinsStatusData_Statics::NewProp_TwinsActive = { "TwinsActive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTwinsStatusData), &Z_Construct_UClass_UTwinsStatusData_Statics::NewProp_TwinsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTwinsStatusData_Statics::NewProp_TwinsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinsStatusData_Statics::NewProp_TwinsActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTwinsStatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinsStatusData_Statics::NewProp_TwinsActive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwinsStatusData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinsStatusData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwinsStatusData_Statics::ClassParams = {
		&UTwinsStatusData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTwinsStatusData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTwinsStatusData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTwinsStatusData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinsStatusData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwinsStatusData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwinsStatusData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwinsStatusData, 3281495257);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UTwinsStatusData>()
	{
		return UTwinsStatusData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwinsStatusData(Z_Construct_UClass_UTwinsStatusData, &UTwinsStatusData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UTwinsStatusData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinsStatusData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
