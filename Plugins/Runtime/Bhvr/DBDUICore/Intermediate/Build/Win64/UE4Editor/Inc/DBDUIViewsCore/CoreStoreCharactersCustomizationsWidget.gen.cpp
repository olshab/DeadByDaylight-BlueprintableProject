// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreStoreCharactersCustomizationsWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreStoreCharactersCustomizationsWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_StoreCustomizationSelectedDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_StoreCategorySelectedDelegate__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCustomizationItemWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCategoryWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCharactersFilterWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePreConstructableList_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCharactersCustomizationsViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreStoreCharactersCustomizationsWidget::execOnCategorySelected)
	{
		P_GET_OBJECT(UCoreSelectableButtonWidget,Z_Param_buttonTarget);
		P_GET_UBOOL(Z_Param_isSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCategorySelected(Z_Param_buttonTarget,Z_Param_isSelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreCharactersCustomizationsWidget::execOnCustomizationSelected)
	{
		P_GET_OBJECT(UCoreSelectableButtonWidget,Z_Param_buttonTarget);
		P_GET_UBOOL(Z_Param_isSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCustomizationSelected(Z_Param_buttonTarget,Z_Param_isSelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreCharactersCustomizationsWidget::execOnCustomizationSelectedAgain)
	{
		P_GET_OBJECT(UCoreSelectableButtonWidget,Z_Param_buttonTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCustomizationSelectedAgain(Z_Param_buttonTarget);
		P_NATIVE_END;
	}
	void UCoreStoreCharactersCustomizationsWidget::StaticRegisterNativesUCoreStoreCharactersCustomizationsWidget()
	{
		UClass* Class = UCoreStoreCharactersCustomizationsWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCategorySelected", &UCoreStoreCharactersCustomizationsWidget::execOnCategorySelected },
			{ "OnCustomizationSelected", &UCoreStoreCharactersCustomizationsWidget::execOnCustomizationSelected },
			{ "OnCustomizationSelectedAgain", &UCoreStoreCharactersCustomizationsWidget::execOnCustomizationSelectedAgain },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCategorySelected_Statics
	{
		struct CoreStoreCharactersCustomizationsWidget_eventOnCategorySelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCategorySelected_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCategorySelected_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreCharactersCustomizationsWidget_eventOnCategorySelected_Parms, buttonTarget), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCategorySelected_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCategorySelected_Statics::NewProp_buttonTarget_MetaData)) };
	void Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCategorySelected_Statics::NewProp_isSelected_SetBit(void* Obj)
	{
		((CoreStoreCharactersCustomizationsWidget_eventOnCategorySelected_Parms*)Obj)->isSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCategorySelected_Statics::NewProp_isSelected = { "isSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreStoreCharactersCustomizationsWidget_eventOnCategorySelected_Parms), &Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCategorySelected_Statics::NewProp_isSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCategorySelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCategorySelected_Statics::NewProp_buttonTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCategorySelected_Statics::NewProp_isSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCategorySelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreCharactersCustomizationsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCategorySelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget, nullptr, "OnCategorySelected", nullptr, nullptr, sizeof(CoreStoreCharactersCustomizationsWidget_eventOnCategorySelected_Parms), Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCategorySelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCategorySelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCategorySelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCategorySelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCategorySelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCategorySelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelected_Statics
	{
		struct CoreStoreCharactersCustomizationsWidget_eventOnCustomizationSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelected_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelected_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreCharactersCustomizationsWidget_eventOnCustomizationSelected_Parms, buttonTarget), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelected_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelected_Statics::NewProp_buttonTarget_MetaData)) };
	void Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelected_Statics::NewProp_isSelected_SetBit(void* Obj)
	{
		((CoreStoreCharactersCustomizationsWidget_eventOnCustomizationSelected_Parms*)Obj)->isSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelected_Statics::NewProp_isSelected = { "isSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreStoreCharactersCustomizationsWidget_eventOnCustomizationSelected_Parms), &Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelected_Statics::NewProp_isSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelected_Statics::NewProp_buttonTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelected_Statics::NewProp_isSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreCharactersCustomizationsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget, nullptr, "OnCustomizationSelected", nullptr, nullptr, sizeof(CoreStoreCharactersCustomizationsWidget_eventOnCustomizationSelected_Parms), Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelectedAgain_Statics
	{
		struct CoreStoreCharactersCustomizationsWidget_eventOnCustomizationSelectedAgain_Parms
		{
			UCoreSelectableButtonWidget* buttonTarget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_buttonTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelectedAgain_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelectedAgain_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreCharactersCustomizationsWidget_eventOnCustomizationSelectedAgain_Parms, buttonTarget), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelectedAgain_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelectedAgain_Statics::NewProp_buttonTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelectedAgain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelectedAgain_Statics::NewProp_buttonTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelectedAgain_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreCharactersCustomizationsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelectedAgain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget, nullptr, "OnCustomizationSelectedAgain", nullptr, nullptr, sizeof(CoreStoreCharactersCustomizationsWidget_eventOnCustomizationSelectedAgain_Parms), Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelectedAgain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelectedAgain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelectedAgain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelectedAgain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelectedAgain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelectedAgain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_NoRegister()
	{
		return UCoreStoreCharactersCustomizationsWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customizationSelectedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__customizationSelectedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__categorySelectedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__categorySelectedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customizationItemWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__customizationItemWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__categoryItemWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__categoryItemWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numberOfColumns_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__numberOfColumns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customizationItemScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__customizationItemScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__layoutMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__layoutMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizationsScroll_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomizationsScroll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizationsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomizationsContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoriesContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CategoriesContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiltersWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FiltersWidget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__selectedCustomizationItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__selectedCustomizationItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__selectedCustomizationItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxSelectedItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__maxSelectedItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__selectedCategoryItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__selectedCategoryItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__preConstructedCategoriesCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__preConstructedCategoriesCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__preConstructedCustomizationsCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__preConstructedCustomizationsCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__categoryList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__categoryList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customizationList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__customizationList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCategorySelected, "OnCategorySelected" }, // 79510479
		{ &Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelected, "OnCustomizationSelected" }, // 3569757517
		{ &Z_Construct_UFunction_UCoreStoreCharactersCustomizationsWidget_OnCustomizationSelectedAgain, "OnCustomizationSelectedAgain" }, // 3758075004
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreStoreCharactersCustomizationsWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersCustomizationsWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__customizationSelectedDelegate_MetaData[] = {
		{ "Category", "CoreStoreCharactersCustomizationsWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersCustomizationsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__customizationSelectedDelegate = { "_customizationSelectedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _customizationSelectedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_StoreCustomizationSelectedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__customizationSelectedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__customizationSelectedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__categorySelectedDelegate_MetaData[] = {
		{ "Category", "CoreStoreCharactersCustomizationsWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersCustomizationsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__categorySelectedDelegate = { "_categorySelectedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _categorySelectedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_StoreCategorySelectedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__categorySelectedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__categorySelectedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__customizationItemWidgetClass_MetaData[] = {
		{ "Category", "CoreStoreCharactersCustomizationsWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersCustomizationsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__customizationItemWidgetClass = { "_customizationItemWidgetClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _customizationItemWidgetClass), Z_Construct_UClass_UCoreStoreCustomizationItemWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__customizationItemWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__customizationItemWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__categoryItemWidgetClass_MetaData[] = {
		{ "Category", "CoreStoreCharactersCustomizationsWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersCustomizationsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__categoryItemWidgetClass = { "_categoryItemWidgetClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _categoryItemWidgetClass), Z_Construct_UClass_UCoreStoreCategoryWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__categoryItemWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__categoryItemWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__numberOfColumns_MetaData[] = {
		{ "Category", "CoreStoreCharactersCustomizationsWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersCustomizationsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__numberOfColumns = { "_numberOfColumns", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _numberOfColumns), METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__numberOfColumns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__numberOfColumns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__customizationItemScale_MetaData[] = {
		{ "Category", "CoreStoreCharactersCustomizationsWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersCustomizationsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__customizationItemScale = { "_customizationItemScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _customizationItemScale), METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__customizationItemScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__customizationItemScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__layoutMask_MetaData[] = {
		{ "Category", "CoreStoreCharactersCustomizationsWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersCustomizationsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__layoutMask = { "_layoutMask", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _layoutMask), METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__layoutMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__layoutMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp_CustomizationsScroll_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreCharactersCustomizationsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersCustomizationsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp_CustomizationsScroll = { "CustomizationsScroll", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, CustomizationsScroll), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp_CustomizationsScroll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp_CustomizationsScroll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp_CustomizationsContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreCharactersCustomizationsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersCustomizationsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp_CustomizationsContainer = { "CustomizationsContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, CustomizationsContainer), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp_CustomizationsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp_CustomizationsContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp_CategoriesContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreCharactersCustomizationsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersCustomizationsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp_CategoriesContainer = { "CategoriesContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, CategoriesContainer), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp_CategoriesContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp_CategoriesContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp_FiltersWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreCharactersCustomizationsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersCustomizationsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp_FiltersWidget = { "FiltersWidget", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, FiltersWidget), Z_Construct_UClass_UCoreStoreCharactersFilterWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp_FiltersWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp_FiltersWidget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__selectedCustomizationItems_Inner = { "_selectedCustomizationItems", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreStoreCustomizationItemWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__selectedCustomizationItems_MetaData[] = {
		{ "Category", "CoreStoreCharactersCustomizationsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersCustomizationsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__selectedCustomizationItems = { "_selectedCustomizationItems", nullptr, (EPropertyFlags)0x002008800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _selectedCustomizationItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__selectedCustomizationItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__selectedCustomizationItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__maxSelectedItems_MetaData[] = {
		{ "Category", "CoreStoreCharactersCustomizationsWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersCustomizationsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__maxSelectedItems = { "_maxSelectedItems", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _maxSelectedItems), METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__maxSelectedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__maxSelectedItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__selectedCategoryItem_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreCharactersCustomizationsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersCustomizationsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__selectedCategoryItem = { "_selectedCategoryItem", nullptr, (EPropertyFlags)0x002008000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _selectedCategoryItem), Z_Construct_UClass_UCoreStoreCategoryWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__selectedCategoryItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__selectedCategoryItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__preConstructedCategoriesCount_MetaData[] = {
		{ "Category", "CoreStoreCharactersCustomizationsWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersCustomizationsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__preConstructedCategoriesCount = { "_preConstructedCategoriesCount", nullptr, (EPropertyFlags)0x0020080002000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _preConstructedCategoriesCount), METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__preConstructedCategoriesCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__preConstructedCategoriesCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__preConstructedCustomizationsCount_MetaData[] = {
		{ "Category", "CoreStoreCharactersCustomizationsWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersCustomizationsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__preConstructedCustomizationsCount = { "_preConstructedCustomizationsCount", nullptr, (EPropertyFlags)0x0020080002000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _preConstructedCustomizationsCount), METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__preConstructedCustomizationsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__preConstructedCustomizationsCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__categoryList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreStoreCharactersCustomizationsWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersCustomizationsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__categoryList = { "_categoryList", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _categoryList), Z_Construct_UClass_UCorePreConstructableList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__categoryList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__categoryList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__customizationList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreStoreCharactersCustomizationsWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersCustomizationsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__customizationList = { "_customizationList", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _customizationList), Z_Construct_UClass_UCorePreConstructableList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__customizationList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__customizationList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__customizationSelectedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__categorySelectedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__customizationItemWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__categoryItemWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__numberOfColumns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__customizationItemScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__layoutMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp_CustomizationsScroll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp_CustomizationsContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp_CategoriesContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp_FiltersWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__selectedCustomizationItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__selectedCustomizationItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__maxSelectedItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__selectedCategoryItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__preConstructedCategoriesCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__preConstructedCustomizationsCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__categoryList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::NewProp__customizationList,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStoreCharactersCustomizationsViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreStoreCharactersCustomizationsWidget, IStoreCharactersCustomizationsViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStoreCharactersCustomizationsWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::ClassParams = {
		&UCoreStoreCharactersCustomizationsWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreStoreCharactersCustomizationsWidget, 1315472782);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreStoreCharactersCustomizationsWidget>()
	{
		return UCoreStoreCharactersCustomizationsWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreStoreCharactersCustomizationsWidget(Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget, &UCoreStoreCharactersCustomizationsWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreStoreCharactersCustomizationsWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStoreCharactersCustomizationsWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
