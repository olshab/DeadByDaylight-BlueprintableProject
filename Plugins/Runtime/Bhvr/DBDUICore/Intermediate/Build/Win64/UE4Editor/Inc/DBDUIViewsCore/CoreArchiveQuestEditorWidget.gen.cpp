// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreArchiveQuestEditorWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreArchiveQuestEditorWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveQuestEditorWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveQuestEditorWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveQuestMapWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLinePair();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveQuestNodeWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveQuestPathWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_TomeQuestEditorSaveDelegate__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreKeyListenerButtonWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_EEditorMode();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveEditorViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreArchiveQuestEditorWidget::execIntermediatePathMove)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_position);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IntermediatePathMove(Z_Param_Out_position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestEditorWidget::execNodeDragged)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_position);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NodeDragged(Z_Param_Out_position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestEditorWidget::execOnGridTileHeightPercentChanged)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGridTileHeightPercentChanged(Z_Param_Out_text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestEditorWidget::execOnGridTileHeightPixelChanged)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGridTileHeightPixelChanged(Z_Param_Out_text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestEditorWidget::execOnGridTileWidthPercentChanged)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGridTileWidthPercentChanged(Z_Param_Out_text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestEditorWidget::execOnGridTileWidthPixelChanged)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGridTileWidthPixelChanged(Z_Param_Out_text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestEditorWidget::execOnGridVisbilityChecked)
	{
		P_GET_UBOOL(Z_Param_checked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGridVisbilityChecked(Z_Param_checked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestEditorWidget::execOnLinkNodesModeChecked)
	{
		P_GET_UBOOL(Z_Param_checked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLinkNodesModeChecked(Z_Param_checked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestEditorWidget::execOnMoveNodesModeChecked)
	{
		P_GET_UBOOL(Z_Param_checked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMoveNodesModeChecked(Z_Param_checked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestEditorWidget::execOnNodeBeginDrag)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNodeBeginDrag(Z_Param_Out_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestEditorWidget::execOnNodeSubmitClick)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_buttonTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNodeSubmitClick(Z_Param_buttonTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestEditorWidget::execOnNodeXPercentChanged)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNodeXPercentChanged(Z_Param_Out_text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestEditorWidget::execOnNodeXPixelChanged)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNodeXPixelChanged(Z_Param_Out_text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestEditorWidget::execOnNodeYPercentChanged)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNodeYPercentChanged(Z_Param_Out_text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestEditorWidget::execOnNodeYPixelChanged)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNodeYPixelChanged(Z_Param_Out_text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestEditorWidget::execOnPathClicked)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_buttonTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPathClicked(Z_Param_buttonTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestEditorWidget::execOnRefreshGridClick)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_buttonTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRefreshGridClick(Z_Param_buttonTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestEditorWidget::execOnSaveGraphClick)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_buttonTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSaveGraphClick(Z_Param_buttonTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestEditorWidget::execOnSnapGridChecked)
	{
		P_GET_UBOOL(Z_Param_checked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSnapGridChecked(Z_Param_checked);
		P_NATIVE_END;
	}
	static FName NAME_UCoreArchiveQuestEditorWidget_SetGridLinesArray = FName(TEXT("SetGridLinesArray"));
	void UCoreArchiveQuestEditorWidget::SetGridLinesArray(TArray<FLinePair> const& gridArrayVertical, TArray<FLinePair> const& gridArrayHorizontal)
	{
		CoreArchiveQuestEditorWidget_eventSetGridLinesArray_Parms Parms;
		Parms.gridArrayVertical=gridArrayVertical;
		Parms.gridArrayHorizontal=gridArrayHorizontal;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveQuestEditorWidget_SetGridLinesArray),&Parms);
	}
	static FName NAME_UCoreArchiveQuestEditorWidget_SetHighlightedGridLines = FName(TEXT("SetHighlightedGridLines"));
	void UCoreArchiveQuestEditorWidget::SetHighlightedGridLines(int32 verticalIndex, int32 horizontalIndex)
	{
		CoreArchiveQuestEditorWidget_eventSetHighlightedGridLines_Parms Parms;
		Parms.verticalIndex=verticalIndex;
		Parms.horizontalIndex=horizontalIndex;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveQuestEditorWidget_SetHighlightedGridLines),&Parms);
	}
	void UCoreArchiveQuestEditorWidget::StaticRegisterNativesUCoreArchiveQuestEditorWidget()
	{
		UClass* Class = UCoreArchiveQuestEditorWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IntermediatePathMove", &UCoreArchiveQuestEditorWidget::execIntermediatePathMove },
			{ "NodeDragged", &UCoreArchiveQuestEditorWidget::execNodeDragged },
			{ "OnGridTileHeightPercentChanged", &UCoreArchiveQuestEditorWidget::execOnGridTileHeightPercentChanged },
			{ "OnGridTileHeightPixelChanged", &UCoreArchiveQuestEditorWidget::execOnGridTileHeightPixelChanged },
			{ "OnGridTileWidthPercentChanged", &UCoreArchiveQuestEditorWidget::execOnGridTileWidthPercentChanged },
			{ "OnGridTileWidthPixelChanged", &UCoreArchiveQuestEditorWidget::execOnGridTileWidthPixelChanged },
			{ "OnGridVisbilityChecked", &UCoreArchiveQuestEditorWidget::execOnGridVisbilityChecked },
			{ "OnLinkNodesModeChecked", &UCoreArchiveQuestEditorWidget::execOnLinkNodesModeChecked },
			{ "OnMoveNodesModeChecked", &UCoreArchiveQuestEditorWidget::execOnMoveNodesModeChecked },
			{ "OnNodeBeginDrag", &UCoreArchiveQuestEditorWidget::execOnNodeBeginDrag },
			{ "OnNodeSubmitClick", &UCoreArchiveQuestEditorWidget::execOnNodeSubmitClick },
			{ "OnNodeXPercentChanged", &UCoreArchiveQuestEditorWidget::execOnNodeXPercentChanged },
			{ "OnNodeXPixelChanged", &UCoreArchiveQuestEditorWidget::execOnNodeXPixelChanged },
			{ "OnNodeYPercentChanged", &UCoreArchiveQuestEditorWidget::execOnNodeYPercentChanged },
			{ "OnNodeYPixelChanged", &UCoreArchiveQuestEditorWidget::execOnNodeYPixelChanged },
			{ "OnPathClicked", &UCoreArchiveQuestEditorWidget::execOnPathClicked },
			{ "OnRefreshGridClick", &UCoreArchiveQuestEditorWidget::execOnRefreshGridClick },
			{ "OnSaveGraphClick", &UCoreArchiveQuestEditorWidget::execOnSaveGraphClick },
			{ "OnSnapGridChecked", &UCoreArchiveQuestEditorWidget::execOnSnapGridChecked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_IntermediatePathMove_Statics
	{
		struct CoreArchiveQuestEditorWidget_eventIntermediatePathMove_Parms
		{
			FVector2D position;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_IntermediatePathMove_Statics::NewProp_position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_IntermediatePathMove_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestEditorWidget_eventIntermediatePathMove_Parms, position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_IntermediatePathMove_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_IntermediatePathMove_Statics::NewProp_position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_IntermediatePathMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_IntermediatePathMove_Statics::NewProp_position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_IntermediatePathMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_IntermediatePathMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestEditorWidget, nullptr, "IntermediatePathMove", nullptr, nullptr, sizeof(CoreArchiveQuestEditorWidget_eventIntermediatePathMove_Parms), Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_IntermediatePathMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_IntermediatePathMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_IntermediatePathMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_IntermediatePathMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_IntermediatePathMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_IntermediatePathMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_NodeDragged_Statics
	{
		struct CoreArchiveQuestEditorWidget_eventNodeDragged_Parms
		{
			FVector2D position;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_NodeDragged_Statics::NewProp_position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_NodeDragged_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestEditorWidget_eventNodeDragged_Parms, position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_NodeDragged_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_NodeDragged_Statics::NewProp_position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_NodeDragged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_NodeDragged_Statics::NewProp_position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_NodeDragged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_NodeDragged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestEditorWidget, nullptr, "NodeDragged", nullptr, nullptr, sizeof(CoreArchiveQuestEditorWidget_eventNodeDragged_Parms), Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_NodeDragged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_NodeDragged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_NodeDragged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_NodeDragged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_NodeDragged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_NodeDragged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPercentChanged_Statics
	{
		struct CoreArchiveQuestEditorWidget_eventOnGridTileHeightPercentChanged_Parms
		{
			FText text;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPercentChanged_Statics::NewProp_text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPercentChanged_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestEditorWidget_eventOnGridTileHeightPercentChanged_Parms, text), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPercentChanged_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPercentChanged_Statics::NewProp_text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPercentChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPercentChanged_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPercentChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPercentChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestEditorWidget, nullptr, "OnGridTileHeightPercentChanged", nullptr, nullptr, sizeof(CoreArchiveQuestEditorWidget_eventOnGridTileHeightPercentChanged_Parms), Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPercentChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPercentChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPercentChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPercentChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPercentChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPercentChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPixelChanged_Statics
	{
		struct CoreArchiveQuestEditorWidget_eventOnGridTileHeightPixelChanged_Parms
		{
			FText text;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPixelChanged_Statics::NewProp_text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPixelChanged_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestEditorWidget_eventOnGridTileHeightPixelChanged_Parms, text), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPixelChanged_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPixelChanged_Statics::NewProp_text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPixelChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPixelChanged_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPixelChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPixelChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestEditorWidget, nullptr, "OnGridTileHeightPixelChanged", nullptr, nullptr, sizeof(CoreArchiveQuestEditorWidget_eventOnGridTileHeightPixelChanged_Parms), Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPixelChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPixelChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPixelChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPixelChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPixelChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPixelChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPercentChanged_Statics
	{
		struct CoreArchiveQuestEditorWidget_eventOnGridTileWidthPercentChanged_Parms
		{
			FText text;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPercentChanged_Statics::NewProp_text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPercentChanged_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestEditorWidget_eventOnGridTileWidthPercentChanged_Parms, text), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPercentChanged_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPercentChanged_Statics::NewProp_text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPercentChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPercentChanged_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPercentChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPercentChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestEditorWidget, nullptr, "OnGridTileWidthPercentChanged", nullptr, nullptr, sizeof(CoreArchiveQuestEditorWidget_eventOnGridTileWidthPercentChanged_Parms), Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPercentChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPercentChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPercentChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPercentChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPercentChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPercentChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPixelChanged_Statics
	{
		struct CoreArchiveQuestEditorWidget_eventOnGridTileWidthPixelChanged_Parms
		{
			FText text;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPixelChanged_Statics::NewProp_text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPixelChanged_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestEditorWidget_eventOnGridTileWidthPixelChanged_Parms, text), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPixelChanged_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPixelChanged_Statics::NewProp_text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPixelChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPixelChanged_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPixelChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPixelChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestEditorWidget, nullptr, "OnGridTileWidthPixelChanged", nullptr, nullptr, sizeof(CoreArchiveQuestEditorWidget_eventOnGridTileWidthPixelChanged_Parms), Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPixelChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPixelChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPixelChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPixelChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPixelChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPixelChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridVisbilityChecked_Statics
	{
		struct CoreArchiveQuestEditorWidget_eventOnGridVisbilityChecked_Parms
		{
			bool checked;
		};
		static void NewProp_checked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_checked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridVisbilityChecked_Statics::NewProp_checked_SetBit(void* Obj)
	{
		((CoreArchiveQuestEditorWidget_eventOnGridVisbilityChecked_Parms*)Obj)->checked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridVisbilityChecked_Statics::NewProp_checked = { "checked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveQuestEditorWidget_eventOnGridVisbilityChecked_Parms), &Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridVisbilityChecked_Statics::NewProp_checked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridVisbilityChecked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridVisbilityChecked_Statics::NewProp_checked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridVisbilityChecked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridVisbilityChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestEditorWidget, nullptr, "OnGridVisbilityChecked", nullptr, nullptr, sizeof(CoreArchiveQuestEditorWidget_eventOnGridVisbilityChecked_Parms), Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridVisbilityChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridVisbilityChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridVisbilityChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridVisbilityChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridVisbilityChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridVisbilityChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnLinkNodesModeChecked_Statics
	{
		struct CoreArchiveQuestEditorWidget_eventOnLinkNodesModeChecked_Parms
		{
			bool checked;
		};
		static void NewProp_checked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_checked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnLinkNodesModeChecked_Statics::NewProp_checked_SetBit(void* Obj)
	{
		((CoreArchiveQuestEditorWidget_eventOnLinkNodesModeChecked_Parms*)Obj)->checked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnLinkNodesModeChecked_Statics::NewProp_checked = { "checked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveQuestEditorWidget_eventOnLinkNodesModeChecked_Parms), &Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnLinkNodesModeChecked_Statics::NewProp_checked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnLinkNodesModeChecked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnLinkNodesModeChecked_Statics::NewProp_checked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnLinkNodesModeChecked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnLinkNodesModeChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestEditorWidget, nullptr, "OnLinkNodesModeChecked", nullptr, nullptr, sizeof(CoreArchiveQuestEditorWidget_eventOnLinkNodesModeChecked_Parms), Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnLinkNodesModeChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnLinkNodesModeChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnLinkNodesModeChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnLinkNodesModeChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnLinkNodesModeChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnLinkNodesModeChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnMoveNodesModeChecked_Statics
	{
		struct CoreArchiveQuestEditorWidget_eventOnMoveNodesModeChecked_Parms
		{
			bool checked;
		};
		static void NewProp_checked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_checked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnMoveNodesModeChecked_Statics::NewProp_checked_SetBit(void* Obj)
	{
		((CoreArchiveQuestEditorWidget_eventOnMoveNodesModeChecked_Parms*)Obj)->checked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnMoveNodesModeChecked_Statics::NewProp_checked = { "checked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveQuestEditorWidget_eventOnMoveNodesModeChecked_Parms), &Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnMoveNodesModeChecked_Statics::NewProp_checked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnMoveNodesModeChecked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnMoveNodesModeChecked_Statics::NewProp_checked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnMoveNodesModeChecked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnMoveNodesModeChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestEditorWidget, nullptr, "OnMoveNodesModeChecked", nullptr, nullptr, sizeof(CoreArchiveQuestEditorWidget_eventOnMoveNodesModeChecked_Parms), Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnMoveNodesModeChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnMoveNodesModeChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnMoveNodesModeChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnMoveNodesModeChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnMoveNodesModeChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnMoveNodesModeChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeBeginDrag_Statics
	{
		struct CoreArchiveQuestEditorWidget_eventOnNodeBeginDrag_Parms
		{
			FName id;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeBeginDrag_Statics::NewProp_id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeBeginDrag_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestEditorWidget_eventOnNodeBeginDrag_Parms, id), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeBeginDrag_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeBeginDrag_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeBeginDrag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeBeginDrag_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeBeginDrag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeBeginDrag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestEditorWidget, nullptr, "OnNodeBeginDrag", nullptr, nullptr, sizeof(CoreArchiveQuestEditorWidget_eventOnNodeBeginDrag_Parms), Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeBeginDrag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeBeginDrag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeBeginDrag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeBeginDrag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeBeginDrag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeBeginDrag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeSubmitClick_Statics
	{
		struct CoreArchiveQuestEditorWidget_eventOnNodeSubmitClick_Parms
		{
			UCoreButtonWidget* buttonTarget;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeSubmitClick_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeSubmitClick_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestEditorWidget_eventOnNodeSubmitClick_Parms, buttonTarget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeSubmitClick_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeSubmitClick_Statics::NewProp_buttonTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeSubmitClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeSubmitClick_Statics::NewProp_buttonTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeSubmitClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeSubmitClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestEditorWidget, nullptr, "OnNodeSubmitClick", nullptr, nullptr, sizeof(CoreArchiveQuestEditorWidget_eventOnNodeSubmitClick_Parms), Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeSubmitClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeSubmitClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeSubmitClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeSubmitClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeSubmitClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeSubmitClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPercentChanged_Statics
	{
		struct CoreArchiveQuestEditorWidget_eventOnNodeXPercentChanged_Parms
		{
			FText text;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPercentChanged_Statics::NewProp_text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPercentChanged_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestEditorWidget_eventOnNodeXPercentChanged_Parms, text), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPercentChanged_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPercentChanged_Statics::NewProp_text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPercentChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPercentChanged_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPercentChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPercentChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestEditorWidget, nullptr, "OnNodeXPercentChanged", nullptr, nullptr, sizeof(CoreArchiveQuestEditorWidget_eventOnNodeXPercentChanged_Parms), Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPercentChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPercentChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPercentChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPercentChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPercentChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPercentChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPixelChanged_Statics
	{
		struct CoreArchiveQuestEditorWidget_eventOnNodeXPixelChanged_Parms
		{
			FText text;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPixelChanged_Statics::NewProp_text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPixelChanged_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestEditorWidget_eventOnNodeXPixelChanged_Parms, text), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPixelChanged_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPixelChanged_Statics::NewProp_text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPixelChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPixelChanged_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPixelChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPixelChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestEditorWidget, nullptr, "OnNodeXPixelChanged", nullptr, nullptr, sizeof(CoreArchiveQuestEditorWidget_eventOnNodeXPixelChanged_Parms), Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPixelChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPixelChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPixelChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPixelChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPixelChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPixelChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPercentChanged_Statics
	{
		struct CoreArchiveQuestEditorWidget_eventOnNodeYPercentChanged_Parms
		{
			FText text;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPercentChanged_Statics::NewProp_text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPercentChanged_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestEditorWidget_eventOnNodeYPercentChanged_Parms, text), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPercentChanged_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPercentChanged_Statics::NewProp_text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPercentChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPercentChanged_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPercentChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPercentChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestEditorWidget, nullptr, "OnNodeYPercentChanged", nullptr, nullptr, sizeof(CoreArchiveQuestEditorWidget_eventOnNodeYPercentChanged_Parms), Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPercentChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPercentChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPercentChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPercentChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPercentChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPercentChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPixelChanged_Statics
	{
		struct CoreArchiveQuestEditorWidget_eventOnNodeYPixelChanged_Parms
		{
			FText text;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPixelChanged_Statics::NewProp_text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPixelChanged_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestEditorWidget_eventOnNodeYPixelChanged_Parms, text), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPixelChanged_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPixelChanged_Statics::NewProp_text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPixelChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPixelChanged_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPixelChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPixelChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestEditorWidget, nullptr, "OnNodeYPixelChanged", nullptr, nullptr, sizeof(CoreArchiveQuestEditorWidget_eventOnNodeYPixelChanged_Parms), Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPixelChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPixelChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPixelChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPixelChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPixelChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPixelChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnPathClicked_Statics
	{
		struct CoreArchiveQuestEditorWidget_eventOnPathClicked_Parms
		{
			UCoreButtonWidget* buttonTarget;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnPathClicked_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnPathClicked_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestEditorWidget_eventOnPathClicked_Parms, buttonTarget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnPathClicked_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnPathClicked_Statics::NewProp_buttonTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnPathClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnPathClicked_Statics::NewProp_buttonTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnPathClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnPathClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestEditorWidget, nullptr, "OnPathClicked", nullptr, nullptr, sizeof(CoreArchiveQuestEditorWidget_eventOnPathClicked_Parms), Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnPathClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnPathClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnPathClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnPathClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnPathClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnPathClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnRefreshGridClick_Statics
	{
		struct CoreArchiveQuestEditorWidget_eventOnRefreshGridClick_Parms
		{
			UCoreButtonWidget* buttonTarget;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnRefreshGridClick_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnRefreshGridClick_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestEditorWidget_eventOnRefreshGridClick_Parms, buttonTarget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnRefreshGridClick_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnRefreshGridClick_Statics::NewProp_buttonTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnRefreshGridClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnRefreshGridClick_Statics::NewProp_buttonTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnRefreshGridClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnRefreshGridClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestEditorWidget, nullptr, "OnRefreshGridClick", nullptr, nullptr, sizeof(CoreArchiveQuestEditorWidget_eventOnRefreshGridClick_Parms), Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnRefreshGridClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnRefreshGridClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnRefreshGridClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnRefreshGridClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnRefreshGridClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnRefreshGridClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSaveGraphClick_Statics
	{
		struct CoreArchiveQuestEditorWidget_eventOnSaveGraphClick_Parms
		{
			UCoreButtonWidget* buttonTarget;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSaveGraphClick_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSaveGraphClick_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestEditorWidget_eventOnSaveGraphClick_Parms, buttonTarget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSaveGraphClick_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSaveGraphClick_Statics::NewProp_buttonTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSaveGraphClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSaveGraphClick_Statics::NewProp_buttonTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSaveGraphClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSaveGraphClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestEditorWidget, nullptr, "OnSaveGraphClick", nullptr, nullptr, sizeof(CoreArchiveQuestEditorWidget_eventOnSaveGraphClick_Parms), Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSaveGraphClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSaveGraphClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSaveGraphClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSaveGraphClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSaveGraphClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSaveGraphClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSnapGridChecked_Statics
	{
		struct CoreArchiveQuestEditorWidget_eventOnSnapGridChecked_Parms
		{
			bool checked;
		};
		static void NewProp_checked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_checked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSnapGridChecked_Statics::NewProp_checked_SetBit(void* Obj)
	{
		((CoreArchiveQuestEditorWidget_eventOnSnapGridChecked_Parms*)Obj)->checked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSnapGridChecked_Statics::NewProp_checked = { "checked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveQuestEditorWidget_eventOnSnapGridChecked_Parms), &Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSnapGridChecked_Statics::NewProp_checked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSnapGridChecked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSnapGridChecked_Statics::NewProp_checked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSnapGridChecked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSnapGridChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestEditorWidget, nullptr, "OnSnapGridChecked", nullptr, nullptr, sizeof(CoreArchiveQuestEditorWidget_eventOnSnapGridChecked_Parms), Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSnapGridChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSnapGridChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSnapGridChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSnapGridChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSnapGridChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSnapGridChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetGridLinesArray_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gridArrayVertical_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gridArrayVertical_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_gridArrayVertical;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gridArrayHorizontal_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gridArrayHorizontal_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_gridArrayHorizontal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetGridLinesArray_Statics::NewProp_gridArrayVertical_Inner = { "gridArrayVertical", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinePair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetGridLinesArray_Statics::NewProp_gridArrayVertical_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetGridLinesArray_Statics::NewProp_gridArrayVertical = { "gridArrayVertical", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestEditorWidget_eventSetGridLinesArray_Parms, gridArrayVertical), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetGridLinesArray_Statics::NewProp_gridArrayVertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetGridLinesArray_Statics::NewProp_gridArrayVertical_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetGridLinesArray_Statics::NewProp_gridArrayHorizontal_Inner = { "gridArrayHorizontal", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinePair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetGridLinesArray_Statics::NewProp_gridArrayHorizontal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetGridLinesArray_Statics::NewProp_gridArrayHorizontal = { "gridArrayHorizontal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestEditorWidget_eventSetGridLinesArray_Parms, gridArrayHorizontal), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetGridLinesArray_Statics::NewProp_gridArrayHorizontal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetGridLinesArray_Statics::NewProp_gridArrayHorizontal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetGridLinesArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetGridLinesArray_Statics::NewProp_gridArrayVertical_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetGridLinesArray_Statics::NewProp_gridArrayVertical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetGridLinesArray_Statics::NewProp_gridArrayHorizontal_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetGridLinesArray_Statics::NewProp_gridArrayHorizontal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetGridLinesArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetGridLinesArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestEditorWidget, nullptr, "SetGridLinesArray", nullptr, nullptr, sizeof(CoreArchiveQuestEditorWidget_eventSetGridLinesArray_Parms), Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetGridLinesArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetGridLinesArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetGridLinesArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetGridLinesArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetGridLinesArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetGridLinesArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetHighlightedGridLines_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_verticalIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_horizontalIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetHighlightedGridLines_Statics::NewProp_verticalIndex = { "verticalIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestEditorWidget_eventSetHighlightedGridLines_Parms, verticalIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetHighlightedGridLines_Statics::NewProp_horizontalIndex = { "horizontalIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestEditorWidget_eventSetHighlightedGridLines_Parms, horizontalIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetHighlightedGridLines_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetHighlightedGridLines_Statics::NewProp_verticalIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetHighlightedGridLines_Statics::NewProp_horizontalIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetHighlightedGridLines_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetHighlightedGridLines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestEditorWidget, nullptr, "SetHighlightedGridLines", nullptr, nullptr, sizeof(CoreArchiveQuestEditorWidget_eventSetHighlightedGridLines_Parms), Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetHighlightedGridLines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetHighlightedGridLines_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetHighlightedGridLines_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetHighlightedGridLines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetHighlightedGridLines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetHighlightedGridLines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreArchiveQuestEditorWidget_NoRegister()
	{
		return UCoreArchiveQuestEditorWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__gridLinesListVertical_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gridLinesListVertical_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__gridLinesListVertical;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__gridLinesListHorizontal_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gridLinesListHorizontal_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__gridLinesListHorizontal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activeNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__activeNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pathInCreation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pathInCreation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__questEditorSaveDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__questEditorSaveDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isCreatingPath_MetaData[];
#endif
		static void NewProp__isCreatingPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isCreatingPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorBorder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorBorder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveNodesRadioCheckbox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveNodesRadioCheckbox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkNodesRadioCheckbox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LinkNodesRadioCheckbox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridVisibilityCheckbox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridVisibilityCheckbox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapGridCheckbox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SnapGridCheckbox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridTileWidthInputPixelsTextBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridTileWidthInputPixelsTextBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridTileWidthInputPercentTextBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridTileWidthInputPercentTextBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridTileHeightInputPixelsTextBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridTileHeightInputPixelsTextBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridTileHeightInputPercentTextBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridTileHeightInputPercentTextBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefreshGridButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RefreshGridButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeCoordinateContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeCoordinateContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeXInputPixels_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeXInputPixels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeXInputPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeXInputPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeYInputPixels_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeYInputPixels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeYInputPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeYInputPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubmitButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmitButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveQuestMapButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveQuestMapButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveInfoContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveInfoContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathTextBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridTileHeightValuePercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GridTileHeightValuePercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridTileWidthValuePercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GridTileWidthValuePercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSnapping_MetaData[];
#endif
		static void NewProp_IsSnapping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSnapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsGridVisible_MetaData[];
#endif
		static void NewProp_IsGridVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsGridVisible;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreArchiveQuestMapWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_IntermediatePathMove, "IntermediatePathMove" }, // 3859526151
		{ &Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_NodeDragged, "NodeDragged" }, // 368745666
		{ &Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPercentChanged, "OnGridTileHeightPercentChanged" }, // 915436691
		{ &Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileHeightPixelChanged, "OnGridTileHeightPixelChanged" }, // 1310506414
		{ &Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPercentChanged, "OnGridTileWidthPercentChanged" }, // 3643447580
		{ &Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridTileWidthPixelChanged, "OnGridTileWidthPixelChanged" }, // 3596141855
		{ &Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnGridVisbilityChecked, "OnGridVisbilityChecked" }, // 2004813501
		{ &Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnLinkNodesModeChecked, "OnLinkNodesModeChecked" }, // 1811866859
		{ &Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnMoveNodesModeChecked, "OnMoveNodesModeChecked" }, // 3903301846
		{ &Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeBeginDrag, "OnNodeBeginDrag" }, // 1923139547
		{ &Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeSubmitClick, "OnNodeSubmitClick" }, // 2019698644
		{ &Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPercentChanged, "OnNodeXPercentChanged" }, // 3838970097
		{ &Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeXPixelChanged, "OnNodeXPixelChanged" }, // 666132141
		{ &Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPercentChanged, "OnNodeYPercentChanged" }, // 1797374828
		{ &Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnNodeYPixelChanged, "OnNodeYPixelChanged" }, // 3304005360
		{ &Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnPathClicked, "OnPathClicked" }, // 3366560982
		{ &Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnRefreshGridClick, "OnRefreshGridClick" }, // 3956015206
		{ &Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSaveGraphClick, "OnSaveGraphClick" }, // 171001647
		{ &Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_OnSnapGridChecked, "OnSnapGridChecked" }, // 516714307
		{ &Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetGridLinesArray, "SetGridLinesArray" }, // 3458676950
		{ &Z_Construct_UFunction_UCoreArchiveQuestEditorWidget_SetHighlightedGridLines, "SetHighlightedGridLines" }, // 3451940730
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreArchiveQuestEditorWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__gridLinesListVertical_Inner = { "_gridLinesListVertical", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinePair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__gridLinesListVertical_MetaData[] = {
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__gridLinesListVertical = { "_gridLinesListVertical", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, _gridLinesListVertical), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__gridLinesListVertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__gridLinesListVertical_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__gridLinesListHorizontal_Inner = { "_gridLinesListHorizontal", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinePair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__gridLinesListHorizontal_MetaData[] = {
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__gridLinesListHorizontal = { "_gridLinesListHorizontal", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, _gridLinesListHorizontal), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__gridLinesListHorizontal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__gridLinesListHorizontal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__activeNode_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__activeNode = { "_activeNode", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, _activeNode), Z_Construct_UClass_UCoreArchiveQuestNodeWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__activeNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__activeNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__pathInCreation_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__pathInCreation = { "_pathInCreation", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, _pathInCreation), Z_Construct_UClass_UCoreArchiveQuestPathWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__pathInCreation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__pathInCreation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__questEditorSaveDelegate_MetaData[] = {
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__questEditorSaveDelegate = { "_questEditorSaveDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, _questEditorSaveDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_TomeQuestEditorSaveDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__questEditorSaveDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__questEditorSaveDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__isCreatingPath_MetaData[] = {
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__isCreatingPath_SetBit(void* Obj)
	{
		((UCoreArchiveQuestEditorWidget*)Obj)->_isCreatingPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__isCreatingPath = { "_isCreatingPath", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreArchiveQuestEditorWidget), &Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__isCreatingPath_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__isCreatingPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__isCreatingPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_EditorBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_EditorBorder = { "EditorBorder", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, EditorBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_EditorBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_EditorBorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_MoveNodesRadioCheckbox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_MoveNodesRadioCheckbox = { "MoveNodesRadioCheckbox", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, MoveNodesRadioCheckbox), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_MoveNodesRadioCheckbox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_MoveNodesRadioCheckbox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_LinkNodesRadioCheckbox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_LinkNodesRadioCheckbox = { "LinkNodesRadioCheckbox", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, LinkNodesRadioCheckbox), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_LinkNodesRadioCheckbox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_LinkNodesRadioCheckbox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridVisibilityCheckbox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridVisibilityCheckbox = { "GridVisibilityCheckbox", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, GridVisibilityCheckbox), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridVisibilityCheckbox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridVisibilityCheckbox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_SnapGridCheckbox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_SnapGridCheckbox = { "SnapGridCheckbox", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, SnapGridCheckbox), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_SnapGridCheckbox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_SnapGridCheckbox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileWidthInputPixelsTextBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileWidthInputPixelsTextBox = { "GridTileWidthInputPixelsTextBox", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, GridTileWidthInputPixelsTextBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileWidthInputPixelsTextBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileWidthInputPixelsTextBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileWidthInputPercentTextBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileWidthInputPercentTextBox = { "GridTileWidthInputPercentTextBox", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, GridTileWidthInputPercentTextBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileWidthInputPercentTextBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileWidthInputPercentTextBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileHeightInputPixelsTextBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileHeightInputPixelsTextBox = { "GridTileHeightInputPixelsTextBox", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, GridTileHeightInputPixelsTextBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileHeightInputPixelsTextBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileHeightInputPixelsTextBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileHeightInputPercentTextBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileHeightInputPercentTextBox = { "GridTileHeightInputPercentTextBox", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, GridTileHeightInputPercentTextBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileHeightInputPercentTextBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileHeightInputPercentTextBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_RefreshGridButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_RefreshGridButton = { "RefreshGridButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, RefreshGridButton), Z_Construct_UClass_UCoreKeyListenerButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_RefreshGridButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_RefreshGridButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_NodeCoordinateContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_NodeCoordinateContainer = { "NodeCoordinateContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, NodeCoordinateContainer), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_NodeCoordinateContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_NodeCoordinateContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_NodeXInputPixels_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_NodeXInputPixels = { "NodeXInputPixels", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, NodeXInputPixels), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_NodeXInputPixels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_NodeXInputPixels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_NodeXInputPercent_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_NodeXInputPercent = { "NodeXInputPercent", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, NodeXInputPercent), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_NodeXInputPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_NodeXInputPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_NodeYInputPixels_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_NodeYInputPixels = { "NodeYInputPixels", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, NodeYInputPixels), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_NodeYInputPixels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_NodeYInputPixels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_NodeYInputPercent_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_NodeYInputPercent = { "NodeYInputPercent", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, NodeYInputPercent), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_NodeYInputPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_NodeYInputPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_SubmitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_SubmitButton = { "SubmitButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, SubmitButton), Z_Construct_UClass_UCoreKeyListenerButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_SubmitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_SubmitButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_SaveQuestMapButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_SaveQuestMapButton = { "SaveQuestMapButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, SaveQuestMapButton), Z_Construct_UClass_UCoreKeyListenerButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_SaveQuestMapButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_SaveQuestMapButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_SaveInfoContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_SaveInfoContainer = { "SaveInfoContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, SaveInfoContainer), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_SaveInfoContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_SaveInfoContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_PathTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_PathTextBlock = { "PathTextBlock", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, PathTextBlock), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_PathTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_PathTextBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileHeightValuePercent_MetaData[] = {
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileHeightValuePercent = { "GridTileHeightValuePercent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, GridTileHeightValuePercent), METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileHeightValuePercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileHeightValuePercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileWidthValuePercent_MetaData[] = {
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileWidthValuePercent = { "GridTileWidthValuePercent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, GridTileWidthValuePercent), METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileWidthValuePercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileWidthValuePercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_IsSnapping_MetaData[] = {
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_IsSnapping_SetBit(void* Obj)
	{
		((UCoreArchiveQuestEditorWidget*)Obj)->IsSnapping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_IsSnapping = { "IsSnapping", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreArchiveQuestEditorWidget), &Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_IsSnapping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_IsSnapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_IsSnapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_IsGridVisible_MetaData[] = {
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_IsGridVisible_SetBit(void* Obj)
	{
		((UCoreArchiveQuestEditorWidget*)Obj)->IsGridVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_IsGridVisible = { "IsGridVisible", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreArchiveQuestEditorWidget), &Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_IsGridVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_IsGridVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_IsGridVisible_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "CoreArchiveQuestEditorWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestEditorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestEditorWidget, Mode), Z_Construct_UEnum_DBDUIViewsCore_EEditorMode, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_Mode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__gridLinesListVertical_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__gridLinesListVertical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__gridLinesListHorizontal_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__gridLinesListHorizontal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__activeNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__pathInCreation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__questEditorSaveDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp__isCreatingPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_EditorBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_MoveNodesRadioCheckbox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_LinkNodesRadioCheckbox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridVisibilityCheckbox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_SnapGridCheckbox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileWidthInputPixelsTextBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileWidthInputPercentTextBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileHeightInputPixelsTextBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileHeightInputPercentTextBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_RefreshGridButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_NodeCoordinateContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_NodeXInputPixels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_NodeXInputPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_NodeYInputPixels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_NodeYInputPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_SubmitButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_SaveQuestMapButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_SaveInfoContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_PathTextBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileHeightValuePercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_GridTileWidthValuePercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_IsSnapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_IsGridVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::NewProp_Mode,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UArchiveEditorViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreArchiveQuestEditorWidget, IArchiveEditorViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreArchiveQuestEditorWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::ClassParams = {
		&UCoreArchiveQuestEditorWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreArchiveQuestEditorWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreArchiveQuestEditorWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreArchiveQuestEditorWidget, 2803224457);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreArchiveQuestEditorWidget>()
	{
		return UCoreArchiveQuestEditorWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreArchiveQuestEditorWidget(Z_Construct_UClass_UCoreArchiveQuestEditorWidget, &UCoreArchiveQuestEditorWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreArchiveQuestEditorWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreArchiveQuestEditorWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
