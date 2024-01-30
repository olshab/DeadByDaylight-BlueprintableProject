// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/NightmareStatusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNightmareStatusData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UNightmareStatusData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UNightmareStatusData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UKillerStatusData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ESleepingUIState();
// End Cross Module References
	void UNightmareStatusData::StaticRegisterNativesUNightmareStatusData()
	{
	}
	UClass* Z_Construct_UClass_UNightmareStatusData_NoRegister()
	{
		return UNightmareStatusData::StaticClass();
	}
	struct Z_Construct_UClass_UNightmareStatusData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SleepingState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SleepingState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SleepingState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SleepingProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SleepingProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SleepProtectionRemainingDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SleepProtectionRemainingDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNightmareStatusData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerStatusData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNightmareStatusData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NightmareStatusData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NightmareStatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNightmareStatusData_Statics::NewProp_SleepingState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNightmareStatusData_Statics::NewProp_SleepingState_MetaData[] = {
		{ "Category", "NightmareStatusData" },
		{ "ModuleRelativePath", "Public/NightmareStatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNightmareStatusData_Statics::NewProp_SleepingState = { "SleepingState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNightmareStatusData, SleepingState), Z_Construct_UEnum_DBDSharedTypes_ESleepingUIState, METADATA_PARAMS(Z_Construct_UClass_UNightmareStatusData_Statics::NewProp_SleepingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNightmareStatusData_Statics::NewProp_SleepingState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNightmareStatusData_Statics::NewProp_SleepingProgress_MetaData[] = {
		{ "Category", "NightmareStatusData" },
		{ "ModuleRelativePath", "Public/NightmareStatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNightmareStatusData_Statics::NewProp_SleepingProgress = { "SleepingProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNightmareStatusData, SleepingProgress), METADATA_PARAMS(Z_Construct_UClass_UNightmareStatusData_Statics::NewProp_SleepingProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNightmareStatusData_Statics::NewProp_SleepingProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNightmareStatusData_Statics::NewProp_SleepProtectionRemainingDuration_MetaData[] = {
		{ "Category", "NightmareStatusData" },
		{ "ModuleRelativePath", "Public/NightmareStatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNightmareStatusData_Statics::NewProp_SleepProtectionRemainingDuration = { "SleepProtectionRemainingDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNightmareStatusData, SleepProtectionRemainingDuration), METADATA_PARAMS(Z_Construct_UClass_UNightmareStatusData_Statics::NewProp_SleepProtectionRemainingDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNightmareStatusData_Statics::NewProp_SleepProtectionRemainingDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNightmareStatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNightmareStatusData_Statics::NewProp_SleepingState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNightmareStatusData_Statics::NewProp_SleepingState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNightmareStatusData_Statics::NewProp_SleepingProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNightmareStatusData_Statics::NewProp_SleepProtectionRemainingDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNightmareStatusData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNightmareStatusData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNightmareStatusData_Statics::ClassParams = {
		&UNightmareStatusData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNightmareStatusData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNightmareStatusData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNightmareStatusData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNightmareStatusData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNightmareStatusData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNightmareStatusData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNightmareStatusData, 283574523);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UNightmareStatusData>()
	{
		return UNightmareStatusData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNightmareStatusData(Z_Construct_UClass_UNightmareStatusData, &UNightmareStatusData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UNightmareStatusData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNightmareStatusData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
