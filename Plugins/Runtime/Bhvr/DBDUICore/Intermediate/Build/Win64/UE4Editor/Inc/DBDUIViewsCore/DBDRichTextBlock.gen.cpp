// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/DBDRichTextBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDRichTextBlock() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDINPUT_API UClass* Z_Construct_UClass_USwitchDockStateManager_NoRegister();
	DBDUIMANAGERS_API UClass* Z_Construct_UClass_UDBDTextManager_NoRegister();
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockOverrideProperties();
// End Cross Module References
	DEFINE_FUNCTION(UDBDRichTextBlock::execGetIsUpperCase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsUpperCase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDRichTextBlock::execOnLargeTextSettingsChanged)
	{
		P_GET_UBOOL(Z_Param_isLargeText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLargeTextSettingsChanged(Z_Param_isLargeText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDRichTextBlock::execOnSwitchDockStateChanged)
	{
		P_GET_UBOOL(Z_Param_isDocked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSwitchDockStateChanged(Z_Param_isDocked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDRichTextBlock::execPreviewHTMLText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreviewHTMLText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDRichTextBlock::execPreviewLargeText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreviewLargeText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDRichTextBlock::execPreviewUndocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreviewUndocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDRichTextBlock::execSetHTMLText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHTMLText(Z_Param_Out_InText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDRichTextBlock::execSetIsUpperCase)
	{
		P_GET_UBOOL(Z_Param_isUpperCase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsUpperCase(Z_Param_isUpperCase);
		P_NATIVE_END;
	}
	void UDBDRichTextBlock::StaticRegisterNativesUDBDRichTextBlock()
	{
		UClass* Class = UDBDRichTextBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsUpperCase", &UDBDRichTextBlock::execGetIsUpperCase },
			{ "OnLargeTextSettingsChanged", &UDBDRichTextBlock::execOnLargeTextSettingsChanged },
			{ "OnSwitchDockStateChanged", &UDBDRichTextBlock::execOnSwitchDockStateChanged },
			{ "PreviewHTMLText", &UDBDRichTextBlock::execPreviewHTMLText },
			{ "PreviewLargeText", &UDBDRichTextBlock::execPreviewLargeText },
			{ "PreviewUndocked", &UDBDRichTextBlock::execPreviewUndocked },
			{ "SetHTMLText", &UDBDRichTextBlock::execSetHTMLText },
			{ "SetIsUpperCase", &UDBDRichTextBlock::execSetIsUpperCase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDRichTextBlock_GetIsUpperCase_Statics
	{
		struct DBDRichTextBlock_eventGetIsUpperCase_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDRichTextBlock_GetIsUpperCase_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDRichTextBlock_eventGetIsUpperCase_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDRichTextBlock_GetIsUpperCase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDRichTextBlock_eventGetIsUpperCase_Parms), &Z_Construct_UFunction_UDBDRichTextBlock_GetIsUpperCase_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDRichTextBlock_GetIsUpperCase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDRichTextBlock_GetIsUpperCase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDRichTextBlock_GetIsUpperCase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDRichTextBlock_GetIsUpperCase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDRichTextBlock, nullptr, "GetIsUpperCase", nullptr, nullptr, sizeof(DBDRichTextBlock_eventGetIsUpperCase_Parms), Z_Construct_UFunction_UDBDRichTextBlock_GetIsUpperCase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDRichTextBlock_GetIsUpperCase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDRichTextBlock_GetIsUpperCase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDRichTextBlock_GetIsUpperCase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDRichTextBlock_GetIsUpperCase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDRichTextBlock_GetIsUpperCase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDRichTextBlock_OnLargeTextSettingsChanged_Statics
	{
		struct DBDRichTextBlock_eventOnLargeTextSettingsChanged_Parms
		{
			bool isLargeText;
		};
		static void NewProp_isLargeText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLargeText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDRichTextBlock_OnLargeTextSettingsChanged_Statics::NewProp_isLargeText_SetBit(void* Obj)
	{
		((DBDRichTextBlock_eventOnLargeTextSettingsChanged_Parms*)Obj)->isLargeText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDRichTextBlock_OnLargeTextSettingsChanged_Statics::NewProp_isLargeText = { "isLargeText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDRichTextBlock_eventOnLargeTextSettingsChanged_Parms), &Z_Construct_UFunction_UDBDRichTextBlock_OnLargeTextSettingsChanged_Statics::NewProp_isLargeText_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDRichTextBlock_OnLargeTextSettingsChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDRichTextBlock_OnLargeTextSettingsChanged_Statics::NewProp_isLargeText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDRichTextBlock_OnLargeTextSettingsChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDRichTextBlock_OnLargeTextSettingsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDRichTextBlock, nullptr, "OnLargeTextSettingsChanged", nullptr, nullptr, sizeof(DBDRichTextBlock_eventOnLargeTextSettingsChanged_Parms), Z_Construct_UFunction_UDBDRichTextBlock_OnLargeTextSettingsChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDRichTextBlock_OnLargeTextSettingsChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDRichTextBlock_OnLargeTextSettingsChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDRichTextBlock_OnLargeTextSettingsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDRichTextBlock_OnLargeTextSettingsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDRichTextBlock_OnLargeTextSettingsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDRichTextBlock_OnSwitchDockStateChanged_Statics
	{
		struct DBDRichTextBlock_eventOnSwitchDockStateChanged_Parms
		{
			bool isDocked;
		};
		static void NewProp_isDocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDocked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDRichTextBlock_OnSwitchDockStateChanged_Statics::NewProp_isDocked_SetBit(void* Obj)
	{
		((DBDRichTextBlock_eventOnSwitchDockStateChanged_Parms*)Obj)->isDocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDRichTextBlock_OnSwitchDockStateChanged_Statics::NewProp_isDocked = { "isDocked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDRichTextBlock_eventOnSwitchDockStateChanged_Parms), &Z_Construct_UFunction_UDBDRichTextBlock_OnSwitchDockStateChanged_Statics::NewProp_isDocked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDRichTextBlock_OnSwitchDockStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDRichTextBlock_OnSwitchDockStateChanged_Statics::NewProp_isDocked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDRichTextBlock_OnSwitchDockStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDRichTextBlock_OnSwitchDockStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDRichTextBlock, nullptr, "OnSwitchDockStateChanged", nullptr, nullptr, sizeof(DBDRichTextBlock_eventOnSwitchDockStateChanged_Parms), Z_Construct_UFunction_UDBDRichTextBlock_OnSwitchDockStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDRichTextBlock_OnSwitchDockStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDRichTextBlock_OnSwitchDockStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDRichTextBlock_OnSwitchDockStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDRichTextBlock_OnSwitchDockStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDRichTextBlock_OnSwitchDockStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDRichTextBlock_PreviewHTMLText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDRichTextBlock_PreviewHTMLText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDRichTextBlock_PreviewHTMLText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDRichTextBlock, nullptr, "PreviewHTMLText", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDRichTextBlock_PreviewHTMLText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDRichTextBlock_PreviewHTMLText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDRichTextBlock_PreviewHTMLText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDRichTextBlock_PreviewHTMLText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDRichTextBlock_PreviewLargeText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDRichTextBlock_PreviewLargeText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDRichTextBlock_PreviewLargeText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDRichTextBlock, nullptr, "PreviewLargeText", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDRichTextBlock_PreviewLargeText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDRichTextBlock_PreviewLargeText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDRichTextBlock_PreviewLargeText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDRichTextBlock_PreviewLargeText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDRichTextBlock_PreviewUndocked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDRichTextBlock_PreviewUndocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDRichTextBlock_PreviewUndocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDRichTextBlock, nullptr, "PreviewUndocked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDRichTextBlock_PreviewUndocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDRichTextBlock_PreviewUndocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDRichTextBlock_PreviewUndocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDRichTextBlock_PreviewUndocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics
	{
		struct DBDRichTextBlock_eventSetHTMLText_Parms
		{
			FText InText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDRichTextBlock_eventSetHTMLText_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics::NewProp_InText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDRichTextBlock, nullptr, "SetHTMLText", nullptr, nullptr, sizeof(DBDRichTextBlock_eventSetHTMLText_Parms), Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDRichTextBlock_SetIsUpperCase_Statics
	{
		struct DBDRichTextBlock_eventSetIsUpperCase_Parms
		{
			bool isUpperCase;
		};
		static void NewProp_isUpperCase_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isUpperCase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDRichTextBlock_SetIsUpperCase_Statics::NewProp_isUpperCase_SetBit(void* Obj)
	{
		((DBDRichTextBlock_eventSetIsUpperCase_Parms*)Obj)->isUpperCase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDRichTextBlock_SetIsUpperCase_Statics::NewProp_isUpperCase = { "isUpperCase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDRichTextBlock_eventSetIsUpperCase_Parms), &Z_Construct_UFunction_UDBDRichTextBlock_SetIsUpperCase_Statics::NewProp_isUpperCase_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDRichTextBlock_SetIsUpperCase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDRichTextBlock_SetIsUpperCase_Statics::NewProp_isUpperCase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDRichTextBlock_SetIsUpperCase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDRichTextBlock_SetIsUpperCase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDRichTextBlock, nullptr, "SetIsUpperCase", nullptr, nullptr, sizeof(DBDRichTextBlock_eventSetIsUpperCase_Parms), Z_Construct_UFunction_UDBDRichTextBlock_SetIsUpperCase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDRichTextBlock_SetIsUpperCase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDRichTextBlock_SetIsUpperCase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDRichTextBlock_SetIsUpperCase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDRichTextBlock_SetIsUpperCase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDRichTextBlock_SetIsUpperCase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister()
	{
		return UDBDRichTextBlock::StaticClass();
	}
	struct Z_Construct_UClass_UDBDRichTextBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__switchDockStateManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__switchDockStateManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__textManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__textManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__characterLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__characterLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isUpperCase_MetaData[];
#endif
		static void NewProp__isUpperCase_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isUpperCase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasLargeText_MetaData[];
#endif
		static void NewProp__hasLargeText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasLargeText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__largeTextProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__largeTextProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__overrideUndockedPropertiesWithLargeText_MetaData[];
#endif
		static void NewProp__overrideUndockedPropertiesWithLargeText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__overrideUndockedPropertiesWithLargeText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasUndocking_MetaData[];
#endif
		static void NewProp__hasUndocking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasUndocking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__undockedProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__undockedProperties;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDRichTextBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URichTextBlock,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDRichTextBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDRichTextBlock_GetIsUpperCase, "GetIsUpperCase" }, // 2745840039
		{ &Z_Construct_UFunction_UDBDRichTextBlock_OnLargeTextSettingsChanged, "OnLargeTextSettingsChanged" }, // 4205752199
		{ &Z_Construct_UFunction_UDBDRichTextBlock_OnSwitchDockStateChanged, "OnSwitchDockStateChanged" }, // 1178475606
		{ &Z_Construct_UFunction_UDBDRichTextBlock_PreviewHTMLText, "PreviewHTMLText" }, // 1497277649
		{ &Z_Construct_UFunction_UDBDRichTextBlock_PreviewLargeText, "PreviewLargeText" }, // 3110499588
		{ &Z_Construct_UFunction_UDBDRichTextBlock_PreviewUndocked, "PreviewUndocked" }, // 989923003
		{ &Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText, "SetHTMLText" }, // 4185734693
		{ &Z_Construct_UFunction_UDBDRichTextBlock_SetIsUpperCase, "SetIsUpperCase" }, // 2075442749
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDRichTextBlock_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDRichTextBlock.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp_TextStyle_MetaData[] = {
		{ "Category", "DBDRichTextBlock" },
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp_TextStyle = { "TextStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDRichTextBlock, TextStyle), METADATA_PARAMS(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp_TextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp_TextStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__switchDockStateManager_MetaData[] = {
		{ "Category", "DBDRichTextBlock" },
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__switchDockStateManager = { "_switchDockStateManager", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDRichTextBlock, _switchDockStateManager), Z_Construct_UClass_USwitchDockStateManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__switchDockStateManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__switchDockStateManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__textManager_MetaData[] = {
		{ "Category", "DBDRichTextBlock" },
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__textManager = { "_textManager", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDRichTextBlock, _textManager), Z_Construct_UClass_UDBDTextManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__textManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__textManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__characterLimit_MetaData[] = {
		{ "Category", "DBDRichTextBlock" },
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__characterLimit = { "_characterLimit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDRichTextBlock, _characterLimit), METADATA_PARAMS(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__characterLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__characterLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__isUpperCase_MetaData[] = {
		{ "Category", "DBDRichTextBlock" },
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
	void Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__isUpperCase_SetBit(void* Obj)
	{
		((UDBDRichTextBlock*)Obj)->_isUpperCase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__isUpperCase = { "_isUpperCase", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDRichTextBlock), &Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__isUpperCase_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__isUpperCase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__isUpperCase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasLargeText_MetaData[] = {
		{ "Category", "DBDRichTextBlock" },
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
	void Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasLargeText_SetBit(void* Obj)
	{
		((UDBDRichTextBlock*)Obj)->_hasLargeText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasLargeText = { "_hasLargeText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDRichTextBlock), &Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasLargeText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasLargeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasLargeText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__largeTextProperties_MetaData[] = {
		{ "Category", "DBDRichTextBlock" },
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__largeTextProperties = { "_largeTextProperties", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDRichTextBlock, _largeTextProperties), Z_Construct_UScriptStruct_FTextBlockOverrideProperties, METADATA_PARAMS(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__largeTextProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__largeTextProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText_MetaData[] = {
		{ "Category", "DBDRichTextBlock" },
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
	void Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText_SetBit(void* Obj)
	{
		((UDBDRichTextBlock*)Obj)->_overrideUndockedPropertiesWithLargeText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText = { "_overrideUndockedPropertiesWithLargeText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDRichTextBlock), &Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasUndocking_MetaData[] = {
		{ "Category", "DBDRichTextBlock" },
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
	void Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasUndocking_SetBit(void* Obj)
	{
		((UDBDRichTextBlock*)Obj)->_hasUndocking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasUndocking = { "_hasUndocking", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDRichTextBlock), &Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasUndocking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasUndocking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasUndocking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__undockedProperties_MetaData[] = {
		{ "Category", "DBDRichTextBlock" },
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__undockedProperties = { "_undockedProperties", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDRichTextBlock, _undockedProperties), Z_Construct_UScriptStruct_FTextBlockOverrideProperties, METADATA_PARAMS(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__undockedProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__undockedProperties_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDRichTextBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp_TextStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__switchDockStateManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__textManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__characterLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__isUpperCase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasLargeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__largeTextProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasUndocking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__undockedProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDRichTextBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDRichTextBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDRichTextBlock_Statics::ClassParams = {
		&UDBDRichTextBlock::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDRichTextBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichTextBlock_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDRichTextBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichTextBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDRichTextBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDRichTextBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDRichTextBlock, 3286665577);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UDBDRichTextBlock>()
	{
		return UDBDRichTextBlock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDRichTextBlock(Z_Construct_UClass_UDBDRichTextBlock, &UDBDRichTextBlock::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UDBDRichTextBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDRichTextBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
