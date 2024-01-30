// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreArchiveJournalImageViewerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreArchiveJournalImageViewerWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContentWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ImageViewerBackActionDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ImageViewerTextVisibilityActionDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ImageViewerVoiceOverPlayed__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ImageViewerVoiceOverAutoplay__DelegateSignature();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveImageViewerViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreArchiveJournalImageViewerWidget::execOnTextVisibilityChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTextVisibilityChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveJournalImageViewerWidget::execOnVoiceOverAutoPlay)
	{
		P_GET_UBOOL(Z_Param_autoplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVoiceOverAutoPlay(Z_Param_autoplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveJournalImageViewerWidget::execOnVoiceOverPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVoiceOverPlay();
		P_NATIVE_END;
	}
	static FName NAME_UCoreArchiveJournalImageViewerWidget_SetData = FName(TEXT("SetData"));
	void UCoreArchiveJournalImageViewerWidget::SetData(FArchivesVignetteEntryViewData const& data, bool hasTitle, bool hasDescription)
	{
		CoreArchiveJournalImageViewerWidget_eventSetData_Parms Parms;
		Parms.data=data;
		Parms.hasTitle=hasTitle ? true : false;
		Parms.hasDescription=hasDescription ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveJournalImageViewerWidget_SetData),&Parms);
	}
	static FName NAME_UCoreArchiveJournalImageViewerWidget_SetScrollData = FName(TEXT("SetScrollData"));
	void UCoreArchiveJournalImageViewerWidget::SetScrollData(FText const& journalEntryScrollPromptText)
	{
		CoreArchiveJournalImageViewerWidget_eventSetScrollData_Parms Parms;
		Parms.journalEntryScrollPromptText=journalEntryScrollPromptText;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveJournalImageViewerWidget_SetScrollData),&Parms);
	}
	static FName NAME_UCoreArchiveJournalImageViewerWidget_SetTextVisibilityInputText = FName(TEXT("SetTextVisibilityInputText"));
	void UCoreArchiveJournalImageViewerWidget::SetTextVisibilityInputText(FText const& displayText, FText const& hideText)
	{
		CoreArchiveJournalImageViewerWidget_eventSetTextVisibilityInputText_Parms Parms;
		Parms.displayText=displayText;
		Parms.hideText=hideText;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveJournalImageViewerWidget_SetTextVisibilityInputText),&Parms);
	}
	static FName NAME_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText = FName(TEXT("SetVoiceOverText"));
	void UCoreArchiveJournalImageViewerWidget::SetVoiceOverText(FText const& playVoiceOverText, FText const& stopVoiceOverText, FText const& autoplayVoiceOverText)
	{
		CoreArchiveJournalImageViewerWidget_eventSetVoiceOverText_Parms Parms;
		Parms.playVoiceOverText=playVoiceOverText;
		Parms.stopVoiceOverText=stopVoiceOverText;
		Parms.autoplayVoiceOverText=autoplayVoiceOverText;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText),&Parms);
	}
	void UCoreArchiveJournalImageViewerWidget::StaticRegisterNativesUCoreArchiveJournalImageViewerWidget()
	{
		UClass* Class = UCoreArchiveJournalImageViewerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTextVisibilityChanged", &UCoreArchiveJournalImageViewerWidget::execOnTextVisibilityChanged },
			{ "OnVoiceOverAutoPlay", &UCoreArchiveJournalImageViewerWidget::execOnVoiceOverAutoPlay },
			{ "OnVoiceOverPlay", &UCoreArchiveJournalImageViewerWidget::execOnVoiceOverPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnTextVisibilityChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnTextVisibilityChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveJournalImageViewerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnTextVisibilityChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget, nullptr, "OnTextVisibilityChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnTextVisibilityChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnTextVisibilityChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnTextVisibilityChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnTextVisibilityChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnVoiceOverAutoPlay_Statics
	{
		struct CoreArchiveJournalImageViewerWidget_eventOnVoiceOverAutoPlay_Parms
		{
			bool autoplay;
		};
		static void NewProp_autoplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_autoplay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnVoiceOverAutoPlay_Statics::NewProp_autoplay_SetBit(void* Obj)
	{
		((CoreArchiveJournalImageViewerWidget_eventOnVoiceOverAutoPlay_Parms*)Obj)->autoplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnVoiceOverAutoPlay_Statics::NewProp_autoplay = { "autoplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveJournalImageViewerWidget_eventOnVoiceOverAutoPlay_Parms), &Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnVoiceOverAutoPlay_Statics::NewProp_autoplay_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnVoiceOverAutoPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnVoiceOverAutoPlay_Statics::NewProp_autoplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnVoiceOverAutoPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveJournalImageViewerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnVoiceOverAutoPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget, nullptr, "OnVoiceOverAutoPlay", nullptr, nullptr, sizeof(CoreArchiveJournalImageViewerWidget_eventOnVoiceOverAutoPlay_Parms), Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnVoiceOverAutoPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnVoiceOverAutoPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnVoiceOverAutoPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnVoiceOverAutoPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnVoiceOverAutoPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnVoiceOverAutoPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnVoiceOverPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnVoiceOverPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveJournalImageViewerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnVoiceOverPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget, nullptr, "OnVoiceOverPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnVoiceOverPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnVoiceOverPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnVoiceOverPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnVoiceOverPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasTitle_MetaData[];
#endif
		static void NewProp_hasTitle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasDescription_MetaData[];
#endif
		static void NewProp_hasDescription_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasDescription;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveJournalImageViewerWidget_eventSetData_Parms, data), Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::NewProp_data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::NewProp_hasTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::NewProp_hasTitle_SetBit(void* Obj)
	{
		((CoreArchiveJournalImageViewerWidget_eventSetData_Parms*)Obj)->hasTitle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::NewProp_hasTitle = { "hasTitle", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveJournalImageViewerWidget_eventSetData_Parms), &Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::NewProp_hasTitle_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::NewProp_hasTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::NewProp_hasTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::NewProp_hasDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::NewProp_hasDescription_SetBit(void* Obj)
	{
		((CoreArchiveJournalImageViewerWidget_eventSetData_Parms*)Obj)->hasDescription = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::NewProp_hasDescription = { "hasDescription", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveJournalImageViewerWidget_eventSetData_Parms), &Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::NewProp_hasDescription_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::NewProp_hasDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::NewProp_hasDescription_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::NewProp_hasTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::NewProp_hasDescription,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveJournalImageViewerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget, nullptr, "SetData", nullptr, nullptr, sizeof(CoreArchiveJournalImageViewerWidget_eventSetData_Parms), Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetScrollData_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetScrollData_Statics::NewProp_journalEntryScrollPromptText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetScrollData_Statics::NewProp_journalEntryScrollPromptText = { "journalEntryScrollPromptText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveJournalImageViewerWidget_eventSetScrollData_Parms, journalEntryScrollPromptText), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetScrollData_Statics::NewProp_journalEntryScrollPromptText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetScrollData_Statics::NewProp_journalEntryScrollPromptText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetScrollData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetScrollData_Statics::NewProp_journalEntryScrollPromptText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetScrollData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveJournalImageViewerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetScrollData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget, nullptr, "SetScrollData", nullptr, nullptr, sizeof(CoreArchiveJournalImageViewerWidget_eventSetScrollData_Parms), Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetScrollData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetScrollData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetScrollData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetScrollData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetScrollData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetScrollData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetTextVisibilityInputText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_displayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_displayText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hideText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_hideText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetTextVisibilityInputText_Statics::NewProp_displayText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetTextVisibilityInputText_Statics::NewProp_displayText = { "displayText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveJournalImageViewerWidget_eventSetTextVisibilityInputText_Parms, displayText), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetTextVisibilityInputText_Statics::NewProp_displayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetTextVisibilityInputText_Statics::NewProp_displayText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetTextVisibilityInputText_Statics::NewProp_hideText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetTextVisibilityInputText_Statics::NewProp_hideText = { "hideText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveJournalImageViewerWidget_eventSetTextVisibilityInputText_Parms, hideText), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetTextVisibilityInputText_Statics::NewProp_hideText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetTextVisibilityInputText_Statics::NewProp_hideText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetTextVisibilityInputText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetTextVisibilityInputText_Statics::NewProp_displayText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetTextVisibilityInputText_Statics::NewProp_hideText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetTextVisibilityInputText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveJournalImageViewerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetTextVisibilityInputText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget, nullptr, "SetTextVisibilityInputText", nullptr, nullptr, sizeof(CoreArchiveJournalImageViewerWidget_eventSetTextVisibilityInputText_Parms), Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetTextVisibilityInputText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetTextVisibilityInputText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetTextVisibilityInputText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetTextVisibilityInputText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetTextVisibilityInputText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetTextVisibilityInputText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playVoiceOverText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_playVoiceOverText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stopVoiceOverText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_stopVoiceOverText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_autoplayVoiceOverText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_autoplayVoiceOverText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText_Statics::NewProp_playVoiceOverText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText_Statics::NewProp_playVoiceOverText = { "playVoiceOverText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveJournalImageViewerWidget_eventSetVoiceOverText_Parms, playVoiceOverText), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText_Statics::NewProp_playVoiceOverText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText_Statics::NewProp_playVoiceOverText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText_Statics::NewProp_stopVoiceOverText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText_Statics::NewProp_stopVoiceOverText = { "stopVoiceOverText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveJournalImageViewerWidget_eventSetVoiceOverText_Parms, stopVoiceOverText), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText_Statics::NewProp_stopVoiceOverText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText_Statics::NewProp_stopVoiceOverText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText_Statics::NewProp_autoplayVoiceOverText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText_Statics::NewProp_autoplayVoiceOverText = { "autoplayVoiceOverText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveJournalImageViewerWidget_eventSetVoiceOverText_Parms, autoplayVoiceOverText), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText_Statics::NewProp_autoplayVoiceOverText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText_Statics::NewProp_autoplayVoiceOverText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText_Statics::NewProp_playVoiceOverText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText_Statics::NewProp_stopVoiceOverText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText_Statics::NewProp_autoplayVoiceOverText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveJournalImageViewerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget, nullptr, "SetVoiceOverText", nullptr, nullptr, sizeof(CoreArchiveJournalImageViewerWidget_eventSetVoiceOverText_Parms), Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_NoRegister()
	{
		return UCoreArchiveJournalImageViewerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackInputSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackInputSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextVisibilityInputSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextVisibilityInputSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__backActionDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__backActionDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__imageViewerTextVisibilityActionDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__imageViewerTextVisibilityActionDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__imageViewerVoiceOverPlayedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__imageViewerVoiceOverPlayedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__imageViewerVoiceOverAutoplayDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__imageViewerVoiceOverAutoplayDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreTabContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnTextVisibilityChanged, "OnTextVisibilityChanged" }, // 2532127987
		{ &Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnVoiceOverAutoPlay, "OnVoiceOverAutoPlay" }, // 3427979881
		{ &Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_OnVoiceOverPlay, "OnVoiceOverPlay" }, // 2642757968
		{ &Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetData, "SetData" }, // 3667342043
		{ &Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetScrollData, "SetScrollData" }, // 159030626
		{ &Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetTextVisibilityInputText, "SetTextVisibilityInputText" }, // 973799609
		{ &Z_Construct_UFunction_UCoreArchiveJournalImageViewerWidget_SetVoiceOverText, "SetVoiceOverText" }, // 863045128
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreArchiveJournalImageViewerWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveJournalImageViewerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp_BackInputSwitcher_MetaData[] = {
		{ "Category", "CoreArchiveJournalImageViewerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveJournalImageViewerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp_BackInputSwitcher = { "BackInputSwitcher", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveJournalImageViewerWidget, BackInputSwitcher), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp_BackInputSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp_BackInputSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp_TextVisibilityInputSwitcher_MetaData[] = {
		{ "Category", "CoreArchiveJournalImageViewerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveJournalImageViewerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp_TextVisibilityInputSwitcher = { "TextVisibilityInputSwitcher", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveJournalImageViewerWidget, TextVisibilityInputSwitcher), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp_TextVisibilityInputSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp_TextVisibilityInputSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp__backActionDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreArchiveJournalImageViewerWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveJournalImageViewerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp__backActionDelegate = { "_backActionDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveJournalImageViewerWidget, _backActionDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ImageViewerBackActionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp__backActionDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp__backActionDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp__imageViewerTextVisibilityActionDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreArchiveJournalImageViewerWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveJournalImageViewerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp__imageViewerTextVisibilityActionDelegate = { "_imageViewerTextVisibilityActionDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveJournalImageViewerWidget, _imageViewerTextVisibilityActionDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ImageViewerTextVisibilityActionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp__imageViewerTextVisibilityActionDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp__imageViewerTextVisibilityActionDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp__imageViewerVoiceOverPlayedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreArchiveJournalImageViewerWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveJournalImageViewerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp__imageViewerVoiceOverPlayedDelegate = { "_imageViewerVoiceOverPlayedDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveJournalImageViewerWidget, _imageViewerVoiceOverPlayedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ImageViewerVoiceOverPlayed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp__imageViewerVoiceOverPlayedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp__imageViewerVoiceOverPlayedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp__imageViewerVoiceOverAutoplayDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreArchiveJournalImageViewerWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveJournalImageViewerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp__imageViewerVoiceOverAutoplayDelegate = { "_imageViewerVoiceOverAutoplayDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveJournalImageViewerWidget, _imageViewerVoiceOverAutoplayDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ImageViewerVoiceOverAutoplay__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp__imageViewerVoiceOverAutoplayDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp__imageViewerVoiceOverAutoplayDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp_BackInputSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp_TextVisibilityInputSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp__backActionDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp__imageViewerTextVisibilityActionDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp__imageViewerVoiceOverPlayedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::NewProp__imageViewerVoiceOverAutoplayDelegate,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UArchiveImageViewerViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreArchiveJournalImageViewerWidget, IArchiveImageViewerViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreArchiveJournalImageViewerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::ClassParams = {
		&UCoreArchiveJournalImageViewerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreArchiveJournalImageViewerWidget, 2742281483);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreArchiveJournalImageViewerWidget>()
	{
		return UCoreArchiveJournalImageViewerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreArchiveJournalImageViewerWidget(Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget, &UCoreArchiveJournalImageViewerWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreArchiveJournalImageViewerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreArchiveJournalImageViewerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
