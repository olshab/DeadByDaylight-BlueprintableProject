// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreArchiveQuestNodeWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreArchiveQuestNodeWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveQuestNodeWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveQuestNodeWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EStoryNodeState();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveNodeViewData();
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_ENodeStatusChange();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemRarity();
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_ETooltipHorizontalAlignment();
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreArchiveQuestNodeWidget::execBroadcastDragBegin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastDragBegin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestNodeWidget::execHandleStatusChange)
	{
		P_GET_ENUM(EStoryNodeState,Z_Param_prevStatus);
		P_GET_ENUM(EStoryNodeState,Z_Param_currentStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleStatusChange(EStoryNodeState(Z_Param_prevStatus),EStoryNodeState(Z_Param_currentStatus));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestNodeWidget::execInitNode)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_nodeId);
		P_GET_STRUCT_REF(FArchiveNodeViewData,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_isChallengeReminderNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitNode(Z_Param_Out_nodeId,Z_Param_Out_data,Z_Param_isChallengeReminderNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestNodeWidget::execIsSelectableNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSelectableNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestNodeWidget::execIsValidNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestNodeWidget::execNeedsChallengeReminderHoverAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NeedsChallengeReminderHoverAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestNodeWidget::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestNodeWidget::execShowRewardNodeTooltip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowRewardNodeTooltip();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestNodeWidget::execUpdateAllStoryIndicators)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAllStoryIndicators();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestNodeWidget::execUpdateNode)
	{
		P_GET_STRUCT_REF(FArchiveNodeViewData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateNode(Z_Param_Out_data);
		P_NATIVE_END;
	}
	static FName NAME_UCoreArchiveQuestNodeWidget_OnInit = FName(TEXT("OnInit"));
	void UCoreArchiveQuestNodeWidget::OnInit()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveQuestNodeWidget_OnInit),NULL);
	}
	static FName NAME_UCoreArchiveQuestNodeWidget_OnReset = FName(TEXT("OnReset"));
	void UCoreArchiveQuestNodeWidget::OnReset()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveQuestNodeWidget_OnReset),NULL);
	}
	static FName NAME_UCoreArchiveQuestNodeWidget_OnStatusChanged = FName(TEXT("OnStatusChanged"));
	void UCoreArchiveQuestNodeWidget::OnStatusChanged(ENodeStatusChange nodeStatusChange)
	{
		CoreArchiveQuestNodeWidget_eventOnStatusChanged_Parms Parms;
		Parms.nodeStatusChange=nodeStatusChange;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveQuestNodeWidget_OnStatusChanged),&Parms);
	}
	static FName NAME_UCoreArchiveQuestNodeWidget_SetCurrencyRewardBackground = FName(TEXT("SetCurrencyRewardBackground"));
	void UCoreArchiveQuestNodeWidget::SetCurrencyRewardBackground(ECurrencyType currencyType)
	{
		CoreArchiveQuestNodeWidget_eventSetCurrencyRewardBackground_Parms Parms;
		Parms.currencyType=currencyType;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveQuestNodeWidget_SetCurrencyRewardBackground),&Parms);
	}
	static FName NAME_UCoreArchiveQuestNodeWidget_SetCustomizationRewardRarity = FName(TEXT("SetCustomizationRewardRarity"));
	void UCoreArchiveQuestNodeWidget::SetCustomizationRewardRarity(EItemRarity rarity)
	{
		CoreArchiveQuestNodeWidget_eventSetCustomizationRewardRarity_Parms Parms;
		Parms.rarity=rarity;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveQuestNodeWidget_SetCustomizationRewardRarity),&Parms);
	}
	static FName NAME_UCoreArchiveQuestNodeWidget_UpdateStoryIndicatorOpacity = FName(TEXT("UpdateStoryIndicatorOpacity"));
	void UCoreArchiveQuestNodeWidget::UpdateStoryIndicatorOpacity(bool isImageReward, bool isCompleted)
	{
		CoreArchiveQuestNodeWidget_eventUpdateStoryIndicatorOpacity_Parms Parms;
		Parms.isImageReward=isImageReward ? true : false;
		Parms.isCompleted=isCompleted ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveQuestNodeWidget_UpdateStoryIndicatorOpacity),&Parms);
	}
	void UCoreArchiveQuestNodeWidget::StaticRegisterNativesUCoreArchiveQuestNodeWidget()
	{
		UClass* Class = UCoreArchiveQuestNodeWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastDragBegin", &UCoreArchiveQuestNodeWidget::execBroadcastDragBegin },
			{ "HandleStatusChange", &UCoreArchiveQuestNodeWidget::execHandleStatusChange },
			{ "InitNode", &UCoreArchiveQuestNodeWidget::execInitNode },
			{ "IsSelectableNode", &UCoreArchiveQuestNodeWidget::execIsSelectableNode },
			{ "IsValidNode", &UCoreArchiveQuestNodeWidget::execIsValidNode },
			{ "NeedsChallengeReminderHoverAnimation", &UCoreArchiveQuestNodeWidget::execNeedsChallengeReminderHoverAnimation },
			{ "Reset", &UCoreArchiveQuestNodeWidget::execReset },
			{ "ShowRewardNodeTooltip", &UCoreArchiveQuestNodeWidget::execShowRewardNodeTooltip },
			{ "UpdateAllStoryIndicators", &UCoreArchiveQuestNodeWidget::execUpdateAllStoryIndicators },
			{ "UpdateNode", &UCoreArchiveQuestNodeWidget::execUpdateNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_BroadcastDragBegin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_BroadcastDragBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_BroadcastDragBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestNodeWidget, nullptr, "BroadcastDragBegin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_BroadcastDragBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_BroadcastDragBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_BroadcastDragBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_BroadcastDragBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_HandleStatusChange_Statics
	{
		struct CoreArchiveQuestNodeWidget_eventHandleStatusChange_Parms
		{
			EStoryNodeState prevStatus;
			EStoryNodeState currentStatus;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_prevStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_prevStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_prevStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currentStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_currentStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_HandleStatusChange_Statics::NewProp_prevStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_HandleStatusChange_Statics::NewProp_prevStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_HandleStatusChange_Statics::NewProp_prevStatus = { "prevStatus", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestNodeWidget_eventHandleStatusChange_Parms, prevStatus), Z_Construct_UEnum_DBDSharedTypes_EStoryNodeState, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_HandleStatusChange_Statics::NewProp_prevStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_HandleStatusChange_Statics::NewProp_prevStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_HandleStatusChange_Statics::NewProp_currentStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_HandleStatusChange_Statics::NewProp_currentStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_HandleStatusChange_Statics::NewProp_currentStatus = { "currentStatus", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestNodeWidget_eventHandleStatusChange_Parms, currentStatus), Z_Construct_UEnum_DBDSharedTypes_EStoryNodeState, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_HandleStatusChange_Statics::NewProp_currentStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_HandleStatusChange_Statics::NewProp_currentStatus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_HandleStatusChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_HandleStatusChange_Statics::NewProp_prevStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_HandleStatusChange_Statics::NewProp_prevStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_HandleStatusChange_Statics::NewProp_currentStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_HandleStatusChange_Statics::NewProp_currentStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_HandleStatusChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_HandleStatusChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestNodeWidget, nullptr, "HandleStatusChange", nullptr, nullptr, sizeof(CoreArchiveQuestNodeWidget_eventHandleStatusChange_Parms), Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_HandleStatusChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_HandleStatusChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_HandleStatusChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_HandleStatusChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_HandleStatusChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_HandleStatusChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_InitNode_Statics
	{
		struct CoreArchiveQuestNodeWidget_eventInitNode_Parms
		{
			FName nodeId;
			FArchiveNodeViewData data;
			bool isChallengeReminderNode;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nodeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_nodeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static void NewProp_isChallengeReminderNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isChallengeReminderNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_InitNode_Statics::NewProp_nodeId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_InitNode_Statics::NewProp_nodeId = { "nodeId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestNodeWidget_eventInitNode_Parms, nodeId), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_InitNode_Statics::NewProp_nodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_InitNode_Statics::NewProp_nodeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_InitNode_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_InitNode_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestNodeWidget_eventInitNode_Parms, data), Z_Construct_UScriptStruct_FArchiveNodeViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_InitNode_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_InitNode_Statics::NewProp_data_MetaData)) };
	void Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_InitNode_Statics::NewProp_isChallengeReminderNode_SetBit(void* Obj)
	{
		((CoreArchiveQuestNodeWidget_eventInitNode_Parms*)Obj)->isChallengeReminderNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_InitNode_Statics::NewProp_isChallengeReminderNode = { "isChallengeReminderNode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveQuestNodeWidget_eventInitNode_Parms), &Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_InitNode_Statics::NewProp_isChallengeReminderNode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_InitNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_InitNode_Statics::NewProp_nodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_InitNode_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_InitNode_Statics::NewProp_isChallengeReminderNode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_InitNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_InitNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestNodeWidget, nullptr, "InitNode", nullptr, nullptr, sizeof(CoreArchiveQuestNodeWidget_eventInitNode_Parms), Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_InitNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_InitNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_InitNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_InitNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_InitNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_InitNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsSelectableNode_Statics
	{
		struct CoreArchiveQuestNodeWidget_eventIsSelectableNode_Parms
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
	void Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsSelectableNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoreArchiveQuestNodeWidget_eventIsSelectableNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsSelectableNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveQuestNodeWidget_eventIsSelectableNode_Parms), &Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsSelectableNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsSelectableNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsSelectableNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsSelectableNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsSelectableNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestNodeWidget, nullptr, "IsSelectableNode", nullptr, nullptr, sizeof(CoreArchiveQuestNodeWidget_eventIsSelectableNode_Parms), Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsSelectableNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsSelectableNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsSelectableNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsSelectableNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsSelectableNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsSelectableNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsValidNode_Statics
	{
		struct CoreArchiveQuestNodeWidget_eventIsValidNode_Parms
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
	void Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsValidNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoreArchiveQuestNodeWidget_eventIsValidNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsValidNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveQuestNodeWidget_eventIsValidNode_Parms), &Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsValidNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsValidNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsValidNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsValidNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsValidNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestNodeWidget, nullptr, "IsValidNode", nullptr, nullptr, sizeof(CoreArchiveQuestNodeWidget_eventIsValidNode_Parms), Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsValidNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsValidNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsValidNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsValidNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsValidNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsValidNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_NeedsChallengeReminderHoverAnimation_Statics
	{
		struct CoreArchiveQuestNodeWidget_eventNeedsChallengeReminderHoverAnimation_Parms
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
	void Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_NeedsChallengeReminderHoverAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoreArchiveQuestNodeWidget_eventNeedsChallengeReminderHoverAnimation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_NeedsChallengeReminderHoverAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveQuestNodeWidget_eventNeedsChallengeReminderHoverAnimation_Parms), &Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_NeedsChallengeReminderHoverAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_NeedsChallengeReminderHoverAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_NeedsChallengeReminderHoverAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_NeedsChallengeReminderHoverAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_NeedsChallengeReminderHoverAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestNodeWidget, nullptr, "NeedsChallengeReminderHoverAnimation", nullptr, nullptr, sizeof(CoreArchiveQuestNodeWidget_eventNeedsChallengeReminderHoverAnimation_Parms), Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_NeedsChallengeReminderHoverAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_NeedsChallengeReminderHoverAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_NeedsChallengeReminderHoverAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_NeedsChallengeReminderHoverAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_NeedsChallengeReminderHoverAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_NeedsChallengeReminderHoverAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnInit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnInit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestNodeWidget, nullptr, "OnInit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnReset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnReset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestNodeWidget, nullptr, "OnReset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnStatusChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_nodeStatusChange_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_nodeStatusChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnStatusChanged_Statics::NewProp_nodeStatusChange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnStatusChanged_Statics::NewProp_nodeStatusChange = { "nodeStatusChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestNodeWidget_eventOnStatusChanged_Parms, nodeStatusChange), Z_Construct_UEnum_DBDUIViewsCore_ENodeStatusChange, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnStatusChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnStatusChanged_Statics::NewProp_nodeStatusChange_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnStatusChanged_Statics::NewProp_nodeStatusChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnStatusChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestNodeWidget, nullptr, "OnStatusChanged", nullptr, nullptr, sizeof(CoreArchiveQuestNodeWidget_eventOnStatusChanged_Parms), Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnStatusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnStatusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnStatusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnStatusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnStatusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestNodeWidget, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCurrencyRewardBackground_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currencyType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_currencyType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCurrencyRewardBackground_Statics::NewProp_currencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCurrencyRewardBackground_Statics::NewProp_currencyType = { "currencyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestNodeWidget_eventSetCurrencyRewardBackground_Parms, currencyType), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCurrencyRewardBackground_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCurrencyRewardBackground_Statics::NewProp_currencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCurrencyRewardBackground_Statics::NewProp_currencyType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCurrencyRewardBackground_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCurrencyRewardBackground_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestNodeWidget, nullptr, "SetCurrencyRewardBackground", nullptr, nullptr, sizeof(CoreArchiveQuestNodeWidget_eventSetCurrencyRewardBackground_Parms), Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCurrencyRewardBackground_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCurrencyRewardBackground_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCurrencyRewardBackground_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCurrencyRewardBackground_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCurrencyRewardBackground()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCurrencyRewardBackground_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCustomizationRewardRarity_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rarity_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_rarity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCustomizationRewardRarity_Statics::NewProp_rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCustomizationRewardRarity_Statics::NewProp_rarity = { "rarity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestNodeWidget_eventSetCustomizationRewardRarity_Parms, rarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCustomizationRewardRarity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCustomizationRewardRarity_Statics::NewProp_rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCustomizationRewardRarity_Statics::NewProp_rarity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCustomizationRewardRarity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCustomizationRewardRarity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestNodeWidget, nullptr, "SetCustomizationRewardRarity", nullptr, nullptr, sizeof(CoreArchiveQuestNodeWidget_eventSetCustomizationRewardRarity_Parms), Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCustomizationRewardRarity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCustomizationRewardRarity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCustomizationRewardRarity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCustomizationRewardRarity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCustomizationRewardRarity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCustomizationRewardRarity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_ShowRewardNodeTooltip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_ShowRewardNodeTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_ShowRewardNodeTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestNodeWidget, nullptr, "ShowRewardNodeTooltip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_ShowRewardNodeTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_ShowRewardNodeTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_ShowRewardNodeTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_ShowRewardNodeTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateAllStoryIndicators_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateAllStoryIndicators_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateAllStoryIndicators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestNodeWidget, nullptr, "UpdateAllStoryIndicators", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateAllStoryIndicators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateAllStoryIndicators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateAllStoryIndicators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateAllStoryIndicators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateNode_Statics
	{
		struct CoreArchiveQuestNodeWidget_eventUpdateNode_Parms
		{
			FArchiveNodeViewData data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateNode_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateNode_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestNodeWidget_eventUpdateNode_Parms, data), Z_Construct_UScriptStruct_FArchiveNodeViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateNode_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateNode_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateNode_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestNodeWidget, nullptr, "UpdateNode", nullptr, nullptr, sizeof(CoreArchiveQuestNodeWidget_eventUpdateNode_Parms), Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateStoryIndicatorOpacity_Statics
	{
		static void NewProp_isImageReward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isImageReward;
		static void NewProp_isCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateStoryIndicatorOpacity_Statics::NewProp_isImageReward_SetBit(void* Obj)
	{
		((CoreArchiveQuestNodeWidget_eventUpdateStoryIndicatorOpacity_Parms*)Obj)->isImageReward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateStoryIndicatorOpacity_Statics::NewProp_isImageReward = { "isImageReward", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveQuestNodeWidget_eventUpdateStoryIndicatorOpacity_Parms), &Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateStoryIndicatorOpacity_Statics::NewProp_isImageReward_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateStoryIndicatorOpacity_Statics::NewProp_isCompleted_SetBit(void* Obj)
	{
		((CoreArchiveQuestNodeWidget_eventUpdateStoryIndicatorOpacity_Parms*)Obj)->isCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateStoryIndicatorOpacity_Statics::NewProp_isCompleted = { "isCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveQuestNodeWidget_eventUpdateStoryIndicatorOpacity_Parms), &Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateStoryIndicatorOpacity_Statics::NewProp_isCompleted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateStoryIndicatorOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateStoryIndicatorOpacity_Statics::NewProp_isImageReward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateStoryIndicatorOpacity_Statics::NewProp_isCompleted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateStoryIndicatorOpacity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateStoryIndicatorOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestNodeWidget, nullptr, "UpdateStoryIndicatorOpacity", nullptr, nullptr, sizeof(CoreArchiveQuestNodeWidget_eventUpdateStoryIndicatorOpacity_Parms), Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateStoryIndicatorOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateStoryIndicatorOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateStoryIndicatorOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateStoryIndicatorOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateStoryIndicatorOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateStoryIndicatorOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreArchiveQuestNodeWidget_NoRegister()
	{
		return UCoreArchiveQuestNodeWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VignetteTextIndicatorOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VignetteTextIndicatorOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VignetteImageIndicatorOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VignetteImageIndicatorOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VignetteCurrencyAmountOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VignetteCurrencyAmountOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VignetteCurrencyAmountText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VignetteCurrencyAmountText;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatusChangeAudioEvents_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StatusChangeAudioEvents_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StatusChangeAudioEvents_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusChangeAudioEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StatusChangeAudioEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__nodeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__nodeData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__nodeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__nodeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isChallengeReminderNode_MetaData[];
#endif
		static void NewProp__isChallengeReminderNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isChallengeReminderNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isDraggable_MetaData[];
#endif
		static void NewProp__isDraggable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isDraggable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_BroadcastDragBegin, "BroadcastDragBegin" }, // 819484851
		{ &Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_HandleStatusChange, "HandleStatusChange" }, // 2331669369
		{ &Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_InitNode, "InitNode" }, // 2212233686
		{ &Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsSelectableNode, "IsSelectableNode" }, // 2511019853
		{ &Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_IsValidNode, "IsValidNode" }, // 3046990531
		{ &Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_NeedsChallengeReminderHoverAnimation, "NeedsChallengeReminderHoverAnimation" }, // 3000716735
		{ &Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnInit, "OnInit" }, // 71139486
		{ &Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnReset, "OnReset" }, // 3749259864
		{ &Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_OnStatusChanged, "OnStatusChanged" }, // 2658111036
		{ &Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_Reset, "Reset" }, // 2850994767
		{ &Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCurrencyRewardBackground, "SetCurrencyRewardBackground" }, // 2555918753
		{ &Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_SetCustomizationRewardRarity, "SetCustomizationRewardRarity" }, // 3143609874
		{ &Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_ShowRewardNodeTooltip, "ShowRewardNodeTooltip" }, // 3077292966
		{ &Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateAllStoryIndicators, "UpdateAllStoryIndicators" }, // 552363037
		{ &Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateNode, "UpdateNode" }, // 1721264317
		{ &Z_Construct_UFunction_UCoreArchiveQuestNodeWidget_UpdateStoryIndicatorOpacity, "UpdateStoryIndicatorOpacity" }, // 467302323
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreArchiveQuestNodeWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_HorizontalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "CoreArchiveQuestNodeWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestNodeWidget, HorizontalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_HorizontalAlignment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VerticalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "CoreArchiveQuestNodeWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestNodeWidget, VerticalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_Icon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestNodeWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestNodeWidget, Icon), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VignetteTextIndicatorOverlay_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestNodeWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VignetteTextIndicatorOverlay = { "VignetteTextIndicatorOverlay", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestNodeWidget, VignetteTextIndicatorOverlay), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VignetteTextIndicatorOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VignetteTextIndicatorOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VignetteImageIndicatorOverlay_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestNodeWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VignetteImageIndicatorOverlay = { "VignetteImageIndicatorOverlay", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestNodeWidget, VignetteImageIndicatorOverlay), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VignetteImageIndicatorOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VignetteImageIndicatorOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VignetteCurrencyAmountOverlay_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestNodeWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VignetteCurrencyAmountOverlay = { "VignetteCurrencyAmountOverlay", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestNodeWidget, VignetteCurrencyAmountOverlay), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VignetteCurrencyAmountOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VignetteCurrencyAmountOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VignetteCurrencyAmountText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestNodeWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VignetteCurrencyAmountText = { "VignetteCurrencyAmountText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestNodeWidget, VignetteCurrencyAmountText), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VignetteCurrencyAmountText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VignetteCurrencyAmountText_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_StatusChangeAudioEvents_ValueProp = { "StatusChangeAudioEvents", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_StatusChangeAudioEvents_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_StatusChangeAudioEvents_Key_KeyProp = { "StatusChangeAudioEvents_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDUIViewsCore_ENodeStatusChange, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_StatusChangeAudioEvents_MetaData[] = {
		{ "Category", "CoreArchiveQuestNodeWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_StatusChangeAudioEvents = { "StatusChangeAudioEvents", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestNodeWidget, StatusChangeAudioEvents), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_StatusChangeAudioEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_StatusChangeAudioEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp__nodeData_MetaData[] = {
		{ "Category", "CoreArchiveQuestNodeWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp__nodeData = { "_nodeData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestNodeWidget, _nodeData), Z_Construct_UScriptStruct_FArchiveNodeViewData, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp__nodeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp__nodeData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp__nodeId_MetaData[] = {
		{ "Category", "CoreArchiveQuestNodeWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp__nodeId = { "_nodeId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestNodeWidget, _nodeId), METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp__nodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp__nodeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp__isChallengeReminderNode_MetaData[] = {
		{ "Category", "CoreArchiveQuestNodeWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp__isChallengeReminderNode_SetBit(void* Obj)
	{
		((UCoreArchiveQuestNodeWidget*)Obj)->_isChallengeReminderNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp__isChallengeReminderNode = { "_isChallengeReminderNode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreArchiveQuestNodeWidget), &Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp__isChallengeReminderNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp__isChallengeReminderNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp__isChallengeReminderNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp__isDraggable_MetaData[] = {
		{ "Category", "CoreArchiveQuestNodeWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestNodeWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp__isDraggable_SetBit(void* Obj)
	{
		((UCoreArchiveQuestNodeWidget*)Obj)->_isDraggable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp__isDraggable = { "_isDraggable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreArchiveQuestNodeWidget), &Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp__isDraggable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp__isDraggable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp__isDraggable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_HorizontalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_HorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VerticalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VignetteTextIndicatorOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VignetteImageIndicatorOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VignetteCurrencyAmountOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_VignetteCurrencyAmountText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_StatusChangeAudioEvents_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_StatusChangeAudioEvents_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_StatusChangeAudioEvents_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp_StatusChangeAudioEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp__nodeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp__nodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp__isChallengeReminderNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::NewProp__isDraggable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreArchiveQuestNodeWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::ClassParams = {
		&UCoreArchiveQuestNodeWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreArchiveQuestNodeWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreArchiveQuestNodeWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreArchiveQuestNodeWidget, 2060409577);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreArchiveQuestNodeWidget>()
	{
		return UCoreArchiveQuestNodeWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreArchiveQuestNodeWidget(Z_Construct_UClass_UCoreArchiveQuestNodeWidget, &UCoreArchiveQuestNodeWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreArchiveQuestNodeWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreArchiveQuestNodeWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
