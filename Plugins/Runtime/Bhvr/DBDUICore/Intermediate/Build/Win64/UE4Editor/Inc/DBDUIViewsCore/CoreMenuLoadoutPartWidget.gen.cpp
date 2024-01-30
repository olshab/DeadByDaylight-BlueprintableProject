// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreMenuLoadoutPartWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreMenuLoadoutPartWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMenuLoadoutPartWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMenuLoadoutPartWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FLoadoutTooltipData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UMenuLoadoutPartViewData_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ELoadoutSlot();
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_ETooltipHorizontalAlignment();
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UGridPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScaleBox_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreOnHoverBorderWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreMenuLoadoutPartWidget::execGetTooltipData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLoadoutTooltipData*)Z_Param__Result=P_THIS->GetTooltipData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreMenuLoadoutPartWidget::execGetWidgetItemId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetWidgetItemId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreMenuLoadoutPartWidget::execGetWidgetLockedState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWidgetLockedState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreMenuLoadoutPartWidget::execSetEmptyWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEmptyWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreMenuLoadoutPartWidget::execSetIsPerkSurfacingExperimentActive)
	{
		P_GET_UBOOL(Z_Param_isPerkSurfacingExperimentActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsPerkSurfacingExperimentActive(Z_Param_isPerkSurfacingExperimentActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreMenuLoadoutPartWidget::execSetLoadoutPartData)
	{
		P_GET_OBJECT(UMenuLoadoutPartViewData,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoadoutPartData(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreMenuLoadoutPartWidget::execSetLoadoutPartScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoadoutPartScale(Z_Param_scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreMenuLoadoutPartWidget::execSetLoadoutPartTooltipData)
	{
		P_GET_STRUCT_REF(FLoadoutTooltipData,Z_Param_Out_tooltipData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoadoutPartTooltipData(Z_Param_Out_tooltipData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreMenuLoadoutPartWidget::execSetSelectedState)
	{
		P_GET_UBOOL(Z_Param_selectedState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectedState(Z_Param_selectedState);
		P_NATIVE_END;
	}
	static FName NAME_UCoreMenuLoadoutPartWidget_SetBackgroundLayers = FName(TEXT("SetBackgroundLayers"));
	void UCoreMenuLoadoutPartWidget::SetBackgroundLayers()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreMenuLoadoutPartWidget_SetBackgroundLayers),NULL);
	}
	static FName NAME_UCoreMenuLoadoutPartWidget_SetBackgroundShadowLayers = FName(TEXT("SetBackgroundShadowLayers"));
	void UCoreMenuLoadoutPartWidget::SetBackgroundShadowLayers()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreMenuLoadoutPartWidget_SetBackgroundShadowLayers),NULL);
	}
	static FName NAME_UCoreMenuLoadoutPartWidget_SetDisabledWidget = FName(TEXT("SetDisabledWidget"));
	void UCoreMenuLoadoutPartWidget::SetDisabledWidget()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreMenuLoadoutPartWidget_SetDisabledWidget),NULL);
	}
	void UCoreMenuLoadoutPartWidget::StaticRegisterNativesUCoreMenuLoadoutPartWidget()
	{
		UClass* Class = UCoreMenuLoadoutPartWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTooltipData", &UCoreMenuLoadoutPartWidget::execGetTooltipData },
			{ "GetWidgetItemId", &UCoreMenuLoadoutPartWidget::execGetWidgetItemId },
			{ "GetWidgetLockedState", &UCoreMenuLoadoutPartWidget::execGetWidgetLockedState },
			{ "SetEmptyWidget", &UCoreMenuLoadoutPartWidget::execSetEmptyWidget },
			{ "SetIsPerkSurfacingExperimentActive", &UCoreMenuLoadoutPartWidget::execSetIsPerkSurfacingExperimentActive },
			{ "SetLoadoutPartData", &UCoreMenuLoadoutPartWidget::execSetLoadoutPartData },
			{ "SetLoadoutPartScale", &UCoreMenuLoadoutPartWidget::execSetLoadoutPartScale },
			{ "SetLoadoutPartTooltipData", &UCoreMenuLoadoutPartWidget::execSetLoadoutPartTooltipData },
			{ "SetSelectedState", &UCoreMenuLoadoutPartWidget::execSetSelectedState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetTooltipData_Statics
	{
		struct CoreMenuLoadoutPartWidget_eventGetTooltipData_Parms
		{
			FLoadoutTooltipData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetTooltipData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreMenuLoadoutPartWidget_eventGetTooltipData_Parms, ReturnValue), Z_Construct_UScriptStruct_FLoadoutTooltipData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetTooltipData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetTooltipData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetTooltipData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetTooltipData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMenuLoadoutPartWidget, nullptr, "GetTooltipData", nullptr, nullptr, sizeof(CoreMenuLoadoutPartWidget_eventGetTooltipData_Parms), Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetTooltipData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetTooltipData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetTooltipData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetTooltipData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetTooltipData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetTooltipData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetItemId_Statics
	{
		struct CoreMenuLoadoutPartWidget_eventGetWidgetItemId_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetItemId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreMenuLoadoutPartWidget_eventGetWidgetItemId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetItemId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetItemId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetItemId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetItemId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMenuLoadoutPartWidget, nullptr, "GetWidgetItemId", nullptr, nullptr, sizeof(CoreMenuLoadoutPartWidget_eventGetWidgetItemId_Parms), Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetItemId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetItemId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetItemId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetItemId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetItemId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetItemId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetLockedState_Statics
	{
		struct CoreMenuLoadoutPartWidget_eventGetWidgetLockedState_Parms
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
	void Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetLockedState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoreMenuLoadoutPartWidget_eventGetWidgetLockedState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetLockedState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreMenuLoadoutPartWidget_eventGetWidgetLockedState_Parms), &Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetLockedState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetLockedState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetLockedState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetLockedState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetLockedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMenuLoadoutPartWidget, nullptr, "GetWidgetLockedState", nullptr, nullptr, sizeof(CoreMenuLoadoutPartWidget_eventGetWidgetLockedState_Parms), Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetLockedState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetLockedState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetLockedState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetLockedState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetLockedState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetLockedState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetBackgroundLayers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetBackgroundLayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetBackgroundLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMenuLoadoutPartWidget, nullptr, "SetBackgroundLayers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetBackgroundLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetBackgroundLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetBackgroundLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetBackgroundLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetBackgroundShadowLayers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetBackgroundShadowLayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetBackgroundShadowLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMenuLoadoutPartWidget, nullptr, "SetBackgroundShadowLayers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetBackgroundShadowLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetBackgroundShadowLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetBackgroundShadowLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetBackgroundShadowLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetDisabledWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetDisabledWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetDisabledWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMenuLoadoutPartWidget, nullptr, "SetDisabledWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetDisabledWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetDisabledWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetDisabledWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetDisabledWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetEmptyWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetEmptyWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetEmptyWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMenuLoadoutPartWidget, nullptr, "SetEmptyWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetEmptyWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetEmptyWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetEmptyWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetEmptyWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetIsPerkSurfacingExperimentActive_Statics
	{
		struct CoreMenuLoadoutPartWidget_eventSetIsPerkSurfacingExperimentActive_Parms
		{
			bool isPerkSurfacingExperimentActive;
		};
		static void NewProp_isPerkSurfacingExperimentActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPerkSurfacingExperimentActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetIsPerkSurfacingExperimentActive_Statics::NewProp_isPerkSurfacingExperimentActive_SetBit(void* Obj)
	{
		((CoreMenuLoadoutPartWidget_eventSetIsPerkSurfacingExperimentActive_Parms*)Obj)->isPerkSurfacingExperimentActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetIsPerkSurfacingExperimentActive_Statics::NewProp_isPerkSurfacingExperimentActive = { "isPerkSurfacingExperimentActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreMenuLoadoutPartWidget_eventSetIsPerkSurfacingExperimentActive_Parms), &Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetIsPerkSurfacingExperimentActive_Statics::NewProp_isPerkSurfacingExperimentActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetIsPerkSurfacingExperimentActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetIsPerkSurfacingExperimentActive_Statics::NewProp_isPerkSurfacingExperimentActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetIsPerkSurfacingExperimentActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetIsPerkSurfacingExperimentActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMenuLoadoutPartWidget, nullptr, "SetIsPerkSurfacingExperimentActive", nullptr, nullptr, sizeof(CoreMenuLoadoutPartWidget_eventSetIsPerkSurfacingExperimentActive_Parms), Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetIsPerkSurfacingExperimentActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetIsPerkSurfacingExperimentActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetIsPerkSurfacingExperimentActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetIsPerkSurfacingExperimentActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetIsPerkSurfacingExperimentActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetIsPerkSurfacingExperimentActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartData_Statics
	{
		struct CoreMenuLoadoutPartWidget_eventSetLoadoutPartData_Parms
		{
			const UMenuLoadoutPartViewData* data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreMenuLoadoutPartWidget_eventSetLoadoutPartData_Parms, data), Z_Construct_UClass_UMenuLoadoutPartViewData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMenuLoadoutPartWidget, nullptr, "SetLoadoutPartData", nullptr, nullptr, sizeof(CoreMenuLoadoutPartWidget_eventSetLoadoutPartData_Parms), Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartScale_Statics
	{
		struct CoreMenuLoadoutPartWidget_eventSetLoadoutPartScale_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartScale_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreMenuLoadoutPartWidget_eventSetLoadoutPartScale_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartScale_Statics::NewProp_scale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMenuLoadoutPartWidget, nullptr, "SetLoadoutPartScale", nullptr, nullptr, sizeof(CoreMenuLoadoutPartWidget_eventSetLoadoutPartScale_Parms), Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartTooltipData_Statics
	{
		struct CoreMenuLoadoutPartWidget_eventSetLoadoutPartTooltipData_Parms
		{
			FLoadoutTooltipData tooltipData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tooltipData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartTooltipData_Statics::NewProp_tooltipData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartTooltipData_Statics::NewProp_tooltipData = { "tooltipData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreMenuLoadoutPartWidget_eventSetLoadoutPartTooltipData_Parms, tooltipData), Z_Construct_UScriptStruct_FLoadoutTooltipData, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartTooltipData_Statics::NewProp_tooltipData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartTooltipData_Statics::NewProp_tooltipData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartTooltipData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartTooltipData_Statics::NewProp_tooltipData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartTooltipData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartTooltipData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMenuLoadoutPartWidget, nullptr, "SetLoadoutPartTooltipData", nullptr, nullptr, sizeof(CoreMenuLoadoutPartWidget_eventSetLoadoutPartTooltipData_Parms), Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartTooltipData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartTooltipData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartTooltipData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartTooltipData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartTooltipData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartTooltipData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetSelectedState_Statics
	{
		struct CoreMenuLoadoutPartWidget_eventSetSelectedState_Parms
		{
			bool selectedState;
		};
		static void NewProp_selectedState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_selectedState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetSelectedState_Statics::NewProp_selectedState_SetBit(void* Obj)
	{
		((CoreMenuLoadoutPartWidget_eventSetSelectedState_Parms*)Obj)->selectedState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetSelectedState_Statics::NewProp_selectedState = { "selectedState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreMenuLoadoutPartWidget_eventSetSelectedState_Parms), &Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetSelectedState_Statics::NewProp_selectedState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetSelectedState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetSelectedState_Statics::NewProp_selectedState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetSelectedState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetSelectedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMenuLoadoutPartWidget, nullptr, "SetSelectedState", nullptr, nullptr, sizeof(CoreMenuLoadoutPartWidget_eventSetSelectedState_Parms), Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetSelectedState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetSelectedState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetSelectedState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetSelectedState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetSelectedState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetSelectedState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreMenuLoadoutPartWidget_NoRegister()
	{
		return UCoreMenuLoadoutPartWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SlotIndex_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SlotIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HorizontalAlignment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VerticalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__loadoutTooltipViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__loadoutTooltipViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RarityIMG_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RarityIMG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconIMG_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IconIMG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillSwitchIMG_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillSwitchIMG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LockedIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Background;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShadowOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Selected_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Selected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayoutScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayoutScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHoverBorder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnHoverBorder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackCountTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StackCountTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlusSignIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlusSignIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RarityTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RarityTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__itemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreSelectableButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetTooltipData, "GetTooltipData" }, // 337219009
		{ &Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetItemId, "GetWidgetItemId" }, // 33220316
		{ &Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_GetWidgetLockedState, "GetWidgetLockedState" }, // 2192111007
		{ &Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetBackgroundLayers, "SetBackgroundLayers" }, // 1326168453
		{ &Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetBackgroundShadowLayers, "SetBackgroundShadowLayers" }, // 846138479
		{ &Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetDisabledWidget, "SetDisabledWidget" }, // 2779107204
		{ &Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetEmptyWidget, "SetEmptyWidget" }, // 3206295962
		{ &Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetIsPerkSurfacingExperimentActive, "SetIsPerkSurfacingExperimentActive" }, // 2684244303
		{ &Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartData, "SetLoadoutPartData" }, // 1922306092
		{ &Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartScale, "SetLoadoutPartScale" }, // 533679194
		{ &Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetLoadoutPartTooltipData, "SetLoadoutPartTooltipData" }, // 1102530089
		{ &Z_Construct_UFunction_UCoreMenuLoadoutPartWidget_SetSelectedState, "SetSelectedState" }, // 3910102564
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreMenuLoadoutPartWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_SlotIndex_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "Category", "CoreMenuLoadoutPartWidget" },
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, SlotIndex), Z_Construct_UEnum_DBDSharedTypes_ELoadoutSlot, METADATA_PARAMS(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_SlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_SlotIndex_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_HorizontalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "CoreMenuLoadoutPartWidget" },
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, HorizontalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_HorizontalAlignment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_VerticalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "CoreMenuLoadoutPartWidget" },
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, VerticalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_VerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp__loadoutTooltipViewData_MetaData[] = {
		{ "Category", "CoreMenuLoadoutPartWidget" },
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp__loadoutTooltipViewData = { "_loadoutTooltipViewData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, _loadoutTooltipViewData), Z_Construct_UScriptStruct_FLoadoutTooltipData, METADATA_PARAMS(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp__loadoutTooltipViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp__loadoutTooltipViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_RarityIMG_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreMenuLoadoutPartWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_RarityIMG = { "RarityIMG", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, RarityIMG), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_RarityIMG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_RarityIMG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_IconIMG_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreMenuLoadoutPartWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_IconIMG = { "IconIMG", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, IconIMG), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_IconIMG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_IconIMG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_KillSwitchIMG_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreMenuLoadoutPartWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_KillSwitchIMG = { "KillSwitchIMG", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, KillSwitchIMG), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_KillSwitchIMG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_KillSwitchIMG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_LockedIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreMenuLoadoutPartWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_LockedIcon = { "LockedIcon", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, LockedIcon), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_LockedIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_LockedIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_Background_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreMenuLoadoutPartWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, Background), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_Background_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_Background_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_ShadowOffset_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreMenuLoadoutPartWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_ShadowOffset = { "ShadowOffset", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, ShadowOffset), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_ShadowOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_ShadowOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_Selected_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreMenuLoadoutPartWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_Selected = { "Selected", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, Selected), Z_Construct_UClass_UGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_Selected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_Selected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_LayoutScale_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreMenuLoadoutPartWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_LayoutScale = { "LayoutScale", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, LayoutScale), Z_Construct_UClass_UScaleBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_LayoutScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_LayoutScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_OnHoverBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreMenuLoadoutPartWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_OnHoverBorder = { "OnHoverBorder", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, OnHoverBorder), Z_Construct_UClass_UCoreOnHoverBorderWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_OnHoverBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_OnHoverBorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_StackCountTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreMenuLoadoutPartWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_StackCountTB = { "StackCountTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, StackCountTB), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_StackCountTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_StackCountTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_PlusSignIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreMenuLoadoutPartWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_PlusSignIcon = { "PlusSignIcon", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, PlusSignIcon), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_PlusSignIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_PlusSignIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_RarityTexture_MetaData[] = {
		{ "Category", "CoreMenuLoadoutPartWidget" },
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_RarityTexture = { "RarityTexture", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, RarityTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_RarityTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_RarityTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp__itemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreMenuLoadoutPartWidget" },
		{ "ModuleRelativePath", "Public/CoreMenuLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp__itemId = { "_itemId", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreMenuLoadoutPartWidget, _itemId), METADATA_PARAMS(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp__itemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp__itemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_SlotIndex_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_SlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_HorizontalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_HorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_VerticalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_VerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp__loadoutTooltipViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_RarityIMG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_IconIMG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_KillSwitchIMG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_LockedIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_Background,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_ShadowOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_Selected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_LayoutScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_OnHoverBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_StackCountTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_PlusSignIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp_RarityTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::NewProp__itemId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreMenuLoadoutPartWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::ClassParams = {
		&UCoreMenuLoadoutPartWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreMenuLoadoutPartWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreMenuLoadoutPartWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreMenuLoadoutPartWidget, 3856919416);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreMenuLoadoutPartWidget>()
	{
		return UCoreMenuLoadoutPartWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreMenuLoadoutPartWidget(Z_Construct_UClass_UCoreMenuLoadoutPartWidget, &UCoreMenuLoadoutPartWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreMenuLoadoutPartWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreMenuLoadoutPartWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
