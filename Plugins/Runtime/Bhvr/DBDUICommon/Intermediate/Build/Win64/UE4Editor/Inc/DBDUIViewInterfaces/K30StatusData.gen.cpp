// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/K30StatusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK30StatusData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UK30StatusData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UK30StatusData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UKillerStatusData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	void UK30StatusData::StaticRegisterNativesUK30StatusData()
	{
	}
	UClass* Z_Construct_UClass_UK30StatusData_NoRegister()
	{
		return UK30StatusData::StaticClass();
	}
	struct Z_Construct_UClass_UK30StatusData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HuntRemainingPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HuntRemainingPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHuntingSurvivor_MetaData[];
#endif
		static void NewProp_IsHuntingSurvivor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHuntingSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK30StatusData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerStatusData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK30StatusData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "K30StatusData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/K30StatusData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK30StatusData_Statics::NewProp_HuntRemainingPercentage_MetaData[] = {
		{ "Category", "K30StatusData" },
		{ "ModuleRelativePath", "Public/K30StatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK30StatusData_Statics::NewProp_HuntRemainingPercentage = { "HuntRemainingPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK30StatusData, HuntRemainingPercentage), METADATA_PARAMS(Z_Construct_UClass_UK30StatusData_Statics::NewProp_HuntRemainingPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK30StatusData_Statics::NewProp_HuntRemainingPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK30StatusData_Statics::NewProp_IsHuntingSurvivor_MetaData[] = {
		{ "Category", "K30StatusData" },
		{ "ModuleRelativePath", "Public/K30StatusData.h" },
	};
#endif
	void Z_Construct_UClass_UK30StatusData_Statics::NewProp_IsHuntingSurvivor_SetBit(void* Obj)
	{
		((UK30StatusData*)Obj)->IsHuntingSurvivor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK30StatusData_Statics::NewProp_IsHuntingSurvivor = { "IsHuntingSurvivor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK30StatusData), &Z_Construct_UClass_UK30StatusData_Statics::NewProp_IsHuntingSurvivor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK30StatusData_Statics::NewProp_IsHuntingSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK30StatusData_Statics::NewProp_IsHuntingSurvivor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK30StatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK30StatusData_Statics::NewProp_HuntRemainingPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK30StatusData_Statics::NewProp_IsHuntingSurvivor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK30StatusData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK30StatusData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK30StatusData_Statics::ClassParams = {
		&UK30StatusData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK30StatusData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK30StatusData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK30StatusData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK30StatusData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK30StatusData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK30StatusData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK30StatusData, 2239493415);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UK30StatusData>()
	{
		return UK30StatusData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK30StatusData(Z_Construct_UClass_UK30StatusData, &UK30StatusData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UK30StatusData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK30StatusData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
