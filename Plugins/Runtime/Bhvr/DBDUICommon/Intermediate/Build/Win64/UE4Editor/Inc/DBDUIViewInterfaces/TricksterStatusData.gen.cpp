// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/TricksterStatusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTricksterStatusData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UTricksterStatusData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UTricksterStatusData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UKillerStatusData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	void UTricksterStatusData::StaticRegisterNativesUTricksterStatusData()
	{
	}
	UClass* Z_Construct_UClass_UTricksterStatusData_NoRegister()
	{
		return UTricksterStatusData::StaticClass();
	}
	struct Z_Construct_UClass_UTricksterStatusData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLacerationLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentLacerationLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumLacerationLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumLacerationLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDangerousLacerationLevel_MetaData[];
#endif
		static void NewProp_IsDangerousLacerationLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDangerousLacerationLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasRecentlyDamagedByLaceration_MetaData[];
#endif
		static void NewProp_WasRecentlyDamagedByLaceration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasRecentlyDamagedByLaceration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTricksterStatusData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerStatusData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTricksterStatusData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TricksterStatusData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TricksterStatusData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTricksterStatusData_Statics::NewProp_CurrentLacerationLevel_MetaData[] = {
		{ "Category", "TricksterStatusData" },
		{ "ModuleRelativePath", "Public/TricksterStatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTricksterStatusData_Statics::NewProp_CurrentLacerationLevel = { "CurrentLacerationLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTricksterStatusData, CurrentLacerationLevel), METADATA_PARAMS(Z_Construct_UClass_UTricksterStatusData_Statics::NewProp_CurrentLacerationLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTricksterStatusData_Statics::NewProp_CurrentLacerationLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTricksterStatusData_Statics::NewProp_MaximumLacerationLevel_MetaData[] = {
		{ "Category", "TricksterStatusData" },
		{ "ModuleRelativePath", "Public/TricksterStatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTricksterStatusData_Statics::NewProp_MaximumLacerationLevel = { "MaximumLacerationLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTricksterStatusData, MaximumLacerationLevel), METADATA_PARAMS(Z_Construct_UClass_UTricksterStatusData_Statics::NewProp_MaximumLacerationLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTricksterStatusData_Statics::NewProp_MaximumLacerationLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTricksterStatusData_Statics::NewProp_IsDangerousLacerationLevel_MetaData[] = {
		{ "Category", "TricksterStatusData" },
		{ "ModuleRelativePath", "Public/TricksterStatusData.h" },
	};
#endif
	void Z_Construct_UClass_UTricksterStatusData_Statics::NewProp_IsDangerousLacerationLevel_SetBit(void* Obj)
	{
		((UTricksterStatusData*)Obj)->IsDangerousLacerationLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTricksterStatusData_Statics::NewProp_IsDangerousLacerationLevel = { "IsDangerousLacerationLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTricksterStatusData), &Z_Construct_UClass_UTricksterStatusData_Statics::NewProp_IsDangerousLacerationLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTricksterStatusData_Statics::NewProp_IsDangerousLacerationLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTricksterStatusData_Statics::NewProp_IsDangerousLacerationLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTricksterStatusData_Statics::NewProp_WasRecentlyDamagedByLaceration_MetaData[] = {
		{ "Category", "TricksterStatusData" },
		{ "ModuleRelativePath", "Public/TricksterStatusData.h" },
	};
#endif
	void Z_Construct_UClass_UTricksterStatusData_Statics::NewProp_WasRecentlyDamagedByLaceration_SetBit(void* Obj)
	{
		((UTricksterStatusData*)Obj)->WasRecentlyDamagedByLaceration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTricksterStatusData_Statics::NewProp_WasRecentlyDamagedByLaceration = { "WasRecentlyDamagedByLaceration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTricksterStatusData), &Z_Construct_UClass_UTricksterStatusData_Statics::NewProp_WasRecentlyDamagedByLaceration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTricksterStatusData_Statics::NewProp_WasRecentlyDamagedByLaceration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTricksterStatusData_Statics::NewProp_WasRecentlyDamagedByLaceration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTricksterStatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTricksterStatusData_Statics::NewProp_CurrentLacerationLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTricksterStatusData_Statics::NewProp_MaximumLacerationLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTricksterStatusData_Statics::NewProp_IsDangerousLacerationLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTricksterStatusData_Statics::NewProp_WasRecentlyDamagedByLaceration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTricksterStatusData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTricksterStatusData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTricksterStatusData_Statics::ClassParams = {
		&UTricksterStatusData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTricksterStatusData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTricksterStatusData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTricksterStatusData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTricksterStatusData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTricksterStatusData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTricksterStatusData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTricksterStatusData, 34200128);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UTricksterStatusData>()
	{
		return UTricksterStatusData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTricksterStatusData(Z_Construct_UClass_UTricksterStatusData, &UTricksterStatusData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UTricksterStatusData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTricksterStatusData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
