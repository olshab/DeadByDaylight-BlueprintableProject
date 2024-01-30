// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreEventEntryWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreEventEntryWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreEventEntryWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreEventEntryWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEventEntryViewData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContainerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UMilestoneTrackerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_EventEntryTabSelectedDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_EventEntryBackActionDelegate__DelegateSignature();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEventEntryViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreEventEntryWidget::execOnBackAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreEventEntryWidget::execOnTabSelected)
	{
		P_GET_OBJECT(UCoreSelectableButtonWidget,Z_Param_selectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTabSelected(Z_Param_selectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreEventEntryWidget::execSetUiTakeoverActive)
	{
		P_GET_UBOOL(Z_Param_isActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUiTakeoverActive_Implementation(Z_Param_isActive);
		P_NATIVE_END;
	}
	static FName NAME_UCoreEventEntryWidget_OnEnter = FName(TEXT("OnEnter"));
	void UCoreEventEntryWidget::OnEnter()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreEventEntryWidget_OnEnter),NULL);
	}
	static FName NAME_UCoreEventEntryWidget_OnLeave = FName(TEXT("OnLeave"));
	void UCoreEventEntryWidget::OnLeave()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreEventEntryWidget_OnLeave),NULL);
	}
	static FName NAME_UCoreEventEntryWidget_OnShow = FName(TEXT("OnShow"));
	void UCoreEventEntryWidget::OnShow()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreEventEntryWidget_OnShow),NULL);
	}
	static FName NAME_UCoreEventEntryWidget_SetTabsVisuals = FName(TEXT("SetTabsVisuals"));
	void UCoreEventEntryWidget::SetTabsVisuals()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreEventEntryWidget_SetTabsVisuals),NULL);
	}
	static FName NAME_UCoreEventEntryWidget_SetUiTakeoverActive = FName(TEXT("SetUiTakeoverActive"));
	void UCoreEventEntryWidget::SetUiTakeoverActive(bool isActive)
	{
		CoreEventEntryWidget_eventSetUiTakeoverActive_Parms Parms;
		Parms.isActive=isActive ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreEventEntryWidget_SetUiTakeoverActive),&Parms);
	}
	void UCoreEventEntryWidget::StaticRegisterNativesUCoreEventEntryWidget()
	{
		UClass* Class = UCoreEventEntryWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBackAction", &UCoreEventEntryWidget::execOnBackAction },
			{ "OnTabSelected", &UCoreEventEntryWidget::execOnTabSelected },
			{ "SetUiTakeoverActive", &UCoreEventEntryWidget::execSetUiTakeoverActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreEventEntryWidget_OnBackAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreEventEntryWidget_OnBackAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreEventEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreEventEntryWidget_OnBackAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreEventEntryWidget, nullptr, "OnBackAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreEventEntryWidget_OnBackAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreEventEntryWidget_OnBackAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreEventEntryWidget_OnBackAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreEventEntryWidget_OnBackAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreEventEntryWidget_OnEnter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreEventEntryWidget_OnEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreEventEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreEventEntryWidget_OnEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreEventEntryWidget, nullptr, "OnEnter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreEventEntryWidget_OnEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreEventEntryWidget_OnEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreEventEntryWidget_OnEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreEventEntryWidget_OnEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreEventEntryWidget_OnLeave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreEventEntryWidget_OnLeave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreEventEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreEventEntryWidget_OnLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreEventEntryWidget, nullptr, "OnLeave", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreEventEntryWidget_OnLeave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreEventEntryWidget_OnLeave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreEventEntryWidget_OnLeave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreEventEntryWidget_OnLeave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreEventEntryWidget_OnShow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreEventEntryWidget_OnShow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreEventEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreEventEntryWidget_OnShow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreEventEntryWidget, nullptr, "OnShow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreEventEntryWidget_OnShow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreEventEntryWidget_OnShow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreEventEntryWidget_OnShow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreEventEntryWidget_OnShow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreEventEntryWidget_OnTabSelected_Statics
	{
		struct CoreEventEntryWidget_eventOnTabSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreEventEntryWidget_OnTabSelected_Statics::NewProp_selectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreEventEntryWidget_OnTabSelected_Statics::NewProp_selectedButton = { "selectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreEventEntryWidget_eventOnTabSelected_Parms, selectedButton), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreEventEntryWidget_OnTabSelected_Statics::NewProp_selectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreEventEntryWidget_OnTabSelected_Statics::NewProp_selectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreEventEntryWidget_OnTabSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreEventEntryWidget_OnTabSelected_Statics::NewProp_selectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreEventEntryWidget_OnTabSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreEventEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreEventEntryWidget_OnTabSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreEventEntryWidget, nullptr, "OnTabSelected", nullptr, nullptr, sizeof(CoreEventEntryWidget_eventOnTabSelected_Parms), Z_Construct_UFunction_UCoreEventEntryWidget_OnTabSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreEventEntryWidget_OnTabSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreEventEntryWidget_OnTabSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreEventEntryWidget_OnTabSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreEventEntryWidget_OnTabSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreEventEntryWidget_OnTabSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreEventEntryWidget_SetTabsVisuals_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreEventEntryWidget_SetTabsVisuals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreEventEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreEventEntryWidget_SetTabsVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreEventEntryWidget, nullptr, "SetTabsVisuals", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreEventEntryWidget_SetTabsVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreEventEntryWidget_SetTabsVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreEventEntryWidget_SetTabsVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreEventEntryWidget_SetTabsVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreEventEntryWidget_SetUiTakeoverActive_Statics
	{
		static void NewProp_isActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreEventEntryWidget_SetUiTakeoverActive_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((CoreEventEntryWidget_eventSetUiTakeoverActive_Parms*)Obj)->isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreEventEntryWidget_SetUiTakeoverActive_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreEventEntryWidget_eventSetUiTakeoverActive_Parms), &Z_Construct_UFunction_UCoreEventEntryWidget_SetUiTakeoverActive_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreEventEntryWidget_SetUiTakeoverActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreEventEntryWidget_SetUiTakeoverActive_Statics::NewProp_isActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreEventEntryWidget_SetUiTakeoverActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreEventEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreEventEntryWidget_SetUiTakeoverActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreEventEntryWidget, nullptr, "SetUiTakeoverActive", nullptr, nullptr, sizeof(CoreEventEntryWidget_eventSetUiTakeoverActive_Parms), Z_Construct_UFunction_UCoreEventEntryWidget_SetUiTakeoverActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreEventEntryWidget_SetUiTakeoverActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreEventEntryWidget_SetUiTakeoverActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreEventEntryWidget_SetUiTakeoverActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreEventEntryWidget_SetUiTakeoverActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreEventEntryWidget_SetUiTakeoverActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreEventEntryWidget_NoRegister()
	{
		return UCoreEventEntryWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreEventEntryWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__viewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__viewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__eventSkinDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__eventSkinDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__skinData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__skinData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleBanner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleBanner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventDateText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventDateText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TabsContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MilestoneTracker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MilestoneTracker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollPrompt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScrollPrompt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__eventEntryTabSelectedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__eventEntryTabSelectedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__backActionDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__backActionDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegressionButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RegressionButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreEventEntryWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreEventEntryWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreEventEntryWidget_OnBackAction, "OnBackAction" }, // 1877119841
		{ &Z_Construct_UFunction_UCoreEventEntryWidget_OnEnter, "OnEnter" }, // 3619285482
		{ &Z_Construct_UFunction_UCoreEventEntryWidget_OnLeave, "OnLeave" }, // 300445785
		{ &Z_Construct_UFunction_UCoreEventEntryWidget_OnShow, "OnShow" }, // 2537560648
		{ &Z_Construct_UFunction_UCoreEventEntryWidget_OnTabSelected, "OnTabSelected" }, // 2906441399
		{ &Z_Construct_UFunction_UCoreEventEntryWidget_SetTabsVisuals, "SetTabsVisuals" }, // 522508932
		{ &Z_Construct_UFunction_UCoreEventEntryWidget_SetUiTakeoverActive, "SetUiTakeoverActive" }, // 4183613685
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreEventEntryWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreEventEntryWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreEventEntryWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp__viewData_MetaData[] = {
		{ "Category", "CoreEventEntryWidget" },
		{ "ModuleRelativePath", "Public/CoreEventEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp__viewData = { "_viewData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreEventEntryWidget, _viewData), Z_Construct_UClass_UEventEntryViewData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp__viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp__viewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp__eventSkinDataTable_MetaData[] = {
		{ "Category", "CoreEventEntryWidget" },
		{ "ModuleRelativePath", "Public/CoreEventEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp__eventSkinDataTable = { "_eventSkinDataTable", nullptr, (EPropertyFlags)0x0020080002000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreEventEntryWidget, _eventSkinDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp__eventSkinDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp__eventSkinDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp__skinData_MetaData[] = {
		{ "Category", "CoreEventEntryWidget" },
		{ "ModuleRelativePath", "Public/CoreEventEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp__skinData = { "_skinData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreEventEntryWidget, _skinData), Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData, METADATA_PARAMS(Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp__skinData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp__skinData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_TitleBanner_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreEventEntryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreEventEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_TitleBanner = { "TitleBanner", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreEventEntryWidget, TitleBanner), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_TitleBanner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_TitleBanner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_TitleImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreEventEntryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreEventEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_TitleImage = { "TitleImage", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreEventEntryWidget, TitleImage), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_TitleImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_TitleImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_EventDateText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreEventEntryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreEventEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_EventDateText = { "EventDateText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreEventEntryWidget, EventDateText), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_EventDateText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_EventDateText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_TabsContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreEventEntryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreEventEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_TabsContainer = { "TabsContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreEventEntryWidget, TabsContainer), Z_Construct_UClass_UCoreTabContainerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_TabsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_TabsContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_MilestoneTracker_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreEventEntryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreEventEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_MilestoneTracker = { "MilestoneTracker", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreEventEntryWidget, MilestoneTracker), Z_Construct_UClass_UMilestoneTrackerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_MilestoneTracker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_MilestoneTracker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_ScrollPrompt_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreEventEntryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreEventEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_ScrollPrompt = { "ScrollPrompt", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreEventEntryWidget, ScrollPrompt), Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_ScrollPrompt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_ScrollPrompt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp__eventEntryTabSelectedEvent_MetaData[] = {
		{ "Category", "CoreEventEntryWidget" },
		{ "ModuleRelativePath", "Public/CoreEventEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp__eventEntryTabSelectedEvent = { "_eventEntryTabSelectedEvent", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreEventEntryWidget, _eventEntryTabSelectedEvent), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_EventEntryTabSelectedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp__eventEntryTabSelectedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp__eventEntryTabSelectedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp__backActionDelegate_MetaData[] = {
		{ "Category", "CoreEventEntryWidget" },
		{ "ModuleRelativePath", "Public/CoreEventEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp__backActionDelegate = { "_backActionDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreEventEntryWidget, _backActionDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_EventEntryBackActionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp__backActionDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp__backActionDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_RegressionButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreEventEntryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreEventEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_RegressionButton = { "RegressionButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreEventEntryWidget, RegressionButton), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_RegressionButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_RegressionButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_TitleText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreEventEntryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreEventEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreEventEntryWidget, TitleText), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_TitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_TitleText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreEventEntryWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp__viewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp__eventSkinDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp__skinData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_TitleBanner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_TitleImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_EventDateText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_TabsContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_MilestoneTracker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_ScrollPrompt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp__eventEntryTabSelectedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp__backActionDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_RegressionButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreEventEntryWidget_Statics::NewProp_TitleText,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreEventEntryWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEventEntryViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreEventEntryWidget, IEventEntryViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreEventEntryWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreEventEntryWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreEventEntryWidget_Statics::ClassParams = {
		&UCoreEventEntryWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreEventEntryWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreEventEntryWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreEventEntryWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreEventEntryWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreEventEntryWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreEventEntryWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreEventEntryWidget, 715097386);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreEventEntryWidget>()
	{
		return UCoreEventEntryWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreEventEntryWidget(Z_Construct_UClass_UCoreEventEntryWidget, &UCoreEventEntryWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreEventEntryWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreEventEntryWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
