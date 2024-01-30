// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/K26StatusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK26StatusData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UK26StatusData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UK26StatusData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UKillerStatusData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	void UK26StatusData::StaticRegisterNativesUK26StatusData()
	{
	}
	UClass* Z_Construct_UClass_UK26StatusData_NoRegister()
	{
		return UK26StatusData::StaticClass();
	}
	struct Z_Construct_UClass_UK26StatusData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCrowAttached_MetaData[];
#endif
		static void NewProp_IsCrowAttached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCrowAttached;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK26StatusData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerStatusData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26StatusData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "K26StatusData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/K26StatusData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26StatusData_Statics::NewProp_IsCrowAttached_MetaData[] = {
		{ "Category", "K26StatusData" },
		{ "ModuleRelativePath", "Public/K26StatusData.h" },
	};
#endif
	void Z_Construct_UClass_UK26StatusData_Statics::NewProp_IsCrowAttached_SetBit(void* Obj)
	{
		((UK26StatusData*)Obj)->IsCrowAttached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK26StatusData_Statics::NewProp_IsCrowAttached = { "IsCrowAttached", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK26StatusData), &Z_Construct_UClass_UK26StatusData_Statics::NewProp_IsCrowAttached_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK26StatusData_Statics::NewProp_IsCrowAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26StatusData_Statics::NewProp_IsCrowAttached_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK26StatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26StatusData_Statics::NewProp_IsCrowAttached,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK26StatusData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK26StatusData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK26StatusData_Statics::ClassParams = {
		&UK26StatusData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK26StatusData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK26StatusData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK26StatusData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK26StatusData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK26StatusData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK26StatusData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK26StatusData, 291528963);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UK26StatusData>()
	{
		return UK26StatusData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK26StatusData(Z_Construct_UClass_UK26StatusData, &UK26StatusData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UK26StatusData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK26StatusData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
