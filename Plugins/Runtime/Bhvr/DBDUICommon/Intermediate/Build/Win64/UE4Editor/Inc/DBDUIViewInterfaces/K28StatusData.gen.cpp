// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/K28StatusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK28StatusData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UK28StatusData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UK28StatusData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UKillerStatusData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	void UK28StatusData::StaticRegisterNativesUK28StatusData()
	{
	}
	UClass* Z_Construct_UClass_UK28StatusData_NoRegister()
	{
		return UK28StatusData::StaticClass();
	}
	struct Z_Construct_UClass_UK28StatusData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DayNightCycleProgressPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DayNightCycleProgressPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDaytime_MetaData[];
#endif
		static void NewProp_IsDaytime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDaytime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsTransitioningToNighttime_MetaData[];
#endif
		static void NewProp_IsTransitioningToNighttime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTransitioningToNighttime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNighttime_MetaData[];
#endif
		static void NewProp_IsNighttime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsNighttime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsTransitioningToDaytime_MetaData[];
#endif
		static void NewProp_IsTransitioningToDaytime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTransitioningToDaytime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK28StatusData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerStatusData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK28StatusData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "K28StatusData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/K28StatusData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK28StatusData_Statics::NewProp_DayNightCycleProgressPercentage_MetaData[] = {
		{ "Category", "K28StatusData" },
		{ "ModuleRelativePath", "Public/K28StatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK28StatusData_Statics::NewProp_DayNightCycleProgressPercentage = { "DayNightCycleProgressPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK28StatusData, DayNightCycleProgressPercentage), METADATA_PARAMS(Z_Construct_UClass_UK28StatusData_Statics::NewProp_DayNightCycleProgressPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK28StatusData_Statics::NewProp_DayNightCycleProgressPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsDaytime_MetaData[] = {
		{ "Category", "K28StatusData" },
		{ "ModuleRelativePath", "Public/K28StatusData.h" },
	};
#endif
	void Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsDaytime_SetBit(void* Obj)
	{
		((UK28StatusData*)Obj)->IsDaytime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsDaytime = { "IsDaytime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK28StatusData), &Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsDaytime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsDaytime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsDaytime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsTransitioningToNighttime_MetaData[] = {
		{ "Category", "K28StatusData" },
		{ "ModuleRelativePath", "Public/K28StatusData.h" },
	};
#endif
	void Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsTransitioningToNighttime_SetBit(void* Obj)
	{
		((UK28StatusData*)Obj)->IsTransitioningToNighttime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsTransitioningToNighttime = { "IsTransitioningToNighttime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK28StatusData), &Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsTransitioningToNighttime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsTransitioningToNighttime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsTransitioningToNighttime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsNighttime_MetaData[] = {
		{ "Category", "K28StatusData" },
		{ "ModuleRelativePath", "Public/K28StatusData.h" },
	};
#endif
	void Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsNighttime_SetBit(void* Obj)
	{
		((UK28StatusData*)Obj)->IsNighttime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsNighttime = { "IsNighttime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK28StatusData), &Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsNighttime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsNighttime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsNighttime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsTransitioningToDaytime_MetaData[] = {
		{ "Category", "K28StatusData" },
		{ "ModuleRelativePath", "Public/K28StatusData.h" },
	};
#endif
	void Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsTransitioningToDaytime_SetBit(void* Obj)
	{
		((UK28StatusData*)Obj)->IsTransitioningToDaytime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsTransitioningToDaytime = { "IsTransitioningToDaytime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK28StatusData), &Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsTransitioningToDaytime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsTransitioningToDaytime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsTransitioningToDaytime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK28StatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK28StatusData_Statics::NewProp_DayNightCycleProgressPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsDaytime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsTransitioningToNighttime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsNighttime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK28StatusData_Statics::NewProp_IsTransitioningToDaytime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK28StatusData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK28StatusData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK28StatusData_Statics::ClassParams = {
		&UK28StatusData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK28StatusData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK28StatusData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK28StatusData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK28StatusData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK28StatusData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK28StatusData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK28StatusData, 247459505);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UK28StatusData>()
	{
		return UK28StatusData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK28StatusData(Z_Construct_UClass_UK28StatusData, &UK28StatusData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UK28StatusData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK28StatusData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
