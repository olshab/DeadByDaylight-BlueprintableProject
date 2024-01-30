// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/EventEntryDetailsSubPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventEntryDetailsSubPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UEventEntryDetailsSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UEventEntryDetailsSubPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USubPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEventDetailsViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FDetailsTabViewData();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UEventEntryPresenter_NoRegister();
// End Cross Module References
	void UEventEntryDetailsSubPresenter::StaticRegisterNativesUEventEntryDetailsSubPresenter()
	{
	}
	UClass* Z_Construct_UClass_UEventEntryDetailsSubPresenter_NoRegister()
	{
		return UEventEntryDetailsSubPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UEventEntryDetailsSubPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__detailsTabWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__detailsTabWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__viewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__viewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__parentPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__parentPresenter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventEntryDetailsSubPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryDetailsSubPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EventEntryDetailsSubPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EventEntryDetailsSubPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryDetailsSubPresenter_Statics::NewProp__detailsTabWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventEntryDetailsSubPresenter" },
		{ "ModuleRelativePath", "Public/EventEntryDetailsSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UEventEntryDetailsSubPresenter_Statics::NewProp__detailsTabWidget = { "_detailsTabWidget", nullptr, (EPropertyFlags)0x0044000000002005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryDetailsSubPresenter, _detailsTabWidget), Z_Construct_UClass_UEventDetailsViewInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventEntryDetailsSubPresenter_Statics::NewProp__detailsTabWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryDetailsSubPresenter_Statics::NewProp__detailsTabWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryDetailsSubPresenter_Statics::NewProp__viewData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventEntryDetailsSubPresenter" },
		{ "ModuleRelativePath", "Public/EventEntryDetailsSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEventEntryDetailsSubPresenter_Statics::NewProp__viewData = { "_viewData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryDetailsSubPresenter, _viewData), Z_Construct_UScriptStruct_FDetailsTabViewData, METADATA_PARAMS(Z_Construct_UClass_UEventEntryDetailsSubPresenter_Statics::NewProp__viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryDetailsSubPresenter_Statics::NewProp__viewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryDetailsSubPresenter_Statics::NewProp__parentPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventEntryDetailsSubPresenter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EventEntryDetailsSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventEntryDetailsSubPresenter_Statics::NewProp__parentPresenter = { "_parentPresenter", nullptr, (EPropertyFlags)0x004000000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryDetailsSubPresenter, _parentPresenter), Z_Construct_UClass_UEventEntryPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventEntryDetailsSubPresenter_Statics::NewProp__parentPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryDetailsSubPresenter_Statics::NewProp__parentPresenter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEventEntryDetailsSubPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryDetailsSubPresenter_Statics::NewProp__detailsTabWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryDetailsSubPresenter_Statics::NewProp__viewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryDetailsSubPresenter_Statics::NewProp__parentPresenter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventEntryDetailsSubPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventEntryDetailsSubPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventEntryDetailsSubPresenter_Statics::ClassParams = {
		&UEventEntryDetailsSubPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEventEntryDetailsSubPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryDetailsSubPresenter_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEventEntryDetailsSubPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryDetailsSubPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventEntryDetailsSubPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventEntryDetailsSubPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventEntryDetailsSubPresenter, 837741133);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UEventEntryDetailsSubPresenter>()
	{
		return UEventEntryDetailsSubPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventEntryDetailsSubPresenter(Z_Construct_UClass_UEventEntryDetailsSubPresenter, &UEventEntryDetailsSubPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UEventEntryDetailsSubPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventEntryDetailsSubPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
