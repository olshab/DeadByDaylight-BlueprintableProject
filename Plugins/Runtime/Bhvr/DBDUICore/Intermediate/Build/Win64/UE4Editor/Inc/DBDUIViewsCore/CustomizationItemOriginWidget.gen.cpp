// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CustomizationItemOriginWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizationItemOriginWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCustomizationItemOriginWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCustomizationItemOriginWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPriceTagViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationItemOriginViewData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreCurrencySwitcherWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCustomizationItemOriginWidget::execDisableArchivesButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableArchivesButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizationItemOriginWidget::execDisableCurrencyButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableCurrencyButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizationItemOriginWidget::execDisableInputs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableInputs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizationItemOriginWidget::execDisableStoreButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableStoreButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizationItemOriginWidget::execOnButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizationItemOriginWidget::execSetArchivesState)
	{
		P_GET_TARRAY_REF(FText,Z_Param_Out_args);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArchivesState_Implementation(Z_Param_Out_args);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizationItemOriginWidget::execSetCurrencyPurchaseState)
	{
		P_GET_STRUCT_REF(FPriceTagViewData,Z_Param_Out_currencyData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrencyPurchaseState_Implementation(Z_Param_Out_currencyData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizationItemOriginWidget::execSetData)
	{
		P_GET_STRUCT_REF(FCustomizationItemOriginViewData,Z_Param_Out_viewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_Out_viewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizationItemOriginWidget::execSetDefaultState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultState_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizationItemOriginWidget::execSetGameplayState)
	{
		P_GET_TARRAY_REF(FText,Z_Param_Out_args);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameplayState_Implementation(Z_Param_Out_args);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizationItemOriginWidget::execSetInputSwitcherEnabled)
	{
		P_GET_OBJECT(UCoreInputSwitcherWidget,Z_Param_inputSwitcher);
		P_GET_UBOOL(Z_Param_enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputSwitcherEnabled(Z_Param_inputSwitcher,Z_Param_enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizationItemOriginWidget::execSetMilestonePointsState)
	{
		P_GET_TARRAY_REF(FText,Z_Param_Out_args);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMilestonePointsState_Implementation(Z_Param_Out_args);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizationItemOriginWidget::execSetState)
	{
		P_GET_STRUCT_REF(FCustomizationItemOriginViewData,Z_Param_Out_viewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetState(Z_Param_Out_viewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizationItemOriginWidget::execSetStoreState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStoreState_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UCustomizationItemOriginWidget_SetArchivesState = FName(TEXT("SetArchivesState"));
	void UCustomizationItemOriginWidget::SetArchivesState(TArray<FText> const& args)
	{
		CustomizationItemOriginWidget_eventSetArchivesState_Parms Parms;
		Parms.args=args;
		ProcessEvent(FindFunctionChecked(NAME_UCustomizationItemOriginWidget_SetArchivesState),&Parms);
	}
	static FName NAME_UCustomizationItemOriginWidget_SetCurrencyPurchaseState = FName(TEXT("SetCurrencyPurchaseState"));
	void UCustomizationItemOriginWidget::SetCurrencyPurchaseState(FPriceTagViewData const& currencyData)
	{
		CustomizationItemOriginWidget_eventSetCurrencyPurchaseState_Parms Parms;
		Parms.currencyData=currencyData;
		ProcessEvent(FindFunctionChecked(NAME_UCustomizationItemOriginWidget_SetCurrencyPurchaseState),&Parms);
	}
	static FName NAME_UCustomizationItemOriginWidget_SetDefaultState = FName(TEXT("SetDefaultState"));
	void UCustomizationItemOriginWidget::SetDefaultState()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCustomizationItemOriginWidget_SetDefaultState),NULL);
	}
	static FName NAME_UCustomizationItemOriginWidget_SetGameplayState = FName(TEXT("SetGameplayState"));
	void UCustomizationItemOriginWidget::SetGameplayState(TArray<FText> const& args)
	{
		CustomizationItemOriginWidget_eventSetGameplayState_Parms Parms;
		Parms.args=args;
		ProcessEvent(FindFunctionChecked(NAME_UCustomizationItemOriginWidget_SetGameplayState),&Parms);
	}
	static FName NAME_UCustomizationItemOriginWidget_SetMilestonePointsState = FName(TEXT("SetMilestonePointsState"));
	void UCustomizationItemOriginWidget::SetMilestonePointsState(TArray<FText> const& args)
	{
		CustomizationItemOriginWidget_eventSetMilestonePointsState_Parms Parms;
		Parms.args=args;
		ProcessEvent(FindFunctionChecked(NAME_UCustomizationItemOriginWidget_SetMilestonePointsState),&Parms);
	}
	static FName NAME_UCustomizationItemOriginWidget_SetStoreState = FName(TEXT("SetStoreState"));
	void UCustomizationItemOriginWidget::SetStoreState()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCustomizationItemOriginWidget_SetStoreState),NULL);
	}
	void UCustomizationItemOriginWidget::StaticRegisterNativesUCustomizationItemOriginWidget()
	{
		UClass* Class = UCustomizationItemOriginWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableArchivesButton", &UCustomizationItemOriginWidget::execDisableArchivesButton },
			{ "DisableCurrencyButton", &UCustomizationItemOriginWidget::execDisableCurrencyButton },
			{ "DisableInputs", &UCustomizationItemOriginWidget::execDisableInputs },
			{ "DisableStoreButton", &UCustomizationItemOriginWidget::execDisableStoreButton },
			{ "OnButtonClick", &UCustomizationItemOriginWidget::execOnButtonClick },
			{ "SetArchivesState", &UCustomizationItemOriginWidget::execSetArchivesState },
			{ "SetCurrencyPurchaseState", &UCustomizationItemOriginWidget::execSetCurrencyPurchaseState },
			{ "SetData", &UCustomizationItemOriginWidget::execSetData },
			{ "SetDefaultState", &UCustomizationItemOriginWidget::execSetDefaultState },
			{ "SetGameplayState", &UCustomizationItemOriginWidget::execSetGameplayState },
			{ "SetInputSwitcherEnabled", &UCustomizationItemOriginWidget::execSetInputSwitcherEnabled },
			{ "SetMilestonePointsState", &UCustomizationItemOriginWidget::execSetMilestonePointsState },
			{ "SetState", &UCustomizationItemOriginWidget::execSetState },
			{ "SetStoreState", &UCustomizationItemOriginWidget::execSetStoreState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableArchivesButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableArchivesButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizationItemOriginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableArchivesButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizationItemOriginWidget, nullptr, "DisableArchivesButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableArchivesButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableArchivesButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableArchivesButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableArchivesButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableCurrencyButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableCurrencyButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizationItemOriginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableCurrencyButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizationItemOriginWidget, nullptr, "DisableCurrencyButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableCurrencyButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableCurrencyButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableCurrencyButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableCurrencyButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableInputs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableInputs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizationItemOriginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizationItemOriginWidget, nullptr, "DisableInputs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableInputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableStoreButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableStoreButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizationItemOriginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableStoreButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizationItemOriginWidget, nullptr, "DisableStoreButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableStoreButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableStoreButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableStoreButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableStoreButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizationItemOriginWidget_OnButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemOriginWidget_OnButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizationItemOriginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizationItemOriginWidget_OnButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizationItemOriginWidget, nullptr, "OnButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemOriginWidget_OnButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_OnButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizationItemOriginWidget_OnButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomizationItemOriginWidget_OnButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizationItemOriginWidget_SetArchivesState_Statics
	{
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_args_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_args_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_args;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCustomizationItemOriginWidget_SetArchivesState_Statics::NewProp_args_Inner = { "args", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemOriginWidget_SetArchivesState_Statics::NewProp_args_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomizationItemOriginWidget_SetArchivesState_Statics::NewProp_args = { "args", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomizationItemOriginWidget_eventSetArchivesState_Parms, args), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetArchivesState_Statics::NewProp_args_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetArchivesState_Statics::NewProp_args_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizationItemOriginWidget_SetArchivesState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizationItemOriginWidget_SetArchivesState_Statics::NewProp_args_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizationItemOriginWidget_SetArchivesState_Statics::NewProp_args,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemOriginWidget_SetArchivesState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizationItemOriginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizationItemOriginWidget_SetArchivesState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizationItemOriginWidget, nullptr, "SetArchivesState", nullptr, nullptr, sizeof(CustomizationItemOriginWidget_eventSetArchivesState_Parms), Z_Construct_UFunction_UCustomizationItemOriginWidget_SetArchivesState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetArchivesState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetArchivesState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetArchivesState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizationItemOriginWidget_SetArchivesState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomizationItemOriginWidget_SetArchivesState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizationItemOriginWidget_SetCurrencyPurchaseState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currencyData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_currencyData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemOriginWidget_SetCurrencyPurchaseState_Statics::NewProp_currencyData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizationItemOriginWidget_SetCurrencyPurchaseState_Statics::NewProp_currencyData = { "currencyData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomizationItemOriginWidget_eventSetCurrencyPurchaseState_Parms, currencyData), Z_Construct_UScriptStruct_FPriceTagViewData, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetCurrencyPurchaseState_Statics::NewProp_currencyData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetCurrencyPurchaseState_Statics::NewProp_currencyData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizationItemOriginWidget_SetCurrencyPurchaseState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizationItemOriginWidget_SetCurrencyPurchaseState_Statics::NewProp_currencyData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemOriginWidget_SetCurrencyPurchaseState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizationItemOriginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizationItemOriginWidget_SetCurrencyPurchaseState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizationItemOriginWidget, nullptr, "SetCurrencyPurchaseState", nullptr, nullptr, sizeof(CustomizationItemOriginWidget_eventSetCurrencyPurchaseState_Parms), Z_Construct_UFunction_UCustomizationItemOriginWidget_SetCurrencyPurchaseState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetCurrencyPurchaseState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetCurrencyPurchaseState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetCurrencyPurchaseState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizationItemOriginWidget_SetCurrencyPurchaseState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomizationItemOriginWidget_SetCurrencyPurchaseState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizationItemOriginWidget_SetData_Statics
	{
		struct CustomizationItemOriginWidget_eventSetData_Parms
		{
			FCustomizationItemOriginViewData viewData;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemOriginWidget_SetData_Statics::NewProp_viewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizationItemOriginWidget_SetData_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomizationItemOriginWidget_eventSetData_Parms, viewData), Z_Construct_UScriptStruct_FCustomizationItemOriginViewData, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetData_Statics::NewProp_viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetData_Statics::NewProp_viewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizationItemOriginWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizationItemOriginWidget_SetData_Statics::NewProp_viewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemOriginWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizationItemOriginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizationItemOriginWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizationItemOriginWidget, nullptr, "SetData", nullptr, nullptr, sizeof(CustomizationItemOriginWidget_eventSetData_Parms), Z_Construct_UFunction_UCustomizationItemOriginWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizationItemOriginWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomizationItemOriginWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizationItemOriginWidget_SetDefaultState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemOriginWidget_SetDefaultState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizationItemOriginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizationItemOriginWidget_SetDefaultState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizationItemOriginWidget, nullptr, "SetDefaultState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetDefaultState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetDefaultState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizationItemOriginWidget_SetDefaultState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomizationItemOriginWidget_SetDefaultState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizationItemOriginWidget_SetGameplayState_Statics
	{
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_args_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_args_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_args;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCustomizationItemOriginWidget_SetGameplayState_Statics::NewProp_args_Inner = { "args", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemOriginWidget_SetGameplayState_Statics::NewProp_args_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomizationItemOriginWidget_SetGameplayState_Statics::NewProp_args = { "args", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomizationItemOriginWidget_eventSetGameplayState_Parms, args), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetGameplayState_Statics::NewProp_args_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetGameplayState_Statics::NewProp_args_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizationItemOriginWidget_SetGameplayState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizationItemOriginWidget_SetGameplayState_Statics::NewProp_args_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizationItemOriginWidget_SetGameplayState_Statics::NewProp_args,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemOriginWidget_SetGameplayState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizationItemOriginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizationItemOriginWidget_SetGameplayState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizationItemOriginWidget, nullptr, "SetGameplayState", nullptr, nullptr, sizeof(CustomizationItemOriginWidget_eventSetGameplayState_Parms), Z_Construct_UFunction_UCustomizationItemOriginWidget_SetGameplayState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetGameplayState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetGameplayState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetGameplayState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizationItemOriginWidget_SetGameplayState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomizationItemOriginWidget_SetGameplayState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizationItemOriginWidget_SetInputSwitcherEnabled_Statics
	{
		struct CustomizationItemOriginWidget_eventSetInputSwitcherEnabled_Parms
		{
			UCoreInputSwitcherWidget* inputSwitcher;
			bool enabled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inputSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enabled_MetaData[];
#endif
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemOriginWidget_SetInputSwitcherEnabled_Statics::NewProp_inputSwitcher_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomizationItemOriginWidget_SetInputSwitcherEnabled_Statics::NewProp_inputSwitcher = { "inputSwitcher", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomizationItemOriginWidget_eventSetInputSwitcherEnabled_Parms, inputSwitcher), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetInputSwitcherEnabled_Statics::NewProp_inputSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetInputSwitcherEnabled_Statics::NewProp_inputSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemOriginWidget_SetInputSwitcherEnabled_Statics::NewProp_enabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCustomizationItemOriginWidget_SetInputSwitcherEnabled_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((CustomizationItemOriginWidget_eventSetInputSwitcherEnabled_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomizationItemOriginWidget_SetInputSwitcherEnabled_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomizationItemOriginWidget_eventSetInputSwitcherEnabled_Parms), &Z_Construct_UFunction_UCustomizationItemOriginWidget_SetInputSwitcherEnabled_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetInputSwitcherEnabled_Statics::NewProp_enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetInputSwitcherEnabled_Statics::NewProp_enabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizationItemOriginWidget_SetInputSwitcherEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizationItemOriginWidget_SetInputSwitcherEnabled_Statics::NewProp_inputSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizationItemOriginWidget_SetInputSwitcherEnabled_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemOriginWidget_SetInputSwitcherEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizationItemOriginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizationItemOriginWidget_SetInputSwitcherEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizationItemOriginWidget, nullptr, "SetInputSwitcherEnabled", nullptr, nullptr, sizeof(CustomizationItemOriginWidget_eventSetInputSwitcherEnabled_Parms), Z_Construct_UFunction_UCustomizationItemOriginWidget_SetInputSwitcherEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetInputSwitcherEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetInputSwitcherEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetInputSwitcherEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizationItemOriginWidget_SetInputSwitcherEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomizationItemOriginWidget_SetInputSwitcherEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizationItemOriginWidget_SetMilestonePointsState_Statics
	{
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_args_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_args_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_args;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCustomizationItemOriginWidget_SetMilestonePointsState_Statics::NewProp_args_Inner = { "args", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemOriginWidget_SetMilestonePointsState_Statics::NewProp_args_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomizationItemOriginWidget_SetMilestonePointsState_Statics::NewProp_args = { "args", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomizationItemOriginWidget_eventSetMilestonePointsState_Parms, args), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetMilestonePointsState_Statics::NewProp_args_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetMilestonePointsState_Statics::NewProp_args_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizationItemOriginWidget_SetMilestonePointsState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizationItemOriginWidget_SetMilestonePointsState_Statics::NewProp_args_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizationItemOriginWidget_SetMilestonePointsState_Statics::NewProp_args,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemOriginWidget_SetMilestonePointsState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizationItemOriginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizationItemOriginWidget_SetMilestonePointsState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizationItemOriginWidget, nullptr, "SetMilestonePointsState", nullptr, nullptr, sizeof(CustomizationItemOriginWidget_eventSetMilestonePointsState_Parms), Z_Construct_UFunction_UCustomizationItemOriginWidget_SetMilestonePointsState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetMilestonePointsState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetMilestonePointsState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetMilestonePointsState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizationItemOriginWidget_SetMilestonePointsState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomizationItemOriginWidget_SetMilestonePointsState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizationItemOriginWidget_SetState_Statics
	{
		struct CustomizationItemOriginWidget_eventSetState_Parms
		{
			FCustomizationItemOriginViewData viewData;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemOriginWidget_SetState_Statics::NewProp_viewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizationItemOriginWidget_SetState_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomizationItemOriginWidget_eventSetState_Parms, viewData), Z_Construct_UScriptStruct_FCustomizationItemOriginViewData, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetState_Statics::NewProp_viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetState_Statics::NewProp_viewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizationItemOriginWidget_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizationItemOriginWidget_SetState_Statics::NewProp_viewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemOriginWidget_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizationItemOriginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizationItemOriginWidget_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizationItemOriginWidget, nullptr, "SetState", nullptr, nullptr, sizeof(CustomizationItemOriginWidget_eventSetState_Parms), Z_Construct_UFunction_UCustomizationItemOriginWidget_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizationItemOriginWidget_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomizationItemOriginWidget_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizationItemOriginWidget_SetStoreState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemOriginWidget_SetStoreState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizationItemOriginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizationItemOriginWidget_SetStoreState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizationItemOriginWidget, nullptr, "SetStoreState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetStoreState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemOriginWidget_SetStoreState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizationItemOriginWidget_SetStoreState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomizationItemOriginWidget_SetStoreState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomizationItemOriginWidget_NoRegister()
	{
		return UCustomizationItemOriginWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizationItemOriginWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstructionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstructionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstructionImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstructionImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnlockTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockSubtitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnlockSubtitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrencyButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArchivesButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArchivesButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoreButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StoreButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableArchivesButton, "DisableArchivesButton" }, // 522397778
		{ &Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableCurrencyButton, "DisableCurrencyButton" }, // 2576939716
		{ &Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableInputs, "DisableInputs" }, // 2142420593
		{ &Z_Construct_UFunction_UCustomizationItemOriginWidget_DisableStoreButton, "DisableStoreButton" }, // 532673254
		{ &Z_Construct_UFunction_UCustomizationItemOriginWidget_OnButtonClick, "OnButtonClick" }, // 482256068
		{ &Z_Construct_UFunction_UCustomizationItemOriginWidget_SetArchivesState, "SetArchivesState" }, // 1051612832
		{ &Z_Construct_UFunction_UCustomizationItemOriginWidget_SetCurrencyPurchaseState, "SetCurrencyPurchaseState" }, // 2289850585
		{ &Z_Construct_UFunction_UCustomizationItemOriginWidget_SetData, "SetData" }, // 342755867
		{ &Z_Construct_UFunction_UCustomizationItemOriginWidget_SetDefaultState, "SetDefaultState" }, // 347463246
		{ &Z_Construct_UFunction_UCustomizationItemOriginWidget_SetGameplayState, "SetGameplayState" }, // 3434828444
		{ &Z_Construct_UFunction_UCustomizationItemOriginWidget_SetInputSwitcherEnabled, "SetInputSwitcherEnabled" }, // 3414329416
		{ &Z_Construct_UFunction_UCustomizationItemOriginWidget_SetMilestonePointsState, "SetMilestonePointsState" }, // 1232261575
		{ &Z_Construct_UFunction_UCustomizationItemOriginWidget_SetState, "SetState" }, // 3811902958
		{ &Z_Construct_UFunction_UCustomizationItemOriginWidget_SetStoreState, "SetStoreState" }, // 3288022188
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CustomizationItemOriginWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CustomizationItemOriginWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_InstructionText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CustomizationItemOriginWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CustomizationItemOriginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_InstructionText = { "InstructionText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizationItemOriginWidget, InstructionText), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_InstructionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_InstructionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_InstructionImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CustomizationItemOriginWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CustomizationItemOriginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_InstructionImage = { "InstructionImage", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizationItemOriginWidget, InstructionImage), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_InstructionImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_InstructionImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_UnlockTitle_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CustomizationItemOriginWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CustomizationItemOriginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_UnlockTitle = { "UnlockTitle", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizationItemOriginWidget, UnlockTitle), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_UnlockTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_UnlockTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_UnlockSubtitle_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CustomizationItemOriginWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CustomizationItemOriginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_UnlockSubtitle = { "UnlockSubtitle", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizationItemOriginWidget, UnlockSubtitle), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_UnlockSubtitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_UnlockSubtitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_CurrencyButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CustomizationItemOriginWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CustomizationItemOriginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_CurrencyButton = { "CurrencyButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizationItemOriginWidget, CurrencyButton), Z_Construct_UClass_UCoreCurrencySwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_CurrencyButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_CurrencyButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_ArchivesButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CustomizationItemOriginWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CustomizationItemOriginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_ArchivesButton = { "ArchivesButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizationItemOriginWidget, ArchivesButton), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_ArchivesButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_ArchivesButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_StoreButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CustomizationItemOriginWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CustomizationItemOriginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_StoreButton = { "StoreButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizationItemOriginWidget, StoreButton), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_StoreButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_StoreButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_InstructionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_InstructionImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_UnlockTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_UnlockSubtitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_CurrencyButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_ArchivesButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::NewProp_StoreButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizationItemOriginWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::ClassParams = {
		&UCustomizationItemOriginWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizationItemOriginWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomizationItemOriginWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomizationItemOriginWidget, 2565493403);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCustomizationItemOriginWidget>()
	{
		return UCustomizationItemOriginWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomizationItemOriginWidget(Z_Construct_UClass_UCustomizationItemOriginWidget, &UCustomizationItemOriginWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCustomizationItemOriginWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizationItemOriginWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
