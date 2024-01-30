// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/DBDTextBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDTextBlock() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock();
	UMG_API UClass* Z_Construct_UClass_UTextBlock();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDINPUT_API UClass* Z_Construct_UClass_USwitchDockStateManager_NoRegister();
	DBDUIMANAGERS_API UClass* Z_Construct_UClass_UDBDTextManager_NoRegister();
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockOverrideProperties();
// End Cross Module References
	DEFINE_FUNCTION(UDBDTextBlock::execGetIsUpperCase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsUpperCase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTextBlock::execGetTextStyles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UDBDTextBlock::GetTextStyles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTextBlock::execOnLargeTextSettingsChanged)
	{
		P_GET_UBOOL(Z_Param_isLargeText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLargeTextSettingsChanged(Z_Param_isLargeText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTextBlock::execOnSwitchDockStateChanged)
	{
		P_GET_UBOOL(Z_Param_isDocked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSwitchDockStateChanged(Z_Param_isDocked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTextBlock::execPopulateTextStyles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDTextBlock::PopulateTextStyles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTextBlock::execPreviewLargeText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreviewLargeText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTextBlock::execPreviewUndocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreviewUndocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTextBlock::execSetIsUpperCase)
	{
		P_GET_UBOOL(Z_Param_isUpperCase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsUpperCase(Z_Param_isUpperCase);
		P_NATIVE_END;
	}
	void UDBDTextBlock::StaticRegisterNativesUDBDTextBlock()
	{
		UClass* Class = UDBDTextBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsUpperCase", &UDBDTextBlock::execGetIsUpperCase },
			{ "GetTextStyles", &UDBDTextBlock::execGetTextStyles },
			{ "OnLargeTextSettingsChanged", &UDBDTextBlock::execOnLargeTextSettingsChanged },
			{ "OnSwitchDockStateChanged", &UDBDTextBlock::execOnSwitchDockStateChanged },
			{ "PopulateTextStyles", &UDBDTextBlock::execPopulateTextStyles },
			{ "PreviewLargeText", &UDBDTextBlock::execPreviewLargeText },
			{ "PreviewUndocked", &UDBDTextBlock::execPreviewUndocked },
			{ "SetIsUpperCase", &UDBDTextBlock::execSetIsUpperCase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase_Statics
	{
		struct DBDTextBlock_eventGetIsUpperCase_Parms
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
	void Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDTextBlock_eventGetIsUpperCase_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDTextBlock_eventGetIsUpperCase_Parms), &Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTextBlock, nullptr, "GetIsUpperCase", nullptr, nullptr, sizeof(DBDTextBlock_eventGetIsUpperCase_Parms), Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTextBlock_GetTextStyles_Statics
	{
		struct DBDTextBlock_eventGetTextStyles_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDBDTextBlock_GetTextStyles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDBDTextBlock_GetTextStyles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTextBlock_eventGetTextStyles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTextBlock_GetTextStyles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTextBlock_GetTextStyles_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTextBlock_GetTextStyles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTextBlock_GetTextStyles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTextBlock_GetTextStyles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTextBlock, nullptr, "GetTextStyles", nullptr, nullptr, sizeof(DBDTextBlock_eventGetTextStyles_Parms), Z_Construct_UFunction_UDBDTextBlock_GetTextStyles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTextBlock_GetTextStyles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTextBlock_GetTextStyles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTextBlock_GetTextStyles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTextBlock_GetTextStyles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTextBlock_GetTextStyles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged_Statics
	{
		struct DBDTextBlock_eventOnLargeTextSettingsChanged_Parms
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
	void Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged_Statics::NewProp_isLargeText_SetBit(void* Obj)
	{
		((DBDTextBlock_eventOnLargeTextSettingsChanged_Parms*)Obj)->isLargeText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged_Statics::NewProp_isLargeText = { "isLargeText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDTextBlock_eventOnLargeTextSettingsChanged_Parms), &Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged_Statics::NewProp_isLargeText_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged_Statics::NewProp_isLargeText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTextBlock, nullptr, "OnLargeTextSettingsChanged", nullptr, nullptr, sizeof(DBDTextBlock_eventOnLargeTextSettingsChanged_Parms), Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged_Statics
	{
		struct DBDTextBlock_eventOnSwitchDockStateChanged_Parms
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
	void Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged_Statics::NewProp_isDocked_SetBit(void* Obj)
	{
		((DBDTextBlock_eventOnSwitchDockStateChanged_Parms*)Obj)->isDocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged_Statics::NewProp_isDocked = { "isDocked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDTextBlock_eventOnSwitchDockStateChanged_Parms), &Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged_Statics::NewProp_isDocked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged_Statics::NewProp_isDocked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTextBlock, nullptr, "OnSwitchDockStateChanged", nullptr, nullptr, sizeof(DBDTextBlock_eventOnSwitchDockStateChanged_Parms), Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTextBlock_PopulateTextStyles_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTextBlock_PopulateTextStyles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTextBlock_PopulateTextStyles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTextBlock, nullptr, "PopulateTextStyles", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTextBlock_PopulateTextStyles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTextBlock_PopulateTextStyles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTextBlock_PopulateTextStyles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTextBlock_PopulateTextStyles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTextBlock_PreviewLargeText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTextBlock_PreviewLargeText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTextBlock_PreviewLargeText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTextBlock, nullptr, "PreviewLargeText", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTextBlock_PreviewLargeText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTextBlock_PreviewLargeText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTextBlock_PreviewLargeText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTextBlock_PreviewLargeText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTextBlock_PreviewUndocked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTextBlock_PreviewUndocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTextBlock_PreviewUndocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTextBlock, nullptr, "PreviewUndocked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTextBlock_PreviewUndocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTextBlock_PreviewUndocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTextBlock_PreviewUndocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTextBlock_PreviewUndocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase_Statics
	{
		struct DBDTextBlock_eventSetIsUpperCase_Parms
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
	void Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase_Statics::NewProp_isUpperCase_SetBit(void* Obj)
	{
		((DBDTextBlock_eventSetIsUpperCase_Parms*)Obj)->isUpperCase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase_Statics::NewProp_isUpperCase = { "isUpperCase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDTextBlock_eventSetIsUpperCase_Parms), &Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase_Statics::NewProp_isUpperCase_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase_Statics::NewProp_isUpperCase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTextBlock, nullptr, "SetIsUpperCase", nullptr, nullptr, sizeof(DBDTextBlock_eventSetIsUpperCase_Parms), Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister()
	{
		return UDBDTextBlock::StaticClass();
	}
	struct Z_Construct_UClass_UDBDTextBlock_Statics
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
	UObject* (*const Z_Construct_UClass_UDBDTextBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextBlock,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDTextBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase, "GetIsUpperCase" }, // 2531716651
		{ &Z_Construct_UFunction_UDBDTextBlock_GetTextStyles, "GetTextStyles" }, // 4067469331
		{ &Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged, "OnLargeTextSettingsChanged" }, // 338417239
		{ &Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged, "OnSwitchDockStateChanged" }, // 1440044682
		{ &Z_Construct_UFunction_UDBDTextBlock_PopulateTextStyles, "PopulateTextStyles" }, // 4100640568
		{ &Z_Construct_UFunction_UDBDTextBlock_PreviewLargeText, "PreviewLargeText" }, // 2157596752
		{ &Z_Construct_UFunction_UDBDTextBlock_PreviewUndocked, "PreviewUndocked" }, // 2597467000
		{ &Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase, "SetIsUpperCase" }, // 1357258248
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTextBlock_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDTextBlock.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTextBlock_Statics::NewProp_TextStyle_MetaData[] = {
		{ "Category", "DBDTextBlock" },
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDBDTextBlock_Statics::NewProp_TextStyle = { "TextStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDTextBlock, TextStyle), METADATA_PARAMS(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp_TextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp_TextStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__switchDockStateManager_MetaData[] = {
		{ "Category", "DBDTextBlock" },
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__switchDockStateManager = { "_switchDockStateManager", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDTextBlock, _switchDockStateManager), Z_Construct_UClass_USwitchDockStateManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__switchDockStateManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__switchDockStateManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__textManager_MetaData[] = {
		{ "Category", "DBDTextBlock" },
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__textManager = { "_textManager", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDTextBlock, _textManager), Z_Construct_UClass_UDBDTextManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__textManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__textManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__characterLimit_MetaData[] = {
		{ "Category", "DBDTextBlock" },
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__characterLimit = { "_characterLimit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDTextBlock, _characterLimit), METADATA_PARAMS(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__characterLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__characterLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__isUpperCase_MetaData[] = {
		{ "Category", "DBDTextBlock" },
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	void Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__isUpperCase_SetBit(void* Obj)
	{
		((UDBDTextBlock*)Obj)->_isUpperCase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__isUpperCase = { "_isUpperCase", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDTextBlock), &Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__isUpperCase_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__isUpperCase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__isUpperCase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasLargeText_MetaData[] = {
		{ "Category", "DBDTextBlock" },
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	void Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasLargeText_SetBit(void* Obj)
	{
		((UDBDTextBlock*)Obj)->_hasLargeText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasLargeText = { "_hasLargeText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDTextBlock), &Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasLargeText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasLargeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasLargeText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__largeTextProperties_MetaData[] = {
		{ "Category", "DBDTextBlock" },
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__largeTextProperties = { "_largeTextProperties", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDTextBlock, _largeTextProperties), Z_Construct_UScriptStruct_FTextBlockOverrideProperties, METADATA_PARAMS(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__largeTextProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__largeTextProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText_MetaData[] = {
		{ "Category", "DBDTextBlock" },
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	void Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText_SetBit(void* Obj)
	{
		((UDBDTextBlock*)Obj)->_overrideUndockedPropertiesWithLargeText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText = { "_overrideUndockedPropertiesWithLargeText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDTextBlock), &Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasUndocking_MetaData[] = {
		{ "Category", "DBDTextBlock" },
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	void Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasUndocking_SetBit(void* Obj)
	{
		((UDBDTextBlock*)Obj)->_hasUndocking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasUndocking = { "_hasUndocking", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDTextBlock), &Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasUndocking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasUndocking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasUndocking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__undockedProperties_MetaData[] = {
		{ "Category", "DBDTextBlock" },
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__undockedProperties = { "_undockedProperties", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDTextBlock, _undockedProperties), Z_Construct_UScriptStruct_FTextBlockOverrideProperties, METADATA_PARAMS(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__undockedProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__undockedProperties_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDTextBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTextBlock_Statics::NewProp_TextStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__switchDockStateManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__textManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__characterLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__isUpperCase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasLargeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__largeTextProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasUndocking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__undockedProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDTextBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDTextBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDTextBlock_Statics::ClassParams = {
		&UDBDTextBlock::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDTextBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTextBlock_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDTextBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTextBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDTextBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDTextBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDTextBlock, 2298702374);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UDBDTextBlock>()
	{
		return UDBDTextBlock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDTextBlock(Z_Construct_UClass_UDBDTextBlock, &UDBDTextBlock::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UDBDTextBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDTextBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
