// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/EventObjectiveItemPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventObjectiveItemPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UEventObjectiveItemPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UEventObjectiveItemPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void UEventObjectiveItemPresenter::StaticRegisterNativesUEventObjectiveItemPresenter()
	{
	}
	UClass* Z_Construct_UClass_UEventObjectiveItemPresenter_NoRegister()
	{
		return UEventObjectiveItemPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UEventObjectiveItemPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCoreHudEventObjectiveItemWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultCoreHudEventObjectiveItemWidgetClass;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CoreHudEventObjectiveItemWidgetClassMapping_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CoreHudEventObjectiveItemWidgetClassMapping_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoreHudEventObjectiveItemWidgetClassMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CoreHudEventObjectiveItemWidgetClassMapping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventObjectiveItemPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHudPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventObjectiveItemPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EventObjectiveItemPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EventObjectiveItemPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventObjectiveItemPresenter_Statics::NewProp_DefaultCoreHudEventObjectiveItemWidgetClass_MetaData[] = {
		{ "Category", "EventObjectiveItemPresenter" },
		{ "ModuleRelativePath", "Public/EventObjectiveItemPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEventObjectiveItemPresenter_Statics::NewProp_DefaultCoreHudEventObjectiveItemWidgetClass = { "DefaultCoreHudEventObjectiveItemWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventObjectiveItemPresenter, DefaultCoreHudEventObjectiveItemWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEventObjectiveItemPresenter_Statics::NewProp_DefaultCoreHudEventObjectiveItemWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventObjectiveItemPresenter_Statics::NewProp_DefaultCoreHudEventObjectiveItemWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEventObjectiveItemPresenter_Statics::NewProp_CoreHudEventObjectiveItemWidgetClassMapping_ValueProp = { "CoreHudEventObjectiveItemWidgetClassMapping", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEventObjectiveItemPresenter_Statics::NewProp_CoreHudEventObjectiveItemWidgetClassMapping_Key_KeyProp = { "CoreHudEventObjectiveItemWidgetClassMapping_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventObjectiveItemPresenter_Statics::NewProp_CoreHudEventObjectiveItemWidgetClassMapping_MetaData[] = {
		{ "Category", "EventObjectiveItemPresenter" },
		{ "ModuleRelativePath", "Public/EventObjectiveItemPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEventObjectiveItemPresenter_Statics::NewProp_CoreHudEventObjectiveItemWidgetClassMapping = { "CoreHudEventObjectiveItemWidgetClassMapping", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventObjectiveItemPresenter, CoreHudEventObjectiveItemWidgetClassMapping), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEventObjectiveItemPresenter_Statics::NewProp_CoreHudEventObjectiveItemWidgetClassMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventObjectiveItemPresenter_Statics::NewProp_CoreHudEventObjectiveItemWidgetClassMapping_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEventObjectiveItemPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventObjectiveItemPresenter_Statics::NewProp_DefaultCoreHudEventObjectiveItemWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventObjectiveItemPresenter_Statics::NewProp_CoreHudEventObjectiveItemWidgetClassMapping_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventObjectiveItemPresenter_Statics::NewProp_CoreHudEventObjectiveItemWidgetClassMapping_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventObjectiveItemPresenter_Statics::NewProp_CoreHudEventObjectiveItemWidgetClassMapping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventObjectiveItemPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventObjectiveItemPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventObjectiveItemPresenter_Statics::ClassParams = {
		&UEventObjectiveItemPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEventObjectiveItemPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEventObjectiveItemPresenter_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEventObjectiveItemPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventObjectiveItemPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventObjectiveItemPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventObjectiveItemPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventObjectiveItemPresenter, 3120011622);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UEventObjectiveItemPresenter>()
	{
		return UEventObjectiveItemPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventObjectiveItemPresenter(Z_Construct_UClass_UEventObjectiveItemPresenter, &UEventObjectiveItemPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UEventObjectiveItemPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventObjectiveItemPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
