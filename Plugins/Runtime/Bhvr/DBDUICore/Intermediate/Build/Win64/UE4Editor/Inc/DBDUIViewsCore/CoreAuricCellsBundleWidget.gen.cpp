// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreAuricCellsBundleWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreAuricCellsBundleWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreAuricCellsBundleWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreAuricCellsBundleWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FAuricCellsBundleViewData();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_AuricCellsBuyActionDelegate__DelegateSignature();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePremiumCurrencyButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreAuricCellsBundleWidget::execOnBuyButtonClicked)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_buttonTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBuyButtonClicked(Z_Param_buttonTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAuricCellsBundleWidget::execSetData)
	{
		P_GET_STRUCT_REF(FAuricCellsBundleViewData,Z_Param_Out_bundleData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_Out_bundleData);
		P_NATIVE_END;
	}
	static FName NAME_UCoreAuricCellsBundleWidget_SetupAsReward = FName(TEXT("SetupAsReward"));
	void UCoreAuricCellsBundleWidget::SetupAsReward()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreAuricCellsBundleWidget_SetupAsReward),NULL);
	}
	void UCoreAuricCellsBundleWidget::StaticRegisterNativesUCoreAuricCellsBundleWidget()
	{
		UClass* Class = UCoreAuricCellsBundleWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBuyButtonClicked", &UCoreAuricCellsBundleWidget::execOnBuyButtonClicked },
			{ "SetData", &UCoreAuricCellsBundleWidget::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreAuricCellsBundleWidget_OnBuyButtonClicked_Statics
	{
		struct CoreAuricCellsBundleWidget_eventOnBuyButtonClicked_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuricCellsBundleWidget_OnBuyButtonClicked_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreAuricCellsBundleWidget_OnBuyButtonClicked_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuricCellsBundleWidget_eventOnBuyButtonClicked_Parms, buttonTarget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuricCellsBundleWidget_OnBuyButtonClicked_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuricCellsBundleWidget_OnBuyButtonClicked_Statics::NewProp_buttonTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAuricCellsBundleWidget_OnBuyButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuricCellsBundleWidget_OnBuyButtonClicked_Statics::NewProp_buttonTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuricCellsBundleWidget_OnBuyButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreAuricCellsBundleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAuricCellsBundleWidget_OnBuyButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAuricCellsBundleWidget, nullptr, "OnBuyButtonClicked", nullptr, nullptr, sizeof(CoreAuricCellsBundleWidget_eventOnBuyButtonClicked_Parms), Z_Construct_UFunction_UCoreAuricCellsBundleWidget_OnBuyButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuricCellsBundleWidget_OnBuyButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuricCellsBundleWidget_OnBuyButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuricCellsBundleWidget_OnBuyButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAuricCellsBundleWidget_OnBuyButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAuricCellsBundleWidget_OnBuyButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAuricCellsBundleWidget_SetData_Statics
	{
		struct CoreAuricCellsBundleWidget_eventSetData_Parms
		{
			FAuricCellsBundleViewData bundleData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bundleData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bundleData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuricCellsBundleWidget_SetData_Statics::NewProp_bundleData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAuricCellsBundleWidget_SetData_Statics::NewProp_bundleData = { "bundleData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuricCellsBundleWidget_eventSetData_Parms, bundleData), Z_Construct_UScriptStruct_FAuricCellsBundleViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuricCellsBundleWidget_SetData_Statics::NewProp_bundleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuricCellsBundleWidget_SetData_Statics::NewProp_bundleData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAuricCellsBundleWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuricCellsBundleWidget_SetData_Statics::NewProp_bundleData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuricCellsBundleWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreAuricCellsBundleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAuricCellsBundleWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAuricCellsBundleWidget, nullptr, "SetData", nullptr, nullptr, sizeof(CoreAuricCellsBundleWidget_eventSetData_Parms), Z_Construct_UFunction_UCoreAuricCellsBundleWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuricCellsBundleWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuricCellsBundleWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuricCellsBundleWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAuricCellsBundleWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAuricCellsBundleWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAuricCellsBundleWidget_SetupAsReward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuricCellsBundleWidget_SetupAsReward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreAuricCellsBundleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAuricCellsBundleWidget_SetupAsReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAuricCellsBundleWidget, nullptr, "SetupAsReward", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuricCellsBundleWidget_SetupAsReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuricCellsBundleWidget_SetupAsReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAuricCellsBundleWidget_SetupAsReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAuricCellsBundleWidget_SetupAsReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreAuricCellsBundleWidget_NoRegister()
	{
		return UCoreAuricCellsBundleWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__buyActionDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__buyActionDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuyButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuyButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseAmountTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseAmountTextBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmountTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmountTextBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleTextBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonusPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BonusPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonusTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BonusTextBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfoTextBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IconImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreAuricCellsBundleWidget_OnBuyButtonClicked, "OnBuyButtonClicked" }, // 2430953796
		{ &Z_Construct_UFunction_UCoreAuricCellsBundleWidget_SetData, "SetData" }, // 2299870286
		{ &Z_Construct_UFunction_UCoreAuricCellsBundleWidget_SetupAsReward, "SetupAsReward" }, // 2533524360
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreAuricCellsBundleWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsBundleWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp__buyActionDelegate_MetaData[] = {
		{ "Category", "CoreAuricCellsBundleWidget" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsBundleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp__buyActionDelegate = { "_buyActionDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuricCellsBundleWidget, _buyActionDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_AuricCellsBuyActionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp__buyActionDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp__buyActionDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_BuyButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreAuricCellsBundleWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsBundleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_BuyButton = { "BuyButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuricCellsBundleWidget, BuyButton), Z_Construct_UClass_UCorePremiumCurrencyButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_BuyButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_BuyButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_BaseAmountTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreAuricCellsBundleWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsBundleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_BaseAmountTextBlock = { "BaseAmountTextBlock", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuricCellsBundleWidget, BaseAmountTextBlock), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_BaseAmountTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_BaseAmountTextBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_AmountTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreAuricCellsBundleWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsBundleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_AmountTextBlock = { "AmountTextBlock", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuricCellsBundleWidget, AmountTextBlock), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_AmountTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_AmountTextBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_TitleTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreAuricCellsBundleWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsBundleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_TitleTextBlock = { "TitleTextBlock", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuricCellsBundleWidget, TitleTextBlock), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_TitleTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_TitleTextBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_BonusPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreAuricCellsBundleWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsBundleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_BonusPanel = { "BonusPanel", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuricCellsBundleWidget, BonusPanel), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_BonusPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_BonusPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_BonusTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreAuricCellsBundleWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsBundleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_BonusTextBlock = { "BonusTextBlock", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuricCellsBundleWidget, BonusTextBlock), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_BonusTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_BonusTextBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_InfoTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreAuricCellsBundleWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsBundleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_InfoTextBlock = { "InfoTextBlock", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuricCellsBundleWidget, InfoTextBlock), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_InfoTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_InfoTextBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_IconImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreAuricCellsBundleWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsBundleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_IconImage = { "IconImage", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuricCellsBundleWidget, IconImage), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_IconImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_IconImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp__buyActionDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_BuyButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_BaseAmountTextBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_AmountTextBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_TitleTextBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_BonusPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_BonusTextBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_InfoTextBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::NewProp_IconImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreAuricCellsBundleWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::ClassParams = {
		&UCoreAuricCellsBundleWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreAuricCellsBundleWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreAuricCellsBundleWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreAuricCellsBundleWidget, 4131473115);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreAuricCellsBundleWidget>()
	{
		return UCoreAuricCellsBundleWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreAuricCellsBundleWidget(Z_Construct_UClass_UCoreAuricCellsBundleWidget, &UCoreAuricCellsBundleWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreAuricCellsBundleWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreAuricCellsBundleWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
