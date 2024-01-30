// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreAlertsWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreAlertsWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreAlertsWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreAlertsWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	UITWEEN_API UClass* Z_Construct_UClass_UUITweenInstance_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FRewardWrapperViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FAlertsViewData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreRewardWrapperWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_ETooltipHorizontalAlignment();
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment();
	UITWEEN_API UEnum* Z_Construct_UEnum_UITween_EEasingType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UAlertsViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreAlertsWidget::execDisplayNextReward)
	{
		P_GET_OBJECT(UUITweenInstance,Z_Param_tween);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayNextReward(Z_Param_tween);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAlertsWidget::execDisplayNextRewardSequence)
	{
		P_GET_OBJECT(UUITweenInstance,Z_Param_tween);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayNextRewardSequence(Z_Param_tween);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAlertsWidget::execEndOfRewardDisplay)
	{
		P_GET_OBJECT(UUITweenInstance,Z_Param_tween);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndOfRewardDisplay(Z_Param_tween);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAlertsWidget::execEndRewardDisplayRequested)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndRewardDisplayRequested();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAlertsWidget::execHideRewardTooltip)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_rewardWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideRewardTooltip(Z_Param_rewardWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAlertsWidget::execOnRewardItemsFadeOutCompleted)
	{
		P_GET_OBJECT(UUITweenInstance,Z_Param_tween);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRewardItemsFadeOutCompleted(Z_Param_tween);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAlertsWidget::execRewardAlertSequenceCompleted)
	{
		P_GET_OBJECT(UUITweenInstance,Z_Param_tween);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RewardAlertSequenceCompleted(Z_Param_tween);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAlertsWidget::execSetRewardsDescription)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_rewardsDescription);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRewardsDescription(Z_Param_rewardsDescription);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAlertsWidget::execShowAlertRewards)
	{
		P_GET_STRUCT_REF(FAlertsViewData,Z_Param_Out_alertsViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowAlertRewards(Z_Param_Out_alertsViewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAlertsWidget::execShowRewardNameVisibility)
	{
		P_GET_OBJECT(UUITweenInstance,Z_Param_tween);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowRewardNameVisibility(Z_Param_tween);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAlertsWidget::execShowRewardTooltip)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_rewardWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowRewardTooltip(Z_Param_rewardWidget);
		P_NATIVE_END;
	}
	static FName NAME_UCoreAlertsWidget_PlayDisappearRewardSound = FName(TEXT("PlayDisappearRewardSound"));
	void UCoreAlertsWidget::PlayDisappearRewardSound()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreAlertsWidget_PlayDisappearRewardSound),NULL);
	}
	static FName NAME_UCoreAlertsWidget_PlayDisplayRewardSound = FName(TEXT("PlayDisplayRewardSound"));
	void UCoreAlertsWidget::PlayDisplayRewardSound(FRewardWrapperViewData rewardData)
	{
		CoreAlertsWidget_eventPlayDisplayRewardSound_Parms Parms;
		Parms.rewardData=rewardData;
		ProcessEvent(FindFunctionChecked(NAME_UCoreAlertsWidget_PlayDisplayRewardSound),&Parms);
	}
	void UCoreAlertsWidget::StaticRegisterNativesUCoreAlertsWidget()
	{
		UClass* Class = UCoreAlertsWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayNextReward", &UCoreAlertsWidget::execDisplayNextReward },
			{ "DisplayNextRewardSequence", &UCoreAlertsWidget::execDisplayNextRewardSequence },
			{ "EndOfRewardDisplay", &UCoreAlertsWidget::execEndOfRewardDisplay },
			{ "EndRewardDisplayRequested", &UCoreAlertsWidget::execEndRewardDisplayRequested },
			{ "HideRewardTooltip", &UCoreAlertsWidget::execHideRewardTooltip },
			{ "OnRewardItemsFadeOutCompleted", &UCoreAlertsWidget::execOnRewardItemsFadeOutCompleted },
			{ "RewardAlertSequenceCompleted", &UCoreAlertsWidget::execRewardAlertSequenceCompleted },
			{ "SetRewardsDescription", &UCoreAlertsWidget::execSetRewardsDescription },
			{ "ShowAlertRewards", &UCoreAlertsWidget::execShowAlertRewards },
			{ "ShowRewardNameVisibility", &UCoreAlertsWidget::execShowRewardNameVisibility },
			{ "ShowRewardTooltip", &UCoreAlertsWidget::execShowRewardTooltip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreAlertsWidget_DisplayNextReward_Statics
	{
		struct CoreAlertsWidget_eventDisplayNextReward_Parms
		{
			UUITweenInstance* tween;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tween;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreAlertsWidget_DisplayNextReward_Statics::NewProp_tween = { "tween", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAlertsWidget_eventDisplayNextReward_Parms, tween), Z_Construct_UClass_UUITweenInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAlertsWidget_DisplayNextReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAlertsWidget_DisplayNextReward_Statics::NewProp_tween,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAlertsWidget_DisplayNextReward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAlertsWidget_DisplayNextReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAlertsWidget, nullptr, "DisplayNextReward", nullptr, nullptr, sizeof(CoreAlertsWidget_eventDisplayNextReward_Parms), Z_Construct_UFunction_UCoreAlertsWidget_DisplayNextReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_DisplayNextReward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAlertsWidget_DisplayNextReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_DisplayNextReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAlertsWidget_DisplayNextReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAlertsWidget_DisplayNextReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAlertsWidget_DisplayNextRewardSequence_Statics
	{
		struct CoreAlertsWidget_eventDisplayNextRewardSequence_Parms
		{
			UUITweenInstance* tween;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tween;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreAlertsWidget_DisplayNextRewardSequence_Statics::NewProp_tween = { "tween", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAlertsWidget_eventDisplayNextRewardSequence_Parms, tween), Z_Construct_UClass_UUITweenInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAlertsWidget_DisplayNextRewardSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAlertsWidget_DisplayNextRewardSequence_Statics::NewProp_tween,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAlertsWidget_DisplayNextRewardSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAlertsWidget_DisplayNextRewardSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAlertsWidget, nullptr, "DisplayNextRewardSequence", nullptr, nullptr, sizeof(CoreAlertsWidget_eventDisplayNextRewardSequence_Parms), Z_Construct_UFunction_UCoreAlertsWidget_DisplayNextRewardSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_DisplayNextRewardSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAlertsWidget_DisplayNextRewardSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_DisplayNextRewardSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAlertsWidget_DisplayNextRewardSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAlertsWidget_DisplayNextRewardSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAlertsWidget_EndOfRewardDisplay_Statics
	{
		struct CoreAlertsWidget_eventEndOfRewardDisplay_Parms
		{
			UUITweenInstance* tween;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tween;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreAlertsWidget_EndOfRewardDisplay_Statics::NewProp_tween = { "tween", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAlertsWidget_eventEndOfRewardDisplay_Parms, tween), Z_Construct_UClass_UUITweenInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAlertsWidget_EndOfRewardDisplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAlertsWidget_EndOfRewardDisplay_Statics::NewProp_tween,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAlertsWidget_EndOfRewardDisplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAlertsWidget_EndOfRewardDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAlertsWidget, nullptr, "EndOfRewardDisplay", nullptr, nullptr, sizeof(CoreAlertsWidget_eventEndOfRewardDisplay_Parms), Z_Construct_UFunction_UCoreAlertsWidget_EndOfRewardDisplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_EndOfRewardDisplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAlertsWidget_EndOfRewardDisplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_EndOfRewardDisplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAlertsWidget_EndOfRewardDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAlertsWidget_EndOfRewardDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAlertsWidget_EndRewardDisplayRequested_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAlertsWidget_EndRewardDisplayRequested_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAlertsWidget_EndRewardDisplayRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAlertsWidget, nullptr, "EndRewardDisplayRequested", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAlertsWidget_EndRewardDisplayRequested_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_EndRewardDisplayRequested_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAlertsWidget_EndRewardDisplayRequested()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAlertsWidget_EndRewardDisplayRequested_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAlertsWidget_HideRewardTooltip_Statics
	{
		struct CoreAlertsWidget_eventHideRewardTooltip_Parms
		{
			UCoreButtonWidget* rewardWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rewardWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rewardWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAlertsWidget_HideRewardTooltip_Statics::NewProp_rewardWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreAlertsWidget_HideRewardTooltip_Statics::NewProp_rewardWidget = { "rewardWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAlertsWidget_eventHideRewardTooltip_Parms, rewardWidget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreAlertsWidget_HideRewardTooltip_Statics::NewProp_rewardWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_HideRewardTooltip_Statics::NewProp_rewardWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAlertsWidget_HideRewardTooltip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAlertsWidget_HideRewardTooltip_Statics::NewProp_rewardWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAlertsWidget_HideRewardTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAlertsWidget_HideRewardTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAlertsWidget, nullptr, "HideRewardTooltip", nullptr, nullptr, sizeof(CoreAlertsWidget_eventHideRewardTooltip_Parms), Z_Construct_UFunction_UCoreAlertsWidget_HideRewardTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_HideRewardTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAlertsWidget_HideRewardTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_HideRewardTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAlertsWidget_HideRewardTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAlertsWidget_HideRewardTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAlertsWidget_OnRewardItemsFadeOutCompleted_Statics
	{
		struct CoreAlertsWidget_eventOnRewardItemsFadeOutCompleted_Parms
		{
			UUITweenInstance* tween;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tween;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreAlertsWidget_OnRewardItemsFadeOutCompleted_Statics::NewProp_tween = { "tween", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAlertsWidget_eventOnRewardItemsFadeOutCompleted_Parms, tween), Z_Construct_UClass_UUITweenInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAlertsWidget_OnRewardItemsFadeOutCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAlertsWidget_OnRewardItemsFadeOutCompleted_Statics::NewProp_tween,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAlertsWidget_OnRewardItemsFadeOutCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAlertsWidget_OnRewardItemsFadeOutCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAlertsWidget, nullptr, "OnRewardItemsFadeOutCompleted", nullptr, nullptr, sizeof(CoreAlertsWidget_eventOnRewardItemsFadeOutCompleted_Parms), Z_Construct_UFunction_UCoreAlertsWidget_OnRewardItemsFadeOutCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_OnRewardItemsFadeOutCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAlertsWidget_OnRewardItemsFadeOutCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_OnRewardItemsFadeOutCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAlertsWidget_OnRewardItemsFadeOutCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAlertsWidget_OnRewardItemsFadeOutCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAlertsWidget_PlayDisappearRewardSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAlertsWidget_PlayDisappearRewardSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAlertsWidget_PlayDisappearRewardSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAlertsWidget, nullptr, "PlayDisappearRewardSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAlertsWidget_PlayDisappearRewardSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_PlayDisappearRewardSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAlertsWidget_PlayDisappearRewardSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAlertsWidget_PlayDisappearRewardSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAlertsWidget_PlayDisplayRewardSound_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rewardData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAlertsWidget_PlayDisplayRewardSound_Statics::NewProp_rewardData = { "rewardData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAlertsWidget_eventPlayDisplayRewardSound_Parms, rewardData), Z_Construct_UScriptStruct_FRewardWrapperViewData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAlertsWidget_PlayDisplayRewardSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAlertsWidget_PlayDisplayRewardSound_Statics::NewProp_rewardData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAlertsWidget_PlayDisplayRewardSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAlertsWidget_PlayDisplayRewardSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAlertsWidget, nullptr, "PlayDisplayRewardSound", nullptr, nullptr, sizeof(CoreAlertsWidget_eventPlayDisplayRewardSound_Parms), Z_Construct_UFunction_UCoreAlertsWidget_PlayDisplayRewardSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_PlayDisplayRewardSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAlertsWidget_PlayDisplayRewardSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_PlayDisplayRewardSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAlertsWidget_PlayDisplayRewardSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAlertsWidget_PlayDisplayRewardSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAlertsWidget_RewardAlertSequenceCompleted_Statics
	{
		struct CoreAlertsWidget_eventRewardAlertSequenceCompleted_Parms
		{
			UUITweenInstance* tween;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tween;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreAlertsWidget_RewardAlertSequenceCompleted_Statics::NewProp_tween = { "tween", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAlertsWidget_eventRewardAlertSequenceCompleted_Parms, tween), Z_Construct_UClass_UUITweenInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAlertsWidget_RewardAlertSequenceCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAlertsWidget_RewardAlertSequenceCompleted_Statics::NewProp_tween,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAlertsWidget_RewardAlertSequenceCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAlertsWidget_RewardAlertSequenceCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAlertsWidget, nullptr, "RewardAlertSequenceCompleted", nullptr, nullptr, sizeof(CoreAlertsWidget_eventRewardAlertSequenceCompleted_Parms), Z_Construct_UFunction_UCoreAlertsWidget_RewardAlertSequenceCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_RewardAlertSequenceCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAlertsWidget_RewardAlertSequenceCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_RewardAlertSequenceCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAlertsWidget_RewardAlertSequenceCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAlertsWidget_RewardAlertSequenceCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAlertsWidget_SetRewardsDescription_Statics
	{
		struct CoreAlertsWidget_eventSetRewardsDescription_Parms
		{
			FString rewardsDescription;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rewardsDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_rewardsDescription;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAlertsWidget_SetRewardsDescription_Statics::NewProp_rewardsDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreAlertsWidget_SetRewardsDescription_Statics::NewProp_rewardsDescription = { "rewardsDescription", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAlertsWidget_eventSetRewardsDescription_Parms, rewardsDescription), METADATA_PARAMS(Z_Construct_UFunction_UCoreAlertsWidget_SetRewardsDescription_Statics::NewProp_rewardsDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_SetRewardsDescription_Statics::NewProp_rewardsDescription_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAlertsWidget_SetRewardsDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAlertsWidget_SetRewardsDescription_Statics::NewProp_rewardsDescription,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAlertsWidget_SetRewardsDescription_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAlertsWidget_SetRewardsDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAlertsWidget, nullptr, "SetRewardsDescription", nullptr, nullptr, sizeof(CoreAlertsWidget_eventSetRewardsDescription_Parms), Z_Construct_UFunction_UCoreAlertsWidget_SetRewardsDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_SetRewardsDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAlertsWidget_SetRewardsDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_SetRewardsDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAlertsWidget_SetRewardsDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAlertsWidget_SetRewardsDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAlertsWidget_ShowAlertRewards_Statics
	{
		struct CoreAlertsWidget_eventShowAlertRewards_Parms
		{
			FAlertsViewData alertsViewData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_alertsViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_alertsViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAlertsWidget_ShowAlertRewards_Statics::NewProp_alertsViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAlertsWidget_ShowAlertRewards_Statics::NewProp_alertsViewData = { "alertsViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAlertsWidget_eventShowAlertRewards_Parms, alertsViewData), Z_Construct_UScriptStruct_FAlertsViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreAlertsWidget_ShowAlertRewards_Statics::NewProp_alertsViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_ShowAlertRewards_Statics::NewProp_alertsViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAlertsWidget_ShowAlertRewards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAlertsWidget_ShowAlertRewards_Statics::NewProp_alertsViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAlertsWidget_ShowAlertRewards_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAlertsWidget_ShowAlertRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAlertsWidget, nullptr, "ShowAlertRewards", nullptr, nullptr, sizeof(CoreAlertsWidget_eventShowAlertRewards_Parms), Z_Construct_UFunction_UCoreAlertsWidget_ShowAlertRewards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_ShowAlertRewards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAlertsWidget_ShowAlertRewards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_ShowAlertRewards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAlertsWidget_ShowAlertRewards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAlertsWidget_ShowAlertRewards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardNameVisibility_Statics
	{
		struct CoreAlertsWidget_eventShowRewardNameVisibility_Parms
		{
			UUITweenInstance* tween;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tween;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardNameVisibility_Statics::NewProp_tween = { "tween", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAlertsWidget_eventShowRewardNameVisibility_Parms, tween), Z_Construct_UClass_UUITweenInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardNameVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardNameVisibility_Statics::NewProp_tween,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardNameVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardNameVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAlertsWidget, nullptr, "ShowRewardNameVisibility", nullptr, nullptr, sizeof(CoreAlertsWidget_eventShowRewardNameVisibility_Parms), Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardNameVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardNameVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardNameVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardNameVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardNameVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardNameVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardTooltip_Statics
	{
		struct CoreAlertsWidget_eventShowRewardTooltip_Parms
		{
			UCoreButtonWidget* rewardWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rewardWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rewardWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardTooltip_Statics::NewProp_rewardWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardTooltip_Statics::NewProp_rewardWidget = { "rewardWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAlertsWidget_eventShowRewardTooltip_Parms, rewardWidget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardTooltip_Statics::NewProp_rewardWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardTooltip_Statics::NewProp_rewardWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardTooltip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardTooltip_Statics::NewProp_rewardWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAlertsWidget, nullptr, "ShowRewardTooltip", nullptr, nullptr, sizeof(CoreAlertsWidget_eventShowRewardTooltip_Parms), Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreAlertsWidget_NoRegister()
	{
		return UCoreAlertsWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreAlertsWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RewardWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlertRewardContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AlertRewardContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardsDescriptionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardsDescriptionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventIMG_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventIMG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardName;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fadeInRewardDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__fadeInRewardDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fadeRewardDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__fadeRewardDelay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__fadeInRewardEasing_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fadeInRewardEasing_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__fadeInRewardEasing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sequenceDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sequenceDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sequenceFadeOutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sequenceFadeOutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__finalSequenceDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__finalSequenceDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__finalSequenceFadeOutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__finalSequenceFadeOutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rewardInitialScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rewardInitialScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rewardFinalScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rewardFinalScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rewardScalingDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__rewardScalingDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rewardScalingDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__rewardScalingDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rewardScalingIdleDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__rewardScalingIdleDuration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__rewardScalingEasing_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rewardScalingEasing_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__rewardScalingEasing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sequenceShiftDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sequenceShiftDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sequenceShiftDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sequenceShiftDelay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__sequenceShiftEasing_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sequenceShiftEasing_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__sequenceShiftEasing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rewardContainerShiftFinalPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rewardContainerShiftFinalPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreAlertsWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreAlertsWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreAlertsWidget_DisplayNextReward, "DisplayNextReward" }, // 2486959825
		{ &Z_Construct_UFunction_UCoreAlertsWidget_DisplayNextRewardSequence, "DisplayNextRewardSequence" }, // 1076598997
		{ &Z_Construct_UFunction_UCoreAlertsWidget_EndOfRewardDisplay, "EndOfRewardDisplay" }, // 3342656515
		{ &Z_Construct_UFunction_UCoreAlertsWidget_EndRewardDisplayRequested, "EndRewardDisplayRequested" }, // 1666755374
		{ &Z_Construct_UFunction_UCoreAlertsWidget_HideRewardTooltip, "HideRewardTooltip" }, // 2226059757
		{ &Z_Construct_UFunction_UCoreAlertsWidget_OnRewardItemsFadeOutCompleted, "OnRewardItemsFadeOutCompleted" }, // 3065997626
		{ &Z_Construct_UFunction_UCoreAlertsWidget_PlayDisappearRewardSound, "PlayDisappearRewardSound" }, // 3530655185
		{ &Z_Construct_UFunction_UCoreAlertsWidget_PlayDisplayRewardSound, "PlayDisplayRewardSound" }, // 2772558288
		{ &Z_Construct_UFunction_UCoreAlertsWidget_RewardAlertSequenceCompleted, "RewardAlertSequenceCompleted" }, // 1353853983
		{ &Z_Construct_UFunction_UCoreAlertsWidget_SetRewardsDescription, "SetRewardsDescription" }, // 132864643
		{ &Z_Construct_UFunction_UCoreAlertsWidget_ShowAlertRewards, "ShowAlertRewards" }, // 2903431586
		{ &Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardNameVisibility, "ShowRewardNameVisibility" }, // 2091595308
		{ &Z_Construct_UFunction_UCoreAlertsWidget_ShowRewardTooltip, "ShowRewardTooltip" }, // 3356017329
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAlertsWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreAlertsWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_RewardWidgetClass_MetaData[] = {
		{ "Category", "CoreAlertsWidget" },
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_RewardWidgetClass = { "RewardWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAlertsWidget, RewardWidgetClass), Z_Construct_UClass_UCoreRewardWrapperWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_RewardWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_RewardWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_AlertRewardContainer_MetaData[] = {
		{ "Category", "CoreAlertsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_AlertRewardContainer = { "AlertRewardContainer", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAlertsWidget, AlertRewardContainer), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_AlertRewardContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_AlertRewardContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_RewardsDescriptionText_MetaData[] = {
		{ "Category", "CoreAlertsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_RewardsDescriptionText = { "RewardsDescriptionText", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAlertsWidget, RewardsDescriptionText), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_RewardsDescriptionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_RewardsDescriptionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_EventIMG_MetaData[] = {
		{ "Category", "CoreAlertsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_EventIMG = { "EventIMG", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAlertsWidget, EventIMG), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_EventIMG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_EventIMG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_RewardName_MetaData[] = {
		{ "Category", "CoreAlertsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_RewardName = { "RewardName", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAlertsWidget, RewardName), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_RewardName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_RewardName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_HorizontalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "CoreAlertsWidget" },
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAlertsWidget, HorizontalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_HorizontalAlignment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_VerticalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "CoreAlertsWidget" },
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAlertsWidget, VerticalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_VerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__fadeInRewardDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreAlertsWidget" },
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__fadeInRewardDuration = { "_fadeInRewardDuration", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAlertsWidget, _fadeInRewardDuration), METADATA_PARAMS(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__fadeInRewardDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__fadeInRewardDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__fadeRewardDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreAlertsWidget" },
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__fadeRewardDelay = { "_fadeRewardDelay", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAlertsWidget, _fadeRewardDelay), METADATA_PARAMS(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__fadeRewardDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__fadeRewardDelay_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__fadeInRewardEasing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__fadeInRewardEasing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreAlertsWidget" },
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__fadeInRewardEasing = { "_fadeInRewardEasing", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAlertsWidget, _fadeInRewardEasing), Z_Construct_UEnum_UITween_EEasingType, METADATA_PARAMS(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__fadeInRewardEasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__fadeInRewardEasing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreAlertsWidget" },
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceDelay = { "_sequenceDelay", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAlertsWidget, _sequenceDelay), METADATA_PARAMS(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceFadeOutDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreAlertsWidget" },
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceFadeOutDuration = { "_sequenceFadeOutDuration", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAlertsWidget, _sequenceFadeOutDuration), METADATA_PARAMS(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceFadeOutDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceFadeOutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__finalSequenceDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreAlertsWidget" },
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__finalSequenceDelay = { "_finalSequenceDelay", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAlertsWidget, _finalSequenceDelay), METADATA_PARAMS(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__finalSequenceDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__finalSequenceDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__finalSequenceFadeOutDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreAlertsWidget" },
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__finalSequenceFadeOutDuration = { "_finalSequenceFadeOutDuration", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAlertsWidget, _finalSequenceFadeOutDuration), METADATA_PARAMS(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__finalSequenceFadeOutDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__finalSequenceFadeOutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardInitialScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreAlertsWidget" },
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardInitialScale = { "_rewardInitialScale", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAlertsWidget, _rewardInitialScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardInitialScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardInitialScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardFinalScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreAlertsWidget" },
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardFinalScale = { "_rewardFinalScale", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAlertsWidget, _rewardFinalScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardFinalScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardFinalScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardScalingDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreAlertsWidget" },
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardScalingDuration = { "_rewardScalingDuration", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAlertsWidget, _rewardScalingDuration), METADATA_PARAMS(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardScalingDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardScalingDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardScalingDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreAlertsWidget" },
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardScalingDelay = { "_rewardScalingDelay", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAlertsWidget, _rewardScalingDelay), METADATA_PARAMS(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardScalingDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardScalingDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardScalingIdleDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreAlertsWidget" },
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardScalingIdleDuration = { "_rewardScalingIdleDuration", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAlertsWidget, _rewardScalingIdleDuration), METADATA_PARAMS(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardScalingIdleDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardScalingIdleDuration_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardScalingEasing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardScalingEasing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreAlertsWidget" },
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardScalingEasing = { "_rewardScalingEasing", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAlertsWidget, _rewardScalingEasing), Z_Construct_UEnum_UITween_EEasingType, METADATA_PARAMS(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardScalingEasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardScalingEasing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceShiftDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreAlertsWidget" },
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceShiftDuration = { "_sequenceShiftDuration", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAlertsWidget, _sequenceShiftDuration), METADATA_PARAMS(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceShiftDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceShiftDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceShiftDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreAlertsWidget" },
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceShiftDelay = { "_sequenceShiftDelay", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAlertsWidget, _sequenceShiftDelay), METADATA_PARAMS(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceShiftDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceShiftDelay_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceShiftEasing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceShiftEasing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreAlertsWidget" },
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceShiftEasing = { "_sequenceShiftEasing", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAlertsWidget, _sequenceShiftEasing), Z_Construct_UEnum_UITween_EEasingType, METADATA_PARAMS(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceShiftEasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceShiftEasing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardContainerShiftFinalPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreAlertsWidget" },
		{ "ModuleRelativePath", "Public/CoreAlertsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardContainerShiftFinalPosition = { "_rewardContainerShiftFinalPosition", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAlertsWidget, _rewardContainerShiftFinalPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardContainerShiftFinalPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardContainerShiftFinalPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreAlertsWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_RewardWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_AlertRewardContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_RewardsDescriptionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_EventIMG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_RewardName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_HorizontalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_HorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_VerticalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp_VerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__fadeInRewardDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__fadeRewardDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__fadeInRewardEasing_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__fadeInRewardEasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceFadeOutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__finalSequenceDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__finalSequenceFadeOutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardInitialScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardFinalScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardScalingDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardScalingDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardScalingIdleDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardScalingEasing_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardScalingEasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceShiftDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceShiftDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceShiftEasing_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__sequenceShiftEasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAlertsWidget_Statics::NewProp__rewardContainerShiftFinalPosition,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreAlertsWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAlertsViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreAlertsWidget, IAlertsViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreAlertsWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreAlertsWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreAlertsWidget_Statics::ClassParams = {
		&UCoreAlertsWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreAlertsWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAlertsWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreAlertsWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAlertsWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreAlertsWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreAlertsWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreAlertsWidget, 2258238812);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreAlertsWidget>()
	{
		return UCoreAlertsWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreAlertsWidget(Z_Construct_UClass_UCoreAlertsWidget, &UCoreAlertsWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreAlertsWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreAlertsWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
