// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/EventEntryRewardsDisplayWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventEntryRewardsDisplayWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UEventEntryRewardsDisplayWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UEventEntryRewardsDisplayWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationItemOriginViewData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCustomizationItemGridContainer_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreImagePreviewAreaWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCustomizationItemOriginWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEventEntryRewardsDisplayWidget::execDisableInputs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableInputs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventEntryRewardsDisplayWidget::execDisableInstructionArchivesButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableInstructionArchivesButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventEntryRewardsDisplayWidget::execDisableInstructionCurrencyButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableInstructionCurrencyButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventEntryRewardsDisplayWidget::execDisableInstructionStoreButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableInstructionStoreButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventEntryRewardsDisplayWidget::execSetInstructionWidgetData)
	{
		P_GET_STRUCT_REF(FCustomizationItemOriginViewData,Z_Param_Out_viewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInstructionWidgetData(Z_Param_Out_viewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventEntryRewardsDisplayWidget::execSetItemsData)
	{
		P_GET_TARRAY_REF(UStoreCustomizationItemViewData*,Z_Param_Out_customizationRewardsData);
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItemsData(Z_Param_Out_customizationRewardsData,Z_Param_selectedIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventEntryRewardsDisplayWidget::execSetPreviewAreaData)
	{
		P_GET_STRUCT_REF(FCustomizationItemPreviewAreaViewData,Z_Param_Out_viewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreviewAreaData(Z_Param_Out_viewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventEntryRewardsDisplayWidget::execSetScrollPrompt)
	{
		P_GET_OBJECT(UCoreKeyListenerInputPromptWidget,Z_Param_displayPrompt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScrollPrompt(Z_Param_displayPrompt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventEntryRewardsDisplayWidget::execSetSelectedReward)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectedReward(Z_Param_selectedIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventEntryRewardsDisplayWidget::execSetVisuals)
	{
		P_GET_STRUCT(FEventEntryPopupSkinUIData,Z_Param_skinUIData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisuals_Implementation(Z_Param_skinUIData);
		P_NATIVE_END;
	}
	static FName NAME_UEventEntryRewardsDisplayWidget_SetVisuals = FName(TEXT("SetVisuals"));
	void UEventEntryRewardsDisplayWidget::SetVisuals(FEventEntryPopupSkinUIData skinUIData)
	{
		EventEntryRewardsDisplayWidget_eventSetVisuals_Parms Parms;
		Parms.skinUIData=skinUIData;
		ProcessEvent(FindFunctionChecked(NAME_UEventEntryRewardsDisplayWidget_SetVisuals),&Parms);
	}
	void UEventEntryRewardsDisplayWidget::StaticRegisterNativesUEventEntryRewardsDisplayWidget()
	{
		UClass* Class = UEventEntryRewardsDisplayWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableInputs", &UEventEntryRewardsDisplayWidget::execDisableInputs },
			{ "DisableInstructionArchivesButton", &UEventEntryRewardsDisplayWidget::execDisableInstructionArchivesButton },
			{ "DisableInstructionCurrencyButton", &UEventEntryRewardsDisplayWidget::execDisableInstructionCurrencyButton },
			{ "DisableInstructionStoreButton", &UEventEntryRewardsDisplayWidget::execDisableInstructionStoreButton },
			{ "SetInstructionWidgetData", &UEventEntryRewardsDisplayWidget::execSetInstructionWidgetData },
			{ "SetItemsData", &UEventEntryRewardsDisplayWidget::execSetItemsData },
			{ "SetPreviewAreaData", &UEventEntryRewardsDisplayWidget::execSetPreviewAreaData },
			{ "SetScrollPrompt", &UEventEntryRewardsDisplayWidget::execSetScrollPrompt },
			{ "SetSelectedReward", &UEventEntryRewardsDisplayWidget::execSetSelectedReward },
			{ "SetVisuals", &UEventEntryRewardsDisplayWidget::execSetVisuals },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInputs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInputs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryRewardsDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryRewardsDisplayWidget, nullptr, "DisableInputs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInstructionArchivesButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInstructionArchivesButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryRewardsDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInstructionArchivesButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryRewardsDisplayWidget, nullptr, "DisableInstructionArchivesButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInstructionArchivesButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInstructionArchivesButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInstructionArchivesButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInstructionArchivesButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInstructionCurrencyButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInstructionCurrencyButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryRewardsDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInstructionCurrencyButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryRewardsDisplayWidget, nullptr, "DisableInstructionCurrencyButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInstructionCurrencyButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInstructionCurrencyButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInstructionCurrencyButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInstructionCurrencyButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInstructionStoreButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInstructionStoreButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryRewardsDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInstructionStoreButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryRewardsDisplayWidget, nullptr, "DisableInstructionStoreButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInstructionStoreButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInstructionStoreButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInstructionStoreButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInstructionStoreButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetInstructionWidgetData_Statics
	{
		struct EventEntryRewardsDisplayWidget_eventSetInstructionWidgetData_Parms
		{
			FCustomizationItemOriginViewData viewData;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetInstructionWidgetData_Statics::NewProp_viewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetInstructionWidgetData_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryRewardsDisplayWidget_eventSetInstructionWidgetData_Parms, viewData), Z_Construct_UScriptStruct_FCustomizationItemOriginViewData, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetInstructionWidgetData_Statics::NewProp_viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetInstructionWidgetData_Statics::NewProp_viewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetInstructionWidgetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetInstructionWidgetData_Statics::NewProp_viewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetInstructionWidgetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryRewardsDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetInstructionWidgetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryRewardsDisplayWidget, nullptr, "SetInstructionWidgetData", nullptr, nullptr, sizeof(EventEntryRewardsDisplayWidget_eventSetInstructionWidgetData_Parms), Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetInstructionWidgetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetInstructionWidgetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetInstructionWidgetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetInstructionWidgetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetInstructionWidgetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetInstructionWidgetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetItemsData_Statics
	{
		struct EventEntryRewardsDisplayWidget_eventSetItemsData_Parms
		{
			TArray<UStoreCustomizationItemViewData*> customizationRewardsData;
			int32 selectedIndex;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customizationRewardsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_customizationRewardsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_customizationRewardsData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_selectedIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetItemsData_Statics::NewProp_customizationRewardsData_Inner = { "customizationRewardsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetItemsData_Statics::NewProp_customizationRewardsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetItemsData_Statics::NewProp_customizationRewardsData = { "customizationRewardsData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryRewardsDisplayWidget_eventSetItemsData_Parms, customizationRewardsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetItemsData_Statics::NewProp_customizationRewardsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetItemsData_Statics::NewProp_customizationRewardsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetItemsData_Statics::NewProp_selectedIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetItemsData_Statics::NewProp_selectedIndex = { "selectedIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryRewardsDisplayWidget_eventSetItemsData_Parms, selectedIndex), METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetItemsData_Statics::NewProp_selectedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetItemsData_Statics::NewProp_selectedIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetItemsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetItemsData_Statics::NewProp_customizationRewardsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetItemsData_Statics::NewProp_customizationRewardsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetItemsData_Statics::NewProp_selectedIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetItemsData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryRewardsDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetItemsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryRewardsDisplayWidget, nullptr, "SetItemsData", nullptr, nullptr, sizeof(EventEntryRewardsDisplayWidget_eventSetItemsData_Parms), Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetItemsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetItemsData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetItemsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetItemsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetItemsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetItemsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetPreviewAreaData_Statics
	{
		struct EventEntryRewardsDisplayWidget_eventSetPreviewAreaData_Parms
		{
			FCustomizationItemPreviewAreaViewData viewData;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetPreviewAreaData_Statics::NewProp_viewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetPreviewAreaData_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryRewardsDisplayWidget_eventSetPreviewAreaData_Parms, viewData), Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetPreviewAreaData_Statics::NewProp_viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetPreviewAreaData_Statics::NewProp_viewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetPreviewAreaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetPreviewAreaData_Statics::NewProp_viewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetPreviewAreaData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryRewardsDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetPreviewAreaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryRewardsDisplayWidget, nullptr, "SetPreviewAreaData", nullptr, nullptr, sizeof(EventEntryRewardsDisplayWidget_eventSetPreviewAreaData_Parms), Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetPreviewAreaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetPreviewAreaData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetPreviewAreaData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetPreviewAreaData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetPreviewAreaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetPreviewAreaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetScrollPrompt_Statics
	{
		struct EventEntryRewardsDisplayWidget_eventSetScrollPrompt_Parms
		{
			UCoreKeyListenerInputPromptWidget* displayPrompt;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_displayPrompt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_displayPrompt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetScrollPrompt_Statics::NewProp_displayPrompt_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetScrollPrompt_Statics::NewProp_displayPrompt = { "displayPrompt", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryRewardsDisplayWidget_eventSetScrollPrompt_Parms, displayPrompt), Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetScrollPrompt_Statics::NewProp_displayPrompt_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetScrollPrompt_Statics::NewProp_displayPrompt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetScrollPrompt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetScrollPrompt_Statics::NewProp_displayPrompt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetScrollPrompt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryRewardsDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetScrollPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryRewardsDisplayWidget, nullptr, "SetScrollPrompt", nullptr, nullptr, sizeof(EventEntryRewardsDisplayWidget_eventSetScrollPrompt_Parms), Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetScrollPrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetScrollPrompt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetScrollPrompt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetScrollPrompt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetScrollPrompt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetScrollPrompt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetSelectedReward_Statics
	{
		struct EventEntryRewardsDisplayWidget_eventSetSelectedReward_Parms
		{
			int32 selectedIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_selectedIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetSelectedReward_Statics::NewProp_selectedIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetSelectedReward_Statics::NewProp_selectedIndex = { "selectedIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryRewardsDisplayWidget_eventSetSelectedReward_Parms, selectedIndex), METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetSelectedReward_Statics::NewProp_selectedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetSelectedReward_Statics::NewProp_selectedIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetSelectedReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetSelectedReward_Statics::NewProp_selectedIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetSelectedReward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryRewardsDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetSelectedReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryRewardsDisplayWidget, nullptr, "SetSelectedReward", nullptr, nullptr, sizeof(EventEntryRewardsDisplayWidget_eventSetSelectedReward_Parms), Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetSelectedReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetSelectedReward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetSelectedReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetSelectedReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetSelectedReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetSelectedReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetVisuals_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_skinUIData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetVisuals_Statics::NewProp_skinUIData = { "skinUIData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryRewardsDisplayWidget_eventSetVisuals_Parms, skinUIData), Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetVisuals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetVisuals_Statics::NewProp_skinUIData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetVisuals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryRewardsDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryRewardsDisplayWidget, nullptr, "SetVisuals", nullptr, nullptr, sizeof(EventEntryRewardsDisplayWidget_eventSetVisuals_Parms), Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetVisuals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetVisuals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEventEntryRewardsDisplayWidget_NoRegister()
	{
		return UEventEntryRewardsDisplayWidget::StaticClass();
	}
	struct Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__layoutMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__layoutMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstructionWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstructionWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInputs, "DisableInputs" }, // 590948916
		{ &Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInstructionArchivesButton, "DisableInstructionArchivesButton" }, // 3463630278
		{ &Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInstructionCurrencyButton, "DisableInstructionCurrencyButton" }, // 1211010020
		{ &Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_DisableInstructionStoreButton, "DisableInstructionStoreButton" }, // 1183868853
		{ &Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetInstructionWidgetData, "SetInstructionWidgetData" }, // 3025815188
		{ &Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetItemsData, "SetItemsData" }, // 302413
		{ &Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetPreviewAreaData, "SetPreviewAreaData" }, // 4250716944
		{ &Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetScrollPrompt, "SetScrollPrompt" }, // 3697993589
		{ &Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetSelectedReward, "SetSelectedReward" }, // 1177048939
		{ &Z_Construct_UFunction_UEventEntryRewardsDisplayWidget_SetVisuals, "SetVisuals" }, // 3878040122
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EventEntryRewardsDisplayWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EventEntryRewardsDisplayWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::NewProp__layoutMask_MetaData[] = {
		{ "Category", "EventEntryRewardsDisplayWidget" },
		{ "ModuleRelativePath", "Public/EventEntryRewardsDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::NewProp__layoutMask = { "_layoutMask", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryRewardsDisplayWidget, _layoutMask), METADATA_PARAMS(Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::NewProp__layoutMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::NewProp__layoutMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::NewProp_RewardGrid_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EventEntryRewardsDisplayWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EventEntryRewardsDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::NewProp_RewardGrid = { "RewardGrid", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryRewardsDisplayWidget, RewardGrid), Z_Construct_UClass_UCustomizationItemGridContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::NewProp_RewardGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::NewProp_RewardGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::NewProp_PreviewArea_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EventEntryRewardsDisplayWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EventEntryRewardsDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::NewProp_PreviewArea = { "PreviewArea", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryRewardsDisplayWidget, PreviewArea), Z_Construct_UClass_UCoreImagePreviewAreaWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::NewProp_PreviewArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::NewProp_PreviewArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::NewProp_InstructionWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EventEntryRewardsDisplayWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EventEntryRewardsDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::NewProp_InstructionWidget = { "InstructionWidget", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryRewardsDisplayWidget, InstructionWidget), Z_Construct_UClass_UCustomizationItemOriginWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::NewProp_InstructionWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::NewProp_InstructionWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::NewProp__layoutMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::NewProp_RewardGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::NewProp_PreviewArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::NewProp_InstructionWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventEntryRewardsDisplayWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::ClassParams = {
		&UEventEntryRewardsDisplayWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventEntryRewardsDisplayWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventEntryRewardsDisplayWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventEntryRewardsDisplayWidget, 831416062);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UEventEntryRewardsDisplayWidget>()
	{
		return UEventEntryRewardsDisplayWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventEntryRewardsDisplayWidget(Z_Construct_UClass_UEventEntryRewardsDisplayWidget, &UEventEntryRewardsDisplayWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UEventEntryRewardsDisplayWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventEntryRewardsDisplayWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
