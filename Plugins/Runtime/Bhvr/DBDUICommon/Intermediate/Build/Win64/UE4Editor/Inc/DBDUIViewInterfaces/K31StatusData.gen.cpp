// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/K31StatusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK31StatusData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UK31StatusData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UK31StatusData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UKillerStatusData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	void UK31StatusData::StaticRegisterNativesUK31StatusData()
	{
	}
	UClass* Z_Construct_UClass_UK31StatusData_NoRegister()
	{
		return UK31StatusData::StaticClass();
	}
	struct Z_Construct_UClass_UK31StatusData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectProgressPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EffectProgressPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsClawTrapped_MetaData[];
#endif
		static void NewProp_IsClawTrapped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsClawTrapped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK31StatusData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerStatusData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK31StatusData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "K31StatusData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/K31StatusData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK31StatusData_Statics::NewProp_EffectProgressPercentage_MetaData[] = {
		{ "Category", "K31StatusData" },
		{ "ModuleRelativePath", "Public/K31StatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK31StatusData_Statics::NewProp_EffectProgressPercentage = { "EffectProgressPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK31StatusData, EffectProgressPercentage), METADATA_PARAMS(Z_Construct_UClass_UK31StatusData_Statics::NewProp_EffectProgressPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK31StatusData_Statics::NewProp_EffectProgressPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK31StatusData_Statics::NewProp_IsClawTrapped_MetaData[] = {
		{ "Category", "K31StatusData" },
		{ "ModuleRelativePath", "Public/K31StatusData.h" },
	};
#endif
	void Z_Construct_UClass_UK31StatusData_Statics::NewProp_IsClawTrapped_SetBit(void* Obj)
	{
		((UK31StatusData*)Obj)->IsClawTrapped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK31StatusData_Statics::NewProp_IsClawTrapped = { "IsClawTrapped", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK31StatusData), &Z_Construct_UClass_UK31StatusData_Statics::NewProp_IsClawTrapped_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK31StatusData_Statics::NewProp_IsClawTrapped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK31StatusData_Statics::NewProp_IsClawTrapped_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK31StatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK31StatusData_Statics::NewProp_EffectProgressPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK31StatusData_Statics::NewProp_IsClawTrapped,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK31StatusData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK31StatusData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK31StatusData_Statics::ClassParams = {
		&UK31StatusData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK31StatusData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK31StatusData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK31StatusData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK31StatusData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK31StatusData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK31StatusData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK31StatusData, 820489694);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UK31StatusData>()
	{
		return UK31StatusData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK31StatusData(Z_Construct_UClass_UK31StatusData, &UK31StatusData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UK31StatusData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK31StatusData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
