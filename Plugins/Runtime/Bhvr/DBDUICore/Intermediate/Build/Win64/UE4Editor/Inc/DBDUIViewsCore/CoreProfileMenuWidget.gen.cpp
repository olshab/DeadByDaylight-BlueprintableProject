// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreProfileMenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreProfileMenuWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreProfileMenuWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreProfileMenuWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContainerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_BackButtonClickedDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_SettingsButtonClickedDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_MenuTabSelectedDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UProfileMenuViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreProfileMenuWidget::execOnBackButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreProfileMenuWidget::execOnMenuTabSelected)
	{
		P_GET_OBJECT(UCoreSelectableButtonWidget,Z_Param_selectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMenuTabSelected(Z_Param_selectedButton);
		P_NATIVE_END;
	}
	void UCoreProfileMenuWidget::StaticRegisterNativesUCoreProfileMenuWidget()
	{
		UClass* Class = UCoreProfileMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBackButtonClicked", &UCoreProfileMenuWidget::execOnBackButtonClicked },
			{ "OnMenuTabSelected", &UCoreProfileMenuWidget::execOnMenuTabSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreProfileMenuWidget_OnBackButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreProfileMenuWidget_OnBackButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreProfileMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreProfileMenuWidget_OnBackButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreProfileMenuWidget, nullptr, "OnBackButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreProfileMenuWidget_OnBackButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreProfileMenuWidget_OnBackButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreProfileMenuWidget_OnBackButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreProfileMenuWidget_OnBackButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreProfileMenuWidget_OnMenuTabSelected_Statics
	{
		struct CoreProfileMenuWidget_eventOnMenuTabSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreProfileMenuWidget_OnMenuTabSelected_Statics::NewProp_selectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreProfileMenuWidget_OnMenuTabSelected_Statics::NewProp_selectedButton = { "selectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreProfileMenuWidget_eventOnMenuTabSelected_Parms, selectedButton), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreProfileMenuWidget_OnMenuTabSelected_Statics::NewProp_selectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreProfileMenuWidget_OnMenuTabSelected_Statics::NewProp_selectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreProfileMenuWidget_OnMenuTabSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreProfileMenuWidget_OnMenuTabSelected_Statics::NewProp_selectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreProfileMenuWidget_OnMenuTabSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreProfileMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreProfileMenuWidget_OnMenuTabSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreProfileMenuWidget, nullptr, "OnMenuTabSelected", nullptr, nullptr, sizeof(CoreProfileMenuWidget_eventOnMenuTabSelected_Parms), Z_Construct_UFunction_UCoreProfileMenuWidget_OnMenuTabSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreProfileMenuWidget_OnMenuTabSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreProfileMenuWidget_OnMenuTabSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreProfileMenuWidget_OnMenuTabSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreProfileMenuWidget_OnMenuTabSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreProfileMenuWidget_OnMenuTabSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreProfileMenuWidget_NoRegister()
	{
		return UCoreProfileMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreProfileMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TabsContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackInputSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackInputSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollPrompt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScrollPrompt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__backButtonClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__backButtonClickedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__settingsButtonClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__settingsButtonClickedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__menuTabSelectedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__menuTabSelectedDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreProfileMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreProfileMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreProfileMenuWidget_OnBackButtonClicked, "OnBackButtonClicked" }, // 2498959991
		{ &Z_Construct_UFunction_UCoreProfileMenuWidget_OnMenuTabSelected, "OnMenuTabSelected" }, // 2242060691
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreProfileMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreProfileMenuWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreProfileMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp_TabsContainer_MetaData[] = {
		{ "Category", "CoreProfileMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreProfileMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp_TabsContainer = { "TabsContainer", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreProfileMenuWidget, TabsContainer), Z_Construct_UClass_UCoreTabContainerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp_TabsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp_TabsContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp_BackInputSwitcher_MetaData[] = {
		{ "Category", "CoreProfileMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreProfileMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp_BackInputSwitcher = { "BackInputSwitcher", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreProfileMenuWidget, BackInputSwitcher), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp_BackInputSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp_BackInputSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp_ScrollPrompt_MetaData[] = {
		{ "Category", "CoreProfileMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreProfileMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp_ScrollPrompt = { "ScrollPrompt", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreProfileMenuWidget, ScrollPrompt), Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp_ScrollPrompt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp_ScrollPrompt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp__backButtonClickedDelegate_MetaData[] = {
		{ "Category", "CoreProfileMenuWidget" },
		{ "ModuleRelativePath", "Public/CoreProfileMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp__backButtonClickedDelegate = { "_backButtonClickedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreProfileMenuWidget, _backButtonClickedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_BackButtonClickedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp__backButtonClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp__backButtonClickedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp__settingsButtonClickedDelegate_MetaData[] = {
		{ "Category", "CoreProfileMenuWidget" },
		{ "ModuleRelativePath", "Public/CoreProfileMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp__settingsButtonClickedDelegate = { "_settingsButtonClickedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreProfileMenuWidget, _settingsButtonClickedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_SettingsButtonClickedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp__settingsButtonClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp__settingsButtonClickedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp__menuTabSelectedDelegate_MetaData[] = {
		{ "Category", "CoreProfileMenuWidget" },
		{ "ModuleRelativePath", "Public/CoreProfileMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp__menuTabSelectedDelegate = { "_menuTabSelectedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreProfileMenuWidget, _menuTabSelectedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_MenuTabSelectedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp__menuTabSelectedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp__menuTabSelectedDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreProfileMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp_TabsContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp_BackInputSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp_ScrollPrompt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp__backButtonClickedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp__settingsButtonClickedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreProfileMenuWidget_Statics::NewProp__menuTabSelectedDelegate,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreProfileMenuWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UProfileMenuViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreProfileMenuWidget, IProfileMenuViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreProfileMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreProfileMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreProfileMenuWidget_Statics::ClassParams = {
		&UCoreProfileMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreProfileMenuWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreProfileMenuWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreProfileMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreProfileMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreProfileMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreProfileMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreProfileMenuWidget, 3371102678);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreProfileMenuWidget>()
	{
		return UCoreProfileMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreProfileMenuWidget(Z_Construct_UClass_UCoreProfileMenuWidget, &UCoreProfileMenuWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreProfileMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreProfileMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
