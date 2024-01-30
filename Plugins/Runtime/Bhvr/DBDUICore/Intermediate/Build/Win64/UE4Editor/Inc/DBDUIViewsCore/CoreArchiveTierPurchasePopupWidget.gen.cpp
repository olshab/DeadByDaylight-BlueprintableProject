// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreArchiveTierPurchasePopupWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreArchiveTierPurchasePopupWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreGenericPopupWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveTierPurchasePopupViewData_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ConfirmPurchase__DelegateSignature();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveTierPurchasePopupViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreArchiveTierPurchasePopupWidget::execOnConfirmPurchase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConfirmPurchase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveTierPurchasePopupWidget::execOnLessInputTriggered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLessInputTriggered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveTierPurchasePopupWidget::execOnMoreInputTriggered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMoreInputTriggered();
		P_NATIVE_END;
	}
	static FName NAME_UCoreArchiveTierPurchasePopupWidget_SetCurrencyIcon = FName(TEXT("SetCurrencyIcon"));
	void UCoreArchiveTierPurchasePopupWidget::SetCurrencyIcon(const ECurrencyType currencyType)
	{
		CoreArchiveTierPurchasePopupWidget_eventSetCurrencyIcon_Parms Parms;
		Parms.currencyType=currencyType;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveTierPurchasePopupWidget_SetCurrencyIcon),&Parms);
	}
	static FName NAME_UCoreArchiveTierPurchasePopupWidget_SetVisualData = FName(TEXT("SetVisualData"));
	void UCoreArchiveTierPurchasePopupWidget::SetVisualData(const UArchiveTierPurchasePopupViewData* viewData)
	{
		CoreArchiveTierPurchasePopupWidget_eventSetVisualData_Parms Parms;
		Parms.viewData=viewData;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveTierPurchasePopupWidget_SetVisualData),&Parms);
	}
	void UCoreArchiveTierPurchasePopupWidget::StaticRegisterNativesUCoreArchiveTierPurchasePopupWidget()
	{
		UClass* Class = UCoreArchiveTierPurchasePopupWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnConfirmPurchase", &UCoreArchiveTierPurchasePopupWidget::execOnConfirmPurchase },
			{ "OnLessInputTriggered", &UCoreArchiveTierPurchasePopupWidget::execOnLessInputTriggered },
			{ "OnMoreInputTriggered", &UCoreArchiveTierPurchasePopupWidget::execOnMoreInputTriggered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_OnConfirmPurchase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_OnConfirmPurchase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveTierPurchasePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_OnConfirmPurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget, nullptr, "OnConfirmPurchase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_OnConfirmPurchase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_OnConfirmPurchase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_OnConfirmPurchase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_OnConfirmPurchase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_OnLessInputTriggered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_OnLessInputTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveTierPurchasePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_OnLessInputTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget, nullptr, "OnLessInputTriggered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_OnLessInputTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_OnLessInputTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_OnLessInputTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_OnLessInputTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_OnMoreInputTriggered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_OnMoreInputTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveTierPurchasePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_OnMoreInputTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget, nullptr, "OnMoreInputTriggered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_OnMoreInputTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_OnMoreInputTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_OnMoreInputTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_OnMoreInputTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetCurrencyIcon_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currencyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_currencyType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetCurrencyIcon_Statics::NewProp_currencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetCurrencyIcon_Statics::NewProp_currencyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetCurrencyIcon_Statics::NewProp_currencyType = { "currencyType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveTierPurchasePopupWidget_eventSetCurrencyIcon_Parms, currencyType), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetCurrencyIcon_Statics::NewProp_currencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetCurrencyIcon_Statics::NewProp_currencyType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetCurrencyIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetCurrencyIcon_Statics::NewProp_currencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetCurrencyIcon_Statics::NewProp_currencyType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetCurrencyIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveTierPurchasePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetCurrencyIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget, nullptr, "SetCurrencyIcon", nullptr, nullptr, sizeof(CoreArchiveTierPurchasePopupWidget_eventSetCurrencyIcon_Parms), Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetCurrencyIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetCurrencyIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetCurrencyIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetCurrencyIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetCurrencyIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetCurrencyIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetVisualData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_viewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetVisualData_Statics::NewProp_viewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetVisualData_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveTierPurchasePopupWidget_eventSetVisualData_Parms, viewData), Z_Construct_UClass_UArchiveTierPurchasePopupViewData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetVisualData_Statics::NewProp_viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetVisualData_Statics::NewProp_viewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetVisualData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetVisualData_Statics::NewProp_viewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetVisualData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveTierPurchasePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetVisualData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget, nullptr, "SetVisualData", nullptr, nullptr, sizeof(CoreArchiveTierPurchasePopupWidget_eventSetVisualData_Parms), Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetVisualData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetVisualData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetVisualData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetVisualData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetVisualData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetVisualData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_NoRegister()
	{
		return UCoreArchiveTierPurchasePopupWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LessInputSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LessInputSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoreInputSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoreInputSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentQuantityText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentQuantityText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImageContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriceContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PriceContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriceText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PriceText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscountText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DiscountText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__quantityCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__quantityCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bonusTierStyleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__bonusTierStyleName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__currencyTextColors_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__currencyTextColors_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__currencyTextColors_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currencyTextColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__currencyTextColors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__unaffordablePriceColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__unaffordablePriceColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__confirmPurchaseDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__confirmPurchaseDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreGenericPopupWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_OnConfirmPurchase, "OnConfirmPurchase" }, // 3802649024
		{ &Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_OnLessInputTriggered, "OnLessInputTriggered" }, // 3320200215
		{ &Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_OnMoreInputTriggered, "OnMoreInputTriggered" }, // 477247807
		{ &Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetCurrencyIcon, "SetCurrencyIcon" }, // 118823
		{ &Z_Construct_UFunction_UCoreArchiveTierPurchasePopupWidget_SetVisualData, "SetVisualData" }, // 351313899
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreArchiveTierPurchasePopupWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveTierPurchasePopupWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_LessInputSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveTierPurchasePopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveTierPurchasePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_LessInputSwitcher = { "LessInputSwitcher", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveTierPurchasePopupWidget, LessInputSwitcher), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_LessInputSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_LessInputSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_MoreInputSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveTierPurchasePopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveTierPurchasePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_MoreInputSwitcher = { "MoreInputSwitcher", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveTierPurchasePopupWidget, MoreInputSwitcher), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_MoreInputSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_MoreInputSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_CurrentQuantityText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveTierPurchasePopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveTierPurchasePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_CurrentQuantityText = { "CurrentQuantityText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveTierPurchasePopupWidget, CurrentQuantityText), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_CurrentQuantityText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_CurrentQuantityText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_ImageContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveTierPurchasePopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveTierPurchasePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_ImageContainer = { "ImageContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveTierPurchasePopupWidget, ImageContainer), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_ImageContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_ImageContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_PriceContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveTierPurchasePopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveTierPurchasePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_PriceContainer = { "PriceContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveTierPurchasePopupWidget, PriceContainer), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_PriceContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_PriceContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_PriceText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveTierPurchasePopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveTierPurchasePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_PriceText = { "PriceText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveTierPurchasePopupWidget, PriceText), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_PriceText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_PriceText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_DiscountText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveTierPurchasePopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveTierPurchasePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_DiscountText = { "DiscountText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveTierPurchasePopupWidget, DiscountText), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_DiscountText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_DiscountText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__quantityCurve_MetaData[] = {
		{ "Category", "CoreArchiveTierPurchasePopupWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveTierPurchasePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__quantityCurve = { "_quantityCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveTierPurchasePopupWidget, _quantityCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__quantityCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__quantityCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__bonusTierStyleName_MetaData[] = {
		{ "Category", "CoreArchiveTierPurchasePopupWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveTierPurchasePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__bonusTierStyleName = { "_bonusTierStyleName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveTierPurchasePopupWidget, _bonusTierStyleName), METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__bonusTierStyleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__bonusTierStyleName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__currencyTextColors_ValueProp = { "_currencyTextColors", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__currencyTextColors_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__currencyTextColors_Key_KeyProp = { "_currencyTextColors_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__currencyTextColors_MetaData[] = {
		{ "Category", "CoreArchiveTierPurchasePopupWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveTierPurchasePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__currencyTextColors = { "_currencyTextColors", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveTierPurchasePopupWidget, _currencyTextColors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__currencyTextColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__currencyTextColors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__unaffordablePriceColor_MetaData[] = {
		{ "Category", "CoreArchiveTierPurchasePopupWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveTierPurchasePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__unaffordablePriceColor = { "_unaffordablePriceColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveTierPurchasePopupWidget, _unaffordablePriceColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__unaffordablePriceColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__unaffordablePriceColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__confirmPurchaseDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreArchiveTierPurchasePopupWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveTierPurchasePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__confirmPurchaseDelegate = { "_confirmPurchaseDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveTierPurchasePopupWidget, _confirmPurchaseDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ConfirmPurchase__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__confirmPurchaseDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__confirmPurchaseDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_LessInputSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_MoreInputSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_CurrentQuantityText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_ImageContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_PriceContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_PriceText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp_DiscountText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__quantityCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__bonusTierStyleName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__currencyTextColors_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__currencyTextColors_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__currencyTextColors_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__currencyTextColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__unaffordablePriceColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::NewProp__confirmPurchaseDelegate,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UArchiveTierPurchasePopupViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreArchiveTierPurchasePopupWidget, IArchiveTierPurchasePopupViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreArchiveTierPurchasePopupWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::ClassParams = {
		&UCoreArchiveTierPurchasePopupWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreArchiveTierPurchasePopupWidget, 1416029943);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreArchiveTierPurchasePopupWidget>()
	{
		return UCoreArchiveTierPurchasePopupWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreArchiveTierPurchasePopupWidget(Z_Construct_UClass_UCoreArchiveTierPurchasePopupWidget, &UCoreArchiveTierPurchasePopupWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreArchiveTierPurchasePopupWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreArchiveTierPurchasePopupWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
