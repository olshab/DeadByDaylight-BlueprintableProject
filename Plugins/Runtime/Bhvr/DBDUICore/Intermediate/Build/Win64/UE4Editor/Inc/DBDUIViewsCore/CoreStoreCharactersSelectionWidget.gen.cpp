// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreStoreCharactersSelectionWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreStoreCharactersSelectionWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCharactersSelectionWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_StoreCharacterSelectedDelegate__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCharacterItemWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCharactersFilterWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePreConstructableList_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCharactersSelectionViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreStoreCharactersSelectionWidget::execOnCharacterSelected)
	{
		P_GET_OBJECT(UCoreSelectableButtonWidget,Z_Param_buttonTarget);
		P_GET_UBOOL(Z_Param_isSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterSelected(Z_Param_buttonTarget,Z_Param_isSelected);
		P_NATIVE_END;
	}
	void UCoreStoreCharactersSelectionWidget::StaticRegisterNativesUCoreStoreCharactersSelectionWidget()
	{
		UClass* Class = UCoreStoreCharactersSelectionWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCharacterSelected", &UCoreStoreCharactersSelectionWidget::execOnCharacterSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreStoreCharactersSelectionWidget_OnCharacterSelected_Statics
	{
		struct CoreStoreCharactersSelectionWidget_eventOnCharacterSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCharactersSelectionWidget_OnCharacterSelected_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreCharactersSelectionWidget_OnCharacterSelected_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreCharactersSelectionWidget_eventOnCharacterSelected_Parms, buttonTarget), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCharactersSelectionWidget_OnCharacterSelected_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharactersSelectionWidget_OnCharacterSelected_Statics::NewProp_buttonTarget_MetaData)) };
	void Z_Construct_UFunction_UCoreStoreCharactersSelectionWidget_OnCharacterSelected_Statics::NewProp_isSelected_SetBit(void* Obj)
	{
		((CoreStoreCharactersSelectionWidget_eventOnCharacterSelected_Parms*)Obj)->isSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreStoreCharactersSelectionWidget_OnCharacterSelected_Statics::NewProp_isSelected = { "isSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreStoreCharactersSelectionWidget_eventOnCharacterSelected_Parms), &Z_Construct_UFunction_UCoreStoreCharactersSelectionWidget_OnCharacterSelected_Statics::NewProp_isSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreCharactersSelectionWidget_OnCharacterSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreCharactersSelectionWidget_OnCharacterSelected_Statics::NewProp_buttonTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreCharactersSelectionWidget_OnCharacterSelected_Statics::NewProp_isSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCharactersSelectionWidget_OnCharacterSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreCharactersSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreCharactersSelectionWidget_OnCharacterSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreCharactersSelectionWidget, nullptr, "OnCharacterSelected", nullptr, nullptr, sizeof(CoreStoreCharactersSelectionWidget_eventOnCharacterSelected_Parms), Z_Construct_UFunction_UCoreStoreCharactersSelectionWidget_OnCharacterSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharactersSelectionWidget_OnCharacterSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCharactersSelectionWidget_OnCharacterSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharactersSelectionWidget_OnCharacterSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreCharactersSelectionWidget_OnCharacterSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreCharactersSelectionWidget_OnCharacterSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_NoRegister()
	{
		return UCoreStoreCharactersSelectionWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__characterSelectedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__characterSelectedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__itemWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numberOfColumns_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__numberOfColumns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__itemScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__layoutMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__layoutMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scroll_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scroll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Container;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiltersWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FiltersWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__preConstructedItemsCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__preConstructedItemsCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__selectedItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__selectedItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__characterList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__characterList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreStoreCharactersSelectionWidget_OnCharacterSelected, "OnCharacterSelected" }, // 245678736
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreStoreCharactersSelectionWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersSelectionWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__characterSelectedDelegate_MetaData[] = {
		{ "Category", "CoreStoreCharactersSelectionWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__characterSelectedDelegate = { "_characterSelectedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersSelectionWidget, _characterSelectedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_StoreCharacterSelectedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__characterSelectedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__characterSelectedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__itemWidgetClass_MetaData[] = {
		{ "Category", "CoreStoreCharactersSelectionWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__itemWidgetClass = { "_itemWidgetClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersSelectionWidget, _itemWidgetClass), Z_Construct_UClass_UCoreStoreCharacterItemWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__itemWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__itemWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__numberOfColumns_MetaData[] = {
		{ "Category", "CoreStoreCharactersSelectionWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__numberOfColumns = { "_numberOfColumns", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersSelectionWidget, _numberOfColumns), METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__numberOfColumns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__numberOfColumns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__itemScale_MetaData[] = {
		{ "Category", "CoreStoreCharactersSelectionWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__itemScale = { "_itemScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersSelectionWidget, _itemScale), METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__itemScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__itemScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__layoutMask_MetaData[] = {
		{ "Category", "CoreStoreCharactersSelectionWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__layoutMask = { "_layoutMask", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersSelectionWidget, _layoutMask), METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__layoutMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__layoutMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp_Scroll_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreCharactersSelectionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp_Scroll = { "Scroll", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersSelectionWidget, Scroll), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp_Scroll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp_Scroll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp_Container_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreCharactersSelectionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersSelectionWidget, Container), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp_Container_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp_Container_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp_FiltersWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreCharactersSelectionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp_FiltersWidget = { "FiltersWidget", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersSelectionWidget, FiltersWidget), Z_Construct_UClass_UCoreStoreCharactersFilterWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp_FiltersWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp_FiltersWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__preConstructedItemsCount_MetaData[] = {
		{ "Category", "CoreStoreCharactersSelectionWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__preConstructedItemsCount = { "_preConstructedItemsCount", nullptr, (EPropertyFlags)0x0020080002000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersSelectionWidget, _preConstructedItemsCount), METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__preConstructedItemsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__preConstructedItemsCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__selectedItem_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreCharactersSelectionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__selectedItem = { "_selectedItem", nullptr, (EPropertyFlags)0x002008000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersSelectionWidget, _selectedItem), Z_Construct_UClass_UCoreStoreCharacterItemWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__selectedItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__selectedItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__characterList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreStoreCharactersSelectionWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreCharactersSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__characterList = { "_characterList", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharactersSelectionWidget, _characterList), Z_Construct_UClass_UCorePreConstructableList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__characterList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__characterList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__characterSelectedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__itemWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__numberOfColumns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__itemScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__layoutMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp_Scroll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp_Container,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp_FiltersWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__preConstructedItemsCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__selectedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::NewProp__characterList,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStoreCharactersSelectionViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreStoreCharactersSelectionWidget, IStoreCharactersSelectionViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStoreCharactersSelectionWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::ClassParams = {
		&UCoreStoreCharactersSelectionWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreStoreCharactersSelectionWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreStoreCharactersSelectionWidget, 861566193);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreStoreCharactersSelectionWidget>()
	{
		return UCoreStoreCharactersSelectionWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreStoreCharactersSelectionWidget(Z_Construct_UClass_UCoreStoreCharactersSelectionWidget, &UCoreStoreCharactersSelectionWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreStoreCharactersSelectionWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStoreCharactersSelectionWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
