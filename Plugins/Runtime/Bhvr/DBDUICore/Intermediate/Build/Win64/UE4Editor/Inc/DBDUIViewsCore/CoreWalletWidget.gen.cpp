// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreWalletWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreWalletWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreWalletWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreWalletWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyLabelViewData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreCurrencyLabelWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UGridPanel_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_PlayerProfileCurrencyClickedDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UCoreWalletWidget::execFullUpdateCurrency)
	{
		P_GET_STRUCT_REF(FCurrencyLabelViewData,Z_Param_Out_viewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FullUpdateCurrency(Z_Param_Out_viewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreWalletWidget::execInitWallet)
	{
		P_GET_TARRAY_REF(FCurrencyLabelViewData,Z_Param_Out_walletData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitWallet(Z_Param_Out_walletData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreWalletWidget::execOnCurrencyClicked)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_buttonTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCurrencyClicked(Z_Param_buttonTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreWalletWidget::execPlayNotEnoughCurrency)
	{
		P_GET_ENUM(ECurrencyType,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayNotEnoughCurrency(ECurrencyType(Z_Param_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreWalletWidget::execUpdateCurrency)
	{
		P_GET_ENUM(ECurrencyType,Z_Param_type);
		P_GET_PROPERTY(FIntProperty,Z_Param_newBalance);
		P_GET_PROPERTY(FIntProperty,Z_Param_previousBalance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCurrency(ECurrencyType(Z_Param_type),Z_Param_newBalance,Z_Param_previousBalance);
		P_NATIVE_END;
	}
	void UCoreWalletWidget::StaticRegisterNativesUCoreWalletWidget()
	{
		UClass* Class = UCoreWalletWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FullUpdateCurrency", &UCoreWalletWidget::execFullUpdateCurrency },
			{ "InitWallet", &UCoreWalletWidget::execInitWallet },
			{ "OnCurrencyClicked", &UCoreWalletWidget::execOnCurrencyClicked },
			{ "PlayNotEnoughCurrency", &UCoreWalletWidget::execPlayNotEnoughCurrency },
			{ "UpdateCurrency", &UCoreWalletWidget::execUpdateCurrency },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreWalletWidget_FullUpdateCurrency_Statics
	{
		struct CoreWalletWidget_eventFullUpdateCurrency_Parms
		{
			FCurrencyLabelViewData viewData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_viewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreWalletWidget_FullUpdateCurrency_Statics::NewProp_viewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreWalletWidget_FullUpdateCurrency_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreWalletWidget_eventFullUpdateCurrency_Parms, viewData), Z_Construct_UScriptStruct_FCurrencyLabelViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreWalletWidget_FullUpdateCurrency_Statics::NewProp_viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreWalletWidget_FullUpdateCurrency_Statics::NewProp_viewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreWalletWidget_FullUpdateCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreWalletWidget_FullUpdateCurrency_Statics::NewProp_viewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreWalletWidget_FullUpdateCurrency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreWalletWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreWalletWidget_FullUpdateCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreWalletWidget, nullptr, "FullUpdateCurrency", nullptr, nullptr, sizeof(CoreWalletWidget_eventFullUpdateCurrency_Parms), Z_Construct_UFunction_UCoreWalletWidget_FullUpdateCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreWalletWidget_FullUpdateCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreWalletWidget_FullUpdateCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreWalletWidget_FullUpdateCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreWalletWidget_FullUpdateCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreWalletWidget_FullUpdateCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreWalletWidget_InitWallet_Statics
	{
		struct CoreWalletWidget_eventInitWallet_Parms
		{
			TArray<FCurrencyLabelViewData> walletData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_walletData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_walletData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_walletData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreWalletWidget_InitWallet_Statics::NewProp_walletData_Inner = { "walletData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCurrencyLabelViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreWalletWidget_InitWallet_Statics::NewProp_walletData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoreWalletWidget_InitWallet_Statics::NewProp_walletData = { "walletData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreWalletWidget_eventInitWallet_Parms, walletData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCoreWalletWidget_InitWallet_Statics::NewProp_walletData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreWalletWidget_InitWallet_Statics::NewProp_walletData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreWalletWidget_InitWallet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreWalletWidget_InitWallet_Statics::NewProp_walletData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreWalletWidget_InitWallet_Statics::NewProp_walletData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreWalletWidget_InitWallet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreWalletWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreWalletWidget_InitWallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreWalletWidget, nullptr, "InitWallet", nullptr, nullptr, sizeof(CoreWalletWidget_eventInitWallet_Parms), Z_Construct_UFunction_UCoreWalletWidget_InitWallet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreWalletWidget_InitWallet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreWalletWidget_InitWallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreWalletWidget_InitWallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreWalletWidget_InitWallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreWalletWidget_InitWallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreWalletWidget_OnCurrencyClicked_Statics
	{
		struct CoreWalletWidget_eventOnCurrencyClicked_Parms
		{
			UCoreButtonWidget* buttonTarget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_buttonTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreWalletWidget_OnCurrencyClicked_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreWalletWidget_OnCurrencyClicked_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreWalletWidget_eventOnCurrencyClicked_Parms, buttonTarget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreWalletWidget_OnCurrencyClicked_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreWalletWidget_OnCurrencyClicked_Statics::NewProp_buttonTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreWalletWidget_OnCurrencyClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreWalletWidget_OnCurrencyClicked_Statics::NewProp_buttonTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreWalletWidget_OnCurrencyClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreWalletWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreWalletWidget_OnCurrencyClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreWalletWidget, nullptr, "OnCurrencyClicked", nullptr, nullptr, sizeof(CoreWalletWidget_eventOnCurrencyClicked_Parms), Z_Construct_UFunction_UCoreWalletWidget_OnCurrencyClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreWalletWidget_OnCurrencyClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreWalletWidget_OnCurrencyClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreWalletWidget_OnCurrencyClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreWalletWidget_OnCurrencyClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreWalletWidget_OnCurrencyClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreWalletWidget_PlayNotEnoughCurrency_Statics
	{
		struct CoreWalletWidget_eventPlayNotEnoughCurrency_Parms
		{
			ECurrencyType type;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreWalletWidget_PlayNotEnoughCurrency_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreWalletWidget_PlayNotEnoughCurrency_Statics::NewProp_type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreWalletWidget_PlayNotEnoughCurrency_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreWalletWidget_eventPlayNotEnoughCurrency_Parms, type), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(Z_Construct_UFunction_UCoreWalletWidget_PlayNotEnoughCurrency_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreWalletWidget_PlayNotEnoughCurrency_Statics::NewProp_type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreWalletWidget_PlayNotEnoughCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreWalletWidget_PlayNotEnoughCurrency_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreWalletWidget_PlayNotEnoughCurrency_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreWalletWidget_PlayNotEnoughCurrency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreWalletWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreWalletWidget_PlayNotEnoughCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreWalletWidget, nullptr, "PlayNotEnoughCurrency", nullptr, nullptr, sizeof(CoreWalletWidget_eventPlayNotEnoughCurrency_Parms), Z_Construct_UFunction_UCoreWalletWidget_PlayNotEnoughCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreWalletWidget_PlayNotEnoughCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreWalletWidget_PlayNotEnoughCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreWalletWidget_PlayNotEnoughCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreWalletWidget_PlayNotEnoughCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreWalletWidget_PlayNotEnoughCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreWalletWidget_UpdateCurrency_Statics
	{
		struct CoreWalletWidget_eventUpdateCurrency_Parms
		{
			ECurrencyType type;
			int32 newBalance;
			int32 previousBalance;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newBalance;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_previousBalance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreWalletWidget_UpdateCurrency_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreWalletWidget_UpdateCurrency_Statics::NewProp_type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreWalletWidget_UpdateCurrency_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreWalletWidget_eventUpdateCurrency_Parms, type), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(Z_Construct_UFunction_UCoreWalletWidget_UpdateCurrency_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreWalletWidget_UpdateCurrency_Statics::NewProp_type_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreWalletWidget_UpdateCurrency_Statics::NewProp_newBalance = { "newBalance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreWalletWidget_eventUpdateCurrency_Parms, newBalance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreWalletWidget_UpdateCurrency_Statics::NewProp_previousBalance = { "previousBalance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreWalletWidget_eventUpdateCurrency_Parms, previousBalance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreWalletWidget_UpdateCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreWalletWidget_UpdateCurrency_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreWalletWidget_UpdateCurrency_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreWalletWidget_UpdateCurrency_Statics::NewProp_newBalance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreWalletWidget_UpdateCurrency_Statics::NewProp_previousBalance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreWalletWidget_UpdateCurrency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreWalletWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreWalletWidget_UpdateCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreWalletWidget, nullptr, "UpdateCurrency", nullptr, nullptr, sizeof(CoreWalletWidget_eventUpdateCurrency_Parms), Z_Construct_UFunction_UCoreWalletWidget_UpdateCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreWalletWidget_UpdateCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreWalletWidget_UpdateCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreWalletWidget_UpdateCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreWalletWidget_UpdateCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreWalletWidget_UpdateCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreWalletWidget_NoRegister()
	{
		return UCoreWalletWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreWalletWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoreCurrencyLabelWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CoreCurrencyLabelWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrencyContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currencyWidgetMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__currencyWidgetMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__currencyWidgetMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currencyWidgetMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__currencyWidgetMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currencyClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__currencyClickedDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreWalletWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreWalletWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreWalletWidget_FullUpdateCurrency, "FullUpdateCurrency" }, // 3706403008
		{ &Z_Construct_UFunction_UCoreWalletWidget_InitWallet, "InitWallet" }, // 1689882621
		{ &Z_Construct_UFunction_UCoreWalletWidget_OnCurrencyClicked, "OnCurrencyClicked" }, // 3720401704
		{ &Z_Construct_UFunction_UCoreWalletWidget_PlayNotEnoughCurrency, "PlayNotEnoughCurrency" }, // 1123702610
		{ &Z_Construct_UFunction_UCoreWalletWidget_UpdateCurrency, "UpdateCurrency" }, // 1513081291
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreWalletWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreWalletWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreWalletWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreWalletWidget_Statics::NewProp_CoreCurrencyLabelWidgetClass_MetaData[] = {
		{ "Category", "CoreWalletWidget" },
		{ "ModuleRelativePath", "Public/CoreWalletWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreWalletWidget_Statics::NewProp_CoreCurrencyLabelWidgetClass = { "CoreCurrencyLabelWidgetClass", nullptr, (EPropertyFlags)0x0014000002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreWalletWidget, CoreCurrencyLabelWidgetClass), Z_Construct_UClass_UCoreCurrencyLabelWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreWalletWidget_Statics::NewProp_CoreCurrencyLabelWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreWalletWidget_Statics::NewProp_CoreCurrencyLabelWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreWalletWidget_Statics::NewProp_CurrencyContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreWalletWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreWalletWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreWalletWidget_Statics::NewProp_CurrencyContainer = { "CurrencyContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreWalletWidget, CurrencyContainer), Z_Construct_UClass_UGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreWalletWidget_Statics::NewProp_CurrencyContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreWalletWidget_Statics::NewProp_CurrencyContainer_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreWalletWidget_Statics::NewProp__currencyWidgetMap_ValueProp = { "_currencyWidgetMap", nullptr, (EPropertyFlags)0x0000000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UCoreCurrencyLabelWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreWalletWidget_Statics::NewProp__currencyWidgetMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreWalletWidget_Statics::NewProp__currencyWidgetMap_Key_KeyProp = { "_currencyWidgetMap_Key", nullptr, (EPropertyFlags)0x0000000000080009, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreWalletWidget_Statics::NewProp__currencyWidgetMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreWalletWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreWalletWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreWalletWidget_Statics::NewProp__currencyWidgetMap = { "_currencyWidgetMap", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreWalletWidget, _currencyWidgetMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreWalletWidget_Statics::NewProp__currencyWidgetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreWalletWidget_Statics::NewProp__currencyWidgetMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreWalletWidget_Statics::NewProp__currencyClickedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreWalletWidget" },
		{ "ModuleRelativePath", "Public/CoreWalletWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreWalletWidget_Statics::NewProp__currencyClickedDelegate = { "_currencyClickedDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreWalletWidget, _currencyClickedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_PlayerProfileCurrencyClickedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreWalletWidget_Statics::NewProp__currencyClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreWalletWidget_Statics::NewProp__currencyClickedDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreWalletWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreWalletWidget_Statics::NewProp_CoreCurrencyLabelWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreWalletWidget_Statics::NewProp_CurrencyContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreWalletWidget_Statics::NewProp__currencyWidgetMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreWalletWidget_Statics::NewProp__currencyWidgetMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreWalletWidget_Statics::NewProp__currencyWidgetMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreWalletWidget_Statics::NewProp__currencyWidgetMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreWalletWidget_Statics::NewProp__currencyClickedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreWalletWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreWalletWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreWalletWidget_Statics::ClassParams = {
		&UCoreWalletWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreWalletWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreWalletWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreWalletWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreWalletWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreWalletWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreWalletWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreWalletWidget, 4023004556);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreWalletWidget>()
	{
		return UCoreWalletWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreWalletWidget(Z_Construct_UClass_UCoreWalletWidget, &UCoreWalletWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreWalletWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreWalletWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
