// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/TheOnryoStatusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheOnryoStatusData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UTheOnryoStatusData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UTheOnryoStatusData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UKillerStatusData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	void UTheOnryoStatusData::StaticRegisterNativesUTheOnryoStatusData()
	{
	}
	UClass* Z_Construct_UClass_UTheOnryoStatusData_NoRegister()
	{
		return UTheOnryoStatusData::StaticClass();
	}
	struct Z_Construct_UClass_UTheOnryoStatusData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCondemnedActive_MetaData[];
#endif
		static void NewProp_IsCondemnedActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCondemnedActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CondemnedProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CondemnedProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFullCondemned_MetaData[];
#endif
		static void NewProp_IsFullCondemned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFullCondemned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHoldingTape_MetaData[];
#endif
		static void NewProp_IsHoldingTape_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHoldingTape;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTheOnryoStatusData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerStatusData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTheOnryoStatusData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TheOnryoStatusData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TheOnryoStatusData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTheOnryoStatusData_Statics::NewProp_IsCondemnedActive_MetaData[] = {
		{ "Category", "TheOnryoStatusData" },
		{ "ModuleRelativePath", "Public/TheOnryoStatusData.h" },
	};
#endif
	void Z_Construct_UClass_UTheOnryoStatusData_Statics::NewProp_IsCondemnedActive_SetBit(void* Obj)
	{
		((UTheOnryoStatusData*)Obj)->IsCondemnedActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTheOnryoStatusData_Statics::NewProp_IsCondemnedActive = { "IsCondemnedActive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTheOnryoStatusData), &Z_Construct_UClass_UTheOnryoStatusData_Statics::NewProp_IsCondemnedActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTheOnryoStatusData_Statics::NewProp_IsCondemnedActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTheOnryoStatusData_Statics::NewProp_IsCondemnedActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTheOnryoStatusData_Statics::NewProp_CondemnedProgress_MetaData[] = {
		{ "Category", "TheOnryoStatusData" },
		{ "ModuleRelativePath", "Public/TheOnryoStatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTheOnryoStatusData_Statics::NewProp_CondemnedProgress = { "CondemnedProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTheOnryoStatusData, CondemnedProgress), METADATA_PARAMS(Z_Construct_UClass_UTheOnryoStatusData_Statics::NewProp_CondemnedProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTheOnryoStatusData_Statics::NewProp_CondemnedProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTheOnryoStatusData_Statics::NewProp_IsFullCondemned_MetaData[] = {
		{ "Category", "TheOnryoStatusData" },
		{ "ModuleRelativePath", "Public/TheOnryoStatusData.h" },
	};
#endif
	void Z_Construct_UClass_UTheOnryoStatusData_Statics::NewProp_IsFullCondemned_SetBit(void* Obj)
	{
		((UTheOnryoStatusData*)Obj)->IsFullCondemned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTheOnryoStatusData_Statics::NewProp_IsFullCondemned = { "IsFullCondemned", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTheOnryoStatusData), &Z_Construct_UClass_UTheOnryoStatusData_Statics::NewProp_IsFullCondemned_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTheOnryoStatusData_Statics::NewProp_IsFullCondemned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTheOnryoStatusData_Statics::NewProp_IsFullCondemned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTheOnryoStatusData_Statics::NewProp_IsHoldingTape_MetaData[] = {
		{ "Category", "TheOnryoStatusData" },
		{ "ModuleRelativePath", "Public/TheOnryoStatusData.h" },
	};
#endif
	void Z_Construct_UClass_UTheOnryoStatusData_Statics::NewProp_IsHoldingTape_SetBit(void* Obj)
	{
		((UTheOnryoStatusData*)Obj)->IsHoldingTape = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTheOnryoStatusData_Statics::NewProp_IsHoldingTape = { "IsHoldingTape", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTheOnryoStatusData), &Z_Construct_UClass_UTheOnryoStatusData_Statics::NewProp_IsHoldingTape_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTheOnryoStatusData_Statics::NewProp_IsHoldingTape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTheOnryoStatusData_Statics::NewProp_IsHoldingTape_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTheOnryoStatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTheOnryoStatusData_Statics::NewProp_IsCondemnedActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTheOnryoStatusData_Statics::NewProp_CondemnedProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTheOnryoStatusData_Statics::NewProp_IsFullCondemned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTheOnryoStatusData_Statics::NewProp_IsHoldingTape,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTheOnryoStatusData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTheOnryoStatusData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTheOnryoStatusData_Statics::ClassParams = {
		&UTheOnryoStatusData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTheOnryoStatusData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTheOnryoStatusData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTheOnryoStatusData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTheOnryoStatusData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTheOnryoStatusData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTheOnryoStatusData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTheOnryoStatusData, 487944218);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UTheOnryoStatusData>()
	{
		return UTheOnryoStatusData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTheOnryoStatusData(Z_Construct_UClass_UTheOnryoStatusData, &UTheOnryoStatusData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UTheOnryoStatusData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTheOnryoStatusData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
