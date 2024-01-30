// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreGenericTextInputPopupWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreGenericTextInputPopupWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreGenericTextInputPopupWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreGenericTextInputPopupWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreGenericPopupWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPopupButtonType();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDScrollBox_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDButton_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UGenericTextInputPopupViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreGenericTextInputPopupWidget::execOnButtonHovered)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_button);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonHovered(Z_Param_button);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreGenericTextInputPopupWidget::execOnButtonUnhovered)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_button);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonUnhovered(Z_Param_button);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreGenericTextInputPopupWidget::execOnKeyboardButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKeyboardButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreGenericTextInputPopupWidget::execOnTextCommitted)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_inText);
		P_GET_PROPERTY(FByteProperty,Z_Param_inCommitType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTextCommitted(Z_Param_Out_inText,ETextCommit::Type(Z_Param_inCommitType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreGenericTextInputPopupWidget::execOnTextEntered)
	{
		P_GET_ENUM(EPopupButtonType,Z_Param_selectedButtonType);
		P_GET_PROPERTY(FStrProperty,Z_Param_inputText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTextEntered(EPopupButtonType(Z_Param_selectedButtonType),Z_Param_inputText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreGenericTextInputPopupWidget::execOnTextInputChoiceSelected)
	{
		P_GET_ENUM(EPopupButtonType,Z_Param_selectedButtonType);
		P_GET_PROPERTY(FStrProperty,Z_Param_inputText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTextInputChoiceSelected(EPopupButtonType(Z_Param_selectedButtonType),Z_Param_inputText);
		P_NATIVE_END;
	}
	void UCoreGenericTextInputPopupWidget::StaticRegisterNativesUCoreGenericTextInputPopupWidget()
	{
		UClass* Class = UCoreGenericTextInputPopupWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnButtonHovered", &UCoreGenericTextInputPopupWidget::execOnButtonHovered },
			{ "OnButtonUnhovered", &UCoreGenericTextInputPopupWidget::execOnButtonUnhovered },
			{ "OnKeyboardButtonClicked", &UCoreGenericTextInputPopupWidget::execOnKeyboardButtonClicked },
			{ "OnTextCommitted", &UCoreGenericTextInputPopupWidget::execOnTextCommitted },
			{ "OnTextEntered", &UCoreGenericTextInputPopupWidget::execOnTextEntered },
			{ "OnTextInputChoiceSelected", &UCoreGenericTextInputPopupWidget::execOnTextInputChoiceSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonHovered_Statics
	{
		struct CoreGenericTextInputPopupWidget_eventOnButtonHovered_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonHovered_Statics::NewProp_button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonHovered_Statics::NewProp_button = { "button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreGenericTextInputPopupWidget_eventOnButtonHovered_Parms, button), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonHovered_Statics::NewProp_button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonHovered_Statics::NewProp_button_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonHovered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonHovered_Statics::NewProp_button,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreGenericTextInputPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreGenericTextInputPopupWidget, nullptr, "OnButtonHovered", nullptr, nullptr, sizeof(CoreGenericTextInputPopupWidget_eventOnButtonHovered_Parms), Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonHovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonHovered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonUnhovered_Statics
	{
		struct CoreGenericTextInputPopupWidget_eventOnButtonUnhovered_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonUnhovered_Statics::NewProp_button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonUnhovered_Statics::NewProp_button = { "button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreGenericTextInputPopupWidget_eventOnButtonUnhovered_Parms, button), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonUnhovered_Statics::NewProp_button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonUnhovered_Statics::NewProp_button_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonUnhovered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonUnhovered_Statics::NewProp_button,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonUnhovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreGenericTextInputPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonUnhovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreGenericTextInputPopupWidget, nullptr, "OnButtonUnhovered", nullptr, nullptr, sizeof(CoreGenericTextInputPopupWidget_eventOnButtonUnhovered_Parms), Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonUnhovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonUnhovered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonUnhovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonUnhovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonUnhovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonUnhovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnKeyboardButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnKeyboardButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreGenericTextInputPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnKeyboardButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreGenericTextInputPopupWidget, nullptr, "OnKeyboardButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnKeyboardButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnKeyboardButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnKeyboardButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnKeyboardButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextCommitted_Statics
	{
		struct CoreGenericTextInputPopupWidget_eventOnTextCommitted_Parms
		{
			FText inText;
			TEnumAsByte<ETextCommit::Type> inCommitType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_inText;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inCommitType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextCommitted_Statics::NewProp_inText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextCommitted_Statics::NewProp_inText = { "inText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreGenericTextInputPopupWidget_eventOnTextCommitted_Parms, inText), METADATA_PARAMS(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextCommitted_Statics::NewProp_inText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextCommitted_Statics::NewProp_inText_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextCommitted_Statics::NewProp_inCommitType = { "inCommitType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreGenericTextInputPopupWidget_eventOnTextCommitted_Parms, inCommitType), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextCommitted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextCommitted_Statics::NewProp_inText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextCommitted_Statics::NewProp_inCommitType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextCommitted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreGenericTextInputPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreGenericTextInputPopupWidget, nullptr, "OnTextCommitted", nullptr, nullptr, sizeof(CoreGenericTextInputPopupWidget_eventOnTextCommitted_Parms), Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextCommitted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextCommitted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextCommitted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextCommitted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextCommitted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextEntered_Statics
	{
		struct CoreGenericTextInputPopupWidget_eventOnTextEntered_Parms
		{
			EPopupButtonType selectedButtonType;
			FString inputText;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_selectedButtonType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_selectedButtonType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inputText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextEntered_Statics::NewProp_selectedButtonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextEntered_Statics::NewProp_selectedButtonType = { "selectedButtonType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreGenericTextInputPopupWidget_eventOnTextEntered_Parms, selectedButtonType), Z_Construct_UEnum_DBDSharedTypes_EPopupButtonType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextEntered_Statics::NewProp_inputText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextEntered_Statics::NewProp_inputText = { "inputText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreGenericTextInputPopupWidget_eventOnTextEntered_Parms, inputText), METADATA_PARAMS(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextEntered_Statics::NewProp_inputText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextEntered_Statics::NewProp_inputText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextEntered_Statics::NewProp_selectedButtonType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextEntered_Statics::NewProp_selectedButtonType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextEntered_Statics::NewProp_inputText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreGenericTextInputPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreGenericTextInputPopupWidget, nullptr, "OnTextEntered", nullptr, nullptr, sizeof(CoreGenericTextInputPopupWidget_eventOnTextEntered_Parms), Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextInputChoiceSelected_Statics
	{
		struct CoreGenericTextInputPopupWidget_eventOnTextInputChoiceSelected_Parms
		{
			EPopupButtonType selectedButtonType;
			FString inputText;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_selectedButtonType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_selectedButtonType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inputText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextInputChoiceSelected_Statics::NewProp_selectedButtonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextInputChoiceSelected_Statics::NewProp_selectedButtonType = { "selectedButtonType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreGenericTextInputPopupWidget_eventOnTextInputChoiceSelected_Parms, selectedButtonType), Z_Construct_UEnum_DBDSharedTypes_EPopupButtonType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextInputChoiceSelected_Statics::NewProp_inputText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextInputChoiceSelected_Statics::NewProp_inputText = { "inputText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreGenericTextInputPopupWidget_eventOnTextInputChoiceSelected_Parms, inputText), METADATA_PARAMS(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextInputChoiceSelected_Statics::NewProp_inputText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextInputChoiceSelected_Statics::NewProp_inputText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextInputChoiceSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextInputChoiceSelected_Statics::NewProp_selectedButtonType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextInputChoiceSelected_Statics::NewProp_selectedButtonType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextInputChoiceSelected_Statics::NewProp_inputText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextInputChoiceSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreGenericTextInputPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextInputChoiceSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreGenericTextInputPopupWidget, nullptr, "OnTextInputChoiceSelected", nullptr, nullptr, sizeof(CoreGenericTextInputPopupWidget_eventOnTextInputChoiceSelected_Parms), Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextInputChoiceSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextInputChoiceSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextInputChoiceSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextInputChoiceSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextInputChoiceSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextInputChoiceSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreGenericTextInputPopupWidget_NoRegister()
	{
		return UCoreGenericTextInputPopupWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputTextBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputTextBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageScrollBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MessageScrollBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ErrorIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessageTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ErrorMessageTextBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyboardButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KeyboardButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreGenericPopupWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonHovered, "OnButtonHovered" }, // 1084664585
		{ &Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnButtonUnhovered, "OnButtonUnhovered" }, // 3832917201
		{ &Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnKeyboardButtonClicked, "OnKeyboardButtonClicked" }, // 1757282261
		{ &Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextCommitted, "OnTextCommitted" }, // 3493938103
		{ &Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextEntered, "OnTextEntered" }, // 846651721
		{ &Z_Construct_UFunction_UCoreGenericTextInputPopupWidget_OnTextInputChoiceSelected, "OnTextInputChoiceSelected" }, // 3485572999
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreGenericTextInputPopupWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreGenericTextInputPopupWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::NewProp_InputTextBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreGenericTextInputPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreGenericTextInputPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::NewProp_InputTextBox = { "InputTextBox", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreGenericTextInputPopupWidget, InputTextBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::NewProp_InputTextBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::NewProp_InputTextBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::NewProp_MessageScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreGenericTextInputPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreGenericTextInputPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::NewProp_MessageScrollBox = { "MessageScrollBox", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreGenericTextInputPopupWidget, MessageScrollBox), Z_Construct_UClass_UDBDScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::NewProp_MessageScrollBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::NewProp_MessageScrollBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::NewProp_ErrorIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreGenericTextInputPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreGenericTextInputPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::NewProp_ErrorIcon = { "ErrorIcon", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreGenericTextInputPopupWidget, ErrorIcon), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::NewProp_ErrorIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::NewProp_ErrorIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::NewProp_ErrorMessageTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreGenericTextInputPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreGenericTextInputPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::NewProp_ErrorMessageTextBlock = { "ErrorMessageTextBlock", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreGenericTextInputPopupWidget, ErrorMessageTextBlock), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::NewProp_ErrorMessageTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::NewProp_ErrorMessageTextBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::NewProp_KeyboardButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreGenericTextInputPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreGenericTextInputPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::NewProp_KeyboardButton = { "KeyboardButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreGenericTextInputPopupWidget, KeyboardButton), Z_Construct_UClass_UDBDButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::NewProp_KeyboardButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::NewProp_KeyboardButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::NewProp_InputTextBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::NewProp_MessageScrollBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::NewProp_ErrorIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::NewProp_ErrorMessageTextBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::NewProp_KeyboardButton,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGenericTextInputPopupViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreGenericTextInputPopupWidget, IGenericTextInputPopupViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreGenericTextInputPopupWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::ClassParams = {
		&UCoreGenericTextInputPopupWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreGenericTextInputPopupWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreGenericTextInputPopupWidget, 3680780277);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreGenericTextInputPopupWidget>()
	{
		return UCoreGenericTextInputPopupWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreGenericTextInputPopupWidget(Z_Construct_UClass_UCoreGenericTextInputPopupWidget, &UCoreGenericTextInputPopupWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreGenericTextInputPopupWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreGenericTextInputPopupWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
