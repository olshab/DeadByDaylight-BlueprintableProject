// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreArchiveQuestMapWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreArchiveQuestMapWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveQuestMapWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveQuestMapWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContentWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveQuestNodeWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveQuestPathWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveNodeGraphViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveMapPathViewData();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UITWEEN_API UEnum* Z_Construct_UEnum_UITween_EEasingType();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_TomeQuestMapCreatedDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_TomeQuestNodeHoveredDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_TomeQuestNodeUnhoveredDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_TomeQuestNodeSelectedDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveQuestMapViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreArchiveQuestMapWidget::execBindToNode)
	{
		P_GET_OBJECT(UCoreArchiveQuestNodeWidget,Z_Param_node);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindToNode(Z_Param_node);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestMapWidget::execBindToPath)
	{
		P_GET_OBJECT(UCoreArchiveQuestPathWidget,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindToPath(Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestMapWidget::execOnNodeClicked)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_buttonTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNodeClicked(Z_Param_buttonTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestMapWidget::execOnNodeHovered)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_buttonTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNodeHovered(Z_Param_buttonTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestMapWidget::execOnNodesRevealCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNodesRevealCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestMapWidget::execOnNodeUnhovered)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_buttonTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNodeUnhovered(Z_Param_buttonTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestMapWidget::execSetupNode)
	{
		P_GET_STRUCT_REF(FArchiveNodeGraphViewData,Z_Param_Out_nodeData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupNode(Z_Param_Out_nodeData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestMapWidget::execSetupPath)
	{
		P_GET_STRUCT_REF(FArchiveMapPathViewData,Z_Param_Out_pathData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupPath(Z_Param_Out_pathData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestMapWidget::execUnbindFromNode)
	{
		P_GET_OBJECT(UCoreArchiveQuestNodeWidget,Z_Param_node);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindFromNode(Z_Param_node);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestMapWidget::execUnbindFromPath)
	{
		P_GET_OBJECT(UCoreArchiveQuestPathWidget,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindFromPath(Z_Param_path);
		P_NATIVE_END;
	}
	void UCoreArchiveQuestMapWidget::StaticRegisterNativesUCoreArchiveQuestMapWidget()
	{
		UClass* Class = UCoreArchiveQuestMapWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindToNode", &UCoreArchiveQuestMapWidget::execBindToNode },
			{ "BindToPath", &UCoreArchiveQuestMapWidget::execBindToPath },
			{ "OnNodeClicked", &UCoreArchiveQuestMapWidget::execOnNodeClicked },
			{ "OnNodeHovered", &UCoreArchiveQuestMapWidget::execOnNodeHovered },
			{ "OnNodesRevealCompleted", &UCoreArchiveQuestMapWidget::execOnNodesRevealCompleted },
			{ "OnNodeUnhovered", &UCoreArchiveQuestMapWidget::execOnNodeUnhovered },
			{ "SetupNode", &UCoreArchiveQuestMapWidget::execSetupNode },
			{ "SetupPath", &UCoreArchiveQuestMapWidget::execSetupPath },
			{ "UnbindFromNode", &UCoreArchiveQuestMapWidget::execUnbindFromNode },
			{ "UnbindFromPath", &UCoreArchiveQuestMapWidget::execUnbindFromPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToNode_Statics
	{
		struct CoreArchiveQuestMapWidget_eventBindToNode_Parms
		{
			UCoreArchiveQuestNodeWidget* node;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_node_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToNode_Statics::NewProp_node_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToNode_Statics::NewProp_node = { "node", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestMapWidget_eventBindToNode_Parms, node), Z_Construct_UClass_UCoreArchiveQuestNodeWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToNode_Statics::NewProp_node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToNode_Statics::NewProp_node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToNode_Statics::NewProp_node,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestMapWidget, nullptr, "BindToNode", nullptr, nullptr, sizeof(CoreArchiveQuestMapWidget_eventBindToNode_Parms), Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToPath_Statics
	{
		struct CoreArchiveQuestMapWidget_eventBindToPath_Parms
		{
			UCoreArchiveQuestPathWidget* path;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToPath_Statics::NewProp_path_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToPath_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestMapWidget_eventBindToPath_Parms, path), Z_Construct_UClass_UCoreArchiveQuestPathWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToPath_Statics::NewProp_path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToPath_Statics::NewProp_path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToPath_Statics::NewProp_path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestMapWidget, nullptr, "BindToPath", nullptr, nullptr, sizeof(CoreArchiveQuestMapWidget_eventBindToPath_Parms), Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeClicked_Statics
	{
		struct CoreArchiveQuestMapWidget_eventOnNodeClicked_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeClicked_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeClicked_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestMapWidget_eventOnNodeClicked_Parms, buttonTarget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeClicked_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeClicked_Statics::NewProp_buttonTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeClicked_Statics::NewProp_buttonTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestMapWidget, nullptr, "OnNodeClicked", nullptr, nullptr, sizeof(CoreArchiveQuestMapWidget_eventOnNodeClicked_Parms), Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeHovered_Statics
	{
		struct CoreArchiveQuestMapWidget_eventOnNodeHovered_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeHovered_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeHovered_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestMapWidget_eventOnNodeHovered_Parms, buttonTarget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeHovered_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeHovered_Statics::NewProp_buttonTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeHovered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeHovered_Statics::NewProp_buttonTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestMapWidget, nullptr, "OnNodeHovered", nullptr, nullptr, sizeof(CoreArchiveQuestMapWidget_eventOnNodeHovered_Parms), Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeHovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeHovered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodesRevealCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodesRevealCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodesRevealCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestMapWidget, nullptr, "OnNodesRevealCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodesRevealCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodesRevealCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodesRevealCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodesRevealCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeUnhovered_Statics
	{
		struct CoreArchiveQuestMapWidget_eventOnNodeUnhovered_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeUnhovered_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeUnhovered_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestMapWidget_eventOnNodeUnhovered_Parms, buttonTarget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeUnhovered_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeUnhovered_Statics::NewProp_buttonTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeUnhovered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeUnhovered_Statics::NewProp_buttonTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeUnhovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeUnhovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestMapWidget, nullptr, "OnNodeUnhovered", nullptr, nullptr, sizeof(CoreArchiveQuestMapWidget_eventOnNodeUnhovered_Parms), Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeUnhovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeUnhovered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeUnhovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeUnhovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeUnhovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeUnhovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupNode_Statics
	{
		struct CoreArchiveQuestMapWidget_eventSetupNode_Parms
		{
			FArchiveNodeGraphViewData nodeData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nodeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_nodeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupNode_Statics::NewProp_nodeData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupNode_Statics::NewProp_nodeData = { "nodeData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestMapWidget_eventSetupNode_Parms, nodeData), Z_Construct_UScriptStruct_FArchiveNodeGraphViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupNode_Statics::NewProp_nodeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupNode_Statics::NewProp_nodeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupNode_Statics::NewProp_nodeData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestMapWidget, nullptr, "SetupNode", nullptr, nullptr, sizeof(CoreArchiveQuestMapWidget_eventSetupNode_Parms), Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupPath_Statics
	{
		struct CoreArchiveQuestMapWidget_eventSetupPath_Parms
		{
			FArchiveMapPathViewData pathData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pathData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pathData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupPath_Statics::NewProp_pathData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupPath_Statics::NewProp_pathData = { "pathData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestMapWidget_eventSetupPath_Parms, pathData), Z_Construct_UScriptStruct_FArchiveMapPathViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupPath_Statics::NewProp_pathData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupPath_Statics::NewProp_pathData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupPath_Statics::NewProp_pathData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestMapWidget, nullptr, "SetupPath", nullptr, nullptr, sizeof(CoreArchiveQuestMapWidget_eventSetupPath_Parms), Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromNode_Statics
	{
		struct CoreArchiveQuestMapWidget_eventUnbindFromNode_Parms
		{
			UCoreArchiveQuestNodeWidget* node;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_node_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromNode_Statics::NewProp_node_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromNode_Statics::NewProp_node = { "node", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestMapWidget_eventUnbindFromNode_Parms, node), Z_Construct_UClass_UCoreArchiveQuestNodeWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromNode_Statics::NewProp_node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromNode_Statics::NewProp_node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromNode_Statics::NewProp_node,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestMapWidget, nullptr, "UnbindFromNode", nullptr, nullptr, sizeof(CoreArchiveQuestMapWidget_eventUnbindFromNode_Parms), Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromPath_Statics
	{
		struct CoreArchiveQuestMapWidget_eventUnbindFromPath_Parms
		{
			UCoreArchiveQuestPathWidget* path;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromPath_Statics::NewProp_path_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromPath_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestMapWidget_eventUnbindFromPath_Parms, path), Z_Construct_UClass_UCoreArchiveQuestPathWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromPath_Statics::NewProp_path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromPath_Statics::NewProp_path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromPath_Statics::NewProp_path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestMapWidget, nullptr, "UnbindFromPath", nullptr, nullptr, sizeof(CoreArchiveQuestMapWidget_eventUnbindFromPath_Parms), Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreArchiveQuestMapWidget_NoRegister()
	{
		return UCoreArchiveQuestMapWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengesContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChallengesContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArchiveQuestNodeWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ArchiveQuestNodeWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArchiveQuestPathWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ArchiveQuestPathWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDisplayedNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDisplayedNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDisplayedPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDisplayedPaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestMapRevealDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_QuestMapRevealDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeRevealDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NodeRevealDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathRevealDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathRevealDuration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NodeRevealEasingType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeRevealEasingType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NodeRevealEasingType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PathRevealEasingType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathRevealEasingType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PathRevealEasingType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestMapGenerationSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestMapGenerationSound;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__nodeGraphDataList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__nodeGraphDataList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__nodeGraphDataList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pathDataList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pathDataList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__pathDataList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__questMapCreatedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__questMapCreatedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__questNodeHoveredDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__questNodeHoveredDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__questNodeUnhoveredDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__questNodeUnhoveredDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__questNodeSelectedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__questNodeSelectedDelegate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__nodeDictionary_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__nodeDictionary_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__nodeDictionary_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__nodeDictionary;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pathDictionary_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__pathDictionary_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pathDictionary_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__pathDictionary;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__nodeWidgetPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__nodeWidgetPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__nodeWidgetPool;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pathWidgetPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pathWidgetPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__pathWidgetPool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreTabContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToNode, "BindToNode" }, // 1256551157
		{ &Z_Construct_UFunction_UCoreArchiveQuestMapWidget_BindToPath, "BindToPath" }, // 923669132
		{ &Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeClicked, "OnNodeClicked" }, // 3579896302
		{ &Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeHovered, "OnNodeHovered" }, // 1613002874
		{ &Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodesRevealCompleted, "OnNodesRevealCompleted" }, // 3084134000
		{ &Z_Construct_UFunction_UCoreArchiveQuestMapWidget_OnNodeUnhovered, "OnNodeUnhovered" }, // 1499092616
		{ &Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupNode, "SetupNode" }, // 692336260
		{ &Z_Construct_UFunction_UCoreArchiveQuestMapWidget_SetupPath, "SetupPath" }, // 3808805946
		{ &Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromNode, "UnbindFromNode" }, // 2396922417
		{ &Z_Construct_UFunction_UCoreArchiveQuestMapWidget_UnbindFromPath, "UnbindFromPath" }, // 1084473313
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreArchiveQuestMapWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_ChallengesContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestMapWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_ChallengesContainer = { "ChallengesContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestMapWidget, ChallengesContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_ChallengesContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_ChallengesContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_ArchiveQuestNodeWidgetClass_MetaData[] = {
		{ "Category", "CoreArchiveQuestMapWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_ArchiveQuestNodeWidgetClass = { "ArchiveQuestNodeWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestMapWidget, ArchiveQuestNodeWidgetClass), Z_Construct_UClass_UCoreArchiveQuestNodeWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_ArchiveQuestNodeWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_ArchiveQuestNodeWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_ArchiveQuestPathWidgetClass_MetaData[] = {
		{ "Category", "CoreArchiveQuestMapWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_ArchiveQuestPathWidgetClass = { "ArchiveQuestPathWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestMapWidget, ArchiveQuestPathWidgetClass), Z_Construct_UClass_UCoreArchiveQuestPathWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_ArchiveQuestPathWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_ArchiveQuestPathWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_MaxDisplayedNodes_MetaData[] = {
		{ "Category", "CoreArchiveQuestMapWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_MaxDisplayedNodes = { "MaxDisplayedNodes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestMapWidget, MaxDisplayedNodes), METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_MaxDisplayedNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_MaxDisplayedNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_MaxDisplayedPaths_MetaData[] = {
		{ "Category", "CoreArchiveQuestMapWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_MaxDisplayedPaths = { "MaxDisplayedPaths", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestMapWidget, MaxDisplayedPaths), METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_MaxDisplayedPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_MaxDisplayedPaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_QuestMapRevealDuration_MetaData[] = {
		{ "Category", "CoreArchiveQuestMapWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_QuestMapRevealDuration = { "QuestMapRevealDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestMapWidget, QuestMapRevealDuration), METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_QuestMapRevealDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_QuestMapRevealDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_NodeRevealDuration_MetaData[] = {
		{ "Category", "CoreArchiveQuestMapWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_NodeRevealDuration = { "NodeRevealDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestMapWidget, NodeRevealDuration), METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_NodeRevealDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_NodeRevealDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_PathRevealDuration_MetaData[] = {
		{ "Category", "CoreArchiveQuestMapWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_PathRevealDuration = { "PathRevealDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestMapWidget, PathRevealDuration), METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_PathRevealDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_PathRevealDuration_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_NodeRevealEasingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_NodeRevealEasingType_MetaData[] = {
		{ "Category", "CoreArchiveQuestMapWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_NodeRevealEasingType = { "NodeRevealEasingType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestMapWidget, NodeRevealEasingType), Z_Construct_UEnum_UITween_EEasingType, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_NodeRevealEasingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_NodeRevealEasingType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_PathRevealEasingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_PathRevealEasingType_MetaData[] = {
		{ "Category", "CoreArchiveQuestMapWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_PathRevealEasingType = { "PathRevealEasingType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestMapWidget, PathRevealEasingType), Z_Construct_UEnum_UITween_EEasingType, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_PathRevealEasingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_PathRevealEasingType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_QuestMapGenerationSound_MetaData[] = {
		{ "Category", "CoreArchiveQuestMapWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_QuestMapGenerationSound = { "QuestMapGenerationSound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestMapWidget, QuestMapGenerationSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_QuestMapGenerationSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_QuestMapGenerationSound_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__nodeGraphDataList_Inner = { "_nodeGraphDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FArchiveNodeGraphViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__nodeGraphDataList_MetaData[] = {
		{ "Category", "CoreArchiveQuestMapWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__nodeGraphDataList = { "_nodeGraphDataList", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestMapWidget, _nodeGraphDataList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__nodeGraphDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__nodeGraphDataList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__pathDataList_Inner = { "_pathDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FArchiveMapPathViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__pathDataList_MetaData[] = {
		{ "Category", "CoreArchiveQuestMapWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__pathDataList = { "_pathDataList", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestMapWidget, _pathDataList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__pathDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__pathDataList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__questMapCreatedDelegate_MetaData[] = {
		{ "Category", "CoreArchiveQuestMapWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__questMapCreatedDelegate = { "_questMapCreatedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestMapWidget, _questMapCreatedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_TomeQuestMapCreatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__questMapCreatedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__questMapCreatedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__questNodeHoveredDelegate_MetaData[] = {
		{ "Category", "CoreArchiveQuestMapWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__questNodeHoveredDelegate = { "_questNodeHoveredDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestMapWidget, _questNodeHoveredDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_TomeQuestNodeHoveredDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__questNodeHoveredDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__questNodeHoveredDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__questNodeUnhoveredDelegate_MetaData[] = {
		{ "Category", "CoreArchiveQuestMapWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__questNodeUnhoveredDelegate = { "_questNodeUnhoveredDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestMapWidget, _questNodeUnhoveredDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_TomeQuestNodeUnhoveredDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__questNodeUnhoveredDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__questNodeUnhoveredDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__questNodeSelectedDelegate_MetaData[] = {
		{ "Category", "CoreArchiveQuestMapWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__questNodeSelectedDelegate = { "_questNodeSelectedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestMapWidget, _questNodeSelectedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_TomeQuestNodeSelectedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__questNodeSelectedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__questNodeSelectedDelegate_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__nodeDictionary_ValueProp = { "_nodeDictionary", nullptr, (EPropertyFlags)0x0000000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UCoreArchiveQuestNodeWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__nodeDictionary_Key_KeyProp = { "_nodeDictionary_Key", nullptr, (EPropertyFlags)0x0000000000080009, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__nodeDictionary_MetaData[] = {
		{ "Category", "CoreArchiveQuestMapWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__nodeDictionary = { "_nodeDictionary", nullptr, (EPropertyFlags)0x002008800000200d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestMapWidget, _nodeDictionary), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__nodeDictionary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__nodeDictionary_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__pathDictionary_ValueProp = { "_pathDictionary", nullptr, (EPropertyFlags)0x0000000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UCoreArchiveQuestPathWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__pathDictionary_Key_KeyProp = { "_pathDictionary_Key", nullptr, (EPropertyFlags)0x0000000000080009, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__pathDictionary_MetaData[] = {
		{ "Category", "CoreArchiveQuestMapWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__pathDictionary = { "_pathDictionary", nullptr, (EPropertyFlags)0x002008800000200d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestMapWidget, _pathDictionary), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__pathDictionary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__pathDictionary_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__nodeWidgetPool_Inner = { "_nodeWidgetPool", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreArchiveQuestNodeWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__nodeWidgetPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreArchiveQuestMapWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__nodeWidgetPool = { "_nodeWidgetPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestMapWidget, _nodeWidgetPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__nodeWidgetPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__nodeWidgetPool_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__pathWidgetPool_Inner = { "_pathWidgetPool", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreArchiveQuestPathWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__pathWidgetPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreArchiveQuestMapWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__pathWidgetPool = { "_pathWidgetPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestMapWidget, _pathWidgetPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__pathWidgetPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__pathWidgetPool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_ChallengesContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_ArchiveQuestNodeWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_ArchiveQuestPathWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_MaxDisplayedNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_MaxDisplayedPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_QuestMapRevealDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_NodeRevealDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_PathRevealDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_NodeRevealEasingType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_NodeRevealEasingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_PathRevealEasingType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_PathRevealEasingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp_QuestMapGenerationSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__nodeGraphDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__nodeGraphDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__pathDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__pathDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__questMapCreatedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__questNodeHoveredDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__questNodeUnhoveredDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__questNodeSelectedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__nodeDictionary_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__nodeDictionary_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__nodeDictionary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__pathDictionary_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__pathDictionary_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__pathDictionary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__nodeWidgetPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__nodeWidgetPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__pathWidgetPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::NewProp__pathWidgetPool,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UArchiveQuestMapViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreArchiveQuestMapWidget, IArchiveQuestMapViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreArchiveQuestMapWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::ClassParams = {
		&UCoreArchiveQuestMapWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreArchiveQuestMapWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreArchiveQuestMapWidget, 3299607789);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreArchiveQuestMapWidget>()
	{
		return UCoreArchiveQuestMapWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreArchiveQuestMapWidget(Z_Construct_UClass_UCoreArchiveQuestMapWidget, &UCoreArchiveQuestMapWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreArchiveQuestMapWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreArchiveQuestMapWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
