// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreArchiveMenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreArchiveMenuWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveMenuWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveMenuWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EArchiveMenuState();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContainerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveBackActionDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveInfoClicked__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveSlotSelectorClosed__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveMenuTabSelectedDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveChallengeReminderClickedDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveSlotSelectionSelectedDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveMenuViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreArchiveMenuWidget::execGetTimeRemainingLabelFromMenuState)
	{
		P_GET_ENUM(EArchiveMenuState,Z_Param_menuState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetTimeRemainingLabelFromMenuState(EArchiveMenuState(Z_Param_menuState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveMenuWidget::execOnChallengeReminderClick)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_button);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChallengeReminderClick(Z_Param_button);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveMenuWidget::execOnInfoButtonClicked)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_buttonTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInfoButtonClicked(Z_Param_buttonTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveMenuWidget::execOnMenuTabSelected)
	{
		P_GET_OBJECT(UCoreSelectableButtonWidget,Z_Param_selectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMenuTabSelected(Z_Param_selectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveMenuWidget::execOnMenuTabSelectedAgain)
	{
		P_GET_OBJECT(UCoreSelectableButtonWidget,Z_Param_selectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMenuTabSelectedAgain(Z_Param_selectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveMenuWidget::execOnSlotSelected)
	{
		P_GET_ENUM(EPlayerRole,Z_Param_role);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSlotSelected(EPlayerRole(Z_Param_role));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveMenuWidget::execOnSlotSelectionCancelled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSlotSelectionCancelled();
		P_NATIVE_END;
	}
	static FName NAME_UCoreArchiveMenuWidget_SetScrollData = FName(TEXT("SetScrollData"));
	void UCoreArchiveMenuWidget::SetScrollData(FText const& vignetteListScrollPromptText, FText const& journalEntryScrollPromptText)
	{
		CoreArchiveMenuWidget_eventSetScrollData_Parms Parms;
		Parms.vignetteListScrollPromptText=vignetteListScrollPromptText;
		Parms.journalEntryScrollPromptText=journalEntryScrollPromptText;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveMenuWidget_SetScrollData),&Parms);
	}
	void UCoreArchiveMenuWidget::StaticRegisterNativesUCoreArchiveMenuWidget()
	{
		UClass* Class = UCoreArchiveMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTimeRemainingLabelFromMenuState", &UCoreArchiveMenuWidget::execGetTimeRemainingLabelFromMenuState },
			{ "OnChallengeReminderClick", &UCoreArchiveMenuWidget::execOnChallengeReminderClick },
			{ "OnInfoButtonClicked", &UCoreArchiveMenuWidget::execOnInfoButtonClicked },
			{ "OnMenuTabSelected", &UCoreArchiveMenuWidget::execOnMenuTabSelected },
			{ "OnMenuTabSelectedAgain", &UCoreArchiveMenuWidget::execOnMenuTabSelectedAgain },
			{ "OnSlotSelected", &UCoreArchiveMenuWidget::execOnSlotSelected },
			{ "OnSlotSelectionCancelled", &UCoreArchiveMenuWidget::execOnSlotSelectionCancelled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreArchiveMenuWidget_GetTimeRemainingLabelFromMenuState_Statics
	{
		struct CoreArchiveMenuWidget_eventGetTimeRemainingLabelFromMenuState_Parms
		{
			EArchiveMenuState menuState;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_menuState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_menuState;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreArchiveMenuWidget_GetTimeRemainingLabelFromMenuState_Statics::NewProp_menuState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreArchiveMenuWidget_GetTimeRemainingLabelFromMenuState_Statics::NewProp_menuState = { "menuState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveMenuWidget_eventGetTimeRemainingLabelFromMenuState_Parms, menuState), Z_Construct_UEnum_DBDSharedTypes_EArchiveMenuState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveMenuWidget_GetTimeRemainingLabelFromMenuState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveMenuWidget_eventGetTimeRemainingLabelFromMenuState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveMenuWidget_GetTimeRemainingLabelFromMenuState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveMenuWidget_GetTimeRemainingLabelFromMenuState_Statics::NewProp_menuState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveMenuWidget_GetTimeRemainingLabelFromMenuState_Statics::NewProp_menuState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveMenuWidget_GetTimeRemainingLabelFromMenuState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveMenuWidget_GetTimeRemainingLabelFromMenuState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveMenuWidget_GetTimeRemainingLabelFromMenuState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveMenuWidget, nullptr, "GetTimeRemainingLabelFromMenuState", nullptr, nullptr, sizeof(CoreArchiveMenuWidget_eventGetTimeRemainingLabelFromMenuState_Parms), Z_Construct_UFunction_UCoreArchiveMenuWidget_GetTimeRemainingLabelFromMenuState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveMenuWidget_GetTimeRemainingLabelFromMenuState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveMenuWidget_GetTimeRemainingLabelFromMenuState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveMenuWidget_GetTimeRemainingLabelFromMenuState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveMenuWidget_GetTimeRemainingLabelFromMenuState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveMenuWidget_GetTimeRemainingLabelFromMenuState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveMenuWidget_OnChallengeReminderClick_Statics
	{
		struct CoreArchiveMenuWidget_eventOnChallengeReminderClick_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveMenuWidget_OnChallengeReminderClick_Statics::NewProp_button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveMenuWidget_OnChallengeReminderClick_Statics::NewProp_button = { "button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveMenuWidget_eventOnChallengeReminderClick_Parms, button), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveMenuWidget_OnChallengeReminderClick_Statics::NewProp_button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveMenuWidget_OnChallengeReminderClick_Statics::NewProp_button_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveMenuWidget_OnChallengeReminderClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveMenuWidget_OnChallengeReminderClick_Statics::NewProp_button,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveMenuWidget_OnChallengeReminderClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveMenuWidget_OnChallengeReminderClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveMenuWidget, nullptr, "OnChallengeReminderClick", nullptr, nullptr, sizeof(CoreArchiveMenuWidget_eventOnChallengeReminderClick_Parms), Z_Construct_UFunction_UCoreArchiveMenuWidget_OnChallengeReminderClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveMenuWidget_OnChallengeReminderClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveMenuWidget_OnChallengeReminderClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveMenuWidget_OnChallengeReminderClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveMenuWidget_OnChallengeReminderClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveMenuWidget_OnChallengeReminderClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveMenuWidget_OnInfoButtonClicked_Statics
	{
		struct CoreArchiveMenuWidget_eventOnInfoButtonClicked_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveMenuWidget_OnInfoButtonClicked_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveMenuWidget_OnInfoButtonClicked_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveMenuWidget_eventOnInfoButtonClicked_Parms, buttonTarget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveMenuWidget_OnInfoButtonClicked_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveMenuWidget_OnInfoButtonClicked_Statics::NewProp_buttonTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveMenuWidget_OnInfoButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveMenuWidget_OnInfoButtonClicked_Statics::NewProp_buttonTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveMenuWidget_OnInfoButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveMenuWidget_OnInfoButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveMenuWidget, nullptr, "OnInfoButtonClicked", nullptr, nullptr, sizeof(CoreArchiveMenuWidget_eventOnInfoButtonClicked_Parms), Z_Construct_UFunction_UCoreArchiveMenuWidget_OnInfoButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveMenuWidget_OnInfoButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveMenuWidget_OnInfoButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveMenuWidget_OnInfoButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveMenuWidget_OnInfoButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveMenuWidget_OnInfoButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelected_Statics
	{
		struct CoreArchiveMenuWidget_eventOnMenuTabSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelected_Statics::NewProp_selectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelected_Statics::NewProp_selectedButton = { "selectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveMenuWidget_eventOnMenuTabSelected_Parms, selectedButton), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelected_Statics::NewProp_selectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelected_Statics::NewProp_selectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelected_Statics::NewProp_selectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveMenuWidget, nullptr, "OnMenuTabSelected", nullptr, nullptr, sizeof(CoreArchiveMenuWidget_eventOnMenuTabSelected_Parms), Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelectedAgain_Statics
	{
		struct CoreArchiveMenuWidget_eventOnMenuTabSelectedAgain_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelectedAgain_Statics::NewProp_selectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelectedAgain_Statics::NewProp_selectedButton = { "selectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveMenuWidget_eventOnMenuTabSelectedAgain_Parms, selectedButton), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelectedAgain_Statics::NewProp_selectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelectedAgain_Statics::NewProp_selectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelectedAgain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelectedAgain_Statics::NewProp_selectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelectedAgain_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelectedAgain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveMenuWidget, nullptr, "OnMenuTabSelectedAgain", nullptr, nullptr, sizeof(CoreArchiveMenuWidget_eventOnMenuTabSelectedAgain_Parms), Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelectedAgain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelectedAgain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelectedAgain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelectedAgain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelectedAgain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelectedAgain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveMenuWidget_OnSlotSelected_Statics
	{
		struct CoreArchiveMenuWidget_eventOnSlotSelected_Parms
		{
			EPlayerRole role;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_role_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_role;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreArchiveMenuWidget_OnSlotSelected_Statics::NewProp_role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreArchiveMenuWidget_OnSlotSelected_Statics::NewProp_role = { "role", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveMenuWidget_eventOnSlotSelected_Parms, role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveMenuWidget_OnSlotSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveMenuWidget_OnSlotSelected_Statics::NewProp_role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveMenuWidget_OnSlotSelected_Statics::NewProp_role,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveMenuWidget_OnSlotSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveMenuWidget_OnSlotSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveMenuWidget, nullptr, "OnSlotSelected", nullptr, nullptr, sizeof(CoreArchiveMenuWidget_eventOnSlotSelected_Parms), Z_Construct_UFunction_UCoreArchiveMenuWidget_OnSlotSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveMenuWidget_OnSlotSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveMenuWidget_OnSlotSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveMenuWidget_OnSlotSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveMenuWidget_OnSlotSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveMenuWidget_OnSlotSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveMenuWidget_OnSlotSelectionCancelled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveMenuWidget_OnSlotSelectionCancelled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveMenuWidget_OnSlotSelectionCancelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveMenuWidget, nullptr, "OnSlotSelectionCancelled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveMenuWidget_OnSlotSelectionCancelled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveMenuWidget_OnSlotSelectionCancelled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveMenuWidget_OnSlotSelectionCancelled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveMenuWidget_OnSlotSelectionCancelled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveMenuWidget_SetScrollData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vignetteListScrollPromptText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_vignetteListScrollPromptText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_journalEntryScrollPromptText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_journalEntryScrollPromptText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveMenuWidget_SetScrollData_Statics::NewProp_vignetteListScrollPromptText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveMenuWidget_SetScrollData_Statics::NewProp_vignetteListScrollPromptText = { "vignetteListScrollPromptText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveMenuWidget_eventSetScrollData_Parms, vignetteListScrollPromptText), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveMenuWidget_SetScrollData_Statics::NewProp_vignetteListScrollPromptText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveMenuWidget_SetScrollData_Statics::NewProp_vignetteListScrollPromptText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveMenuWidget_SetScrollData_Statics::NewProp_journalEntryScrollPromptText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveMenuWidget_SetScrollData_Statics::NewProp_journalEntryScrollPromptText = { "journalEntryScrollPromptText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveMenuWidget_eventSetScrollData_Parms, journalEntryScrollPromptText), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveMenuWidget_SetScrollData_Statics::NewProp_journalEntryScrollPromptText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveMenuWidget_SetScrollData_Statics::NewProp_journalEntryScrollPromptText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveMenuWidget_SetScrollData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveMenuWidget_SetScrollData_Statics::NewProp_vignetteListScrollPromptText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveMenuWidget_SetScrollData_Statics::NewProp_journalEntryScrollPromptText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveMenuWidget_SetScrollData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveMenuWidget_SetScrollData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveMenuWidget, nullptr, "SetScrollData", nullptr, nullptr, sizeof(CoreArchiveMenuWidget_eventSetScrollData_Parms), Z_Construct_UFunction_UCoreArchiveMenuWidget_SetScrollData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveMenuWidget_SetScrollData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveMenuWidget_SetScrollData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveMenuWidget_SetScrollData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveMenuWidget_SetScrollData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveMenuWidget_SetScrollData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreArchiveMenuWidget_NoRegister()
	{
		return UCoreArchiveMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreArchiveMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArchiveMenuTabs_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArchiveMenuTabs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorChallengeSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SurvivorChallengeSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerChallengeSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillerChallengeSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SlotSelector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackInputSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackInputSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfoButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__backActionDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__backActionDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__infoClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__infoClickedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__slotSelectorClosedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__slotSelectorClosedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuTabSelectedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_MenuTabSelectedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__challengeReminderClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__challengeReminderClickedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__slotSelectionSelectedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__slotSelectionSelectedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__riftRemainingTimeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__riftRemainingTimeText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreArchiveMenuWidget_GetTimeRemainingLabelFromMenuState, "GetTimeRemainingLabelFromMenuState" }, // 1912800934
		{ &Z_Construct_UFunction_UCoreArchiveMenuWidget_OnChallengeReminderClick, "OnChallengeReminderClick" }, // 1043303039
		{ &Z_Construct_UFunction_UCoreArchiveMenuWidget_OnInfoButtonClicked, "OnInfoButtonClicked" }, // 2036228272
		{ &Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelected, "OnMenuTabSelected" }, // 1998608558
		{ &Z_Construct_UFunction_UCoreArchiveMenuWidget_OnMenuTabSelectedAgain, "OnMenuTabSelectedAgain" }, // 1890656774
		{ &Z_Construct_UFunction_UCoreArchiveMenuWidget_OnSlotSelected, "OnSlotSelected" }, // 1501933708
		{ &Z_Construct_UFunction_UCoreArchiveMenuWidget_OnSlotSelectionCancelled, "OnSlotSelectionCancelled" }, // 1771658609
		{ &Z_Construct_UFunction_UCoreArchiveMenuWidget_SetScrollData, "SetScrollData" }, // 896149766
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreArchiveMenuWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_ArchiveMenuTabs_MetaData[] = {
		{ "Category", "CoreArchiveMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_ArchiveMenuTabs = { "ArchiveMenuTabs", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveMenuWidget, ArchiveMenuTabs), Z_Construct_UClass_UCoreTabContainerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_ArchiveMenuTabs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_ArchiveMenuTabs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_SurvivorChallengeSlot_MetaData[] = {
		{ "Category", "CoreArchiveMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_SurvivorChallengeSlot = { "SurvivorChallengeSlot", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveMenuWidget, SurvivorChallengeSlot), Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_SurvivorChallengeSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_SurvivorChallengeSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_KillerChallengeSlot_MetaData[] = {
		{ "Category", "CoreArchiveMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_KillerChallengeSlot = { "KillerChallengeSlot", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveMenuWidget, KillerChallengeSlot), Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_KillerChallengeSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_KillerChallengeSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_SlotSelector_MetaData[] = {
		{ "Category", "CoreArchiveMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_SlotSelector = { "SlotSelector", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveMenuWidget, SlotSelector), Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_SlotSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_SlotSelector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_BackInputSwitcher_MetaData[] = {
		{ "Category", "CoreArchiveMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_BackInputSwitcher = { "BackInputSwitcher", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveMenuWidget, BackInputSwitcher), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_BackInputSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_BackInputSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_InfoButton_MetaData[] = {
		{ "Category", "CoreArchiveMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_InfoButton = { "InfoButton", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveMenuWidget, InfoButton), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_InfoButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_InfoButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__backActionDelegate_MetaData[] = {
		{ "Category", "CoreArchiveMenuWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__backActionDelegate = { "_backActionDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveMenuWidget, _backActionDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveBackActionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__backActionDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__backActionDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__infoClickedDelegate_MetaData[] = {
		{ "Category", "CoreArchiveMenuWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__infoClickedDelegate = { "_infoClickedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveMenuWidget, _infoClickedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveInfoClicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__infoClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__infoClickedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__slotSelectorClosedDelegate_MetaData[] = {
		{ "Category", "CoreArchiveMenuWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__slotSelectorClosedDelegate = { "_slotSelectorClosedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveMenuWidget, _slotSelectorClosedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveSlotSelectorClosed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__slotSelectorClosedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__slotSelectorClosedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_MenuTabSelectedDelegate_MetaData[] = {
		{ "Category", "CoreArchiveMenuWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_MenuTabSelectedDelegate = { "MenuTabSelectedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveMenuWidget, MenuTabSelectedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveMenuTabSelectedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_MenuTabSelectedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_MenuTabSelectedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__challengeReminderClickedDelegate_MetaData[] = {
		{ "Category", "CoreArchiveMenuWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__challengeReminderClickedDelegate = { "_challengeReminderClickedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveMenuWidget, _challengeReminderClickedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveChallengeReminderClickedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__challengeReminderClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__challengeReminderClickedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__slotSelectionSelectedDelegate_MetaData[] = {
		{ "Category", "CoreArchiveMenuWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__slotSelectionSelectedDelegate = { "_slotSelectionSelectedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveMenuWidget, _slotSelectionSelectedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveSlotSelectionSelectedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__slotSelectionSelectedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__slotSelectionSelectedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__riftRemainingTimeText_MetaData[] = {
		{ "Category", "CoreArchiveMenuWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__riftRemainingTimeText = { "_riftRemainingTimeText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveMenuWidget, _riftRemainingTimeText), METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__riftRemainingTimeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__riftRemainingTimeText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_ArchiveMenuTabs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_SurvivorChallengeSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_KillerChallengeSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_SlotSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_BackInputSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_InfoButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__backActionDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__infoClickedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__slotSelectorClosedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp_MenuTabSelectedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__challengeReminderClickedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__slotSelectionSelectedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::NewProp__riftRemainingTimeText,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UArchiveMenuViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreArchiveMenuWidget, IArchiveMenuViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreArchiveMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::ClassParams = {
		&UCoreArchiveMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreArchiveMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreArchiveMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreArchiveMenuWidget, 3395232928);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreArchiveMenuWidget>()
	{
		return UCoreArchiveMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreArchiveMenuWidget(Z_Construct_UClass_UCoreArchiveMenuWidget, &UCoreArchiveMenuWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreArchiveMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreArchiveMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
