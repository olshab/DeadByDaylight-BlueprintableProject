// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/EventEntryEventSubPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventEntryEventSubPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UEventEntryEventSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UEventEntryEventSubPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USubPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEventInfoViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEventTabViewData_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UEventEntryPresenter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEventEntryEventSubPresenter::execOnArchiveButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnArchiveButtonClicked();
		P_NATIVE_END;
	}
	void UEventEntryEventSubPresenter::StaticRegisterNativesUEventEntryEventSubPresenter()
	{
		UClass* Class = UEventEntryEventSubPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnArchiveButtonClicked", &UEventEntryEventSubPresenter::execOnArchiveButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEventEntryEventSubPresenter_OnArchiveButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryEventSubPresenter_OnArchiveButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryEventSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryEventSubPresenter_OnArchiveButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryEventSubPresenter, nullptr, "OnArchiveButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryEventSubPresenter_OnArchiveButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryEventSubPresenter_OnArchiveButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryEventSubPresenter_OnArchiveButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryEventSubPresenter_OnArchiveButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEventEntryEventSubPresenter_NoRegister()
	{
		return UEventEntryEventSubPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UEventEntryEventSubPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__eventTabWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__eventTabWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tabsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tabsData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__parentPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__parentPresenter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventEntryEventSubPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEventEntryEventSubPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEventEntryEventSubPresenter_OnArchiveButtonClicked, "OnArchiveButtonClicked" }, // 1500446243
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryEventSubPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EventEntryEventSubPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EventEntryEventSubPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryEventSubPresenter_Statics::NewProp__eventTabWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventEntryEventSubPresenter" },
		{ "ModuleRelativePath", "Public/EventEntryEventSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UEventEntryEventSubPresenter_Statics::NewProp__eventTabWidget = { "_eventTabWidget", nullptr, (EPropertyFlags)0x0044000000002005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryEventSubPresenter, _eventTabWidget), Z_Construct_UClass_UEventInfoViewInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventEntryEventSubPresenter_Statics::NewProp__eventTabWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryEventSubPresenter_Statics::NewProp__eventTabWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryEventSubPresenter_Statics::NewProp__tabsData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventEntryEventSubPresenter" },
		{ "ModuleRelativePath", "Public/EventEntryEventSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventEntryEventSubPresenter_Statics::NewProp__tabsData = { "_tabsData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryEventSubPresenter, _tabsData), Z_Construct_UClass_UEventTabViewData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventEntryEventSubPresenter_Statics::NewProp__tabsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryEventSubPresenter_Statics::NewProp__tabsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryEventSubPresenter_Statics::NewProp__parentPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventEntryEventSubPresenter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EventEntryEventSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventEntryEventSubPresenter_Statics::NewProp__parentPresenter = { "_parentPresenter", nullptr, (EPropertyFlags)0x004000000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryEventSubPresenter, _parentPresenter), Z_Construct_UClass_UEventEntryPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventEntryEventSubPresenter_Statics::NewProp__parentPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryEventSubPresenter_Statics::NewProp__parentPresenter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEventEntryEventSubPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryEventSubPresenter_Statics::NewProp__eventTabWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryEventSubPresenter_Statics::NewProp__tabsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryEventSubPresenter_Statics::NewProp__parentPresenter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventEntryEventSubPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventEntryEventSubPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventEntryEventSubPresenter_Statics::ClassParams = {
		&UEventEntryEventSubPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEventEntryEventSubPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryEventSubPresenter_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEventEntryEventSubPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryEventSubPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventEntryEventSubPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventEntryEventSubPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventEntryEventSubPresenter, 3398884404);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UEventEntryEventSubPresenter>()
	{
		return UEventEntryEventSubPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventEntryEventSubPresenter(Z_Construct_UClass_UEventEntryEventSubPresenter, &UEventEntryEventSubPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UEventEntryEventSubPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventEntryEventSubPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
