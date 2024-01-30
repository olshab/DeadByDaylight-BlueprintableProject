// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/PresenterParentInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePresenterParentInfo() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenterParentInfo_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenterParentInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenterParentWidget_NoRegister();
// End Cross Module References
	void UPresenterParentInfo::StaticRegisterNativesUPresenterParentInfo()
	{
	}
	UClass* Z_Construct_UClass_UPresenterParentInfo_NoRegister()
	{
		return UPresenterParentInfo::StaticClass();
	}
	struct Z_Construct_UClass_UPresenterParentInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ParentClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPresenterParentInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresenterParentInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PresenterParentInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PresenterParentInfo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresenterParentInfo_Statics::NewProp_ParentClass_MetaData[] = {
		{ "Category", "PresenterParentInfo" },
		{ "ModuleRelativePath", "Public/PresenterParentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPresenterParentInfo_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPresenterParentInfo, ParentClass), Z_Construct_UClass_UPresenterParentWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPresenterParentInfo_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPresenterParentInfo_Statics::NewProp_ParentClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPresenterParentInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPresenterParentInfo_Statics::NewProp_ParentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPresenterParentInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPresenterParentInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPresenterParentInfo_Statics::ClassParams = {
		&UPresenterParentInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPresenterParentInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPresenterParentInfo_Statics::PropPointers),
		0,
		0x002010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPresenterParentInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPresenterParentInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPresenterParentInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPresenterParentInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPresenterParentInfo, 2241681067);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UPresenterParentInfo>()
	{
		return UPresenterParentInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPresenterParentInfo(Z_Construct_UClass_UPresenterParentInfo, &UPresenterParentInfo::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UPresenterParentInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPresenterParentInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
