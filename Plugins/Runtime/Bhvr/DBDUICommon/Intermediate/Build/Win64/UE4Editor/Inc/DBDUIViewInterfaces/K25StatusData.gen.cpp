// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/K25StatusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25StatusData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UK25StatusData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UK25StatusData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UKillerStatusData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	void UK25StatusData::StaticRegisterNativesUK25StatusData()
	{
	}
	UClass* Z_Construct_UClass_UK25StatusData_NoRegister()
	{
		return UK25StatusData::StaticClass();
	}
	struct Z_Construct_UClass_UK25StatusData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChainHuntProgressPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChainHuntProgressPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHoldingLamentConfiguration_MetaData[];
#endif
		static void NewProp_IsHoldingLamentConfiguration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHoldingLamentConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSolvingLamentConfiguration_MetaData[];
#endif
		static void NewProp_IsSolvingLamentConfiguration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSolvingLamentConfiguration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25StatusData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerStatusData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25StatusData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "K25StatusData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/K25StatusData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25StatusData_Statics::NewProp_ChainHuntProgressPercentage_MetaData[] = {
		{ "Category", "K25StatusData" },
		{ "ModuleRelativePath", "Public/K25StatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK25StatusData_Statics::NewProp_ChainHuntProgressPercentage = { "ChainHuntProgressPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25StatusData, ChainHuntProgressPercentage), METADATA_PARAMS(Z_Construct_UClass_UK25StatusData_Statics::NewProp_ChainHuntProgressPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25StatusData_Statics::NewProp_ChainHuntProgressPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25StatusData_Statics::NewProp_IsHoldingLamentConfiguration_MetaData[] = {
		{ "Category", "K25StatusData" },
		{ "ModuleRelativePath", "Public/K25StatusData.h" },
	};
#endif
	void Z_Construct_UClass_UK25StatusData_Statics::NewProp_IsHoldingLamentConfiguration_SetBit(void* Obj)
	{
		((UK25StatusData*)Obj)->IsHoldingLamentConfiguration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK25StatusData_Statics::NewProp_IsHoldingLamentConfiguration = { "IsHoldingLamentConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK25StatusData), &Z_Construct_UClass_UK25StatusData_Statics::NewProp_IsHoldingLamentConfiguration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK25StatusData_Statics::NewProp_IsHoldingLamentConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25StatusData_Statics::NewProp_IsHoldingLamentConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25StatusData_Statics::NewProp_IsSolvingLamentConfiguration_MetaData[] = {
		{ "Category", "K25StatusData" },
		{ "ModuleRelativePath", "Public/K25StatusData.h" },
	};
#endif
	void Z_Construct_UClass_UK25StatusData_Statics::NewProp_IsSolvingLamentConfiguration_SetBit(void* Obj)
	{
		((UK25StatusData*)Obj)->IsSolvingLamentConfiguration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK25StatusData_Statics::NewProp_IsSolvingLamentConfiguration = { "IsSolvingLamentConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK25StatusData), &Z_Construct_UClass_UK25StatusData_Statics::NewProp_IsSolvingLamentConfiguration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK25StatusData_Statics::NewProp_IsSolvingLamentConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25StatusData_Statics::NewProp_IsSolvingLamentConfiguration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK25StatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25StatusData_Statics::NewProp_ChainHuntProgressPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25StatusData_Statics::NewProp_IsHoldingLamentConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25StatusData_Statics::NewProp_IsSolvingLamentConfiguration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25StatusData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25StatusData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25StatusData_Statics::ClassParams = {
		&UK25StatusData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK25StatusData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK25StatusData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK25StatusData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25StatusData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25StatusData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25StatusData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25StatusData, 585360719);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UK25StatusData>()
	{
		return UK25StatusData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25StatusData(Z_Construct_UClass_UK25StatusData, &UK25StatusData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UK25StatusData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25StatusData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
