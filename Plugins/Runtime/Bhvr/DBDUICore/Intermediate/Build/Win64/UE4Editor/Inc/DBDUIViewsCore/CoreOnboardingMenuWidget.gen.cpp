// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreOnboardingMenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreOnboardingMenuWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreOnboardingMenuWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreOnboardingMenuWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContainerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreOnboardingMenuTitleWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreFooterInputSwitcherWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_BackActionDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_SettingsActionDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_QuitGameActionDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ChangeAccountActionDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_OnboardingMenuTabSelectedDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_MenuTabSelectedAgainDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UOnboardingMenuViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreOnboardingMenuWidget::execOnMenuTabSelected)
	{
		P_GET_OBJECT(UCoreSelectableButtonWidget,Z_Param_selectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMenuTabSelected(Z_Param_selectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreOnboardingMenuWidget::execOnMenuTabSelectedAgain)
	{
		P_GET_OBJECT(UCoreSelectableButtonWidget,Z_Param_selectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMenuTabSelectedAgain(Z_Param_selectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreOnboardingMenuWidget::execSetBackButton)
	{
		P_GET_UBOOL(Z_Param_isFTUE);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBackButton(Z_Param_isFTUE);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreOnboardingMenuWidget::execSetTitleText)
	{
		P_GET_UBOOL(Z_Param_isInTutorial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTitleText(Z_Param_isInTutorial);
		P_NATIVE_END;
	}
	void UCoreOnboardingMenuWidget::StaticRegisterNativesUCoreOnboardingMenuWidget()
	{
		UClass* Class = UCoreOnboardingMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMenuTabSelected", &UCoreOnboardingMenuWidget::execOnMenuTabSelected },
			{ "OnMenuTabSelectedAgain", &UCoreOnboardingMenuWidget::execOnMenuTabSelectedAgain },
			{ "SetBackButton", &UCoreOnboardingMenuWidget::execSetBackButton },
			{ "SetTitleText", &UCoreOnboardingMenuWidget::execSetTitleText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelected_Statics
	{
		struct CoreOnboardingMenuWidget_eventOnMenuTabSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelected_Statics::NewProp_selectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelected_Statics::NewProp_selectedButton = { "selectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreOnboardingMenuWidget_eventOnMenuTabSelected_Parms, selectedButton), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelected_Statics::NewProp_selectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelected_Statics::NewProp_selectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelected_Statics::NewProp_selectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnboardingMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnboardingMenuWidget, nullptr, "OnMenuTabSelected", nullptr, nullptr, sizeof(CoreOnboardingMenuWidget_eventOnMenuTabSelected_Parms), Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelectedAgain_Statics
	{
		struct CoreOnboardingMenuWidget_eventOnMenuTabSelectedAgain_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelectedAgain_Statics::NewProp_selectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelectedAgain_Statics::NewProp_selectedButton = { "selectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreOnboardingMenuWidget_eventOnMenuTabSelectedAgain_Parms, selectedButton), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelectedAgain_Statics::NewProp_selectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelectedAgain_Statics::NewProp_selectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelectedAgain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelectedAgain_Statics::NewProp_selectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelectedAgain_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnboardingMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelectedAgain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnboardingMenuWidget, nullptr, "OnMenuTabSelectedAgain", nullptr, nullptr, sizeof(CoreOnboardingMenuWidget_eventOnMenuTabSelectedAgain_Parms), Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelectedAgain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelectedAgain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelectedAgain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelectedAgain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelectedAgain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelectedAgain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetBackButton_Statics
	{
		struct CoreOnboardingMenuWidget_eventSetBackButton_Parms
		{
			bool isFTUE;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isFTUE_MetaData[];
#endif
		static void NewProp_isFTUE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isFTUE;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetBackButton_Statics::NewProp_isFTUE_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetBackButton_Statics::NewProp_isFTUE_SetBit(void* Obj)
	{
		((CoreOnboardingMenuWidget_eventSetBackButton_Parms*)Obj)->isFTUE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetBackButton_Statics::NewProp_isFTUE = { "isFTUE", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreOnboardingMenuWidget_eventSetBackButton_Parms), &Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetBackButton_Statics::NewProp_isFTUE_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetBackButton_Statics::NewProp_isFTUE_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetBackButton_Statics::NewProp_isFTUE_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetBackButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetBackButton_Statics::NewProp_isFTUE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetBackButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnboardingMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetBackButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnboardingMenuWidget, nullptr, "SetBackButton", nullptr, nullptr, sizeof(CoreOnboardingMenuWidget_eventSetBackButton_Parms), Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetBackButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetBackButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetBackButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetBackButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetBackButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetBackButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetTitleText_Statics
	{
		struct CoreOnboardingMenuWidget_eventSetTitleText_Parms
		{
			bool isInTutorial;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isInTutorial_MetaData[];
#endif
		static void NewProp_isInTutorial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isInTutorial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetTitleText_Statics::NewProp_isInTutorial_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetTitleText_Statics::NewProp_isInTutorial_SetBit(void* Obj)
	{
		((CoreOnboardingMenuWidget_eventSetTitleText_Parms*)Obj)->isInTutorial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetTitleText_Statics::NewProp_isInTutorial = { "isInTutorial", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreOnboardingMenuWidget_eventSetTitleText_Parms), &Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetTitleText_Statics::NewProp_isInTutorial_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetTitleText_Statics::NewProp_isInTutorial_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetTitleText_Statics::NewProp_isInTutorial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetTitleText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetTitleText_Statics::NewProp_isInTutorial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetTitleText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnboardingMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetTitleText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnboardingMenuWidget, nullptr, "SetTitleText", nullptr, nullptr, sizeof(CoreOnboardingMenuWidget_eventSetTitleText_Parms), Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetTitleText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetTitleText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetTitleText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetTitleText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetTitleText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetTitleText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreOnboardingMenuWidget_NoRegister()
	{
		return UCoreOnboardingMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnboardingMenuTabs_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnboardingMenuTabs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackInputSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackInputSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsInputSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SettingsInputSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuitGameInputSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuitGameInputSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeAccountInputSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChangeAccountInputSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackActionDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_BackActionDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsActionDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SettingsActionDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuitGameActionDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_QuitGameActionDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeAccountActionDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ChangeAccountActionDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuTabSelectedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_MenuTabSelectedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuTabSelectedAgainDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_MenuTabSelectedAgainDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelected, "OnMenuTabSelected" }, // 3541893730
		{ &Z_Construct_UFunction_UCoreOnboardingMenuWidget_OnMenuTabSelectedAgain, "OnMenuTabSelectedAgain" }, // 553266953
		{ &Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetBackButton, "SetBackButton" }, // 1282201618
		{ &Z_Construct_UFunction_UCoreOnboardingMenuWidget_SetTitleText, "SetTitleText" }, // 488041386
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreOnboardingMenuWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreOnboardingMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_OnboardingMenuTabs_MetaData[] = {
		{ "Category", "CoreOnboardingMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreOnboardingMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_OnboardingMenuTabs = { "OnboardingMenuTabs", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingMenuWidget, OnboardingMenuTabs), Z_Construct_UClass_UCoreTabContainerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_OnboardingMenuTabs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_OnboardingMenuTabs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_MenuTitle_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreOnboardingMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreOnboardingMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_MenuTitle = { "MenuTitle", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingMenuWidget, MenuTitle), Z_Construct_UClass_UCoreOnboardingMenuTitleWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_MenuTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_MenuTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_BackInputSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreOnboardingMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreOnboardingMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_BackInputSwitcher = { "BackInputSwitcher", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingMenuWidget, BackInputSwitcher), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_BackInputSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_BackInputSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_SettingsInputSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreOnboardingMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreOnboardingMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_SettingsInputSwitcher = { "SettingsInputSwitcher", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingMenuWidget, SettingsInputSwitcher), Z_Construct_UClass_UCoreFooterInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_SettingsInputSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_SettingsInputSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_QuitGameInputSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreOnboardingMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreOnboardingMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_QuitGameInputSwitcher = { "QuitGameInputSwitcher", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingMenuWidget, QuitGameInputSwitcher), Z_Construct_UClass_UCoreFooterInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_QuitGameInputSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_QuitGameInputSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_ChangeAccountInputSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreOnboardingMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreOnboardingMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_ChangeAccountInputSwitcher = { "ChangeAccountInputSwitcher", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingMenuWidget, ChangeAccountInputSwitcher), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_ChangeAccountInputSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_ChangeAccountInputSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_BackActionDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreOnboardingMenuWidget" },
		{ "ModuleRelativePath", "Public/CoreOnboardingMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_BackActionDelegate = { "BackActionDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingMenuWidget, BackActionDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_BackActionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_BackActionDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_BackActionDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_SettingsActionDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreOnboardingMenuWidget" },
		{ "ModuleRelativePath", "Public/CoreOnboardingMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_SettingsActionDelegate = { "SettingsActionDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingMenuWidget, SettingsActionDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_SettingsActionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_SettingsActionDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_SettingsActionDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_QuitGameActionDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreOnboardingMenuWidget" },
		{ "ModuleRelativePath", "Public/CoreOnboardingMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_QuitGameActionDelegate = { "QuitGameActionDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingMenuWidget, QuitGameActionDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_QuitGameActionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_QuitGameActionDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_QuitGameActionDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_ChangeAccountActionDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreOnboardingMenuWidget" },
		{ "ModuleRelativePath", "Public/CoreOnboardingMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_ChangeAccountActionDelegate = { "ChangeAccountActionDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingMenuWidget, ChangeAccountActionDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ChangeAccountActionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_ChangeAccountActionDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_ChangeAccountActionDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_MenuTabSelectedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreOnboardingMenuWidget" },
		{ "ModuleRelativePath", "Public/CoreOnboardingMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_MenuTabSelectedDelegate = { "MenuTabSelectedDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingMenuWidget, MenuTabSelectedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_OnboardingMenuTabSelectedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_MenuTabSelectedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_MenuTabSelectedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_MenuTabSelectedAgainDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreOnboardingMenuWidget" },
		{ "ModuleRelativePath", "Public/CoreOnboardingMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_MenuTabSelectedAgainDelegate = { "MenuTabSelectedAgainDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingMenuWidget, MenuTabSelectedAgainDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_MenuTabSelectedAgainDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_MenuTabSelectedAgainDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_MenuTabSelectedAgainDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_OnboardingMenuTabs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_MenuTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_BackInputSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_SettingsInputSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_QuitGameInputSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_ChangeAccountInputSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_BackActionDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_SettingsActionDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_QuitGameActionDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_ChangeAccountActionDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_MenuTabSelectedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::NewProp_MenuTabSelectedAgainDelegate,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOnboardingMenuViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreOnboardingMenuWidget, IOnboardingMenuViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreOnboardingMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::ClassParams = {
		&UCoreOnboardingMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreOnboardingMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreOnboardingMenuWidget, 2318039354);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreOnboardingMenuWidget>()
	{
		return UCoreOnboardingMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreOnboardingMenuWidget(Z_Construct_UClass_UCoreOnboardingMenuWidget, &UCoreOnboardingMenuWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreOnboardingMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreOnboardingMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
