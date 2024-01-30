// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/PigStatusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePigStatusData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPigStatusData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPigStatusData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UKillerStatusData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EReverseBearTrapUIState();
// End Cross Module References
	void UPigStatusData::StaticRegisterNativesUPigStatusData()
	{
	}
	UClass* Z_Construct_UClass_UPigStatusData_NoRegister()
	{
		return UPigStatusData::StaticClass();
	}
	struct Z_Construct_UClass_UPigStatusData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReverseBearTrapState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverseBearTrapState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReverseBearTrapState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimerProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPigStatusData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerStatusData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPigStatusData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PigStatusData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PigStatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPigStatusData_Statics::NewProp_ReverseBearTrapState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPigStatusData_Statics::NewProp_ReverseBearTrapState_MetaData[] = {
		{ "Category", "PigStatusData" },
		{ "ModuleRelativePath", "Public/PigStatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPigStatusData_Statics::NewProp_ReverseBearTrapState = { "ReverseBearTrapState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPigStatusData, ReverseBearTrapState), Z_Construct_UEnum_DBDSharedTypes_EReverseBearTrapUIState, METADATA_PARAMS(Z_Construct_UClass_UPigStatusData_Statics::NewProp_ReverseBearTrapState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPigStatusData_Statics::NewProp_ReverseBearTrapState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPigStatusData_Statics::NewProp_TimerProgress_MetaData[] = {
		{ "Category", "PigStatusData" },
		{ "ModuleRelativePath", "Public/PigStatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPigStatusData_Statics::NewProp_TimerProgress = { "TimerProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPigStatusData, TimerProgress), METADATA_PARAMS(Z_Construct_UClass_UPigStatusData_Statics::NewProp_TimerProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPigStatusData_Statics::NewProp_TimerProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPigStatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPigStatusData_Statics::NewProp_ReverseBearTrapState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPigStatusData_Statics::NewProp_ReverseBearTrapState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPigStatusData_Statics::NewProp_TimerProgress,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPigStatusData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPigStatusData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPigStatusData_Statics::ClassParams = {
		&UPigStatusData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPigStatusData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPigStatusData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPigStatusData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPigStatusData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPigStatusData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPigStatusData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPigStatusData, 489798576);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UPigStatusData>()
	{
		return UPigStatusData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPigStatusData(Z_Construct_UClass_UPigStatusData, &UPigStatusData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UPigStatusData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPigStatusData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
