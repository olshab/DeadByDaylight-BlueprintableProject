// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/DBDDropDownListWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDDropDownListWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_UDBDDropDownListWidget_OnSelectedOptionDelegate__DelegateSignature();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDDropDownListWidget();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FTabWidgetData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDDropDownListWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContainerWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UDBDDropDownListWidget_OnSelectedOptionDelegate__DelegateSignature_Statics
	{
		struct DBDDropDownListWidget_eventOnSelectedOptionDelegate_Parms
		{
			FTabWidgetData buttonData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_buttonData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UDBDDropDownListWidget_OnSelectedOptionDelegate__DelegateSignature_Statics::NewProp_buttonData = { "buttonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDropDownListWidget_eventOnSelectedOptionDelegate_Parms, buttonData), Z_Construct_UScriptStruct_FTabWidgetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDBDDropDownListWidget_OnSelectedOptionDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDBDDropDownListWidget_OnSelectedOptionDelegate__DelegateSignature_Statics::NewProp_buttonData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UDBDDropDownListWidget_OnSelectedOptionDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDDropDownListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDBDDropDownListWidget_OnSelectedOptionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDDropDownListWidget, nullptr, "OnSelectedOptionDelegate__DelegateSignature", nullptr, nullptr, sizeof(DBDDropDownListWidget_eventOnSelectedOptionDelegate_Parms), Z_Construct_UDelegateFunction_UDBDDropDownListWidget_OnSelectedOptionDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDBDDropDownListWidget_OnSelectedOptionDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UDBDDropDownListWidget_OnSelectedOptionDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDBDDropDownListWidget_OnSelectedOptionDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UDBDDropDownListWidget_OnSelectedOptionDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UDBDDropDownListWidget_OnSelectedOptionDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UDBDDropDownListWidget::execBindToTrigger)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_triggerButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindToTrigger(Z_Param_triggerButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDDropDownListWidget::execHideDropDownList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideDropDownList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDDropDownListWidget::execOnOptionSelected)
	{
		P_GET_OBJECT(UCoreSelectableButtonWidget,Z_Param_selectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOptionSelected(Z_Param_selectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDDropDownListWidget::execOnTriggerClicked)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_buttonTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerClicked(Z_Param_buttonTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDDropDownListWidget::execOnUserClicked)
	{
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_mouseEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUserClicked(Z_Param_Out_mouseEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDDropDownListWidget::execUnbindFromTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindFromTrigger();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDDropDownListWidget::execUpdateDropDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDropDown();
		P_NATIVE_END;
	}
	void UDBDDropDownListWidget::StaticRegisterNativesUDBDDropDownListWidget()
	{
		UClass* Class = UDBDDropDownListWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindToTrigger", &UDBDDropDownListWidget::execBindToTrigger },
			{ "HideDropDownList", &UDBDDropDownListWidget::execHideDropDownList },
			{ "OnOptionSelected", &UDBDDropDownListWidget::execOnOptionSelected },
			{ "OnTriggerClicked", &UDBDDropDownListWidget::execOnTriggerClicked },
			{ "OnUserClicked", &UDBDDropDownListWidget::execOnUserClicked },
			{ "UnbindFromTrigger", &UDBDDropDownListWidget::execUnbindFromTrigger },
			{ "UpdateDropDown", &UDBDDropDownListWidget::execUpdateDropDown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDDropDownListWidget_BindToTrigger_Statics
	{
		struct DBDDropDownListWidget_eventBindToTrigger_Parms
		{
			UCoreButtonWidget* triggerButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_triggerButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_triggerButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDropDownListWidget_BindToTrigger_Statics::NewProp_triggerButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDDropDownListWidget_BindToTrigger_Statics::NewProp_triggerButton = { "triggerButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDropDownListWidget_eventBindToTrigger_Parms, triggerButton), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDDropDownListWidget_BindToTrigger_Statics::NewProp_triggerButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDropDownListWidget_BindToTrigger_Statics::NewProp_triggerButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDDropDownListWidget_BindToTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDropDownListWidget_BindToTrigger_Statics::NewProp_triggerButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDropDownListWidget_BindToTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDDropDownListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDDropDownListWidget_BindToTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDDropDownListWidget, nullptr, "BindToTrigger", nullptr, nullptr, sizeof(DBDDropDownListWidget_eventBindToTrigger_Parms), Z_Construct_UFunction_UDBDDropDownListWidget_BindToTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDropDownListWidget_BindToTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDDropDownListWidget_BindToTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDropDownListWidget_BindToTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDDropDownListWidget_BindToTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDDropDownListWidget_BindToTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDDropDownListWidget_HideDropDownList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDropDownListWidget_HideDropDownList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDDropDownListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDDropDownListWidget_HideDropDownList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDDropDownListWidget, nullptr, "HideDropDownList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDDropDownListWidget_HideDropDownList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDropDownListWidget_HideDropDownList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDDropDownListWidget_HideDropDownList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDDropDownListWidget_HideDropDownList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDDropDownListWidget_OnOptionSelected_Statics
	{
		struct DBDDropDownListWidget_eventOnOptionSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDropDownListWidget_OnOptionSelected_Statics::NewProp_selectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDDropDownListWidget_OnOptionSelected_Statics::NewProp_selectedButton = { "selectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDropDownListWidget_eventOnOptionSelected_Parms, selectedButton), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDDropDownListWidget_OnOptionSelected_Statics::NewProp_selectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDropDownListWidget_OnOptionSelected_Statics::NewProp_selectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDDropDownListWidget_OnOptionSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDropDownListWidget_OnOptionSelected_Statics::NewProp_selectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDropDownListWidget_OnOptionSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDDropDownListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDDropDownListWidget_OnOptionSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDDropDownListWidget, nullptr, "OnOptionSelected", nullptr, nullptr, sizeof(DBDDropDownListWidget_eventOnOptionSelected_Parms), Z_Construct_UFunction_UDBDDropDownListWidget_OnOptionSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDropDownListWidget_OnOptionSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDDropDownListWidget_OnOptionSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDropDownListWidget_OnOptionSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDDropDownListWidget_OnOptionSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDDropDownListWidget_OnOptionSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDDropDownListWidget_OnTriggerClicked_Statics
	{
		struct DBDDropDownListWidget_eventOnTriggerClicked_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDropDownListWidget_OnTriggerClicked_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDDropDownListWidget_OnTriggerClicked_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDropDownListWidget_eventOnTriggerClicked_Parms, buttonTarget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDDropDownListWidget_OnTriggerClicked_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDropDownListWidget_OnTriggerClicked_Statics::NewProp_buttonTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDDropDownListWidget_OnTriggerClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDropDownListWidget_OnTriggerClicked_Statics::NewProp_buttonTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDropDownListWidget_OnTriggerClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDDropDownListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDDropDownListWidget_OnTriggerClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDDropDownListWidget, nullptr, "OnTriggerClicked", nullptr, nullptr, sizeof(DBDDropDownListWidget_eventOnTriggerClicked_Parms), Z_Construct_UFunction_UDBDDropDownListWidget_OnTriggerClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDropDownListWidget_OnTriggerClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDDropDownListWidget_OnTriggerClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDropDownListWidget_OnTriggerClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDDropDownListWidget_OnTriggerClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDDropDownListWidget_OnTriggerClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDDropDownListWidget_OnUserClicked_Statics
	{
		struct DBDDropDownListWidget_eventOnUserClicked_Parms
		{
			FPointerEvent mouseEvent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouseEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mouseEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDropDownListWidget_OnUserClicked_Statics::NewProp_mouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDDropDownListWidget_OnUserClicked_Statics::NewProp_mouseEvent = { "mouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDropDownListWidget_eventOnUserClicked_Parms, mouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UDBDDropDownListWidget_OnUserClicked_Statics::NewProp_mouseEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDropDownListWidget_OnUserClicked_Statics::NewProp_mouseEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDDropDownListWidget_OnUserClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDropDownListWidget_OnUserClicked_Statics::NewProp_mouseEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDropDownListWidget_OnUserClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDDropDownListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDDropDownListWidget_OnUserClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDDropDownListWidget, nullptr, "OnUserClicked", nullptr, nullptr, sizeof(DBDDropDownListWidget_eventOnUserClicked_Parms), Z_Construct_UFunction_UDBDDropDownListWidget_OnUserClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDropDownListWidget_OnUserClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDDropDownListWidget_OnUserClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDropDownListWidget_OnUserClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDDropDownListWidget_OnUserClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDDropDownListWidget_OnUserClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDDropDownListWidget_UnbindFromTrigger_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDropDownListWidget_UnbindFromTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDDropDownListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDDropDownListWidget_UnbindFromTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDDropDownListWidget, nullptr, "UnbindFromTrigger", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDDropDownListWidget_UnbindFromTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDropDownListWidget_UnbindFromTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDDropDownListWidget_UnbindFromTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDDropDownListWidget_UnbindFromTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDDropDownListWidget_UpdateDropDown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDropDownListWidget_UpdateDropDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDDropDownListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDDropDownListWidget_UpdateDropDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDDropDownListWidget, nullptr, "UpdateDropDown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDDropDownListWidget_UpdateDropDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDropDownListWidget_UpdateDropDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDDropDownListWidget_UpdateDropDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDDropDownListWidget_UpdateDropDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDDropDownListWidget_NoRegister()
	{
		return UDBDDropDownListWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDBDDropDownListWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSelectedOptionDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectedOptionDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__triggerButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__triggerButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDDropDownListWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreTabContainerWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDDropDownListWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDDropDownListWidget_BindToTrigger, "BindToTrigger" }, // 2299237663
		{ &Z_Construct_UFunction_UDBDDropDownListWidget_HideDropDownList, "HideDropDownList" }, // 2157870113
		{ &Z_Construct_UFunction_UDBDDropDownListWidget_OnOptionSelected, "OnOptionSelected" }, // 1024768440
		{ &Z_Construct_UDelegateFunction_UDBDDropDownListWidget_OnSelectedOptionDelegate__DelegateSignature, "OnSelectedOptionDelegate__DelegateSignature" }, // 1155679951
		{ &Z_Construct_UFunction_UDBDDropDownListWidget_OnTriggerClicked, "OnTriggerClicked" }, // 2878696328
		{ &Z_Construct_UFunction_UDBDDropDownListWidget_OnUserClicked, "OnUserClicked" }, // 4121289259
		{ &Z_Construct_UFunction_UDBDDropDownListWidget_UnbindFromTrigger, "UnbindFromTrigger" }, // 2062245622
		{ &Z_Construct_UFunction_UDBDDropDownListWidget_UpdateDropDown, "UpdateDropDown" }, // 1494061359
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDropDownListWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDDropDownListWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DBDDropDownListWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDropDownListWidget_Statics::NewProp_OnSelectedOptionDelegate_MetaData[] = {
		{ "Category", "DBDDropDownListWidget" },
		{ "ModuleRelativePath", "Public/DBDDropDownListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDBDDropDownListWidget_Statics::NewProp_OnSelectedOptionDelegate = { "OnSelectedOptionDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDDropDownListWidget, OnSelectedOptionDelegate), Z_Construct_UDelegateFunction_UDBDDropDownListWidget_OnSelectedOptionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDBDDropDownListWidget_Statics::NewProp_OnSelectedOptionDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDropDownListWidget_Statics::NewProp_OnSelectedOptionDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDropDownListWidget_Statics::NewProp__triggerButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DBDDropDownListWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDDropDownListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDDropDownListWidget_Statics::NewProp__triggerButton = { "_triggerButton", nullptr, (EPropertyFlags)0x004000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDDropDownListWidget, _triggerButton), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDDropDownListWidget_Statics::NewProp__triggerButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDropDownListWidget_Statics::NewProp__triggerButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDDropDownListWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDropDownListWidget_Statics::NewProp_OnSelectedOptionDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDropDownListWidget_Statics::NewProp__triggerButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDDropDownListWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDDropDownListWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDDropDownListWidget_Statics::ClassParams = {
		&UDBDDropDownListWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDDropDownListWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDropDownListWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDDropDownListWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDropDownListWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDDropDownListWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDDropDownListWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDDropDownListWidget, 1383397585);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UDBDDropDownListWidget>()
	{
		return UDBDDropDownListWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDDropDownListWidget(Z_Construct_UClass_UDBDDropDownListWidget, &UDBDDropDownListWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UDBDDropDownListWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDDropDownListWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
