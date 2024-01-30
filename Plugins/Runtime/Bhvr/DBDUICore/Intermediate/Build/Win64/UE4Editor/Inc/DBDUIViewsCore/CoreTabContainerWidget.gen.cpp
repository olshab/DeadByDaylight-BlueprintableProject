// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreTabContainerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreTabContainerWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContainerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContainerWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonSelector();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FTabWidgetData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UGridPanel_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreTabContainerWidget::execGetTab)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCoreTabWidget**)Z_Param__Result=P_THIS->GetTab(Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTabContainerWidget::execGetTabIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTabIndex(Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTabContainerWidget::execInit)
	{
		P_GET_TARRAY_REF(FTabWidgetData,Z_Param_Out_tabsData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_Out_tabsData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTabContainerWidget::execLayOutTabs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LayOutTabs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTabContainerWidget::execOnTabSelected)
	{
		P_GET_OBJECT(UCoreSelectableButtonWidget,Z_Param_selectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTabSelected(Z_Param_selectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTabContainerWidget::execRemoveTabs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTabs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTabContainerWidget::execSetNotificationVisibility)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_key);
		P_GET_UBOOL(Z_Param_hasNotification);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNotificationVisibility(Z_Param_key,Z_Param_hasNotification);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTabContainerWidget::execSetTabEnabled)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_key);
		P_GET_UBOOL(Z_Param_enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTabEnabled(Z_Param_key,Z_Param_enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTabContainerWidget::execSetTabVisible)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_key);
		P_GET_UBOOL(Z_Param_visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTabVisible(Z_Param_key,Z_Param_visible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTabContainerWidget::execSetUiTakeoverActive)
	{
		P_GET_UBOOL(Z_Param_isActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUiTakeoverActive_Implementation(Z_Param_isActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTabContainerWidget::execSetUseControllerTabSwitching)
	{
		P_GET_UBOOL(Z_Param_enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseControllerTabSwitching(Z_Param_enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTabContainerWidget::execUpdateBackgroundSkin)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_key);
		P_GET_OBJECT(UMaterialInterface,Z_Param_skinMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBackgroundSkin(Z_Param_key,Z_Param_skinMaterial);
		P_NATIVE_END;
	}
	static FName NAME_UCoreTabContainerWidget_SetUiTakeoverActive = FName(TEXT("SetUiTakeoverActive"));
	void UCoreTabContainerWidget::SetUiTakeoverActive(bool isActive)
	{
		CoreTabContainerWidget_eventSetUiTakeoverActive_Parms Parms;
		Parms.isActive=isActive ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreTabContainerWidget_SetUiTakeoverActive),&Parms);
	}
	void UCoreTabContainerWidget::StaticRegisterNativesUCoreTabContainerWidget()
	{
		UClass* Class = UCoreTabContainerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTab", &UCoreTabContainerWidget::execGetTab },
			{ "GetTabIndex", &UCoreTabContainerWidget::execGetTabIndex },
			{ "Init", &UCoreTabContainerWidget::execInit },
			{ "LayOutTabs", &UCoreTabContainerWidget::execLayOutTabs },
			{ "OnTabSelected", &UCoreTabContainerWidget::execOnTabSelected },
			{ "RemoveTabs", &UCoreTabContainerWidget::execRemoveTabs },
			{ "SetNotificationVisibility", &UCoreTabContainerWidget::execSetNotificationVisibility },
			{ "SetTabEnabled", &UCoreTabContainerWidget::execSetTabEnabled },
			{ "SetTabVisible", &UCoreTabContainerWidget::execSetTabVisible },
			{ "SetUiTakeoverActive", &UCoreTabContainerWidget::execSetUiTakeoverActive },
			{ "SetUseControllerTabSwitching", &UCoreTabContainerWidget::execSetUseControllerTabSwitching },
			{ "UpdateBackgroundSkin", &UCoreTabContainerWidget::execUpdateBackgroundSkin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreTabContainerWidget_GetTab_Statics
	{
		struct CoreTabContainerWidget_eventGetTab_Parms
		{
			int32 key;
			UCoreTabWidget* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_key;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreTabContainerWidget_GetTab_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTabContainerWidget_eventGetTab_Parms, key), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabContainerWidget_GetTab_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreTabContainerWidget_GetTab_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTabContainerWidget_eventGetTab_Parms, ReturnValue), Z_Construct_UClass_UCoreTabWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabContainerWidget_GetTab_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_GetTab_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTabContainerWidget_GetTab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabContainerWidget_GetTab_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabContainerWidget_GetTab_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabContainerWidget_GetTab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTabContainerWidget_GetTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTabContainerWidget, nullptr, "GetTab", nullptr, nullptr, sizeof(CoreTabContainerWidget_eventGetTab_Parms), Z_Construct_UFunction_UCoreTabContainerWidget_GetTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_GetTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabContainerWidget_GetTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_GetTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTabContainerWidget_GetTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTabContainerWidget_GetTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTabContainerWidget_GetTabIndex_Statics
	{
		struct CoreTabContainerWidget_eventGetTabIndex_Parms
		{
			int32 key;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreTabContainerWidget_GetTabIndex_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTabContainerWidget_eventGetTabIndex_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreTabContainerWidget_GetTabIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTabContainerWidget_eventGetTabIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTabContainerWidget_GetTabIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabContainerWidget_GetTabIndex_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabContainerWidget_GetTabIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabContainerWidget_GetTabIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTabContainerWidget_GetTabIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTabContainerWidget, nullptr, "GetTabIndex", nullptr, nullptr, sizeof(CoreTabContainerWidget_eventGetTabIndex_Parms), Z_Construct_UFunction_UCoreTabContainerWidget_GetTabIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_GetTabIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabContainerWidget_GetTabIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_GetTabIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTabContainerWidget_GetTabIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTabContainerWidget_GetTabIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics
	{
		struct CoreTabContainerWidget_eventInit_Parms
		{
			TArray<FTabWidgetData> tabsData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tabsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tabsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_tabsData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::NewProp_tabsData_Inner = { "tabsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTabWidgetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::NewProp_tabsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::NewProp_tabsData = { "tabsData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTabContainerWidget_eventInit_Parms, tabsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::NewProp_tabsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::NewProp_tabsData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::NewProp_tabsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::NewProp_tabsData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTabContainerWidget, nullptr, "Init", nullptr, nullptr, sizeof(CoreTabContainerWidget_eventInit_Parms), Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTabContainerWidget_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTabContainerWidget_LayOutTabs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabContainerWidget_LayOutTabs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTabContainerWidget_LayOutTabs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTabContainerWidget, nullptr, "LayOutTabs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabContainerWidget_LayOutTabs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_LayOutTabs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTabContainerWidget_LayOutTabs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTabContainerWidget_LayOutTabs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTabContainerWidget_OnTabSelected_Statics
	{
		struct CoreTabContainerWidget_eventOnTabSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabContainerWidget_OnTabSelected_Statics::NewProp_selectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreTabContainerWidget_OnTabSelected_Statics::NewProp_selectedButton = { "selectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTabContainerWidget_eventOnTabSelected_Parms, selectedButton), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabContainerWidget_OnTabSelected_Statics::NewProp_selectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_OnTabSelected_Statics::NewProp_selectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTabContainerWidget_OnTabSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabContainerWidget_OnTabSelected_Statics::NewProp_selectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabContainerWidget_OnTabSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTabContainerWidget_OnTabSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTabContainerWidget, nullptr, "OnTabSelected", nullptr, nullptr, sizeof(CoreTabContainerWidget_eventOnTabSelected_Parms), Z_Construct_UFunction_UCoreTabContainerWidget_OnTabSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_OnTabSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabContainerWidget_OnTabSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_OnTabSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTabContainerWidget_OnTabSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTabContainerWidget_OnTabSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTabContainerWidget_RemoveTabs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabContainerWidget_RemoveTabs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTabContainerWidget_RemoveTabs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTabContainerWidget, nullptr, "RemoveTabs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabContainerWidget_RemoveTabs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_RemoveTabs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTabContainerWidget_RemoveTabs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTabContainerWidget_RemoveTabs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTabContainerWidget_SetNotificationVisibility_Statics
	{
		struct CoreTabContainerWidget_eventSetNotificationVisibility_Parms
		{
			int32 key;
			bool hasNotification;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_key;
		static void NewProp_hasNotification_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasNotification;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreTabContainerWidget_SetNotificationVisibility_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTabContainerWidget_eventSetNotificationVisibility_Parms, key), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoreTabContainerWidget_SetNotificationVisibility_Statics::NewProp_hasNotification_SetBit(void* Obj)
	{
		((CoreTabContainerWidget_eventSetNotificationVisibility_Parms*)Obj)->hasNotification = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreTabContainerWidget_SetNotificationVisibility_Statics::NewProp_hasNotification = { "hasNotification", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreTabContainerWidget_eventSetNotificationVisibility_Parms), &Z_Construct_UFunction_UCoreTabContainerWidget_SetNotificationVisibility_Statics::NewProp_hasNotification_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTabContainerWidget_SetNotificationVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabContainerWidget_SetNotificationVisibility_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabContainerWidget_SetNotificationVisibility_Statics::NewProp_hasNotification,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabContainerWidget_SetNotificationVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTabContainerWidget_SetNotificationVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTabContainerWidget, nullptr, "SetNotificationVisibility", nullptr, nullptr, sizeof(CoreTabContainerWidget_eventSetNotificationVisibility_Parms), Z_Construct_UFunction_UCoreTabContainerWidget_SetNotificationVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_SetNotificationVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabContainerWidget_SetNotificationVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_SetNotificationVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTabContainerWidget_SetNotificationVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTabContainerWidget_SetNotificationVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTabContainerWidget_SetTabEnabled_Statics
	{
		struct CoreTabContainerWidget_eventSetTabEnabled_Parms
		{
			int32 key;
			bool enabled;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_key;
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreTabContainerWidget_SetTabEnabled_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTabContainerWidget_eventSetTabEnabled_Parms, key), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoreTabContainerWidget_SetTabEnabled_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((CoreTabContainerWidget_eventSetTabEnabled_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreTabContainerWidget_SetTabEnabled_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreTabContainerWidget_eventSetTabEnabled_Parms), &Z_Construct_UFunction_UCoreTabContainerWidget_SetTabEnabled_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTabContainerWidget_SetTabEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabContainerWidget_SetTabEnabled_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabContainerWidget_SetTabEnabled_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabContainerWidget_SetTabEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTabContainerWidget_SetTabEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTabContainerWidget, nullptr, "SetTabEnabled", nullptr, nullptr, sizeof(CoreTabContainerWidget_eventSetTabEnabled_Parms), Z_Construct_UFunction_UCoreTabContainerWidget_SetTabEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_SetTabEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabContainerWidget_SetTabEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_SetTabEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTabContainerWidget_SetTabEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTabContainerWidget_SetTabEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTabContainerWidget_SetTabVisible_Statics
	{
		struct CoreTabContainerWidget_eventSetTabVisible_Parms
		{
			int32 key;
			bool visible;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_key;
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreTabContainerWidget_SetTabVisible_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTabContainerWidget_eventSetTabVisible_Parms, key), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoreTabContainerWidget_SetTabVisible_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((CoreTabContainerWidget_eventSetTabVisible_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreTabContainerWidget_SetTabVisible_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreTabContainerWidget_eventSetTabVisible_Parms), &Z_Construct_UFunction_UCoreTabContainerWidget_SetTabVisible_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTabContainerWidget_SetTabVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabContainerWidget_SetTabVisible_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabContainerWidget_SetTabVisible_Statics::NewProp_visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabContainerWidget_SetTabVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTabContainerWidget_SetTabVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTabContainerWidget, nullptr, "SetTabVisible", nullptr, nullptr, sizeof(CoreTabContainerWidget_eventSetTabVisible_Parms), Z_Construct_UFunction_UCoreTabContainerWidget_SetTabVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_SetTabVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabContainerWidget_SetTabVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_SetTabVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTabContainerWidget_SetTabVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTabContainerWidget_SetTabVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTabContainerWidget_SetUiTakeoverActive_Statics
	{
		static void NewProp_isActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreTabContainerWidget_SetUiTakeoverActive_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((CoreTabContainerWidget_eventSetUiTakeoverActive_Parms*)Obj)->isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreTabContainerWidget_SetUiTakeoverActive_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreTabContainerWidget_eventSetUiTakeoverActive_Parms), &Z_Construct_UFunction_UCoreTabContainerWidget_SetUiTakeoverActive_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTabContainerWidget_SetUiTakeoverActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabContainerWidget_SetUiTakeoverActive_Statics::NewProp_isActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabContainerWidget_SetUiTakeoverActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTabContainerWidget_SetUiTakeoverActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTabContainerWidget, nullptr, "SetUiTakeoverActive", nullptr, nullptr, sizeof(CoreTabContainerWidget_eventSetUiTakeoverActive_Parms), Z_Construct_UFunction_UCoreTabContainerWidget_SetUiTakeoverActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_SetUiTakeoverActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabContainerWidget_SetUiTakeoverActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_SetUiTakeoverActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTabContainerWidget_SetUiTakeoverActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTabContainerWidget_SetUiTakeoverActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTabContainerWidget_SetUseControllerTabSwitching_Statics
	{
		struct CoreTabContainerWidget_eventSetUseControllerTabSwitching_Parms
		{
			bool enabled;
		};
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreTabContainerWidget_SetUseControllerTabSwitching_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((CoreTabContainerWidget_eventSetUseControllerTabSwitching_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreTabContainerWidget_SetUseControllerTabSwitching_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreTabContainerWidget_eventSetUseControllerTabSwitching_Parms), &Z_Construct_UFunction_UCoreTabContainerWidget_SetUseControllerTabSwitching_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTabContainerWidget_SetUseControllerTabSwitching_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabContainerWidget_SetUseControllerTabSwitching_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabContainerWidget_SetUseControllerTabSwitching_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTabContainerWidget_SetUseControllerTabSwitching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTabContainerWidget, nullptr, "SetUseControllerTabSwitching", nullptr, nullptr, sizeof(CoreTabContainerWidget_eventSetUseControllerTabSwitching_Parms), Z_Construct_UFunction_UCoreTabContainerWidget_SetUseControllerTabSwitching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_SetUseControllerTabSwitching_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabContainerWidget_SetUseControllerTabSwitching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_SetUseControllerTabSwitching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTabContainerWidget_SetUseControllerTabSwitching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTabContainerWidget_SetUseControllerTabSwitching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTabContainerWidget_UpdateBackgroundSkin_Statics
	{
		struct CoreTabContainerWidget_eventUpdateBackgroundSkin_Parms
		{
			int32 key;
			UMaterialInterface* skinMaterial;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skinMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreTabContainerWidget_UpdateBackgroundSkin_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTabContainerWidget_eventUpdateBackgroundSkin_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreTabContainerWidget_UpdateBackgroundSkin_Statics::NewProp_skinMaterial = { "skinMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTabContainerWidget_eventUpdateBackgroundSkin_Parms, skinMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTabContainerWidget_UpdateBackgroundSkin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabContainerWidget_UpdateBackgroundSkin_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabContainerWidget_UpdateBackgroundSkin_Statics::NewProp_skinMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabContainerWidget_UpdateBackgroundSkin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTabContainerWidget_UpdateBackgroundSkin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTabContainerWidget, nullptr, "UpdateBackgroundSkin", nullptr, nullptr, sizeof(CoreTabContainerWidget_eventUpdateBackgroundSkin_Parms), Z_Construct_UFunction_UCoreTabContainerWidget_UpdateBackgroundSkin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_UpdateBackgroundSkin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabContainerWidget_UpdateBackgroundSkin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_UpdateBackgroundSkin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTabContainerWidget_UpdateBackgroundSkin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTabContainerWidget_UpdateBackgroundSkin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreTabContainerWidget_NoRegister()
	{
		return UCoreTabContainerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreTabContainerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPromptTriggeredSfx_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputPromptTriggeredSfx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlignHorizontally_MetaData[];
#endif
		static void NewProp_AlignHorizontally_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlignHorizontally;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TabPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoreTabClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CoreTabClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TabContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseControllerTabSwitching_MetaData[];
#endif
		static void NewProp_UseControllerTabSwitching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseControllerTabSwitching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanLoop_MetaData[];
#endif
		static void NewProp_CanLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FillContainerSpace_MetaData[];
#endif
		static void NewProp_FillContainerSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FillContainerSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendAnalyticsData_MetaData[];
#endif
		static void NewProp_SendAnalyticsData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SendAnalyticsData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreTabContainerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreButtonSelector,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreTabContainerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreTabContainerWidget_GetTab, "GetTab" }, // 4243619755
		{ &Z_Construct_UFunction_UCoreTabContainerWidget_GetTabIndex, "GetTabIndex" }, // 496432428
		{ &Z_Construct_UFunction_UCoreTabContainerWidget_Init, "Init" }, // 3074405324
		{ &Z_Construct_UFunction_UCoreTabContainerWidget_LayOutTabs, "LayOutTabs" }, // 258842238
		{ &Z_Construct_UFunction_UCoreTabContainerWidget_OnTabSelected, "OnTabSelected" }, // 4190798459
		{ &Z_Construct_UFunction_UCoreTabContainerWidget_RemoveTabs, "RemoveTabs" }, // 3420276384
		{ &Z_Construct_UFunction_UCoreTabContainerWidget_SetNotificationVisibility, "SetNotificationVisibility" }, // 822228531
		{ &Z_Construct_UFunction_UCoreTabContainerWidget_SetTabEnabled, "SetTabEnabled" }, // 663647258
		{ &Z_Construct_UFunction_UCoreTabContainerWidget_SetTabVisible, "SetTabVisible" }, // 2893881075
		{ &Z_Construct_UFunction_UCoreTabContainerWidget_SetUiTakeoverActive, "SetUiTakeoverActive" }, // 297746395
		{ &Z_Construct_UFunction_UCoreTabContainerWidget_SetUseControllerTabSwitching, "SetUseControllerTabSwitching" }, // 2731075079
		{ &Z_Construct_UFunction_UCoreTabContainerWidget_UpdateBackgroundSkin, "UpdateBackgroundSkin" }, // 620647725
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabContainerWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreTabContainerWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_InputPromptTriggeredSfx_MetaData[] = {
		{ "Category", "CoreTabContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_InputPromptTriggeredSfx = { "InputPromptTriggeredSfx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTabContainerWidget, InputPromptTriggeredSfx), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_InputPromptTriggeredSfx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_InputPromptTriggeredSfx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_AlignHorizontally_MetaData[] = {
		{ "Category", "CoreTabContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_AlignHorizontally_SetBit(void* Obj)
	{
		((UCoreTabContainerWidget*)Obj)->AlignHorizontally = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_AlignHorizontally = { "AlignHorizontally", nullptr, (EPropertyFlags)0x0020080002000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreTabContainerWidget), &Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_AlignHorizontally_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_AlignHorizontally_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_AlignHorizontally_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_TabPadding_MetaData[] = {
		{ "Category", "CoreTabContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_TabPadding = { "TabPadding", nullptr, (EPropertyFlags)0x0020080002000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTabContainerWidget, TabPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_TabPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_TabPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_CoreTabClass_MetaData[] = {
		{ "Category", "CoreTabContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_CoreTabClass = { "CoreTabClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTabContainerWidget, CoreTabClass), Z_Construct_UClass_UCoreTabWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_CoreTabClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_CoreTabClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_TabContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreTabContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_TabContainer = { "TabContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTabContainerWidget, TabContainer), Z_Construct_UClass_UGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_TabContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_TabContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_UseControllerTabSwitching_MetaData[] = {
		{ "Category", "CoreTabContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_UseControllerTabSwitching_SetBit(void* Obj)
	{
		((UCoreTabContainerWidget*)Obj)->UseControllerTabSwitching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_UseControllerTabSwitching = { "UseControllerTabSwitching", nullptr, (EPropertyFlags)0x0020080002000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreTabContainerWidget), &Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_UseControllerTabSwitching_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_UseControllerTabSwitching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_UseControllerTabSwitching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_CanLoop_MetaData[] = {
		{ "Category", "CoreTabContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_CanLoop_SetBit(void* Obj)
	{
		((UCoreTabContainerWidget*)Obj)->CanLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_CanLoop = { "CanLoop", nullptr, (EPropertyFlags)0x0020080002000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreTabContainerWidget), &Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_CanLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_CanLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_CanLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_FillContainerSpace_MetaData[] = {
		{ "Category", "CoreTabContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_FillContainerSpace_SetBit(void* Obj)
	{
		((UCoreTabContainerWidget*)Obj)->FillContainerSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_FillContainerSpace = { "FillContainerSpace", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreTabContainerWidget), &Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_FillContainerSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_FillContainerSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_FillContainerSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_SendAnalyticsData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreTabContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_SendAnalyticsData_SetBit(void* Obj)
	{
		((UCoreTabContainerWidget*)Obj)->SendAnalyticsData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_SendAnalyticsData = { "SendAnalyticsData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreTabContainerWidget), &Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_SendAnalyticsData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_SendAnalyticsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_SendAnalyticsData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreTabContainerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_InputPromptTriggeredSfx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_AlignHorizontally,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_TabPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_CoreTabClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_TabContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_UseControllerTabSwitching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_CanLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_FillContainerSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_SendAnalyticsData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreTabContainerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreTabContainerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreTabContainerWidget_Statics::ClassParams = {
		&UCoreTabContainerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreTabContainerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabContainerWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreTabContainerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabContainerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreTabContainerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreTabContainerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreTabContainerWidget, 3938624889);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreTabContainerWidget>()
	{
		return UCoreTabContainerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreTabContainerWidget(Z_Construct_UClass_UCoreTabContainerWidget, &UCoreTabContainerWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreTabContainerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreTabContainerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
