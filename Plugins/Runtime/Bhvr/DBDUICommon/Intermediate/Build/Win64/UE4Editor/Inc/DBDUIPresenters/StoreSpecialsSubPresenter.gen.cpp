// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/StoreSpecialsSubPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreSpecialsSubPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UStoreSpecialsSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UStoreSpecialsSubPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UStoreSubPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreSpecialsViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreSpecialsItemViewData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UStoreSpecialsSubPresenter::execOnAuricCellSpecialBuyAction)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_bundleId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAuricCellSpecialBuyAction(Z_Param_bundleId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreSpecialsSubPresenter::execOnAuricCellSpecialOtherOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAuricCellSpecialOtherOptions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreSpecialsSubPresenter::execOnPremiumTransactionCompleted)
	{
		P_GET_UBOOL(Z_Param_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPremiumTransactionCompleted(Z_Param_success);
		P_NATIVE_END;
	}
	void UStoreSpecialsSubPresenter::StaticRegisterNativesUStoreSpecialsSubPresenter()
	{
		UClass* Class = UStoreSpecialsSubPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAuricCellSpecialBuyAction", &UStoreSpecialsSubPresenter::execOnAuricCellSpecialBuyAction },
			{ "OnAuricCellSpecialOtherOptions", &UStoreSpecialsSubPresenter::execOnAuricCellSpecialOtherOptions },
			{ "OnPremiumTransactionCompleted", &UStoreSpecialsSubPresenter::execOnPremiumTransactionCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnAuricCellSpecialBuyAction_Statics
	{
		struct StoreSpecialsSubPresenter_eventOnAuricCellSpecialBuyAction_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnAuricCellSpecialBuyAction_Statics::NewProp_bundleId = { "bundleId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreSpecialsSubPresenter_eventOnAuricCellSpecialBuyAction_Parms, bundleId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnAuricCellSpecialBuyAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnAuricCellSpecialBuyAction_Statics::NewProp_bundleId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnAuricCellSpecialBuyAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreSpecialsSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnAuricCellSpecialBuyAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreSpecialsSubPresenter, nullptr, "OnAuricCellSpecialBuyAction", nullptr, nullptr, sizeof(StoreSpecialsSubPresenter_eventOnAuricCellSpecialBuyAction_Parms), Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnAuricCellSpecialBuyAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnAuricCellSpecialBuyAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnAuricCellSpecialBuyAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnAuricCellSpecialBuyAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnAuricCellSpecialBuyAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnAuricCellSpecialBuyAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnAuricCellSpecialOtherOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnAuricCellSpecialOtherOptions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreSpecialsSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnAuricCellSpecialOtherOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreSpecialsSubPresenter, nullptr, "OnAuricCellSpecialOtherOptions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnAuricCellSpecialOtherOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnAuricCellSpecialOtherOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnAuricCellSpecialOtherOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnAuricCellSpecialOtherOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnPremiumTransactionCompleted_Statics
	{
		struct StoreSpecialsSubPresenter_eventOnPremiumTransactionCompleted_Parms
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
	void Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnPremiumTransactionCompleted_Statics::NewProp_success_SetBit(void* Obj)
	{
		((StoreSpecialsSubPresenter_eventOnPremiumTransactionCompleted_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnPremiumTransactionCompleted_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StoreSpecialsSubPresenter_eventOnPremiumTransactionCompleted_Parms), &Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnPremiumTransactionCompleted_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnPremiumTransactionCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnPremiumTransactionCompleted_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnPremiumTransactionCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreSpecialsSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnPremiumTransactionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreSpecialsSubPresenter, nullptr, "OnPremiumTransactionCompleted", nullptr, nullptr, sizeof(StoreSpecialsSubPresenter_eventOnPremiumTransactionCompleted_Parms), Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnPremiumTransactionCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnPremiumTransactionCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnPremiumTransactionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnPremiumTransactionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnPremiumTransactionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnPremiumTransactionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStoreSpecialsSubPresenter_NoRegister()
	{
		return UStoreSpecialsSubPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UStoreSpecialsSubPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__storeSpecialsWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__storeSpecialsWidget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cachedSpecialsItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cachedSpecialsItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cachedSpecialsItems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreSpecialsSubPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStoreSubPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStoreSpecialsSubPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnAuricCellSpecialBuyAction, "OnAuricCellSpecialBuyAction" }, // 2614654169
		{ &Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnAuricCellSpecialOtherOptions, "OnAuricCellSpecialOtherOptions" }, // 4225468580
		{ &Z_Construct_UFunction_UStoreSpecialsSubPresenter_OnPremiumTransactionCompleted, "OnPremiumTransactionCompleted" }, // 1351706070
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreSpecialsSubPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StoreSpecialsSubPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StoreSpecialsSubPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreSpecialsSubPresenter_Statics::NewProp__storeSpecialsWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StoreSpecialsSubPresenter" },
		{ "ModuleRelativePath", "Public/StoreSpecialsSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UStoreSpecialsSubPresenter_Statics::NewProp__storeSpecialsWidget = { "_storeSpecialsWidget", nullptr, (EPropertyFlags)0x0044000000002005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreSpecialsSubPresenter, _storeSpecialsWidget), Z_Construct_UClass_UStoreSpecialsViewInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreSpecialsSubPresenter_Statics::NewProp__storeSpecialsWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreSpecialsSubPresenter_Statics::NewProp__storeSpecialsWidget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreSpecialsSubPresenter_Statics::NewProp__cachedSpecialsItems_Inner = { "_cachedSpecialsItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStoreSpecialsItemViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreSpecialsSubPresenter_Statics::NewProp__cachedSpecialsItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StoreSpecialsSubPresenter" },
		{ "ModuleRelativePath", "Public/StoreSpecialsSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStoreSpecialsSubPresenter_Statics::NewProp__cachedSpecialsItems = { "_cachedSpecialsItems", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreSpecialsSubPresenter, _cachedSpecialsItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStoreSpecialsSubPresenter_Statics::NewProp__cachedSpecialsItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreSpecialsSubPresenter_Statics::NewProp__cachedSpecialsItems_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStoreSpecialsSubPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreSpecialsSubPresenter_Statics::NewProp__storeSpecialsWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreSpecialsSubPresenter_Statics::NewProp__cachedSpecialsItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreSpecialsSubPresenter_Statics::NewProp__cachedSpecialsItems,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreSpecialsSubPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStoreSpecialsSubPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoreSpecialsSubPresenter_Statics::ClassParams = {
		&UStoreSpecialsSubPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStoreSpecialsSubPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStoreSpecialsSubPresenter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStoreSpecialsSubPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreSpecialsSubPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreSpecialsSubPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoreSpecialsSubPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoreSpecialsSubPresenter, 1624165644);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UStoreSpecialsSubPresenter>()
	{
		return UStoreSpecialsSubPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoreSpecialsSubPresenter(Z_Construct_UClass_UStoreSpecialsSubPresenter, &UStoreSpecialsSubPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UStoreSpecialsSubPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreSpecialsSubPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
