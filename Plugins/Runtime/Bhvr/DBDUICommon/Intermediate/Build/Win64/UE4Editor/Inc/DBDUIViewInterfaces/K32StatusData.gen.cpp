// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/K32StatusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK32StatusData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UK32StatusData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UK32StatusData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UKillerStatusData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	void UK32StatusData::StaticRegisterNativesUK32StatusData()
	{
	}
	UClass* Z_Construct_UClass_UK32StatusData_NoRegister()
	{
		return UK32StatusData::StaticClass();
	}
	struct Z_Construct_UClass_UK32StatusData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAssimilated_MetaData[];
#endif
		static void NewProp_IsAssimilated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAssimilated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK32StatusData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerStatusData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK32StatusData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "K32StatusData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/K32StatusData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK32StatusData_Statics::NewProp_IsAssimilated_MetaData[] = {
		{ "Category", "K32StatusData" },
		{ "ModuleRelativePath", "Public/K32StatusData.h" },
	};
#endif
	void Z_Construct_UClass_UK32StatusData_Statics::NewProp_IsAssimilated_SetBit(void* Obj)
	{
		((UK32StatusData*)Obj)->IsAssimilated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK32StatusData_Statics::NewProp_IsAssimilated = { "IsAssimilated", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK32StatusData), &Z_Construct_UClass_UK32StatusData_Statics::NewProp_IsAssimilated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK32StatusData_Statics::NewProp_IsAssimilated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK32StatusData_Statics::NewProp_IsAssimilated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK32StatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK32StatusData_Statics::NewProp_IsAssimilated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK32StatusData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK32StatusData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK32StatusData_Statics::ClassParams = {
		&UK32StatusData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK32StatusData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK32StatusData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK32StatusData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK32StatusData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK32StatusData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK32StatusData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK32StatusData, 2468559920);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UK32StatusData>()
	{
		return UK32StatusData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK32StatusData(Z_Construct_UClass_UK32StatusData, &UK32StatusData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UK32StatusData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK32StatusData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
