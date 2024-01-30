// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreStoreFeaturedCustomizationItemContainerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreStoreFeaturedCustomizationItemContainerWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonSelector();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister();
	UITWEEN_API UEnum* Z_Construct_UEnum_UITween_EEasingType();
// End Cross Module References
	DEFINE_FUNCTION(UCoreStoreFeaturedCustomizationItemContainerWidget::execInitItemContainer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitItemContainer_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreFeaturedCustomizationItemContainerWidget::execMoveNext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveNext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreFeaturedCustomizationItemContainerWidget::execMovePrevious)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MovePrevious();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreFeaturedCustomizationItemContainerWidget::execOnMoveCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMoveCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreFeaturedCustomizationItemContainerWidget::execOnSelectedItemChanged)
	{
		P_GET_OBJECT(UCoreSelectableButtonWidget,Z_Param_selectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSelectedItemChanged(Z_Param_selectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreFeaturedCustomizationItemContainerWidget::execSetItems)
	{
		P_GET_TARRAY_REF(UStoreCustomizationItemViewData*,Z_Param_Out_viewDataArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItems_Implementation(Z_Param_Out_viewDataArray);
		P_NATIVE_END;
	}
	static FName NAME_UCoreStoreFeaturedCustomizationItemContainerWidget_InitItemContainer = FName(TEXT("InitItemContainer"));
	void UCoreStoreFeaturedCustomizationItemContainerWidget::InitItemContainer()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreStoreFeaturedCustomizationItemContainerWidget_InitItemContainer),NULL);
	}
	static FName NAME_UCoreStoreFeaturedCustomizationItemContainerWidget_SetItems = FName(TEXT("SetItems"));
	void UCoreStoreFeaturedCustomizationItemContainerWidget::SetItems(TArray<UStoreCustomizationItemViewData*> const& viewDataArray)
	{
		CoreStoreFeaturedCustomizationItemContainerWidget_eventSetItems_Parms Parms;
		Parms.viewDataArray=viewDataArray;
		ProcessEvent(FindFunctionChecked(NAME_UCoreStoreFeaturedCustomizationItemContainerWidget_SetItems),&Parms);
	}
	void UCoreStoreFeaturedCustomizationItemContainerWidget::StaticRegisterNativesUCoreStoreFeaturedCustomizationItemContainerWidget()
	{
		UClass* Class = UCoreStoreFeaturedCustomizationItemContainerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitItemContainer", &UCoreStoreFeaturedCustomizationItemContainerWidget::execInitItemContainer },
			{ "MoveNext", &UCoreStoreFeaturedCustomizationItemContainerWidget::execMoveNext },
			{ "MovePrevious", &UCoreStoreFeaturedCustomizationItemContainerWidget::execMovePrevious },
			{ "OnMoveCompleted", &UCoreStoreFeaturedCustomizationItemContainerWidget::execOnMoveCompleted },
			{ "OnSelectedItemChanged", &UCoreStoreFeaturedCustomizationItemContainerWidget::execOnSelectedItemChanged },
			{ "SetItems", &UCoreStoreFeaturedCustomizationItemContainerWidget::execSetItems },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_InitItemContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_InitItemContainer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCustomizationItemContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_InitItemContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget, nullptr, "InitItemContainer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_InitItemContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_InitItemContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_InitItemContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_InitItemContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_MoveNext_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_MoveNext_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCustomizationItemContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_MoveNext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget, nullptr, "MoveNext", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_MoveNext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_MoveNext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_MoveNext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_MoveNext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_MovePrevious_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_MovePrevious_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCustomizationItemContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_MovePrevious_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget, nullptr, "MovePrevious", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_MovePrevious_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_MovePrevious_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_MovePrevious()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_MovePrevious_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_OnMoveCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_OnMoveCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCustomizationItemContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_OnMoveCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget, nullptr, "OnMoveCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_OnMoveCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_OnMoveCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_OnMoveCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_OnMoveCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_OnSelectedItemChanged_Statics
	{
		struct CoreStoreFeaturedCustomizationItemContainerWidget_eventOnSelectedItemChanged_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_OnSelectedItemChanged_Statics::NewProp_selectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_OnSelectedItemChanged_Statics::NewProp_selectedButton = { "selectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreFeaturedCustomizationItemContainerWidget_eventOnSelectedItemChanged_Parms, selectedButton), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_OnSelectedItemChanged_Statics::NewProp_selectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_OnSelectedItemChanged_Statics::NewProp_selectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_OnSelectedItemChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_OnSelectedItemChanged_Statics::NewProp_selectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_OnSelectedItemChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCustomizationItemContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_OnSelectedItemChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget, nullptr, "OnSelectedItemChanged", nullptr, nullptr, sizeof(CoreStoreFeaturedCustomizationItemContainerWidget_eventOnSelectedItemChanged_Parms), Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_OnSelectedItemChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_OnSelectedItemChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_OnSelectedItemChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_OnSelectedItemChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_OnSelectedItemChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_OnSelectedItemChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_SetItems_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_viewDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_viewDataArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_SetItems_Statics::NewProp_viewDataArray_Inner = { "viewDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_SetItems_Statics::NewProp_viewDataArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_SetItems_Statics::NewProp_viewDataArray = { "viewDataArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreFeaturedCustomizationItemContainerWidget_eventSetItems_Parms, viewDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_SetItems_Statics::NewProp_viewDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_SetItems_Statics::NewProp_viewDataArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_SetItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_SetItems_Statics::NewProp_viewDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_SetItems_Statics::NewProp_viewDataArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_SetItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCustomizationItemContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_SetItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget, nullptr, "SetItems", nullptr, nullptr, sizeof(CoreStoreFeaturedCustomizationItemContainerWidget_eventSetItems_Parms), Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_SetItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_SetItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_SetItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_SetItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_SetItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_SetItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_NoRegister()
	{
		return UCoreStoreFeaturedCustomizationItemContainerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemTileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemTileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftArrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftArrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightArrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightArrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxVisibleTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxVisibleTiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmallTileWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SmallTileWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BigTileWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BigTileWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileSpacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslationDuration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TranslationEasingType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationEasingType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TranslationEasingType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cachedData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cachedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cachedData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__usedTilePool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__usedTilePool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__usedTilePool;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__availableTilePool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__availableTilePool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__availableTilePool;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__positionToWidgetMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__positionToWidgetMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__positionToWidgetMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__positionToWidgetMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreButtonSelector,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_InitItemContainer, "InitItemContainer" }, // 3830381876
		{ &Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_MoveNext, "MoveNext" }, // 1780339848
		{ &Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_MovePrevious, "MovePrevious" }, // 3587914423
		{ &Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_OnMoveCompleted, "OnMoveCompleted" }, // 1520402242
		{ &Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_OnSelectedItemChanged, "OnSelectedItemChanged" }, // 1879806810
		{ &Z_Construct_UFunction_UCoreStoreFeaturedCustomizationItemContainerWidget_SetItems, "SetItems" }, // 140765398
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreStoreFeaturedCustomizationItemContainerWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCustomizationItemContainerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_ItemTileClass_MetaData[] = {
		{ "Category", "CoreStoreFeaturedCustomizationItemContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCustomizationItemContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_ItemTileClass = { "ItemTileClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, ItemTileClass), Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_ItemTileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_ItemTileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_Root_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreFeaturedCustomizationItemContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCustomizationItemContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, Root), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_LeftArrow_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreFeaturedCustomizationItemContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCustomizationItemContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_LeftArrow = { "LeftArrow", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, LeftArrow), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_LeftArrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_LeftArrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_RightArrow_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreFeaturedCustomizationItemContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCustomizationItemContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_RightArrow = { "RightArrow", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, RightArrow), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_RightArrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_RightArrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_MaxVisibleTiles_MetaData[] = {
		{ "Category", "CoreStoreFeaturedCustomizationItemContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCustomizationItemContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_MaxVisibleTiles = { "MaxVisibleTiles", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, MaxVisibleTiles), METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_MaxVisibleTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_MaxVisibleTiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_TileHeight_MetaData[] = {
		{ "Category", "CoreStoreFeaturedCustomizationItemContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCustomizationItemContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_TileHeight = { "TileHeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, TileHeight), METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_TileHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_TileHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_SmallTileWidth_MetaData[] = {
		{ "Category", "CoreStoreFeaturedCustomizationItemContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCustomizationItemContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_SmallTileWidth = { "SmallTileWidth", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, SmallTileWidth), METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_SmallTileWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_SmallTileWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_BigTileWidth_MetaData[] = {
		{ "Category", "CoreStoreFeaturedCustomizationItemContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCustomizationItemContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_BigTileWidth = { "BigTileWidth", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, BigTileWidth), METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_BigTileWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_BigTileWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_TileSpacing_MetaData[] = {
		{ "Category", "CoreStoreFeaturedCustomizationItemContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCustomizationItemContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_TileSpacing = { "TileSpacing", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, TileSpacing), METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_TileSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_TileSpacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_TranslationDuration_MetaData[] = {
		{ "Category", "CoreStoreFeaturedCustomizationItemContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCustomizationItemContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_TranslationDuration = { "TranslationDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, TranslationDuration), METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_TranslationDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_TranslationDuration_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_TranslationEasingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_TranslationEasingType_MetaData[] = {
		{ "Category", "CoreStoreFeaturedCustomizationItemContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCustomizationItemContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_TranslationEasingType = { "TranslationEasingType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, TranslationEasingType), Z_Construct_UEnum_UITween_EEasingType, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_TranslationEasingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_TranslationEasingType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__cachedData_Inner = { "_cachedData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__cachedData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreStoreFeaturedCustomizationItemContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCustomizationItemContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__cachedData = { "_cachedData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, _cachedData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__cachedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__cachedData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__usedTilePool_Inner = { "_usedTilePool", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__usedTilePool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreStoreFeaturedCustomizationItemContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCustomizationItemContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__usedTilePool = { "_usedTilePool", nullptr, (EPropertyFlags)0x004000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, _usedTilePool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__usedTilePool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__usedTilePool_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__availableTilePool_Inner = { "_availableTilePool", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__availableTilePool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreStoreFeaturedCustomizationItemContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCustomizationItemContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__availableTilePool = { "_availableTilePool", nullptr, (EPropertyFlags)0x004000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, _availableTilePool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__availableTilePool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__availableTilePool_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__positionToWidgetMap_ValueProp = { "_positionToWidgetMap", nullptr, (EPropertyFlags)0x0000000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__positionToWidgetMap_Key_KeyProp = { "_positionToWidgetMap_Key", nullptr, (EPropertyFlags)0x0000000000080009, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__positionToWidgetMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreStoreFeaturedCustomizationItemContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreFeaturedCustomizationItemContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__positionToWidgetMap = { "_positionToWidgetMap", nullptr, (EPropertyFlags)0x004000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, _positionToWidgetMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__positionToWidgetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__positionToWidgetMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_ItemTileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_LeftArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_RightArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_MaxVisibleTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_TileHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_SmallTileWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_BigTileWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_TileSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_TranslationDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_TranslationEasingType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp_TranslationEasingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__cachedData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__cachedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__usedTilePool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__usedTilePool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__availableTilePool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__availableTilePool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__positionToWidgetMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__positionToWidgetMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::NewProp__positionToWidgetMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStoreFeaturedCustomizationItemContainerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::ClassParams = {
		&UCoreStoreFeaturedCustomizationItemContainerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreStoreFeaturedCustomizationItemContainerWidget, 2246854012);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreStoreFeaturedCustomizationItemContainerWidget>()
	{
		return UCoreStoreFeaturedCustomizationItemContainerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget(Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget, &UCoreStoreFeaturedCustomizationItemContainerWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreStoreFeaturedCustomizationItemContainerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStoreFeaturedCustomizationItemContainerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
