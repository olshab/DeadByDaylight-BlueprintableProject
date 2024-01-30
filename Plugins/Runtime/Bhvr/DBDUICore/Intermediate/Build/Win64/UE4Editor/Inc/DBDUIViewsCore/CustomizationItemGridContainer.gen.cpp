// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CustomizationItemGridContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizationItemGridContainer() {}
// Cross Module References
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_UCustomizationItemGridContainer_OnItemClickedDelegate__DelegateSignature();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCustomizationItemGridContainer();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCustomizationItemGridContainer_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCustomizationItemWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UGridPanel_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDScrollBox_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UCustomizationItemGridContainer_OnItemClickedDelegate__DelegateSignature_Statics
	{
		struct CustomizationItemGridContainer_eventOnItemClickedDelegate_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCustomizationItemGridContainer_OnItemClickedDelegate__DelegateSignature_Statics::NewProp_selectedIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UCustomizationItemGridContainer_OnItemClickedDelegate__DelegateSignature_Statics::NewProp_selectedIndex = { "selectedIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomizationItemGridContainer_eventOnItemClickedDelegate_Parms, selectedIndex), METADATA_PARAMS(Z_Construct_UDelegateFunction_UCustomizationItemGridContainer_OnItemClickedDelegate__DelegateSignature_Statics::NewProp_selectedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCustomizationItemGridContainer_OnItemClickedDelegate__DelegateSignature_Statics::NewProp_selectedIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCustomizationItemGridContainer_OnItemClickedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCustomizationItemGridContainer_OnItemClickedDelegate__DelegateSignature_Statics::NewProp_selectedIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCustomizationItemGridContainer_OnItemClickedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizationItemGridContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCustomizationItemGridContainer_OnItemClickedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizationItemGridContainer, nullptr, "OnItemClickedDelegate__DelegateSignature", nullptr, nullptr, sizeof(CustomizationItemGridContainer_eventOnItemClickedDelegate_Parms), Z_Construct_UDelegateFunction_UCustomizationItemGridContainer_OnItemClickedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCustomizationItemGridContainer_OnItemClickedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCustomizationItemGridContainer_OnItemClickedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCustomizationItemGridContainer_OnItemClickedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCustomizationItemGridContainer_OnItemClickedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCustomizationItemGridContainer_OnItemClickedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCustomizationItemGridContainer::execClearGrid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearGrid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizationItemGridContainer::execOnItemClicked)
	{
		P_GET_OBJECT(UCoreSelectableButtonWidget,Z_Param_buttonTarget);
		P_GET_UBOOL(Z_Param_isSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnItemClicked(Z_Param_buttonTarget,Z_Param_isSelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizationItemGridContainer::execSetData)
	{
		P_GET_TARRAY_REF(UStoreCustomizationItemViewData*,Z_Param_Out_customizationRewardsData);
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_Out_customizationRewardsData,Z_Param_selectedIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizationItemGridContainer::execSetItemsLayout)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_layoutMask);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItemsLayout(Z_Param_layoutMask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizationItemGridContainer::execSetScrollPrompt)
	{
		P_GET_OBJECT(UCoreKeyListenerInputPromptWidget,Z_Param_displayPrompt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScrollPrompt(Z_Param_displayPrompt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizationItemGridContainer::execSetSelectedItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectedItem(Z_Param_selectedIndex);
		P_NATIVE_END;
	}
	void UCustomizationItemGridContainer::StaticRegisterNativesUCustomizationItemGridContainer()
	{
		UClass* Class = UCustomizationItemGridContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearGrid", &UCustomizationItemGridContainer::execClearGrid },
			{ "OnItemClicked", &UCustomizationItemGridContainer::execOnItemClicked },
			{ "SetData", &UCustomizationItemGridContainer::execSetData },
			{ "SetItemsLayout", &UCustomizationItemGridContainer::execSetItemsLayout },
			{ "SetScrollPrompt", &UCustomizationItemGridContainer::execSetScrollPrompt },
			{ "SetSelectedItem", &UCustomizationItemGridContainer::execSetSelectedItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomizationItemGridContainer_ClearGrid_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemGridContainer_ClearGrid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizationItemGridContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizationItemGridContainer_ClearGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizationItemGridContainer, nullptr, "ClearGrid", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemGridContainer_ClearGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemGridContainer_ClearGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizationItemGridContainer_ClearGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomizationItemGridContainer_ClearGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizationItemGridContainer_OnItemClicked_Statics
	{
		struct CustomizationItemGridContainer_eventOnItemClicked_Parms
		{
			UCoreSelectableButtonWidget* buttonTarget;
			bool isSelected;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_buttonTarget;
		static void NewProp_isSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemGridContainer_OnItemClicked_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomizationItemGridContainer_OnItemClicked_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomizationItemGridContainer_eventOnItemClicked_Parms, buttonTarget), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemGridContainer_OnItemClicked_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemGridContainer_OnItemClicked_Statics::NewProp_buttonTarget_MetaData)) };
	void Z_Construct_UFunction_UCustomizationItemGridContainer_OnItemClicked_Statics::NewProp_isSelected_SetBit(void* Obj)
	{
		((CustomizationItemGridContainer_eventOnItemClicked_Parms*)Obj)->isSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomizationItemGridContainer_OnItemClicked_Statics::NewProp_isSelected = { "isSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomizationItemGridContainer_eventOnItemClicked_Parms), &Z_Construct_UFunction_UCustomizationItemGridContainer_OnItemClicked_Statics::NewProp_isSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizationItemGridContainer_OnItemClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizationItemGridContainer_OnItemClicked_Statics::NewProp_buttonTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizationItemGridContainer_OnItemClicked_Statics::NewProp_isSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemGridContainer_OnItemClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizationItemGridContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizationItemGridContainer_OnItemClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizationItemGridContainer, nullptr, "OnItemClicked", nullptr, nullptr, sizeof(CustomizationItemGridContainer_eventOnItemClicked_Parms), Z_Construct_UFunction_UCustomizationItemGridContainer_OnItemClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemGridContainer_OnItemClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemGridContainer_OnItemClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemGridContainer_OnItemClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizationItemGridContainer_OnItemClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomizationItemGridContainer_OnItemClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizationItemGridContainer_SetData_Statics
	{
		struct CustomizationItemGridContainer_eventSetData_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomizationItemGridContainer_SetData_Statics::NewProp_customizationRewardsData_Inner = { "customizationRewardsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemGridContainer_SetData_Statics::NewProp_customizationRewardsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomizationItemGridContainer_SetData_Statics::NewProp_customizationRewardsData = { "customizationRewardsData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomizationItemGridContainer_eventSetData_Parms, customizationRewardsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemGridContainer_SetData_Statics::NewProp_customizationRewardsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemGridContainer_SetData_Statics::NewProp_customizationRewardsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemGridContainer_SetData_Statics::NewProp_selectedIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizationItemGridContainer_SetData_Statics::NewProp_selectedIndex = { "selectedIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomizationItemGridContainer_eventSetData_Parms, selectedIndex), METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemGridContainer_SetData_Statics::NewProp_selectedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemGridContainer_SetData_Statics::NewProp_selectedIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizationItemGridContainer_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizationItemGridContainer_SetData_Statics::NewProp_customizationRewardsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizationItemGridContainer_SetData_Statics::NewProp_customizationRewardsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizationItemGridContainer_SetData_Statics::NewProp_selectedIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemGridContainer_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizationItemGridContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizationItemGridContainer_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizationItemGridContainer, nullptr, "SetData", nullptr, nullptr, sizeof(CustomizationItemGridContainer_eventSetData_Parms), Z_Construct_UFunction_UCustomizationItemGridContainer_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemGridContainer_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemGridContainer_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemGridContainer_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizationItemGridContainer_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomizationItemGridContainer_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizationItemGridContainer_SetItemsLayout_Statics
	{
		struct CustomizationItemGridContainer_eventSetItemsLayout_Parms
		{
			int32 layoutMask;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_layoutMask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizationItemGridContainer_SetItemsLayout_Statics::NewProp_layoutMask = { "layoutMask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomizationItemGridContainer_eventSetItemsLayout_Parms, layoutMask), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizationItemGridContainer_SetItemsLayout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizationItemGridContainer_SetItemsLayout_Statics::NewProp_layoutMask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemGridContainer_SetItemsLayout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizationItemGridContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizationItemGridContainer_SetItemsLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizationItemGridContainer, nullptr, "SetItemsLayout", nullptr, nullptr, sizeof(CustomizationItemGridContainer_eventSetItemsLayout_Parms), Z_Construct_UFunction_UCustomizationItemGridContainer_SetItemsLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemGridContainer_SetItemsLayout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemGridContainer_SetItemsLayout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemGridContainer_SetItemsLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizationItemGridContainer_SetItemsLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomizationItemGridContainer_SetItemsLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizationItemGridContainer_SetScrollPrompt_Statics
	{
		struct CustomizationItemGridContainer_eventSetScrollPrompt_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemGridContainer_SetScrollPrompt_Statics::NewProp_displayPrompt_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomizationItemGridContainer_SetScrollPrompt_Statics::NewProp_displayPrompt = { "displayPrompt", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomizationItemGridContainer_eventSetScrollPrompt_Parms, displayPrompt), Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemGridContainer_SetScrollPrompt_Statics::NewProp_displayPrompt_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemGridContainer_SetScrollPrompt_Statics::NewProp_displayPrompt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizationItemGridContainer_SetScrollPrompt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizationItemGridContainer_SetScrollPrompt_Statics::NewProp_displayPrompt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemGridContainer_SetScrollPrompt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizationItemGridContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizationItemGridContainer_SetScrollPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizationItemGridContainer, nullptr, "SetScrollPrompt", nullptr, nullptr, sizeof(CustomizationItemGridContainer_eventSetScrollPrompt_Parms), Z_Construct_UFunction_UCustomizationItemGridContainer_SetScrollPrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemGridContainer_SetScrollPrompt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemGridContainer_SetScrollPrompt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemGridContainer_SetScrollPrompt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizationItemGridContainer_SetScrollPrompt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomizationItemGridContainer_SetScrollPrompt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizationItemGridContainer_SetSelectedItem_Statics
	{
		struct CustomizationItemGridContainer_eventSetSelectedItem_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemGridContainer_SetSelectedItem_Statics::NewProp_selectedIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizationItemGridContainer_SetSelectedItem_Statics::NewProp_selectedIndex = { "selectedIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomizationItemGridContainer_eventSetSelectedItem_Parms, selectedIndex), METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemGridContainer_SetSelectedItem_Statics::NewProp_selectedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemGridContainer_SetSelectedItem_Statics::NewProp_selectedIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizationItemGridContainer_SetSelectedItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizationItemGridContainer_SetSelectedItem_Statics::NewProp_selectedIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationItemGridContainer_SetSelectedItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizationItemGridContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizationItemGridContainer_SetSelectedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizationItemGridContainer, nullptr, "SetSelectedItem", nullptr, nullptr, sizeof(CustomizationItemGridContainer_eventSetSelectedItem_Parms), Z_Construct_UFunction_UCustomizationItemGridContainer_SetSelectedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemGridContainer_SetSelectedItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationItemGridContainer_SetSelectedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationItemGridContainer_SetSelectedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizationItemGridContainer_SetSelectedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomizationItemGridContainer_SetSelectedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomizationItemGridContainer_NoRegister()
	{
		return UCustomizationItemGridContainer::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizationItemGridContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customizationRewardWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__customizationRewardWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__emptyRewardWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__emptyRewardWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__setSmallTemplate_MetaData[];
#endif
		static void NewProp__setSmallTemplate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__setSmallTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__columnCountInGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__columnCountInGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customizationTileScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__customizationTileScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__layoutMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__layoutMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rowCountToShowScrollBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__rowCountToShowScrollBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fillGridWithEmptyItems_MetaData[];
#endif
		static void NewProp__fillGridWithEmptyItems_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__fillGridWithEmptyItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScrollBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__scrollLabelText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__scrollLabelText;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__customizationRewards_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customizationRewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__customizationRewards;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizationItemGridContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomizationItemGridContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomizationItemGridContainer_ClearGrid, "ClearGrid" }, // 3374529492
		{ &Z_Construct_UFunction_UCustomizationItemGridContainer_OnItemClicked, "OnItemClicked" }, // 3314056110
		{ &Z_Construct_UDelegateFunction_UCustomizationItemGridContainer_OnItemClickedDelegate__DelegateSignature, "OnItemClickedDelegate__DelegateSignature" }, // 508661886
		{ &Z_Construct_UFunction_UCustomizationItemGridContainer_SetData, "SetData" }, // 3793736197
		{ &Z_Construct_UFunction_UCustomizationItemGridContainer_SetItemsLayout, "SetItemsLayout" }, // 518798265
		{ &Z_Construct_UFunction_UCustomizationItemGridContainer_SetScrollPrompt, "SetScrollPrompt" }, // 3214916890
		{ &Z_Construct_UFunction_UCustomizationItemGridContainer_SetSelectedItem, "SetSelectedItem" }, // 1728624741
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationItemGridContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CustomizationItemGridContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CustomizationItemGridContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__customizationRewardWidgetClass_MetaData[] = {
		{ "Category", "CustomizationItemGridContainer" },
		{ "ModuleRelativePath", "Public/CustomizationItemGridContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__customizationRewardWidgetClass = { "_customizationRewardWidgetClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizationItemGridContainer, _customizationRewardWidgetClass), Z_Construct_UClass_UCoreStoreCustomizationItemWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__customizationRewardWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__customizationRewardWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__emptyRewardWidgetClass_MetaData[] = {
		{ "Category", "CustomizationItemGridContainer" },
		{ "ModuleRelativePath", "Public/CustomizationItemGridContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__emptyRewardWidgetClass = { "_emptyRewardWidgetClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizationItemGridContainer, _emptyRewardWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__emptyRewardWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__emptyRewardWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__setSmallTemplate_MetaData[] = {
		{ "Category", "CustomizationItemGridContainer" },
		{ "ModuleRelativePath", "Public/CustomizationItemGridContainer.h" },
	};
#endif
	void Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__setSmallTemplate_SetBit(void* Obj)
	{
		((UCustomizationItemGridContainer*)Obj)->_setSmallTemplate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__setSmallTemplate = { "_setSmallTemplate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCustomizationItemGridContainer), &Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__setSmallTemplate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__setSmallTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__setSmallTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__columnCountInGrid_MetaData[] = {
		{ "Category", "CustomizationItemGridContainer" },
		{ "ModuleRelativePath", "Public/CustomizationItemGridContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__columnCountInGrid = { "_columnCountInGrid", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizationItemGridContainer, _columnCountInGrid), METADATA_PARAMS(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__columnCountInGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__columnCountInGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__customizationTileScale_MetaData[] = {
		{ "Category", "CustomizationItemGridContainer" },
		{ "ModuleRelativePath", "Public/CustomizationItemGridContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__customizationTileScale = { "_customizationTileScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizationItemGridContainer, _customizationTileScale), METADATA_PARAMS(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__customizationTileScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__customizationTileScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__layoutMask_MetaData[] = {
		{ "Category", "CustomizationItemGridContainer" },
		{ "ModuleRelativePath", "Public/CustomizationItemGridContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__layoutMask = { "_layoutMask", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizationItemGridContainer, _layoutMask), METADATA_PARAMS(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__layoutMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__layoutMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__rowCountToShowScrollBar_MetaData[] = {
		{ "Category", "CustomizationItemGridContainer" },
		{ "ModuleRelativePath", "Public/CustomizationItemGridContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__rowCountToShowScrollBar = { "_rowCountToShowScrollBar", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizationItemGridContainer, _rowCountToShowScrollBar), METADATA_PARAMS(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__rowCountToShowScrollBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__rowCountToShowScrollBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__fillGridWithEmptyItems_MetaData[] = {
		{ "Category", "CustomizationItemGridContainer" },
		{ "ModuleRelativePath", "Public/CustomizationItemGridContainer.h" },
	};
#endif
	void Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__fillGridWithEmptyItems_SetBit(void* Obj)
	{
		((UCustomizationItemGridContainer*)Obj)->_fillGridWithEmptyItems = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__fillGridWithEmptyItems = { "_fillGridWithEmptyItems", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCustomizationItemGridContainer), &Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__fillGridWithEmptyItems_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__fillGridWithEmptyItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__fillGridWithEmptyItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp_GridContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CustomizationItemGridContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CustomizationItemGridContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp_GridContainer = { "GridContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizationItemGridContainer, GridContainer), Z_Construct_UClass_UGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp_GridContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp_GridContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp_ScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CustomizationItemGridContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CustomizationItemGridContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp_ScrollBox = { "ScrollBox", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizationItemGridContainer, ScrollBox), Z_Construct_UClass_UDBDScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp_ScrollBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp_ScrollBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__scrollLabelText_MetaData[] = {
		{ "Category", "CustomizationItemGridContainer" },
		{ "ModuleRelativePath", "Public/CustomizationItemGridContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__scrollLabelText = { "_scrollLabelText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizationItemGridContainer, _scrollLabelText), METADATA_PARAMS(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__scrollLabelText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__scrollLabelText_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__customizationRewards_Inner = { "_customizationRewards", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreStoreCustomizationItemWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__customizationRewards_MetaData[] = {
		{ "Category", "CustomizationItemGridContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CustomizationItemGridContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__customizationRewards = { "_customizationRewards", nullptr, (EPropertyFlags)0x002008800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizationItemGridContainer, _customizationRewards), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__customizationRewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__customizationRewards_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizationItemGridContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__customizationRewardWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__emptyRewardWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__setSmallTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__columnCountInGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__customizationTileScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__layoutMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__rowCountToShowScrollBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__fillGridWithEmptyItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp_GridContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp_ScrollBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__scrollLabelText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__customizationRewards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationItemGridContainer_Statics::NewProp__customizationRewards,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizationItemGridContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizationItemGridContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomizationItemGridContainer_Statics::ClassParams = {
		&UCustomizationItemGridContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomizationItemGridContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationItemGridContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizationItemGridContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomizationItemGridContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomizationItemGridContainer, 1639800822);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCustomizationItemGridContainer>()
	{
		return UCustomizationItemGridContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomizationItemGridContainer(Z_Construct_UClass_UCustomizationItemGridContainer, &UCustomizationItemGridContainer::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCustomizationItemGridContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizationItemGridContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
