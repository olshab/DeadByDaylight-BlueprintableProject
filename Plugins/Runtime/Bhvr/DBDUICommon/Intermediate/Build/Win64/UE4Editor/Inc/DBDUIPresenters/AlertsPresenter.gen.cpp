// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/AlertsPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlertsPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UAlertsPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UAlertsPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UBaseAlertPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAlertsPresenter::execOnRewardAlertSequenceCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRewardAlertSequenceCompleted();
		P_NATIVE_END;
	}
	void UAlertsPresenter::StaticRegisterNativesUAlertsPresenter()
	{
		UClass* Class = UAlertsPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRewardAlertSequenceCompleted", &UAlertsPresenter::execOnRewardAlertSequenceCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAlertsPresenter_OnRewardAlertSequenceCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlertsPresenter_OnRewardAlertSequenceCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlertsPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlertsPresenter_OnRewardAlertSequenceCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlertsPresenter, nullptr, "OnRewardAlertSequenceCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAlertsPresenter_OnRewardAlertSequenceCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlertsPresenter_OnRewardAlertSequenceCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAlertsPresenter_OnRewardAlertSequenceCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAlertsPresenter_OnRewardAlertSequenceCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAlertsPresenter_NoRegister()
	{
		return UAlertsPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UAlertsPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlertsWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AlertsWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlertsPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseAlertPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAlertsPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAlertsPresenter_OnRewardAlertSequenceCompleted, "OnRewardAlertSequenceCompleted" }, // 726925856
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlertsPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AlertsPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AlertsPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlertsPresenter_Statics::NewProp_AlertsWidgetClass_MetaData[] = {
		{ "Category", "AlertsPresenter" },
		{ "ModuleRelativePath", "Public/AlertsPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAlertsPresenter_Statics::NewProp_AlertsWidgetClass = { "AlertsWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAlertsPresenter, AlertsWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAlertsPresenter_Statics::NewProp_AlertsWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAlertsPresenter_Statics::NewProp_AlertsWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlertsPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlertsPresenter_Statics::NewProp_AlertsWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlertsPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlertsPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAlertsPresenter_Statics::ClassParams = {
		&UAlertsPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAlertsPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlertsPresenter_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAlertsPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAlertsPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAlertsPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAlertsPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAlertsPresenter, 1768523367);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UAlertsPresenter>()
	{
		return UAlertsPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAlertsPresenter(Z_Construct_UClass_UAlertsPresenter, &UAlertsPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UAlertsPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlertsPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
