// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/SkillCheckPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillCheckPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USkillCheckPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USkillCheckPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void USkillCheckPresenter::StaticRegisterNativesUSkillCheckPresenter()
	{
	}
	UClass* Z_Construct_UClass_USkillCheckPresenter_NoRegister()
	{
		return USkillCheckPresenter::StaticClass();
	}
	struct Z_Construct_UClass_USkillCheckPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillCheckWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SkillCheckWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkillCheckPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHudPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillCheckPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SkillCheckPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SkillCheckPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillCheckPresenter_Statics::NewProp_SkillCheckWidgetClass_MetaData[] = {
		{ "Category", "SkillCheckPresenter" },
		{ "ModuleRelativePath", "Public/SkillCheckPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USkillCheckPresenter_Statics::NewProp_SkillCheckWidgetClass = { "SkillCheckWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkillCheckPresenter, SkillCheckWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USkillCheckPresenter_Statics::NewProp_SkillCheckWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillCheckPresenter_Statics::NewProp_SkillCheckWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkillCheckPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillCheckPresenter_Statics::NewProp_SkillCheckWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkillCheckPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillCheckPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkillCheckPresenter_Statics::ClassParams = {
		&USkillCheckPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkillCheckPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkillCheckPresenter_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USkillCheckPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkillCheckPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkillCheckPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkillCheckPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkillCheckPresenter, 221809797);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<USkillCheckPresenter>()
	{
		return USkillCheckPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkillCheckPresenter(Z_Construct_UClass_USkillCheckPresenter, &USkillCheckPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("USkillCheckPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkillCheckPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
