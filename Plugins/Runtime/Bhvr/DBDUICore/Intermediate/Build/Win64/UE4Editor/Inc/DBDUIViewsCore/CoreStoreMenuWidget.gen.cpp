// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreStoreMenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreStoreMenuWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreMenuWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreMenuWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContainerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreKeyListenerButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_StoreMenuTabSelectedDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_StoreMenuBackActionDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_StoreRedeemCodeButtonDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_StoreGetAuricCellsButtonDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreMenuViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreStoreMenuWidget::execOnBackAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreMenuWidget::execOnGetAuricCellsClicked)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_buttonTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGetAuricCellsClicked(Z_Param_buttonTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreMenuWidget::execOnMenuTabSelected)
	{
		P_GET_OBJECT(UCoreSelectableButtonWidget,Z_Param_selectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMenuTabSelected(Z_Param_selectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreMenuWidget::execOnMenuTabSelectedAgain)
	{
		P_GET_OBJECT(UCoreSelectableButtonWidget,Z_Param_selectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMenuTabSelectedAgain(Z_Param_selectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreMenuWidget::execOnRedeemCodeButtonClicked)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_selectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRedeemCodeButtonClicked(Z_Param_selectedButton);
		P_NATIVE_END;
	}
	void UCoreStoreMenuWidget::StaticRegisterNativesUCoreStoreMenuWidget()
	{
		UClass* Class = UCoreStoreMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBackAction", &UCoreStoreMenuWidget::execOnBackAction },
			{ "OnGetAuricCellsClicked", &UCoreStoreMenuWidget::execOnGetAuricCellsClicked },
			{ "OnMenuTabSelected", &UCoreStoreMenuWidget::execOnMenuTabSelected },
			{ "OnMenuTabSelectedAgain", &UCoreStoreMenuWidget::execOnMenuTabSelectedAgain },
			{ "OnRedeemCodeButtonClicked", &UCoreStoreMenuWidget::execOnRedeemCodeButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreStoreMenuWidget_OnBackAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreMenuWidget_OnBackAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreMenuWidget_OnBackAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreMenuWidget, nullptr, "OnBackAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreMenuWidget_OnBackAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreMenuWidget_OnBackAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreMenuWidget_OnBackAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreMenuWidget_OnBackAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreMenuWidget_OnGetAuricCellsClicked_Statics
	{
		struct CoreStoreMenuWidget_eventOnGetAuricCellsClicked_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreMenuWidget_OnGetAuricCellsClicked_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreMenuWidget_OnGetAuricCellsClicked_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreMenuWidget_eventOnGetAuricCellsClicked_Parms, buttonTarget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreMenuWidget_OnGetAuricCellsClicked_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreMenuWidget_OnGetAuricCellsClicked_Statics::NewProp_buttonTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreMenuWidget_OnGetAuricCellsClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreMenuWidget_OnGetAuricCellsClicked_Statics::NewProp_buttonTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreMenuWidget_OnGetAuricCellsClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreMenuWidget_OnGetAuricCellsClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreMenuWidget, nullptr, "OnGetAuricCellsClicked", nullptr, nullptr, sizeof(CoreStoreMenuWidget_eventOnGetAuricCellsClicked_Parms), Z_Construct_UFunction_UCoreStoreMenuWidget_OnGetAuricCellsClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreMenuWidget_OnGetAuricCellsClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreMenuWidget_OnGetAuricCellsClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreMenuWidget_OnGetAuricCellsClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreMenuWidget_OnGetAuricCellsClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreMenuWidget_OnGetAuricCellsClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelected_Statics
	{
		struct CoreStoreMenuWidget_eventOnMenuTabSelected_Parms
		{
			UCoreSelectableButtonWidget* selectedButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_selectedButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelected_Statics::NewProp_selectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelected_Statics::NewProp_selectedButton = { "selectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreMenuWidget_eventOnMenuTabSelected_Parms, selectedButton), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelected_Statics::NewProp_selectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelected_Statics::NewProp_selectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelected_Statics::NewProp_selectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreMenuWidget, nullptr, "OnMenuTabSelected", nullptr, nullptr, sizeof(CoreStoreMenuWidget_eventOnMenuTabSelected_Parms), Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelectedAgain_Statics
	{
		struct CoreStoreMenuWidget_eventOnMenuTabSelectedAgain_Parms
		{
			UCoreSelectableButtonWidget* selectedButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_selectedButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelectedAgain_Statics::NewProp_selectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelectedAgain_Statics::NewProp_selectedButton = { "selectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreMenuWidget_eventOnMenuTabSelectedAgain_Parms, selectedButton), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelectedAgain_Statics::NewProp_selectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelectedAgain_Statics::NewProp_selectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelectedAgain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelectedAgain_Statics::NewProp_selectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelectedAgain_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelectedAgain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreMenuWidget, nullptr, "OnMenuTabSelectedAgain", nullptr, nullptr, sizeof(CoreStoreMenuWidget_eventOnMenuTabSelectedAgain_Parms), Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelectedAgain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelectedAgain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelectedAgain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelectedAgain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelectedAgain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelectedAgain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreMenuWidget_OnRedeemCodeButtonClicked_Statics
	{
		struct CoreStoreMenuWidget_eventOnRedeemCodeButtonClicked_Parms
		{
			UCoreButtonWidget* selectedButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_selectedButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreMenuWidget_OnRedeemCodeButtonClicked_Statics::NewProp_selectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreMenuWidget_OnRedeemCodeButtonClicked_Statics::NewProp_selectedButton = { "selectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreMenuWidget_eventOnRedeemCodeButtonClicked_Parms, selectedButton), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreMenuWidget_OnRedeemCodeButtonClicked_Statics::NewProp_selectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreMenuWidget_OnRedeemCodeButtonClicked_Statics::NewProp_selectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreMenuWidget_OnRedeemCodeButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreMenuWidget_OnRedeemCodeButtonClicked_Statics::NewProp_selectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreMenuWidget_OnRedeemCodeButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreMenuWidget_OnRedeemCodeButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreMenuWidget, nullptr, "OnRedeemCodeButtonClicked", nullptr, nullptr, sizeof(CoreStoreMenuWidget_eventOnRedeemCodeButtonClicked_Parms), Z_Construct_UFunction_UCoreStoreMenuWidget_OnRedeemCodeButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreMenuWidget_OnRedeemCodeButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreMenuWidget_OnRedeemCodeButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreMenuWidget_OnRedeemCodeButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreMenuWidget_OnRedeemCodeButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreMenuWidget_OnRedeemCodeButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreStoreMenuWidget_NoRegister()
	{
		return UCoreStoreMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreStoreMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoreMenuTabs_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StoreMenuTabs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedeemCodeButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RedeemCodeButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetAuricCellsButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GetAuricCellsButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackInputSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackInputSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__menuTabSelectedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__menuTabSelectedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__backActionDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__backActionDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__redeemCodeButtonDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__redeemCodeButtonDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__getAuricCellsButtonDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__getAuricCellsButtonDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreStoreMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreStoreMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreStoreMenuWidget_OnBackAction, "OnBackAction" }, // 3129715204
		{ &Z_Construct_UFunction_UCoreStoreMenuWidget_OnGetAuricCellsClicked, "OnGetAuricCellsClicked" }, // 3899145507
		{ &Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelected, "OnMenuTabSelected" }, // 3259393453
		{ &Z_Construct_UFunction_UCoreStoreMenuWidget_OnMenuTabSelectedAgain, "OnMenuTabSelectedAgain" }, // 192909077
		{ &Z_Construct_UFunction_UCoreStoreMenuWidget_OnRedeemCodeButtonClicked, "OnRedeemCodeButtonClicked" }, // 1548691683
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreStoreMenuWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp_StoreMenuTabs_MetaData[] = {
		{ "Category", "CoreStoreMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp_StoreMenuTabs = { "StoreMenuTabs", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreMenuWidget, StoreMenuTabs), Z_Construct_UClass_UCoreTabContainerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp_StoreMenuTabs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp_StoreMenuTabs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp_RedeemCodeButton_MetaData[] = {
		{ "Category", "CoreStoreMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp_RedeemCodeButton = { "RedeemCodeButton", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreMenuWidget, RedeemCodeButton), Z_Construct_UClass_UCoreKeyListenerButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp_RedeemCodeButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp_RedeemCodeButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp_GetAuricCellsButton_MetaData[] = {
		{ "Category", "CoreStoreMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp_GetAuricCellsButton = { "GetAuricCellsButton", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreMenuWidget, GetAuricCellsButton), Z_Construct_UClass_UCoreKeyListenerButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp_GetAuricCellsButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp_GetAuricCellsButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp_BackInputSwitcher_MetaData[] = {
		{ "Category", "CoreStoreMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp_BackInputSwitcher = { "BackInputSwitcher", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreMenuWidget, BackInputSwitcher), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp_BackInputSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp_BackInputSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp__menuTabSelectedDelegate_MetaData[] = {
		{ "Category", "CoreStoreMenuWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp__menuTabSelectedDelegate = { "_menuTabSelectedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreMenuWidget, _menuTabSelectedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_StoreMenuTabSelectedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp__menuTabSelectedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp__menuTabSelectedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp__backActionDelegate_MetaData[] = {
		{ "Category", "CoreStoreMenuWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp__backActionDelegate = { "_backActionDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreMenuWidget, _backActionDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_StoreMenuBackActionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp__backActionDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp__backActionDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp__redeemCodeButtonDelegate_MetaData[] = {
		{ "Category", "CoreStoreMenuWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp__redeemCodeButtonDelegate = { "_redeemCodeButtonDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreMenuWidget, _redeemCodeButtonDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_StoreRedeemCodeButtonDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp__redeemCodeButtonDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp__redeemCodeButtonDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp__getAuricCellsButtonDelegate_MetaData[] = {
		{ "Category", "CoreStoreMenuWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp__getAuricCellsButtonDelegate = { "_getAuricCellsButtonDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreMenuWidget, _getAuricCellsButtonDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_StoreGetAuricCellsButtonDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp__getAuricCellsButtonDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp__getAuricCellsButtonDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreStoreMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp_StoreMenuTabs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp_RedeemCodeButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp_GetAuricCellsButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp_BackInputSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp__menuTabSelectedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp__backActionDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp__redeemCodeButtonDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreMenuWidget_Statics::NewProp__getAuricCellsButtonDelegate,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreStoreMenuWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStoreMenuViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreStoreMenuWidget, IStoreMenuViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreStoreMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStoreMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreStoreMenuWidget_Statics::ClassParams = {
		&UCoreStoreMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreStoreMenuWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreMenuWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreStoreMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreStoreMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreStoreMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreStoreMenuWidget, 1990546878);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreStoreMenuWidget>()
	{
		return UCoreStoreMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreStoreMenuWidget(Z_Construct_UClass_UCoreStoreMenuWidget, &UCoreStoreMenuWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreStoreMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStoreMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
