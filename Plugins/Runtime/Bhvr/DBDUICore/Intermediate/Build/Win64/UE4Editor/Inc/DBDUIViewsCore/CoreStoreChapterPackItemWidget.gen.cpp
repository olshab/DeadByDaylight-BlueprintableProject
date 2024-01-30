// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreStoreChapterPackItemWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreStoreChapterPackItemWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreChapterPackItemWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreChapterPackItemWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreChapterPackViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_SpecialPackBuyActionDelegate__DelegateSignature();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePremiumCurrencyButtonWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCharacterItemWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCustomizationItemWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePreConstructableList_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreStoreChapterPackItemWidget::execOnPremiumBuyButtonClicked)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_button);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPremiumBuyButtonClicked(Z_Param_button);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreChapterPackItemWidget::execSetData)
	{
		P_GET_OBJECT(UStoreChapterPackViewData,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData_Implementation(Z_Param_data);
		P_NATIVE_END;
	}
	static FName NAME_UCoreStoreChapterPackItemWidget_SetData = FName(TEXT("SetData"));
	void UCoreStoreChapterPackItemWidget::SetData(UStoreChapterPackViewData* data)
	{
		CoreStoreChapterPackItemWidget_eventSetData_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_UCoreStoreChapterPackItemWidget_SetData),&Parms);
	}
	static FName NAME_UCoreStoreChapterPackItemWidget_SetExpanded = FName(TEXT("SetExpanded"));
	void UCoreStoreChapterPackItemWidget::SetExpanded(bool expanded)
	{
		CoreStoreChapterPackItemWidget_eventSetExpanded_Parms Parms;
		Parms.expanded=expanded ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreStoreChapterPackItemWidget_SetExpanded),&Parms);
	}
	static FName NAME_UCoreStoreChapterPackItemWidget_ToggleExpanded = FName(TEXT("ToggleExpanded"));
	void UCoreStoreChapterPackItemWidget::ToggleExpanded()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreStoreChapterPackItemWidget_ToggleExpanded),NULL);
	}
	void UCoreStoreChapterPackItemWidget::StaticRegisterNativesUCoreStoreChapterPackItemWidget()
	{
		UClass* Class = UCoreStoreChapterPackItemWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPremiumBuyButtonClicked", &UCoreStoreChapterPackItemWidget::execOnPremiumBuyButtonClicked },
			{ "SetData", &UCoreStoreChapterPackItemWidget::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_OnPremiumBuyButtonClicked_Statics
	{
		struct CoreStoreChapterPackItemWidget_eventOnPremiumBuyButtonClicked_Parms
		{
			UCoreButtonWidget* button;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_button;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_OnPremiumBuyButtonClicked_Statics::NewProp_button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_OnPremiumBuyButtonClicked_Statics::NewProp_button = { "button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreChapterPackItemWidget_eventOnPremiumBuyButtonClicked_Parms, button), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_OnPremiumBuyButtonClicked_Statics::NewProp_button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_OnPremiumBuyButtonClicked_Statics::NewProp_button_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_OnPremiumBuyButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_OnPremiumBuyButtonClicked_Statics::NewProp_button,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_OnPremiumBuyButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreChapterPackItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_OnPremiumBuyButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreChapterPackItemWidget, nullptr, "OnPremiumBuyButtonClicked", nullptr, nullptr, sizeof(CoreStoreChapterPackItemWidget_eventOnPremiumBuyButtonClicked_Parms), Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_OnPremiumBuyButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_OnPremiumBuyButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_OnPremiumBuyButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_OnPremiumBuyButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_OnPremiumBuyButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_OnPremiumBuyButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetData_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreChapterPackItemWidget_eventSetData_Parms, data), Z_Construct_UClass_UStoreChapterPackViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreChapterPackItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreChapterPackItemWidget, nullptr, "SetData", nullptr, nullptr, sizeof(CoreStoreChapterPackItemWidget_eventSetData_Parms), Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetExpanded_Statics
	{
		static void NewProp_expanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_expanded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetExpanded_Statics::NewProp_expanded_SetBit(void* Obj)
	{
		((CoreStoreChapterPackItemWidget_eventSetExpanded_Parms*)Obj)->expanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetExpanded_Statics::NewProp_expanded = { "expanded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreStoreChapterPackItemWidget_eventSetExpanded_Parms), &Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetExpanded_Statics::NewProp_expanded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetExpanded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetExpanded_Statics::NewProp_expanded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetExpanded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreChapterPackItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetExpanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreChapterPackItemWidget, nullptr, "SetExpanded", nullptr, nullptr, sizeof(CoreStoreChapterPackItemWidget_eventSetExpanded_Parms), Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetExpanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetExpanded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetExpanded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetExpanded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetExpanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetExpanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_ToggleExpanded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_ToggleExpanded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreChapterPackItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_ToggleExpanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreChapterPackItemWidget, nullptr, "ToggleExpanded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_ToggleExpanded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_ToggleExpanded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_ToggleExpanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_ToggleExpanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreStoreChapterPackItemWidget_NoRegister()
	{
		return UCoreStoreChapterPackItemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuyPremiumActionDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_BuyPremiumActionDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharactersBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharactersBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizationsBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomizationsBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PremiumBuyButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PremiumBuyButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isExpanded_MetaData[];
#endif
		static void NewProp__isExpanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isExpanded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__initialItemPoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__initialItemPoolSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__characterItemWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__characterItemWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customizationItemWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__customizationItemWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__data_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__characterList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__characterList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customizationList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__customizationList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreSelectableButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_OnPremiumBuyButtonClicked, "OnPremiumBuyButtonClicked" }, // 2268300679
		{ &Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetData, "SetData" }, // 77218473
		{ &Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_SetExpanded, "SetExpanded" }, // 2252226408
		{ &Z_Construct_UFunction_UCoreStoreChapterPackItemWidget_ToggleExpanded, "ToggleExpanded" }, // 3067346199
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreStoreChapterPackItemWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreChapterPackItemWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp_BuyPremiumActionDelegate_MetaData[] = {
		{ "Category", "CoreStoreChapterPackItemWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreChapterPackItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp_BuyPremiumActionDelegate = { "BuyPremiumActionDelegate", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreChapterPackItemWidget, BuyPremiumActionDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_SpecialPackBuyActionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp_BuyPremiumActionDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp_BuyPremiumActionDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp_TitleText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreChapterPackItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreChapterPackItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreChapterPackItemWidget, TitleText), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp_TitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp_TitleText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp_CharactersBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreChapterPackItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreChapterPackItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp_CharactersBox = { "CharactersBox", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreChapterPackItemWidget, CharactersBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp_CharactersBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp_CharactersBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp_CustomizationsBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreChapterPackItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreChapterPackItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp_CustomizationsBox = { "CustomizationsBox", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreChapterPackItemWidget, CustomizationsBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp_CustomizationsBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp_CustomizationsBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp_PremiumBuyButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreChapterPackItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreChapterPackItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp_PremiumBuyButton = { "PremiumBuyButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreChapterPackItemWidget, PremiumBuyButton), Z_Construct_UClass_UCorePremiumCurrencyButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp_PremiumBuyButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp_PremiumBuyButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__isExpanded_MetaData[] = {
		{ "Category", "CoreStoreChapterPackItemWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreChapterPackItemWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__isExpanded_SetBit(void* Obj)
	{
		((UCoreStoreChapterPackItemWidget*)Obj)->_isExpanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__isExpanded = { "_isExpanded", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreStoreChapterPackItemWidget), &Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__isExpanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__isExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__isExpanded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__initialItemPoolSize_MetaData[] = {
		{ "Category", "CoreStoreChapterPackItemWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreChapterPackItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__initialItemPoolSize = { "_initialItemPoolSize", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreChapterPackItemWidget, _initialItemPoolSize), METADATA_PARAMS(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__initialItemPoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__initialItemPoolSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__characterItemWidgetClass_MetaData[] = {
		{ "Category", "CoreStoreChapterPackItemWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreChapterPackItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__characterItemWidgetClass = { "_characterItemWidgetClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreChapterPackItemWidget, _characterItemWidgetClass), Z_Construct_UClass_UCoreStoreCharacterItemWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__characterItemWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__characterItemWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__customizationItemWidgetClass_MetaData[] = {
		{ "Category", "CoreStoreChapterPackItemWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreChapterPackItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__customizationItemWidgetClass = { "_customizationItemWidgetClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreChapterPackItemWidget, _customizationItemWidgetClass), Z_Construct_UClass_UCoreStoreCustomizationItemWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__customizationItemWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__customizationItemWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreStoreChapterPackItemWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreChapterPackItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__data = { "_data", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreChapterPackItemWidget, _data), Z_Construct_UClass_UStoreChapterPackViewData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__characterList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreStoreChapterPackItemWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreChapterPackItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__characterList = { "_characterList", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreChapterPackItemWidget, _characterList), Z_Construct_UClass_UCorePreConstructableList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__characterList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__characterList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__customizationList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreStoreChapterPackItemWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreChapterPackItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__customizationList = { "_customizationList", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreChapterPackItemWidget, _customizationList), Z_Construct_UClass_UCorePreConstructableList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__customizationList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__customizationList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp_BuyPremiumActionDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp_TitleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp_CharactersBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp_CustomizationsBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp_PremiumBuyButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__isExpanded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__initialItemPoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__characterItemWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__customizationItemWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__characterList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::NewProp__customizationList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStoreChapterPackItemWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::ClassParams = {
		&UCoreStoreChapterPackItemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreStoreChapterPackItemWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreStoreChapterPackItemWidget, 119436189);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreStoreChapterPackItemWidget>()
	{
		return UCoreStoreChapterPackItemWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreStoreChapterPackItemWidget(Z_Construct_UClass_UCoreStoreChapterPackItemWidget, &UCoreStoreChapterPackItemWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreStoreChapterPackItemWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStoreChapterPackItemWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
