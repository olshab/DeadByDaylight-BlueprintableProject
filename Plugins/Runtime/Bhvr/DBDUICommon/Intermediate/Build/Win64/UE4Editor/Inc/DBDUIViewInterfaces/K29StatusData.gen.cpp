// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/K29StatusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK29StatusData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UK29StatusData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UK29StatusData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UKillerStatusData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	void UK29StatusData::StaticRegisterNativesUK29StatusData()
	{
	}
	UClass* Z_Construct_UClass_UK29StatusData_NoRegister()
	{
		return UK29StatusData::StaticClass();
	}
	struct Z_Construct_UClass_UK29StatusData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfectionPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InfectionPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInfected_MetaData[];
#endif
		static void NewProp_IsInfected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInfected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInfectionActive_MetaData[];
#endif
		static void NewProp_IsInfectionActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInfectionActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInfectionCritical_MetaData[];
#endif
		static void NewProp_IsInfectionCritical_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInfectionCritical;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK29StatusData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerStatusData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK29StatusData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "K29StatusData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/K29StatusData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK29StatusData_Statics::NewProp_InfectionPercentage_MetaData[] = {
		{ "Category", "K29StatusData" },
		{ "ModuleRelativePath", "Public/K29StatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK29StatusData_Statics::NewProp_InfectionPercentage = { "InfectionPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK29StatusData, InfectionPercentage), METADATA_PARAMS(Z_Construct_UClass_UK29StatusData_Statics::NewProp_InfectionPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK29StatusData_Statics::NewProp_InfectionPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK29StatusData_Statics::NewProp_IsInfected_MetaData[] = {
		{ "Category", "K29StatusData" },
		{ "ModuleRelativePath", "Public/K29StatusData.h" },
	};
#endif
	void Z_Construct_UClass_UK29StatusData_Statics::NewProp_IsInfected_SetBit(void* Obj)
	{
		((UK29StatusData*)Obj)->IsInfected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK29StatusData_Statics::NewProp_IsInfected = { "IsInfected", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK29StatusData), &Z_Construct_UClass_UK29StatusData_Statics::NewProp_IsInfected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK29StatusData_Statics::NewProp_IsInfected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK29StatusData_Statics::NewProp_IsInfected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK29StatusData_Statics::NewProp_IsInfectionActive_MetaData[] = {
		{ "Category", "K29StatusData" },
		{ "ModuleRelativePath", "Public/K29StatusData.h" },
	};
#endif
	void Z_Construct_UClass_UK29StatusData_Statics::NewProp_IsInfectionActive_SetBit(void* Obj)
	{
		((UK29StatusData*)Obj)->IsInfectionActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK29StatusData_Statics::NewProp_IsInfectionActive = { "IsInfectionActive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK29StatusData), &Z_Construct_UClass_UK29StatusData_Statics::NewProp_IsInfectionActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK29StatusData_Statics::NewProp_IsInfectionActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK29StatusData_Statics::NewProp_IsInfectionActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK29StatusData_Statics::NewProp_IsInfectionCritical_MetaData[] = {
		{ "Category", "K29StatusData" },
		{ "ModuleRelativePath", "Public/K29StatusData.h" },
	};
#endif
	void Z_Construct_UClass_UK29StatusData_Statics::NewProp_IsInfectionCritical_SetBit(void* Obj)
	{
		((UK29StatusData*)Obj)->IsInfectionCritical = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK29StatusData_Statics::NewProp_IsInfectionCritical = { "IsInfectionCritical", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK29StatusData), &Z_Construct_UClass_UK29StatusData_Statics::NewProp_IsInfectionCritical_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK29StatusData_Statics::NewProp_IsInfectionCritical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK29StatusData_Statics::NewProp_IsInfectionCritical_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK29StatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK29StatusData_Statics::NewProp_InfectionPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK29StatusData_Statics::NewProp_IsInfected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK29StatusData_Statics::NewProp_IsInfectionActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK29StatusData_Statics::NewProp_IsInfectionCritical,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK29StatusData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK29StatusData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK29StatusData_Statics::ClassParams = {
		&UK29StatusData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK29StatusData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK29StatusData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK29StatusData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK29StatusData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK29StatusData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK29StatusData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK29StatusData, 808650947);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UK29StatusData>()
	{
		return UK29StatusData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK29StatusData(Z_Construct_UClass_UK29StatusData, &UK29StatusData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UK29StatusData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK29StatusData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
