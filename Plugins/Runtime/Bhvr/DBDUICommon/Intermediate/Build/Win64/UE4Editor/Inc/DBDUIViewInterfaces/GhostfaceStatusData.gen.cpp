// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/GhostfaceStatusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGhostfaceStatusData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UGhostfaceStatusData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UGhostfaceStatusData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UKillerStatusData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	void UGhostfaceStatusData::StaticRegisterNativesUGhostfaceStatusData()
	{
	}
	UClass* Z_Construct_UClass_UGhostfaceStatusData_NoRegister()
	{
		return UGhostfaceStatusData::StaticClass();
	}
	struct Z_Construct_UClass_UGhostfaceStatusData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsExposed_MetaData[];
#endif
		static void NewProp_IsExposed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsExposed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StalkingProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StalkingProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGhostfaceStatusData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerStatusData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostfaceStatusData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GhostfaceStatusData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GhostfaceStatusData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostfaceStatusData_Statics::NewProp_IsExposed_MetaData[] = {
		{ "Category", "GhostfaceStatusData" },
		{ "ModuleRelativePath", "Public/GhostfaceStatusData.h" },
	};
#endif
	void Z_Construct_UClass_UGhostfaceStatusData_Statics::NewProp_IsExposed_SetBit(void* Obj)
	{
		((UGhostfaceStatusData*)Obj)->IsExposed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGhostfaceStatusData_Statics::NewProp_IsExposed = { "IsExposed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGhostfaceStatusData), &Z_Construct_UClass_UGhostfaceStatusData_Statics::NewProp_IsExposed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGhostfaceStatusData_Statics::NewProp_IsExposed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostfaceStatusData_Statics::NewProp_IsExposed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostfaceStatusData_Statics::NewProp_StalkingProgress_MetaData[] = {
		{ "Category", "GhostfaceStatusData" },
		{ "ModuleRelativePath", "Public/GhostfaceStatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGhostfaceStatusData_Statics::NewProp_StalkingProgress = { "StalkingProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGhostfaceStatusData, StalkingProgress), METADATA_PARAMS(Z_Construct_UClass_UGhostfaceStatusData_Statics::NewProp_StalkingProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostfaceStatusData_Statics::NewProp_StalkingProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGhostfaceStatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostfaceStatusData_Statics::NewProp_IsExposed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostfaceStatusData_Statics::NewProp_StalkingProgress,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGhostfaceStatusData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGhostfaceStatusData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGhostfaceStatusData_Statics::ClassParams = {
		&UGhostfaceStatusData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGhostfaceStatusData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGhostfaceStatusData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGhostfaceStatusData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostfaceStatusData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGhostfaceStatusData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGhostfaceStatusData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGhostfaceStatusData, 2651492232);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UGhostfaceStatusData>()
	{
		return UGhostfaceStatusData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGhostfaceStatusData(Z_Construct_UClass_UGhostfaceStatusData, &UGhostfaceStatusData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UGhostfaceStatusData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGhostfaceStatusData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
