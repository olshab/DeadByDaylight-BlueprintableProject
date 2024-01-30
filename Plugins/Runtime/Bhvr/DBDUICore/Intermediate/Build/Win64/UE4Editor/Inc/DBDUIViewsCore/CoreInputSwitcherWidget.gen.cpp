// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreInputSwitcherWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreInputSwitcherWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputSwitcherWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_NoRegister();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	DBDINPUT_API UEnum* Z_Construct_UEnum_DBDInput_EUIActionType();
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_EInputSwitcherDisplayRule();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewsCore_InputSwitcherTriggeredDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UCoreInputSwitcherWidget::execGetButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCoreButtonWidget**)Z_Param__Result=P_THIS->GetButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreInputSwitcherWidget::execGetInputPrompt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCoreKeyListenerInputPromptWidget**)Z_Param__Result=P_THIS->GetInputPrompt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreInputSwitcherWidget::execOnAlignmentChanged)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_newAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAlignmentChanged_Implementation(ETextJustify::Type(Z_Param_newAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreInputSwitcherWidget::execOnButtonClicked)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonClicked(Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreInputSwitcherWidget::execOnInputPromptTriggered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInputPromptTriggered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreInputSwitcherWidget::execSetAdditionalIcon)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UTexture2D>,Z_Param_iconTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAdditionalIcon(Z_Param_iconTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreInputSwitcherWidget::execSetAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_newAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAlignment(ETextJustify::Type(Z_Param_newAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreInputSwitcherWidget::execSetBackground)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UMaterialInstance>,Z_Param_backgroundMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBackground(Z_Param_backgroundMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreInputSwitcherWidget::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_isEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_isEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreInputSwitcherWidget::execSetKeyOverride)
	{
		P_GET_STRUCT(FKey,Z_Param_keyOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetKeyOverride(Z_Param_keyOverride);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreInputSwitcherWidget::execSetLabel)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_label);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLabel(Z_Param_Out_label);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreInputSwitcherWidget::execSetRepeatable)
	{
		P_GET_UBOOL(Z_Param_isRepeatable);
		P_GET_OBJECT(UCurveFloat,Z_Param_repetitionDelayCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRepeatable(Z_Param_isRepeatable,Z_Param_repetitionDelayCurve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreInputSwitcherWidget::execSetUIAction)
	{
		P_GET_ENUM(EUIActionType,Z_Param_actionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUIAction(EUIActionType(Z_Param_actionType));
		P_NATIVE_END;
	}
	static FName NAME_UCoreInputSwitcherWidget_OnAlignmentChanged = FName(TEXT("OnAlignmentChanged"));
	void UCoreInputSwitcherWidget::OnAlignmentChanged(ETextJustify::Type newAlignment)
	{
		CoreInputSwitcherWidget_eventOnAlignmentChanged_Parms Parms;
		Parms.newAlignment=newAlignment;
		ProcessEvent(FindFunctionChecked(NAME_UCoreInputSwitcherWidget_OnAlignmentChanged),&Parms);
	}
	void UCoreInputSwitcherWidget::StaticRegisterNativesUCoreInputSwitcherWidget()
	{
		UClass* Class = UCoreInputSwitcherWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetButton", &UCoreInputSwitcherWidget::execGetButton },
			{ "GetInputPrompt", &UCoreInputSwitcherWidget::execGetInputPrompt },
			{ "OnAlignmentChanged", &UCoreInputSwitcherWidget::execOnAlignmentChanged },
			{ "OnButtonClicked", &UCoreInputSwitcherWidget::execOnButtonClicked },
			{ "OnInputPromptTriggered", &UCoreInputSwitcherWidget::execOnInputPromptTriggered },
			{ "SetAdditionalIcon", &UCoreInputSwitcherWidget::execSetAdditionalIcon },
			{ "SetAlignment", &UCoreInputSwitcherWidget::execSetAlignment },
			{ "SetBackground", &UCoreInputSwitcherWidget::execSetBackground },
			{ "SetEnabled", &UCoreInputSwitcherWidget::execSetEnabled },
			{ "SetKeyOverride", &UCoreInputSwitcherWidget::execSetKeyOverride },
			{ "SetLabel", &UCoreInputSwitcherWidget::execSetLabel },
			{ "SetRepeatable", &UCoreInputSwitcherWidget::execSetRepeatable },
			{ "SetUIAction", &UCoreInputSwitcherWidget::execSetUIAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreInputSwitcherWidget_GetButton_Statics
	{
		struct CoreInputSwitcherWidget_eventGetButton_Parms
		{
			UCoreButtonWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputSwitcherWidget_GetButton_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreInputSwitcherWidget_GetButton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreInputSwitcherWidget_eventGetButton_Parms, ReturnValue), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputSwitcherWidget_GetButton_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_GetButton_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInputSwitcherWidget_GetButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInputSwitcherWidget_GetButton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputSwitcherWidget_GetButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInputSwitcherWidget_GetButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInputSwitcherWidget, nullptr, "GetButton", nullptr, nullptr, sizeof(CoreInputSwitcherWidget_eventGetButton_Parms), Z_Construct_UFunction_UCoreInputSwitcherWidget_GetButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_GetButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputSwitcherWidget_GetButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_GetButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInputSwitcherWidget_GetButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInputSwitcherWidget_GetButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInputSwitcherWidget_GetInputPrompt_Statics
	{
		struct CoreInputSwitcherWidget_eventGetInputPrompt_Parms
		{
			UCoreKeyListenerInputPromptWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputSwitcherWidget_GetInputPrompt_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreInputSwitcherWidget_GetInputPrompt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreInputSwitcherWidget_eventGetInputPrompt_Parms, ReturnValue), Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputSwitcherWidget_GetInputPrompt_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_GetInputPrompt_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInputSwitcherWidget_GetInputPrompt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInputSwitcherWidget_GetInputPrompt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputSwitcherWidget_GetInputPrompt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInputSwitcherWidget_GetInputPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInputSwitcherWidget, nullptr, "GetInputPrompt", nullptr, nullptr, sizeof(CoreInputSwitcherWidget_eventGetInputPrompt_Parms), Z_Construct_UFunction_UCoreInputSwitcherWidget_GetInputPrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_GetInputPrompt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputSwitcherWidget_GetInputPrompt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_GetInputPrompt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInputSwitcherWidget_GetInputPrompt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInputSwitcherWidget_GetInputPrompt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInputSwitcherWidget_OnAlignmentChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreInputSwitcherWidget_OnAlignmentChanged_Statics::NewProp_newAlignment = { "newAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreInputSwitcherWidget_eventOnAlignmentChanged_Parms, newAlignment), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInputSwitcherWidget_OnAlignmentChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInputSwitcherWidget_OnAlignmentChanged_Statics::NewProp_newAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputSwitcherWidget_OnAlignmentChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInputSwitcherWidget_OnAlignmentChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInputSwitcherWidget, nullptr, "OnAlignmentChanged", nullptr, nullptr, sizeof(CoreInputSwitcherWidget_eventOnAlignmentChanged_Parms), Z_Construct_UFunction_UCoreInputSwitcherWidget_OnAlignmentChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_OnAlignmentChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputSwitcherWidget_OnAlignmentChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_OnAlignmentChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInputSwitcherWidget_OnAlignmentChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInputSwitcherWidget_OnAlignmentChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInputSwitcherWidget_OnButtonClicked_Statics
	{
		struct CoreInputSwitcherWidget_eventOnButtonClicked_Parms
		{
			UCoreButtonWidget* target;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputSwitcherWidget_OnButtonClicked_Statics::NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreInputSwitcherWidget_OnButtonClicked_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreInputSwitcherWidget_eventOnButtonClicked_Parms, target), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputSwitcherWidget_OnButtonClicked_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_OnButtonClicked_Statics::NewProp_target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInputSwitcherWidget_OnButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInputSwitcherWidget_OnButtonClicked_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputSwitcherWidget_OnButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInputSwitcherWidget_OnButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInputSwitcherWidget, nullptr, "OnButtonClicked", nullptr, nullptr, sizeof(CoreInputSwitcherWidget_eventOnButtonClicked_Parms), Z_Construct_UFunction_UCoreInputSwitcherWidget_OnButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_OnButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputSwitcherWidget_OnButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_OnButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInputSwitcherWidget_OnButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInputSwitcherWidget_OnButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInputSwitcherWidget_OnInputPromptTriggered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputSwitcherWidget_OnInputPromptTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInputSwitcherWidget_OnInputPromptTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInputSwitcherWidget, nullptr, "OnInputPromptTriggered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputSwitcherWidget_OnInputPromptTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_OnInputPromptTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInputSwitcherWidget_OnInputPromptTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInputSwitcherWidget_OnInputPromptTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInputSwitcherWidget_SetAdditionalIcon_Statics
	{
		struct CoreInputSwitcherWidget_eventSetAdditionalIcon_Parms
		{
			TSoftObjectPtr<UTexture2D> iconTexture;
		};
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_iconTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UCoreInputSwitcherWidget_SetAdditionalIcon_Statics::NewProp_iconTexture = { "iconTexture", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreInputSwitcherWidget_eventSetAdditionalIcon_Parms, iconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInputSwitcherWidget_SetAdditionalIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInputSwitcherWidget_SetAdditionalIcon_Statics::NewProp_iconTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputSwitcherWidget_SetAdditionalIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInputSwitcherWidget_SetAdditionalIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInputSwitcherWidget, nullptr, "SetAdditionalIcon", nullptr, nullptr, sizeof(CoreInputSwitcherWidget_eventSetAdditionalIcon_Parms), Z_Construct_UFunction_UCoreInputSwitcherWidget_SetAdditionalIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetAdditionalIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetAdditionalIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetAdditionalIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInputSwitcherWidget_SetAdditionalIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInputSwitcherWidget_SetAdditionalIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInputSwitcherWidget_SetAlignment_Statics
	{
		struct CoreInputSwitcherWidget_eventSetAlignment_Parms
		{
			TEnumAsByte<ETextJustify::Type> newAlignment;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreInputSwitcherWidget_SetAlignment_Statics::NewProp_newAlignment = { "newAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreInputSwitcherWidget_eventSetAlignment_Parms, newAlignment), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInputSwitcherWidget_SetAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInputSwitcherWidget_SetAlignment_Statics::NewProp_newAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputSwitcherWidget_SetAlignment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInputSwitcherWidget_SetAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInputSwitcherWidget, nullptr, "SetAlignment", nullptr, nullptr, sizeof(CoreInputSwitcherWidget_eventSetAlignment_Parms), Z_Construct_UFunction_UCoreInputSwitcherWidget_SetAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInputSwitcherWidget_SetAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInputSwitcherWidget_SetAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInputSwitcherWidget_SetBackground_Statics
	{
		struct CoreInputSwitcherWidget_eventSetBackground_Parms
		{
			TSoftObjectPtr<UMaterialInstance> backgroundMaterial;
		};
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_backgroundMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UCoreInputSwitcherWidget_SetBackground_Statics::NewProp_backgroundMaterial = { "backgroundMaterial", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreInputSwitcherWidget_eventSetBackground_Parms, backgroundMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInputSwitcherWidget_SetBackground_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInputSwitcherWidget_SetBackground_Statics::NewProp_backgroundMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputSwitcherWidget_SetBackground_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInputSwitcherWidget_SetBackground_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInputSwitcherWidget, nullptr, "SetBackground", nullptr, nullptr, sizeof(CoreInputSwitcherWidget_eventSetBackground_Parms), Z_Construct_UFunction_UCoreInputSwitcherWidget_SetBackground_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetBackground_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetBackground_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetBackground_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInputSwitcherWidget_SetBackground()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInputSwitcherWidget_SetBackground_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInputSwitcherWidget_SetEnabled_Statics
	{
		struct CoreInputSwitcherWidget_eventSetEnabled_Parms
		{
			bool isEnabled;
		};
		static void NewProp_isEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreInputSwitcherWidget_SetEnabled_Statics::NewProp_isEnabled_SetBit(void* Obj)
	{
		((CoreInputSwitcherWidget_eventSetEnabled_Parms*)Obj)->isEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreInputSwitcherWidget_SetEnabled_Statics::NewProp_isEnabled = { "isEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreInputSwitcherWidget_eventSetEnabled_Parms), &Z_Construct_UFunction_UCoreInputSwitcherWidget_SetEnabled_Statics::NewProp_isEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInputSwitcherWidget_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInputSwitcherWidget_SetEnabled_Statics::NewProp_isEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputSwitcherWidget_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInputSwitcherWidget_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInputSwitcherWidget, nullptr, "SetEnabled", nullptr, nullptr, sizeof(CoreInputSwitcherWidget_eventSetEnabled_Parms), Z_Construct_UFunction_UCoreInputSwitcherWidget_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInputSwitcherWidget_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInputSwitcherWidget_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInputSwitcherWidget_SetKeyOverride_Statics
	{
		struct CoreInputSwitcherWidget_eventSetKeyOverride_Parms
		{
			FKey keyOverride;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_keyOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_keyOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputSwitcherWidget_SetKeyOverride_Statics::NewProp_keyOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreInputSwitcherWidget_SetKeyOverride_Statics::NewProp_keyOverride = { "keyOverride", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreInputSwitcherWidget_eventSetKeyOverride_Parms, keyOverride), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetKeyOverride_Statics::NewProp_keyOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetKeyOverride_Statics::NewProp_keyOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInputSwitcherWidget_SetKeyOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInputSwitcherWidget_SetKeyOverride_Statics::NewProp_keyOverride,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputSwitcherWidget_SetKeyOverride_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInputSwitcherWidget_SetKeyOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInputSwitcherWidget, nullptr, "SetKeyOverride", nullptr, nullptr, sizeof(CoreInputSwitcherWidget_eventSetKeyOverride_Parms), Z_Construct_UFunction_UCoreInputSwitcherWidget_SetKeyOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetKeyOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetKeyOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetKeyOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInputSwitcherWidget_SetKeyOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInputSwitcherWidget_SetKeyOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInputSwitcherWidget_SetLabel_Statics
	{
		struct CoreInputSwitcherWidget_eventSetLabel_Parms
		{
			FText label;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_label_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_label;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputSwitcherWidget_SetLabel_Statics::NewProp_label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreInputSwitcherWidget_SetLabel_Statics::NewProp_label = { "label", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreInputSwitcherWidget_eventSetLabel_Parms, label), METADATA_PARAMS(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetLabel_Statics::NewProp_label_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetLabel_Statics::NewProp_label_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInputSwitcherWidget_SetLabel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInputSwitcherWidget_SetLabel_Statics::NewProp_label,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputSwitcherWidget_SetLabel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInputSwitcherWidget_SetLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInputSwitcherWidget, nullptr, "SetLabel", nullptr, nullptr, sizeof(CoreInputSwitcherWidget_eventSetLabel_Parms), Z_Construct_UFunction_UCoreInputSwitcherWidget_SetLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInputSwitcherWidget_SetLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInputSwitcherWidget_SetLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInputSwitcherWidget_SetRepeatable_Statics
	{
		struct CoreInputSwitcherWidget_eventSetRepeatable_Parms
		{
			bool isRepeatable;
			UCurveFloat* repetitionDelayCurve;
		};
		static void NewProp_isRepeatable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isRepeatable;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_repetitionDelayCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreInputSwitcherWidget_SetRepeatable_Statics::NewProp_isRepeatable_SetBit(void* Obj)
	{
		((CoreInputSwitcherWidget_eventSetRepeatable_Parms*)Obj)->isRepeatable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreInputSwitcherWidget_SetRepeatable_Statics::NewProp_isRepeatable = { "isRepeatable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreInputSwitcherWidget_eventSetRepeatable_Parms), &Z_Construct_UFunction_UCoreInputSwitcherWidget_SetRepeatable_Statics::NewProp_isRepeatable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreInputSwitcherWidget_SetRepeatable_Statics::NewProp_repetitionDelayCurve = { "repetitionDelayCurve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreInputSwitcherWidget_eventSetRepeatable_Parms, repetitionDelayCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInputSwitcherWidget_SetRepeatable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInputSwitcherWidget_SetRepeatable_Statics::NewProp_isRepeatable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInputSwitcherWidget_SetRepeatable_Statics::NewProp_repetitionDelayCurve,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputSwitcherWidget_SetRepeatable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInputSwitcherWidget_SetRepeatable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInputSwitcherWidget, nullptr, "SetRepeatable", nullptr, nullptr, sizeof(CoreInputSwitcherWidget_eventSetRepeatable_Parms), Z_Construct_UFunction_UCoreInputSwitcherWidget_SetRepeatable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetRepeatable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetRepeatable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetRepeatable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInputSwitcherWidget_SetRepeatable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInputSwitcherWidget_SetRepeatable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInputSwitcherWidget_SetUIAction_Statics
	{
		struct CoreInputSwitcherWidget_eventSetUIAction_Parms
		{
			EUIActionType actionType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_actionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_actionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreInputSwitcherWidget_SetUIAction_Statics::NewProp_actionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputSwitcherWidget_SetUIAction_Statics::NewProp_actionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreInputSwitcherWidget_SetUIAction_Statics::NewProp_actionType = { "actionType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreInputSwitcherWidget_eventSetUIAction_Parms, actionType), Z_Construct_UEnum_DBDInput_EUIActionType, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetUIAction_Statics::NewProp_actionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetUIAction_Statics::NewProp_actionType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInputSwitcherWidget_SetUIAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInputSwitcherWidget_SetUIAction_Statics::NewProp_actionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInputSwitcherWidget_SetUIAction_Statics::NewProp_actionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputSwitcherWidget_SetUIAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInputSwitcherWidget_SetUIAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInputSwitcherWidget, nullptr, "SetUIAction", nullptr, nullptr, sizeof(CoreInputSwitcherWidget_eventSetUIAction_Parms), Z_Construct_UFunction_UCoreInputSwitcherWidget_SetUIAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetUIAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetUIAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputSwitcherWidget_SetUIAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInputSwitcherWidget_SetUIAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInputSwitcherWidget_SetUIAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister()
	{
		return UCoreInputSwitcherWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreInputSwitcherWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ButtonDisplayRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonDisplayRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ButtonDisplayRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputPromptDisplayRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPromptDisplayRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputPromptDisplayRule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonPressedSfxName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ButtonPressedSfxName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonPressedSfx_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonPressedSfx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonHoveredSfxName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ButtonHoveredSfxName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonHoveredSfx_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonHoveredSfx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputTriggeredSfxName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InputTriggeredSfxName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputTriggeredSfx_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputTriggeredSfx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPrompt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputPrompt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__shouldRegisterForInputInConstruct_MetaData[];
#endif
		static void NewProp__shouldRegisterForInputInConstruct_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__shouldRegisterForInputInConstruct;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__alignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__alignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isEnabled_MetaData[];
#endif
		static void NewProp__isEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onInputSwitcherTriggeredDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__onInputSwitcherTriggeredDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendAnalyticsData_MetaData[];
#endif
		static void NewProp_SendAnalyticsData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SendAnalyticsData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnalyticsName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AnalyticsName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreInputSwitcherWidget_GetButton, "GetButton" }, // 3746451940
		{ &Z_Construct_UFunction_UCoreInputSwitcherWidget_GetInputPrompt, "GetInputPrompt" }, // 887376288
		{ &Z_Construct_UFunction_UCoreInputSwitcherWidget_OnAlignmentChanged, "OnAlignmentChanged" }, // 2526682997
		{ &Z_Construct_UFunction_UCoreInputSwitcherWidget_OnButtonClicked, "OnButtonClicked" }, // 590397221
		{ &Z_Construct_UFunction_UCoreInputSwitcherWidget_OnInputPromptTriggered, "OnInputPromptTriggered" }, // 371648791
		{ &Z_Construct_UFunction_UCoreInputSwitcherWidget_SetAdditionalIcon, "SetAdditionalIcon" }, // 2229235319
		{ &Z_Construct_UFunction_UCoreInputSwitcherWidget_SetAlignment, "SetAlignment" }, // 655627776
		{ &Z_Construct_UFunction_UCoreInputSwitcherWidget_SetBackground, "SetBackground" }, // 1313428866
		{ &Z_Construct_UFunction_UCoreInputSwitcherWidget_SetEnabled, "SetEnabled" }, // 1564076619
		{ &Z_Construct_UFunction_UCoreInputSwitcherWidget_SetKeyOverride, "SetKeyOverride" }, // 633976760
		{ &Z_Construct_UFunction_UCoreInputSwitcherWidget_SetLabel, "SetLabel" }, // 3809841117
		{ &Z_Construct_UFunction_UCoreInputSwitcherWidget_SetRepeatable, "SetRepeatable" }, // 2392385069
		{ &Z_Construct_UFunction_UCoreInputSwitcherWidget_SetUIAction, "SetUIAction" }, // 1669566770
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreInputSwitcherWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonDisplayRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonDisplayRule_MetaData[] = {
		{ "Category", "CoreInputSwitcherWidget" },
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonDisplayRule = { "ButtonDisplayRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInputSwitcherWidget, ButtonDisplayRule), Z_Construct_UEnum_DBDUIViewsCore_EInputSwitcherDisplayRule, METADATA_PARAMS(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonDisplayRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonDisplayRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_InputPromptDisplayRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_InputPromptDisplayRule_MetaData[] = {
		{ "Category", "CoreInputSwitcherWidget" },
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_InputPromptDisplayRule = { "InputPromptDisplayRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInputSwitcherWidget, InputPromptDisplayRule), Z_Construct_UEnum_DBDUIViewsCore_EInputSwitcherDisplayRule, METADATA_PARAMS(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_InputPromptDisplayRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_InputPromptDisplayRule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonPressedSfxName_MetaData[] = {
		{ "Category", "CoreInputSwitcherWidget" },
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonPressedSfxName = { "ButtonPressedSfxName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInputSwitcherWidget, ButtonPressedSfxName), METADATA_PARAMS(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonPressedSfxName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonPressedSfxName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonPressedSfx_MetaData[] = {
		{ "Category", "CoreInputSwitcherWidget" },
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonPressedSfx = { "ButtonPressedSfx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInputSwitcherWidget, ButtonPressedSfx), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonPressedSfx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonPressedSfx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonHoveredSfxName_MetaData[] = {
		{ "Category", "CoreInputSwitcherWidget" },
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonHoveredSfxName = { "ButtonHoveredSfxName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInputSwitcherWidget, ButtonHoveredSfxName), METADATA_PARAMS(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonHoveredSfxName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonHoveredSfxName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonHoveredSfx_MetaData[] = {
		{ "Category", "CoreInputSwitcherWidget" },
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonHoveredSfx = { "ButtonHoveredSfx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInputSwitcherWidget, ButtonHoveredSfx), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonHoveredSfx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonHoveredSfx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_InputTriggeredSfxName_MetaData[] = {
		{ "Category", "CoreInputSwitcherWidget" },
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_InputTriggeredSfxName = { "InputTriggeredSfxName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInputSwitcherWidget, InputTriggeredSfxName), METADATA_PARAMS(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_InputTriggeredSfxName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_InputTriggeredSfxName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_InputTriggeredSfx_MetaData[] = {
		{ "Category", "CoreInputSwitcherWidget" },
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_InputTriggeredSfx = { "InputTriggeredSfx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInputSwitcherWidget, InputTriggeredSfx), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_InputTriggeredSfx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_InputTriggeredSfx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_InputPrompt_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreInputSwitcherWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_InputPrompt = { "InputPrompt", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInputSwitcherWidget, InputPrompt), Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_InputPrompt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_InputPrompt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_Button_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreInputSwitcherWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInputSwitcherWidget, Button), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_Button_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp__shouldRegisterForInputInConstruct_MetaData[] = {
		{ "Category", "CoreInputSwitcherWidget" },
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp__shouldRegisterForInputInConstruct_SetBit(void* Obj)
	{
		((UCoreInputSwitcherWidget*)Obj)->_shouldRegisterForInputInConstruct = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp__shouldRegisterForInputInConstruct = { "_shouldRegisterForInputInConstruct", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreInputSwitcherWidget), &Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp__shouldRegisterForInputInConstruct_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp__shouldRegisterForInputInConstruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp__shouldRegisterForInputInConstruct_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp__alignment_MetaData[] = {
		{ "Category", "CoreInputSwitcherWidget" },
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp__alignment = { "_alignment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInputSwitcherWidget, _alignment), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp__alignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp__alignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp__isEnabled_MetaData[] = {
		{ "Category", "CoreInputSwitcherWidget" },
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp__isEnabled_SetBit(void* Obj)
	{
		((UCoreInputSwitcherWidget*)Obj)->_isEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp__isEnabled = { "_isEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreInputSwitcherWidget), &Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp__isEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp__isEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp__isEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp__onInputSwitcherTriggeredDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreInputSwitcherWidget" },
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp__onInputSwitcherTriggeredDelegate = { "_onInputSwitcherTriggeredDelegate", nullptr, (EPropertyFlags)0x0040000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInputSwitcherWidget, _onInputSwitcherTriggeredDelegate), Z_Construct_UDelegateFunction_DBDUIViewsCore_InputSwitcherTriggeredDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp__onInputSwitcherTriggeredDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp__onInputSwitcherTriggeredDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_SendAnalyticsData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreInputSwitcherWidget" },
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_SendAnalyticsData_SetBit(void* Obj)
	{
		((UCoreInputSwitcherWidget*)Obj)->SendAnalyticsData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_SendAnalyticsData = { "SendAnalyticsData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreInputSwitcherWidget), &Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_SendAnalyticsData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_SendAnalyticsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_SendAnalyticsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_AnalyticsName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreInputSwitcherWidget" },
		{ "ModuleRelativePath", "Public/CoreInputSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_AnalyticsName = { "AnalyticsName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInputSwitcherWidget, AnalyticsName), METADATA_PARAMS(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_AnalyticsName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_AnalyticsName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonDisplayRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonDisplayRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_InputPromptDisplayRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_InputPromptDisplayRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonPressedSfxName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonPressedSfx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonHoveredSfxName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_ButtonHoveredSfx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_InputTriggeredSfxName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_InputTriggeredSfx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_InputPrompt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_Button,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp__shouldRegisterForInputInConstruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp__alignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp__isEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp__onInputSwitcherTriggeredDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_SendAnalyticsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::NewProp_AnalyticsName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreInputSwitcherWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::ClassParams = {
		&UCoreInputSwitcherWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreInputSwitcherWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreInputSwitcherWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreInputSwitcherWidget, 1116586011);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreInputSwitcherWidget>()
	{
		return UCoreInputSwitcherWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreInputSwitcherWidget(Z_Construct_UClass_UCoreInputSwitcherWidget, &UCoreInputSwitcherWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreInputSwitcherWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreInputSwitcherWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
