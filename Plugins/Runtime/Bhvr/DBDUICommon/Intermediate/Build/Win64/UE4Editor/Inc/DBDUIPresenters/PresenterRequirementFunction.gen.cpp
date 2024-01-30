// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/PresenterRequirementFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePresenterRequirementFunction() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenterRequirementFunction_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenterRequirementFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
// End Cross Module References
	void UPresenterRequirementFunction::StaticRegisterNativesUPresenterRequirementFunction()
	{
	}
	UClass* Z_Construct_UClass_UPresenterRequirementFunction_NoRegister()
	{
		return UPresenterRequirementFunction::StaticClass();
	}
	struct Z_Construct_UClass_UPresenterRequirementFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPresenterRequirementFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresenterRequirementFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PresenterRequirementFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PresenterRequirementFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPresenterRequirementFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPresenterRequirementFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPresenterRequirementFunction_Statics::ClassParams = {
		&UPresenterRequirementFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPresenterRequirementFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPresenterRequirementFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPresenterRequirementFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPresenterRequirementFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPresenterRequirementFunction, 3577677322);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UPresenterRequirementFunction>()
	{
		return UPresenterRequirementFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPresenterRequirementFunction(Z_Construct_UClass_UPresenterRequirementFunction, &UPresenterRequirementFunction::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UPresenterRequirementFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPresenterRequirementFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
