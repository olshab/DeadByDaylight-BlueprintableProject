// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/EventEntryCollectionSubPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventEntryCollectionSubPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UEventEntryCollectionSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UEventEntryCollectionSubPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UEventEntryRewardsSubPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
// End Cross Module References
	void UEventEntryCollectionSubPresenter::StaticRegisterNativesUEventEntryCollectionSubPresenter()
	{
	}
	UClass* Z_Construct_UClass_UEventEntryCollectionSubPresenter_NoRegister()
	{
		return UEventEntryCollectionSubPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UEventEntryCollectionSubPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventEntryCollectionSubPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventEntryRewardsSubPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryCollectionSubPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EventEntryCollectionSubPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EventEntryCollectionSubPresenter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventEntryCollectionSubPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventEntryCollectionSubPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventEntryCollectionSubPresenter_Statics::ClassParams = {
		&UEventEntryCollectionSubPresenter::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEventEntryCollectionSubPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryCollectionSubPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventEntryCollectionSubPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventEntryCollectionSubPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventEntryCollectionSubPresenter, 2138201322);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UEventEntryCollectionSubPresenter>()
	{
		return UEventEntryCollectionSubPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventEntryCollectionSubPresenter(Z_Construct_UClass_UEventEntryCollectionSubPresenter, &UEventEntryCollectionSubPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UEventEntryCollectionSubPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventEntryCollectionSubPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
