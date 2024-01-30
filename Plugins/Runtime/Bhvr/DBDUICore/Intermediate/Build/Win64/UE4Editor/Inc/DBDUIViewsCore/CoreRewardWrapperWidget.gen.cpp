// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreRewardWrapperWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreRewardWrapperWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreRewardWrapperWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreRewardWrapperWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreRewardWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FRewardWrapperViewData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreCharacterRewardWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreCurrencyProgressionRewardWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreCustomizationRewardWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScaleBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreRewardWrapperWidget::execClearData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreRewardWrapperWidget::execGetRewardWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCoreRewardWidget**)Z_Param__Result=P_THIS->GetRewardWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreRewardWrapperWidget::execSetData)
	{
		P_GET_STRUCT_REF(FRewardWrapperViewData,Z_Param_Out_viewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_Out_viewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreRewardWrapperWidget::execSetIsClickable)
	{
		P_GET_UBOOL(Z_Param_isClickable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsClickable(Z_Param_isClickable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreRewardWrapperWidget::execSetIsLocked)
	{
		P_GET_UBOOL(Z_Param_isLocked);
		P_GET_UBOOL(Z_Param_playAnimation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsLocked(Z_Param_isLocked,Z_Param_playAnimation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreRewardWrapperWidget::execSetScaleToFit)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_size);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScaleToFit(Z_Param_size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreRewardWrapperWidget::execSetScaleUserSpecified)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScaleUserSpecified(Z_Param_scale);
		P_NATIVE_END;
	}
	void UCoreRewardWrapperWidget::StaticRegisterNativesUCoreRewardWrapperWidget()
	{
		UClass* Class = UCoreRewardWrapperWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearData", &UCoreRewardWrapperWidget::execClearData },
			{ "GetRewardWidget", &UCoreRewardWrapperWidget::execGetRewardWidget },
			{ "SetData", &UCoreRewardWrapperWidget::execSetData },
			{ "SetIsClickable", &UCoreRewardWrapperWidget::execSetIsClickable },
			{ "SetIsLocked", &UCoreRewardWrapperWidget::execSetIsLocked },
			{ "SetScaleToFit", &UCoreRewardWrapperWidget::execSetScaleToFit },
			{ "SetScaleUserSpecified", &UCoreRewardWrapperWidget::execSetScaleUserSpecified },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreRewardWrapperWidget_ClearData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreRewardWrapperWidget_ClearData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreRewardWrapperWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreRewardWrapperWidget_ClearData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreRewardWrapperWidget, nullptr, "ClearData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreRewardWrapperWidget_ClearData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRewardWrapperWidget_ClearData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreRewardWrapperWidget_ClearData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreRewardWrapperWidget_ClearData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreRewardWrapperWidget_GetRewardWidget_Statics
	{
		struct CoreRewardWrapperWidget_eventGetRewardWidget_Parms
		{
			UCoreRewardWidget* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreRewardWrapperWidget_GetRewardWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreRewardWrapperWidget_GetRewardWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreRewardWrapperWidget_eventGetRewardWidget_Parms, ReturnValue), Z_Construct_UClass_UCoreRewardWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreRewardWrapperWidget_GetRewardWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRewardWrapperWidget_GetRewardWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreRewardWrapperWidget_GetRewardWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreRewardWrapperWidget_GetRewardWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreRewardWrapperWidget_GetRewardWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreRewardWrapperWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreRewardWrapperWidget_GetRewardWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreRewardWrapperWidget, nullptr, "GetRewardWidget", nullptr, nullptr, sizeof(CoreRewardWrapperWidget_eventGetRewardWidget_Parms), Z_Construct_UFunction_UCoreRewardWrapperWidget_GetRewardWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRewardWrapperWidget_GetRewardWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreRewardWrapperWidget_GetRewardWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRewardWrapperWidget_GetRewardWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreRewardWrapperWidget_GetRewardWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreRewardWrapperWidget_GetRewardWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreRewardWrapperWidget_SetData_Statics
	{
		struct CoreRewardWrapperWidget_eventSetData_Parms
		{
			FRewardWrapperViewData viewData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_viewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreRewardWrapperWidget_SetData_Statics::NewProp_viewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreRewardWrapperWidget_SetData_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreRewardWrapperWidget_eventSetData_Parms, viewData), Z_Construct_UScriptStruct_FRewardWrapperViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreRewardWrapperWidget_SetData_Statics::NewProp_viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRewardWrapperWidget_SetData_Statics::NewProp_viewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreRewardWrapperWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreRewardWrapperWidget_SetData_Statics::NewProp_viewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreRewardWrapperWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreRewardWrapperWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreRewardWrapperWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreRewardWrapperWidget, nullptr, "SetData", nullptr, nullptr, sizeof(CoreRewardWrapperWidget_eventSetData_Parms), Z_Construct_UFunction_UCoreRewardWrapperWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRewardWrapperWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreRewardWrapperWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRewardWrapperWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreRewardWrapperWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreRewardWrapperWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsClickable_Statics
	{
		struct CoreRewardWrapperWidget_eventSetIsClickable_Parms
		{
			bool isClickable;
		};
		static void NewProp_isClickable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isClickable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsClickable_Statics::NewProp_isClickable_SetBit(void* Obj)
	{
		((CoreRewardWrapperWidget_eventSetIsClickable_Parms*)Obj)->isClickable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsClickable_Statics::NewProp_isClickable = { "isClickable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreRewardWrapperWidget_eventSetIsClickable_Parms), &Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsClickable_Statics::NewProp_isClickable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsClickable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsClickable_Statics::NewProp_isClickable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsClickable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreRewardWrapperWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsClickable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreRewardWrapperWidget, nullptr, "SetIsClickable", nullptr, nullptr, sizeof(CoreRewardWrapperWidget_eventSetIsClickable_Parms), Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsClickable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsClickable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsClickable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsClickable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsClickable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsClickable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsLocked_Statics
	{
		struct CoreRewardWrapperWidget_eventSetIsLocked_Parms
		{
			bool isLocked;
			bool playAnimation;
		};
		static void NewProp_isLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLocked;
		static void NewProp_playAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_playAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsLocked_Statics::NewProp_isLocked_SetBit(void* Obj)
	{
		((CoreRewardWrapperWidget_eventSetIsLocked_Parms*)Obj)->isLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsLocked_Statics::NewProp_isLocked = { "isLocked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreRewardWrapperWidget_eventSetIsLocked_Parms), &Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsLocked_Statics::NewProp_isLocked_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsLocked_Statics::NewProp_playAnimation_SetBit(void* Obj)
	{
		((CoreRewardWrapperWidget_eventSetIsLocked_Parms*)Obj)->playAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsLocked_Statics::NewProp_playAnimation = { "playAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreRewardWrapperWidget_eventSetIsLocked_Parms), &Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsLocked_Statics::NewProp_playAnimation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsLocked_Statics::NewProp_isLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsLocked_Statics::NewProp_playAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsLocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreRewardWrapperWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreRewardWrapperWidget, nullptr, "SetIsLocked", nullptr, nullptr, sizeof(CoreRewardWrapperWidget_eventSetIsLocked_Parms), Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreRewardWrapperWidget_SetScaleToFit_Statics
	{
		struct CoreRewardWrapperWidget_eventSetScaleToFit_Parms
		{
			float size;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoreRewardWrapperWidget_SetScaleToFit_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreRewardWrapperWidget_eventSetScaleToFit_Parms, size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreRewardWrapperWidget_SetScaleToFit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreRewardWrapperWidget_SetScaleToFit_Statics::NewProp_size,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreRewardWrapperWidget_SetScaleToFit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreRewardWrapperWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreRewardWrapperWidget_SetScaleToFit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreRewardWrapperWidget, nullptr, "SetScaleToFit", nullptr, nullptr, sizeof(CoreRewardWrapperWidget_eventSetScaleToFit_Parms), Z_Construct_UFunction_UCoreRewardWrapperWidget_SetScaleToFit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRewardWrapperWidget_SetScaleToFit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreRewardWrapperWidget_SetScaleToFit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRewardWrapperWidget_SetScaleToFit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreRewardWrapperWidget_SetScaleToFit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreRewardWrapperWidget_SetScaleToFit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreRewardWrapperWidget_SetScaleUserSpecified_Statics
	{
		struct CoreRewardWrapperWidget_eventSetScaleUserSpecified_Parms
		{
			float scale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoreRewardWrapperWidget_SetScaleUserSpecified_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreRewardWrapperWidget_eventSetScaleUserSpecified_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreRewardWrapperWidget_SetScaleUserSpecified_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreRewardWrapperWidget_SetScaleUserSpecified_Statics::NewProp_scale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreRewardWrapperWidget_SetScaleUserSpecified_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreRewardWrapperWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreRewardWrapperWidget_SetScaleUserSpecified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreRewardWrapperWidget, nullptr, "SetScaleUserSpecified", nullptr, nullptr, sizeof(CoreRewardWrapperWidget_eventSetScaleUserSpecified_Parms), Z_Construct_UFunction_UCoreRewardWrapperWidget_SetScaleUserSpecified_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRewardWrapperWidget_SetScaleUserSpecified_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreRewardWrapperWidget_SetScaleUserSpecified_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRewardWrapperWidget_SetScaleUserSpecified_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreRewardWrapperWidget_SetScaleUserSpecified()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreRewardWrapperWidget_SetScaleUserSpecified_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreRewardWrapperWidget_NoRegister()
	{
		return UCoreRewardWrapperWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreRewardWrapperWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterRewardWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CharacterRewardWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyProgressionRewardWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CurrencyProgressionRewardWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizationRewardWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CustomizationRewardWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SizeBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScaleBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rewardWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__rewardWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreRewardWrapperWidget_ClearData, "ClearData" }, // 2619312997
		{ &Z_Construct_UFunction_UCoreRewardWrapperWidget_GetRewardWidget, "GetRewardWidget" }, // 4084298846
		{ &Z_Construct_UFunction_UCoreRewardWrapperWidget_SetData, "SetData" }, // 186012998
		{ &Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsClickable, "SetIsClickable" }, // 433429810
		{ &Z_Construct_UFunction_UCoreRewardWrapperWidget_SetIsLocked, "SetIsLocked" }, // 1086430081
		{ &Z_Construct_UFunction_UCoreRewardWrapperWidget_SetScaleToFit, "SetScaleToFit" }, // 2086131457
		{ &Z_Construct_UFunction_UCoreRewardWrapperWidget_SetScaleUserSpecified, "SetScaleUserSpecified" }, // 3925924054
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreRewardWrapperWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreRewardWrapperWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_CharacterRewardWidget_MetaData[] = {
		{ "Category", "CoreRewardWrapperWidget" },
		{ "ModuleRelativePath", "Public/CoreRewardWrapperWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_CharacterRewardWidget = { "CharacterRewardWidget", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreRewardWrapperWidget, CharacterRewardWidget), Z_Construct_UClass_UCoreCharacterRewardWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_CharacterRewardWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_CharacterRewardWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_CurrencyProgressionRewardWidget_MetaData[] = {
		{ "Category", "CoreRewardWrapperWidget" },
		{ "ModuleRelativePath", "Public/CoreRewardWrapperWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_CurrencyProgressionRewardWidget = { "CurrencyProgressionRewardWidget", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreRewardWrapperWidget, CurrencyProgressionRewardWidget), Z_Construct_UClass_UCoreCurrencyProgressionRewardWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_CurrencyProgressionRewardWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_CurrencyProgressionRewardWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_CustomizationRewardWidget_MetaData[] = {
		{ "Category", "CoreRewardWrapperWidget" },
		{ "ModuleRelativePath", "Public/CoreRewardWrapperWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_CustomizationRewardWidget = { "CustomizationRewardWidget", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreRewardWrapperWidget, CustomizationRewardWidget), Z_Construct_UClass_UCoreCustomizationRewardWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_CustomizationRewardWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_CustomizationRewardWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_RewardContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreRewardWrapperWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreRewardWrapperWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_RewardContainer = { "RewardContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreRewardWrapperWidget, RewardContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_RewardContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_RewardContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_SizeBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreRewardWrapperWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreRewardWrapperWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_SizeBox = { "SizeBox", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreRewardWrapperWidget, SizeBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_SizeBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_SizeBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_ScaleBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreRewardWrapperWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreRewardWrapperWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_ScaleBox = { "ScaleBox", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreRewardWrapperWidget, ScaleBox), Z_Construct_UClass_UScaleBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_ScaleBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_ScaleBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp__rewardWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreRewardWrapperWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreRewardWrapperWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp__rewardWidget = { "_rewardWidget", nullptr, (EPropertyFlags)0x004000000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreRewardWrapperWidget, _rewardWidget), Z_Construct_UClass_UCoreRewardWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp__rewardWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp__rewardWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_CharacterRewardWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_CurrencyProgressionRewardWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_CustomizationRewardWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_RewardContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_SizeBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp_ScaleBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::NewProp__rewardWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreRewardWrapperWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::ClassParams = {
		&UCoreRewardWrapperWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreRewardWrapperWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreRewardWrapperWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreRewardWrapperWidget, 358220859);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreRewardWrapperWidget>()
	{
		return UCoreRewardWrapperWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreRewardWrapperWidget(Z_Construct_UClass_UCoreRewardWrapperWidget, &UCoreRewardWrapperWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreRewardWrapperWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreRewardWrapperWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
