// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/AuricCellsPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuricCellsPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UAuricCellsPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UAuricCellsPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData();
// End Cross Module References
	DEFINE_FUNCTION(UAuricCellsPresenter::execOnBackAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuricCellsPresenter::execOnBuyAction)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_bundleId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBuyAction(Z_Param_bundleId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuricCellsPresenter::execOnPremiumTransactionCompleted)
	{
		P_GET_UBOOL(Z_Param_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPremiumTransactionCompleted(Z_Param_success);
		P_NATIVE_END;
	}
	void UAuricCellsPresenter::StaticRegisterNativesUAuricCellsPresenter()
	{
		UClass* Class = UAuricCellsPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBackAction", &UAuricCellsPresenter::execOnBackAction },
			{ "OnBuyAction", &UAuricCellsPresenter::execOnBuyAction },
			{ "OnPremiumTransactionCompleted", &UAuricCellsPresenter::execOnPremiumTransactionCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAuricCellsPresenter_OnBackAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuricCellsPresenter_OnBackAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AuricCellsPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuricCellsPresenter_OnBackAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuricCellsPresenter, nullptr, "OnBackAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAuricCellsPresenter_OnBackAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuricCellsPresenter_OnBackAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAuricCellsPresenter_OnBackAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAuricCellsPresenter_OnBackAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuricCellsPresenter_OnBuyAction_Statics
	{
		struct AuricCellsPresenter_eventOnBuyAction_Parms
		{
			FName bundleId;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_bundleId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAuricCellsPresenter_OnBuyAction_Statics::NewProp_bundleId = { "bundleId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AuricCellsPresenter_eventOnBuyAction_Parms, bundleId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuricCellsPresenter_OnBuyAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuricCellsPresenter_OnBuyAction_Statics::NewProp_bundleId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuricCellsPresenter_OnBuyAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AuricCellsPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuricCellsPresenter_OnBuyAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuricCellsPresenter, nullptr, "OnBuyAction", nullptr, nullptr, sizeof(AuricCellsPresenter_eventOnBuyAction_Parms), Z_Construct_UFunction_UAuricCellsPresenter_OnBuyAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuricCellsPresenter_OnBuyAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAuricCellsPresenter_OnBuyAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuricCellsPresenter_OnBuyAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAuricCellsPresenter_OnBuyAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAuricCellsPresenter_OnBuyAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuricCellsPresenter_OnPremiumTransactionCompleted_Statics
	{
		struct AuricCellsPresenter_eventOnPremiumTransactionCompleted_Parms
		{
			bool success;
		};
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAuricCellsPresenter_OnPremiumTransactionCompleted_Statics::NewProp_success_SetBit(void* Obj)
	{
		((AuricCellsPresenter_eventOnPremiumTransactionCompleted_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAuricCellsPresenter_OnPremiumTransactionCompleted_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AuricCellsPresenter_eventOnPremiumTransactionCompleted_Parms), &Z_Construct_UFunction_UAuricCellsPresenter_OnPremiumTransactionCompleted_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuricCellsPresenter_OnPremiumTransactionCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuricCellsPresenter_OnPremiumTransactionCompleted_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuricCellsPresenter_OnPremiumTransactionCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AuricCellsPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuricCellsPresenter_OnPremiumTransactionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuricCellsPresenter, nullptr, "OnPremiumTransactionCompleted", nullptr, nullptr, sizeof(AuricCellsPresenter_eventOnPremiumTransactionCompleted_Parms), Z_Construct_UFunction_UAuricCellsPresenter_OnPremiumTransactionCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuricCellsPresenter_OnPremiumTransactionCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAuricCellsPresenter_OnPremiumTransactionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuricCellsPresenter_OnPremiumTransactionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAuricCellsPresenter_OnPremiumTransactionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAuricCellsPresenter_OnPremiumTransactionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAuricCellsPresenter_NoRegister()
	{
		return UAuricCellsPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UAuricCellsPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuricCellsWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AuricCellsWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__firstPurchaseViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__firstPurchaseViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuricCellsPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAuricCellsPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAuricCellsPresenter_OnBackAction, "OnBackAction" }, // 1744356348
		{ &Z_Construct_UFunction_UAuricCellsPresenter_OnBuyAction, "OnBuyAction" }, // 959117825
		{ &Z_Construct_UFunction_UAuricCellsPresenter_OnPremiumTransactionCompleted, "OnPremiumTransactionCompleted" }, // 4035587770
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuricCellsPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AuricCellsPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AuricCellsPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuricCellsPresenter_Statics::NewProp_AuricCellsWidgetClass_MetaData[] = {
		{ "Category", "AuricCellsPresenter" },
		{ "ModuleRelativePath", "Public/AuricCellsPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAuricCellsPresenter_Statics::NewProp_AuricCellsWidgetClass = { "AuricCellsWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAuricCellsPresenter, AuricCellsWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAuricCellsPresenter_Statics::NewProp_AuricCellsWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAuricCellsPresenter_Statics::NewProp_AuricCellsWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuricCellsPresenter_Statics::NewProp__firstPurchaseViewData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AuricCellsPresenter" },
		{ "ModuleRelativePath", "Public/AuricCellsPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuricCellsPresenter_Statics::NewProp__firstPurchaseViewData = { "_firstPurchaseViewData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAuricCellsPresenter, _firstPurchaseViewData), Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData, METADATA_PARAMS(Z_Construct_UClass_UAuricCellsPresenter_Statics::NewProp__firstPurchaseViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAuricCellsPresenter_Statics::NewProp__firstPurchaseViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAuricCellsPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuricCellsPresenter_Statics::NewProp_AuricCellsWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuricCellsPresenter_Statics::NewProp__firstPurchaseViewData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuricCellsPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuricCellsPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAuricCellsPresenter_Statics::ClassParams = {
		&UAuricCellsPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAuricCellsPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAuricCellsPresenter_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAuricCellsPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAuricCellsPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAuricCellsPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAuricCellsPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAuricCellsPresenter, 3601369784);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UAuricCellsPresenter>()
	{
		return UAuricCellsPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAuricCellsPresenter(Z_Construct_UClass_UAuricCellsPresenter, &UAuricCellsPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UAuricCellsPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuricCellsPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
