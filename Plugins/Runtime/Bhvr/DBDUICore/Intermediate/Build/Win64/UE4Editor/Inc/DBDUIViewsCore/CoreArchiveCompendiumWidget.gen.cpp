// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreArchiveCompendiumWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreArchiveCompendiumWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveCompendiumWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveCompendiumWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContentWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UGridSlot_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_OnCompendiumClickedDelegate__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UGridPanel_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDScrollBox_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveCompendiumViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreArchiveCompendiumWidget::execCreateAndAddButtonToGrid)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCoreArchiveCompendiumButtonWidget**)Z_Param__Result=P_THIS->CreateAndAddButtonToGrid(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveCompendiumWidget::execCreateGhostStories)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_currentStoryNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateGhostStories(Z_Param_currentStoryNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveCompendiumWidget::execOnPastStoryClicked)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_button);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPastStoryClicked(Z_Param_button);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveCompendiumWidget::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveCompendiumWidget::execResetScroll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetScroll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveCompendiumWidget::execSetGridSlot)
	{
		P_GET_OBJECT(UGridSlot,Z_Param_gridSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGridSlot(Z_Param_gridSlot,Z_Param_index);
		P_NATIVE_END;
	}
	void UCoreArchiveCompendiumWidget::StaticRegisterNativesUCoreArchiveCompendiumWidget()
	{
		UClass* Class = UCoreArchiveCompendiumWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAndAddButtonToGrid", &UCoreArchiveCompendiumWidget::execCreateAndAddButtonToGrid },
			{ "CreateGhostStories", &UCoreArchiveCompendiumWidget::execCreateGhostStories },
			{ "OnPastStoryClicked", &UCoreArchiveCompendiumWidget::execOnPastStoryClicked },
			{ "Reset", &UCoreArchiveCompendiumWidget::execReset },
			{ "ResetScroll", &UCoreArchiveCompendiumWidget::execResetScroll },
			{ "SetGridSlot", &UCoreArchiveCompendiumWidget::execSetGridSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateAndAddButtonToGrid_Statics
	{
		struct CoreArchiveCompendiumWidget_eventCreateAndAddButtonToGrid_Parms
		{
			int32 index;
			UCoreArchiveCompendiumButtonWidget* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateAndAddButtonToGrid_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveCompendiumWidget_eventCreateAndAddButtonToGrid_Parms, index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateAndAddButtonToGrid_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateAndAddButtonToGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveCompendiumWidget_eventCreateAndAddButtonToGrid_Parms, ReturnValue), Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateAndAddButtonToGrid_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateAndAddButtonToGrid_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateAndAddButtonToGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateAndAddButtonToGrid_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateAndAddButtonToGrid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateAndAddButtonToGrid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateAndAddButtonToGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveCompendiumWidget, nullptr, "CreateAndAddButtonToGrid", nullptr, nullptr, sizeof(CoreArchiveCompendiumWidget_eventCreateAndAddButtonToGrid_Parms), Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateAndAddButtonToGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateAndAddButtonToGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateAndAddButtonToGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateAndAddButtonToGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateAndAddButtonToGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateAndAddButtonToGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateGhostStories_Statics
	{
		struct CoreArchiveCompendiumWidget_eventCreateGhostStories_Parms
		{
			int32 currentStoryNum;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentStoryNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currentStoryNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateGhostStories_Statics::NewProp_currentStoryNum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateGhostStories_Statics::NewProp_currentStoryNum = { "currentStoryNum", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveCompendiumWidget_eventCreateGhostStories_Parms, currentStoryNum), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateGhostStories_Statics::NewProp_currentStoryNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateGhostStories_Statics::NewProp_currentStoryNum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateGhostStories_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateGhostStories_Statics::NewProp_currentStoryNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateGhostStories_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateGhostStories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveCompendiumWidget, nullptr, "CreateGhostStories", nullptr, nullptr, sizeof(CoreArchiveCompendiumWidget_eventCreateGhostStories_Parms), Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateGhostStories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateGhostStories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateGhostStories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateGhostStories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateGhostStories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateGhostStories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveCompendiumWidget_OnPastStoryClicked_Statics
	{
		struct CoreArchiveCompendiumWidget_eventOnPastStoryClicked_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveCompendiumWidget_OnPastStoryClicked_Statics::NewProp_button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveCompendiumWidget_OnPastStoryClicked_Statics::NewProp_button = { "button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveCompendiumWidget_eventOnPastStoryClicked_Parms, button), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveCompendiumWidget_OnPastStoryClicked_Statics::NewProp_button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumWidget_OnPastStoryClicked_Statics::NewProp_button_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveCompendiumWidget_OnPastStoryClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveCompendiumWidget_OnPastStoryClicked_Statics::NewProp_button,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveCompendiumWidget_OnPastStoryClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveCompendiumWidget_OnPastStoryClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveCompendiumWidget, nullptr, "OnPastStoryClicked", nullptr, nullptr, sizeof(CoreArchiveCompendiumWidget_eventOnPastStoryClicked_Parms), Z_Construct_UFunction_UCoreArchiveCompendiumWidget_OnPastStoryClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumWidget_OnPastStoryClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveCompendiumWidget_OnPastStoryClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumWidget_OnPastStoryClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveCompendiumWidget_OnPastStoryClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveCompendiumWidget_OnPastStoryClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveCompendiumWidget_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveCompendiumWidget_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveCompendiumWidget_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveCompendiumWidget, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveCompendiumWidget_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumWidget_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveCompendiumWidget_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveCompendiumWidget_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveCompendiumWidget_ResetScroll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveCompendiumWidget_ResetScroll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveCompendiumWidget_ResetScroll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveCompendiumWidget, nullptr, "ResetScroll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveCompendiumWidget_ResetScroll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumWidget_ResetScroll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveCompendiumWidget_ResetScroll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveCompendiumWidget_ResetScroll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveCompendiumWidget_SetGridSlot_Statics
	{
		struct CoreArchiveCompendiumWidget_eventSetGridSlot_Parms
		{
			UGridSlot* gridSlot;
			int32 index;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gridSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gridSlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveCompendiumWidget_SetGridSlot_Statics::NewProp_gridSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveCompendiumWidget_SetGridSlot_Statics::NewProp_gridSlot = { "gridSlot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveCompendiumWidget_eventSetGridSlot_Parms, gridSlot), Z_Construct_UClass_UGridSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveCompendiumWidget_SetGridSlot_Statics::NewProp_gridSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumWidget_SetGridSlot_Statics::NewProp_gridSlot_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreArchiveCompendiumWidget_SetGridSlot_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveCompendiumWidget_eventSetGridSlot_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveCompendiumWidget_SetGridSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveCompendiumWidget_SetGridSlot_Statics::NewProp_gridSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveCompendiumWidget_SetGridSlot_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveCompendiumWidget_SetGridSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveCompendiumWidget_SetGridSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveCompendiumWidget, nullptr, "SetGridSlot", nullptr, nullptr, sizeof(CoreArchiveCompendiumWidget_eventSetGridSlot_Parms), Z_Construct_UFunction_UCoreArchiveCompendiumWidget_SetGridSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumWidget_SetGridSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveCompendiumWidget_SetGridSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveCompendiumWidget_SetGridSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveCompendiumWidget_SetGridSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveCompendiumWidget_SetGridSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreArchiveCompendiumWidget_NoRegister()
	{
		return UCoreArchiveCompendiumWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__compendiumButtonWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__compendiumButtonWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onCompendiumClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__onCompendiumClickedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompendiumGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CompendiumGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompendiumScroll_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CompendiumScroll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cellsPerRow_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__cellsPerRow;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__compendiumButtonWidgetPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__compendiumButtonWidgetPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__compendiumButtonWidgetPool;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__compendiumButtonWidgetList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__compendiumButtonWidgetList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__compendiumButtonWidgetList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreTabContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateAndAddButtonToGrid, "CreateAndAddButtonToGrid" }, // 2290857061
		{ &Z_Construct_UFunction_UCoreArchiveCompendiumWidget_CreateGhostStories, "CreateGhostStories" }, // 1044479185
		{ &Z_Construct_UFunction_UCoreArchiveCompendiumWidget_OnPastStoryClicked, "OnPastStoryClicked" }, // 3776035996
		{ &Z_Construct_UFunction_UCoreArchiveCompendiumWidget_Reset, "Reset" }, // 1345389468
		{ &Z_Construct_UFunction_UCoreArchiveCompendiumWidget_ResetScroll, "ResetScroll" }, // 1622794032
		{ &Z_Construct_UFunction_UCoreArchiveCompendiumWidget_SetGridSlot, "SetGridSlot" }, // 4098388386
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreArchiveCompendiumWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__compendiumButtonWidgetClass_MetaData[] = {
		{ "Category", "CoreArchiveCompendiumWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__compendiumButtonWidgetClass = { "_compendiumButtonWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveCompendiumWidget, _compendiumButtonWidgetClass), Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__compendiumButtonWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__compendiumButtonWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__onCompendiumClickedDelegate_MetaData[] = {
		{ "Category", "CoreArchiveCompendiumWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__onCompendiumClickedDelegate = { "_onCompendiumClickedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveCompendiumWidget, _onCompendiumClickedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_OnCompendiumClickedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__onCompendiumClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__onCompendiumClickedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp_CompendiumGrid_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveCompendiumWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp_CompendiumGrid = { "CompendiumGrid", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveCompendiumWidget, CompendiumGrid), Z_Construct_UClass_UGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp_CompendiumGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp_CompendiumGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp_CompendiumScroll_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveCompendiumWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp_CompendiumScroll = { "CompendiumScroll", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveCompendiumWidget, CompendiumScroll), Z_Construct_UClass_UDBDScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp_CompendiumScroll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp_CompendiumScroll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__cellsPerRow_MetaData[] = {
		{ "Category", "CoreArchiveCompendiumWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__cellsPerRow = { "_cellsPerRow", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveCompendiumWidget, _cellsPerRow), METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__cellsPerRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__cellsPerRow_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__compendiumButtonWidgetPool_Inner = { "_compendiumButtonWidgetPool", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__compendiumButtonWidgetPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreArchiveCompendiumWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__compendiumButtonWidgetPool = { "_compendiumButtonWidgetPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveCompendiumWidget, _compendiumButtonWidgetPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__compendiumButtonWidgetPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__compendiumButtonWidgetPool_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__compendiumButtonWidgetList_Inner = { "_compendiumButtonWidgetList", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__compendiumButtonWidgetList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreArchiveCompendiumWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveCompendiumWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__compendiumButtonWidgetList = { "_compendiumButtonWidgetList", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveCompendiumWidget, _compendiumButtonWidgetList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__compendiumButtonWidgetList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__compendiumButtonWidgetList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__compendiumButtonWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__onCompendiumClickedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp_CompendiumGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp_CompendiumScroll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__cellsPerRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__compendiumButtonWidgetPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__compendiumButtonWidgetPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__compendiumButtonWidgetList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::NewProp__compendiumButtonWidgetList,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UArchiveCompendiumViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreArchiveCompendiumWidget, IArchiveCompendiumViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreArchiveCompendiumWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::ClassParams = {
		&UCoreArchiveCompendiumWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreArchiveCompendiumWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreArchiveCompendiumWidget, 2949506545);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreArchiveCompendiumWidget>()
	{
		return UCoreArchiveCompendiumWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreArchiveCompendiumWidget(Z_Construct_UClass_UCoreArchiveCompendiumWidget, &UCoreArchiveCompendiumWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreArchiveCompendiumWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreArchiveCompendiumWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
