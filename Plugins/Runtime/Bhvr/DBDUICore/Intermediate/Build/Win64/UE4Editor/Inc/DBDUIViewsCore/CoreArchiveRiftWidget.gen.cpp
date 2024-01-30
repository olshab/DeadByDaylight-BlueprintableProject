// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreArchiveRiftWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreArchiveRiftWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveRiftWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveRiftWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContentWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	UITWEEN_API UClass* Z_Construct_UClass_UUITweenInstance_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_ETierType();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchivesRiftGenericViewData();
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_ETooltipHorizontalAlignment();
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveRiftOnRewardItemClicked__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveRiftOnRewardCurrencyClicked__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveRiftOnPurchasePremiumPassClicked__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveRiftOnPurchaseTierClicked__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveRiftOnOutfitClicked__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveRiftOnBonusTierTooltipShown__DelegateSignature();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData();
	UITWEEN_API UEnum* Z_Construct_UEnum_UITween_EEasingType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveRiftTierItem_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreToggleButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreImagePreviewAreaWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveRiftViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreArchiveRiftWidget::execDisplayPage)
	{
		P_GET_OBJECT(UUITweenInstance,Z_Param_tween);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayPage(Z_Param_tween);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveRiftWidget::execOnCurrentPageAnimationCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCurrentPageAnimationCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveRiftWidget::execOnNextButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNextButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveRiftWidget::execOnOutfitButtonClicked)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_button);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOutfitButtonClicked(Z_Param_button);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveRiftWidget::execOnOutfitButtonHovered)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_button);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOutfitButtonHovered(Z_Param_button);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveRiftWidget::execOnOutfitButtonUnhovered)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_button);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOutfitButtonUnhovered(Z_Param_button);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveRiftWidget::execOnPreviousButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPreviousButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveRiftWidget::execOnRewardAnimationCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRewardAnimationCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveRiftWidget::execOnRewardItemClicked)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_tier);
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_button);
		P_GET_UBOOL(Z_Param_isPremium);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRewardItemClicked(Z_Param_tier,Z_Param_button,Z_Param_isPremium,Z_Param_index);
		P_NATIVE_END;
	}
	static FName NAME_UCoreArchiveRiftWidget_PlayPremiumTrackUnlockAnimation = FName(TEXT("PlayPremiumTrackUnlockAnimation"));
	void UCoreArchiveRiftWidget::PlayPremiumTrackUnlockAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveRiftWidget_PlayPremiumTrackUnlockAnimation),NULL);
	}
	static FName NAME_UCoreArchiveRiftWidget_SetPaginationVisuals = FName(TEXT("SetPaginationVisuals"));
	void UCoreArchiveRiftWidget::SetPaginationVisuals(bool showBonusTierHighlight, FText const& bonusTierTooltipText)
	{
		CoreArchiveRiftWidget_eventSetPaginationVisuals_Parms Parms;
		Parms.showBonusTierHighlight=showBonusTierHighlight ? true : false;
		Parms.bonusTierTooltipText=bonusTierTooltipText;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveRiftWidget_SetPaginationVisuals),&Parms);
	}
	static FName NAME_UCoreArchiveRiftWidget_SetTierVisuals = FName(TEXT("SetTierVisuals"));
	void UCoreArchiveRiftWidget::SetTierVisuals(ETierType tierType)
	{
		CoreArchiveRiftWidget_eventSetTierVisuals_Parms Parms;
		Parms.tierType=tierType;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveRiftWidget_SetTierVisuals),&Parms);
	}
	static FName NAME_UCoreArchiveRiftWidget_SetVisualData = FName(TEXT("SetVisualData"));
	void UCoreArchiveRiftWidget::SetVisualData(FArchivesRiftGenericViewData const& data)
	{
		CoreArchiveRiftWidget_eventSetVisualData_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveRiftWidget_SetVisualData),&Parms);
	}
	void UCoreArchiveRiftWidget::StaticRegisterNativesUCoreArchiveRiftWidget()
	{
		UClass* Class = UCoreArchiveRiftWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayPage", &UCoreArchiveRiftWidget::execDisplayPage },
			{ "OnCurrentPageAnimationCompleted", &UCoreArchiveRiftWidget::execOnCurrentPageAnimationCompleted },
			{ "OnNextButtonClicked", &UCoreArchiveRiftWidget::execOnNextButtonClicked },
			{ "OnOutfitButtonClicked", &UCoreArchiveRiftWidget::execOnOutfitButtonClicked },
			{ "OnOutfitButtonHovered", &UCoreArchiveRiftWidget::execOnOutfitButtonHovered },
			{ "OnOutfitButtonUnhovered", &UCoreArchiveRiftWidget::execOnOutfitButtonUnhovered },
			{ "OnPreviousButtonClicked", &UCoreArchiveRiftWidget::execOnPreviousButtonClicked },
			{ "OnRewardAnimationCompleted", &UCoreArchiveRiftWidget::execOnRewardAnimationCompleted },
			{ "OnRewardItemClicked", &UCoreArchiveRiftWidget::execOnRewardItemClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreArchiveRiftWidget_DisplayPage_Statics
	{
		struct CoreArchiveRiftWidget_eventDisplayPage_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveRiftWidget_DisplayPage_Statics::NewProp_tween = { "tween", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveRiftWidget_eventDisplayPage_Parms, tween), Z_Construct_UClass_UUITweenInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveRiftWidget_DisplayPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveRiftWidget_DisplayPage_Statics::NewProp_tween,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftWidget_DisplayPage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveRiftWidget_DisplayPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveRiftWidget, nullptr, "DisplayPage", nullptr, nullptr, sizeof(CoreArchiveRiftWidget_eventDisplayPage_Parms), Z_Construct_UFunction_UCoreArchiveRiftWidget_DisplayPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_DisplayPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftWidget_DisplayPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_DisplayPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveRiftWidget_DisplayPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveRiftWidget_DisplayPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveRiftWidget_OnCurrentPageAnimationCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftWidget_OnCurrentPageAnimationCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveRiftWidget_OnCurrentPageAnimationCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveRiftWidget, nullptr, "OnCurrentPageAnimationCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnCurrentPageAnimationCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnCurrentPageAnimationCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveRiftWidget_OnCurrentPageAnimationCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveRiftWidget_OnCurrentPageAnimationCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveRiftWidget_OnNextButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftWidget_OnNextButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveRiftWidget_OnNextButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveRiftWidget, nullptr, "OnNextButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnNextButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnNextButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveRiftWidget_OnNextButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveRiftWidget_OnNextButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonClicked_Statics
	{
		struct CoreArchiveRiftWidget_eventOnOutfitButtonClicked_Parms
		{
			UCoreButtonWidget* button;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_button;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonClicked_Statics::NewProp_button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonClicked_Statics::NewProp_button = { "button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveRiftWidget_eventOnOutfitButtonClicked_Parms, button), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonClicked_Statics::NewProp_button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonClicked_Statics::NewProp_button_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonClicked_Statics::NewProp_button,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveRiftWidget, nullptr, "OnOutfitButtonClicked", nullptr, nullptr, sizeof(CoreArchiveRiftWidget_eventOnOutfitButtonClicked_Parms), Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonHovered_Statics
	{
		struct CoreArchiveRiftWidget_eventOnOutfitButtonHovered_Parms
		{
			UCoreButtonWidget* button;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_button;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonHovered_Statics::NewProp_button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonHovered_Statics::NewProp_button = { "button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveRiftWidget_eventOnOutfitButtonHovered_Parms, button), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonHovered_Statics::NewProp_button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonHovered_Statics::NewProp_button_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonHovered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonHovered_Statics::NewProp_button,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveRiftWidget, nullptr, "OnOutfitButtonHovered", nullptr, nullptr, sizeof(CoreArchiveRiftWidget_eventOnOutfitButtonHovered_Parms), Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonHovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonHovered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonUnhovered_Statics
	{
		struct CoreArchiveRiftWidget_eventOnOutfitButtonUnhovered_Parms
		{
			UCoreButtonWidget* button;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_button;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonUnhovered_Statics::NewProp_button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonUnhovered_Statics::NewProp_button = { "button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveRiftWidget_eventOnOutfitButtonUnhovered_Parms, button), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonUnhovered_Statics::NewProp_button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonUnhovered_Statics::NewProp_button_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonUnhovered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonUnhovered_Statics::NewProp_button,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonUnhovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonUnhovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveRiftWidget, nullptr, "OnOutfitButtonUnhovered", nullptr, nullptr, sizeof(CoreArchiveRiftWidget_eventOnOutfitButtonUnhovered_Parms), Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonUnhovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonUnhovered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonUnhovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonUnhovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonUnhovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonUnhovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveRiftWidget_OnPreviousButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftWidget_OnPreviousButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveRiftWidget_OnPreviousButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveRiftWidget, nullptr, "OnPreviousButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnPreviousButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnPreviousButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveRiftWidget_OnPreviousButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveRiftWidget_OnPreviousButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardAnimationCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardAnimationCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardAnimationCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveRiftWidget, nullptr, "OnRewardAnimationCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardAnimationCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardAnimationCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardAnimationCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardAnimationCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardItemClicked_Statics
	{
		struct CoreArchiveRiftWidget_eventOnRewardItemClicked_Parms
		{
			int32 tier;
			UCoreButtonWidget* button;
			bool isPremium;
			int32 index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_tier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_button;
		static void NewProp_isPremium_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPremium;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardItemClicked_Statics::NewProp_tier = { "tier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveRiftWidget_eventOnRewardItemClicked_Parms, tier), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardItemClicked_Statics::NewProp_button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardItemClicked_Statics::NewProp_button = { "button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveRiftWidget_eventOnRewardItemClicked_Parms, button), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardItemClicked_Statics::NewProp_button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardItemClicked_Statics::NewProp_button_MetaData)) };
	void Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardItemClicked_Statics::NewProp_isPremium_SetBit(void* Obj)
	{
		((CoreArchiveRiftWidget_eventOnRewardItemClicked_Parms*)Obj)->isPremium = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardItemClicked_Statics::NewProp_isPremium = { "isPremium", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveRiftWidget_eventOnRewardItemClicked_Parms), &Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardItemClicked_Statics::NewProp_isPremium_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardItemClicked_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveRiftWidget_eventOnRewardItemClicked_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardItemClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardItemClicked_Statics::NewProp_tier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardItemClicked_Statics::NewProp_button,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardItemClicked_Statics::NewProp_isPremium,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardItemClicked_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardItemClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardItemClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveRiftWidget, nullptr, "OnRewardItemClicked", nullptr, nullptr, sizeof(CoreArchiveRiftWidget_eventOnRewardItemClicked_Parms), Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardItemClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardItemClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardItemClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardItemClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardItemClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardItemClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveRiftWidget_PlayPremiumTrackUnlockAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftWidget_PlayPremiumTrackUnlockAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveRiftWidget_PlayPremiumTrackUnlockAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveRiftWidget, nullptr, "PlayPremiumTrackUnlockAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftWidget_PlayPremiumTrackUnlockAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_PlayPremiumTrackUnlockAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveRiftWidget_PlayPremiumTrackUnlockAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveRiftWidget_PlayPremiumTrackUnlockAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveRiftWidget_SetPaginationVisuals_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_showBonusTierHighlight_MetaData[];
#endif
		static void NewProp_showBonusTierHighlight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_showBonusTierHighlight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bonusTierTooltipText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bonusTierTooltipText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftWidget_SetPaginationVisuals_Statics::NewProp_showBonusTierHighlight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCoreArchiveRiftWidget_SetPaginationVisuals_Statics::NewProp_showBonusTierHighlight_SetBit(void* Obj)
	{
		((CoreArchiveRiftWidget_eventSetPaginationVisuals_Parms*)Obj)->showBonusTierHighlight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveRiftWidget_SetPaginationVisuals_Statics::NewProp_showBonusTierHighlight = { "showBonusTierHighlight", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveRiftWidget_eventSetPaginationVisuals_Parms), &Z_Construct_UFunction_UCoreArchiveRiftWidget_SetPaginationVisuals_Statics::NewProp_showBonusTierHighlight_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftWidget_SetPaginationVisuals_Statics::NewProp_showBonusTierHighlight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_SetPaginationVisuals_Statics::NewProp_showBonusTierHighlight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftWidget_SetPaginationVisuals_Statics::NewProp_bonusTierTooltipText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveRiftWidget_SetPaginationVisuals_Statics::NewProp_bonusTierTooltipText = { "bonusTierTooltipText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveRiftWidget_eventSetPaginationVisuals_Parms, bonusTierTooltipText), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftWidget_SetPaginationVisuals_Statics::NewProp_bonusTierTooltipText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_SetPaginationVisuals_Statics::NewProp_bonusTierTooltipText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveRiftWidget_SetPaginationVisuals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveRiftWidget_SetPaginationVisuals_Statics::NewProp_showBonusTierHighlight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveRiftWidget_SetPaginationVisuals_Statics::NewProp_bonusTierTooltipText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftWidget_SetPaginationVisuals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveRiftWidget_SetPaginationVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveRiftWidget, nullptr, "SetPaginationVisuals", nullptr, nullptr, sizeof(CoreArchiveRiftWidget_eventSetPaginationVisuals_Parms), Z_Construct_UFunction_UCoreArchiveRiftWidget_SetPaginationVisuals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_SetPaginationVisuals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftWidget_SetPaginationVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_SetPaginationVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveRiftWidget_SetPaginationVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveRiftWidget_SetPaginationVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveRiftWidget_SetTierVisuals_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tierType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tierType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreArchiveRiftWidget_SetTierVisuals_Statics::NewProp_tierType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreArchiveRiftWidget_SetTierVisuals_Statics::NewProp_tierType = { "tierType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveRiftWidget_eventSetTierVisuals_Parms, tierType), Z_Construct_UEnum_DBDUIViewInterfaces_ETierType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveRiftWidget_SetTierVisuals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveRiftWidget_SetTierVisuals_Statics::NewProp_tierType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveRiftWidget_SetTierVisuals_Statics::NewProp_tierType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftWidget_SetTierVisuals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveRiftWidget_SetTierVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveRiftWidget, nullptr, "SetTierVisuals", nullptr, nullptr, sizeof(CoreArchiveRiftWidget_eventSetTierVisuals_Parms), Z_Construct_UFunction_UCoreArchiveRiftWidget_SetTierVisuals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_SetTierVisuals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftWidget_SetTierVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_SetTierVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveRiftWidget_SetTierVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveRiftWidget_SetTierVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveRiftWidget_SetVisualData_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftWidget_SetVisualData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreArchiveRiftWidget_SetVisualData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveRiftWidget_eventSetVisualData_Parms, data), Z_Construct_UScriptStruct_FArchivesRiftGenericViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftWidget_SetVisualData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_SetVisualData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveRiftWidget_SetVisualData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveRiftWidget_SetVisualData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftWidget_SetVisualData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveRiftWidget_SetVisualData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveRiftWidget, nullptr, "SetVisualData", nullptr, nullptr, sizeof(CoreArchiveRiftWidget_eventSetVisualData_Parms), Z_Construct_UFunction_UCoreArchiveRiftWidget_SetVisualData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_SetVisualData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftWidget_SetVisualData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftWidget_SetVisualData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveRiftWidget_SetVisualData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveRiftWidget_SetVisualData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreArchiveRiftWidget_NoRegister()
	{
		return UCoreArchiveRiftWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreArchiveRiftWidget_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rewardItemClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__rewardItemClickedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rewardCurrencyClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__rewardCurrencyClickedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__purchasePremiumPassClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__purchasePremiumPassClickedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__purchaseTierClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__purchaseTierClickedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outfitClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__outfitClickedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bonusTierShownDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__bonusTierShownDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__genericData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__genericData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__riftTiersData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__riftTiersData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__riftTiersData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentPage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__currentPage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxTierItemsPerPage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__maxTierItemsPerPage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animationItemDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__animationItemDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animationPremiumTrackDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__animationPremiumTrackDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pageSwitchFadeDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__pageSwitchFadeDuration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__pageSwitchFadeTweenEasing_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pageSwitchFadeTweenEasing_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__pageSwitchFadeTweenEasing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__archiveRiftTierItemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__archiveRiftTierItemClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__freePurchaseButtonText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__freePurchaseButtonText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__freePurchaseDescriptionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__freePurchaseDescriptionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__premiumPurchaseButtonText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__premiumPurchaseButtonText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__premiumPurchaseDescriptionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__premiumPurchaseDescriptionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxTierText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__maxTierText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentProgressInfoText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__currentProgressInfoText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__riftFragmentTooltipViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__riftFragmentTooltipViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutfitButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutfitButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PurchaseButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TierInfoDescriptionRTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TierInfoDescriptionRTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TierInfoTopTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TierInfoTopTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TierInfoBottomTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TierInfoBottomTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FreeTrackLabelTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FreeTrackLabelTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PremiumTrackLabelTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PremiumTrackLabelTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaginationTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PaginationTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaginationPreviousButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PaginationPreviousButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaginationNextButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PaginationNextButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImagePreviewArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImagePreviewArea;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tierItemPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tierItemPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__tierItemPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__contentVisbilityTween_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__contentVisbilityTween;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pageSwitchVisbilityTween_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pageSwitchVisbilityTween;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentSelectedReward_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currentSelectedReward;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreTabContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreArchiveRiftWidget_DisplayPage, "DisplayPage" }, // 2011495436
		{ &Z_Construct_UFunction_UCoreArchiveRiftWidget_OnCurrentPageAnimationCompleted, "OnCurrentPageAnimationCompleted" }, // 4279218104
		{ &Z_Construct_UFunction_UCoreArchiveRiftWidget_OnNextButtonClicked, "OnNextButtonClicked" }, // 848768675
		{ &Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonClicked, "OnOutfitButtonClicked" }, // 2912735516
		{ &Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonHovered, "OnOutfitButtonHovered" }, // 1848609257
		{ &Z_Construct_UFunction_UCoreArchiveRiftWidget_OnOutfitButtonUnhovered, "OnOutfitButtonUnhovered" }, // 1312714947
		{ &Z_Construct_UFunction_UCoreArchiveRiftWidget_OnPreviousButtonClicked, "OnPreviousButtonClicked" }, // 3114254252
		{ &Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardAnimationCompleted, "OnRewardAnimationCompleted" }, // 178432692
		{ &Z_Construct_UFunction_UCoreArchiveRiftWidget_OnRewardItemClicked, "OnRewardItemClicked" }, // 1066188072
		{ &Z_Construct_UFunction_UCoreArchiveRiftWidget_PlayPremiumTrackUnlockAnimation, "PlayPremiumTrackUnlockAnimation" }, // 2386892707
		{ &Z_Construct_UFunction_UCoreArchiveRiftWidget_SetPaginationVisuals, "SetPaginationVisuals" }, // 107340214
		{ &Z_Construct_UFunction_UCoreArchiveRiftWidget_SetTierVisuals, "SetTierVisuals" }, // 720313007
		{ &Z_Construct_UFunction_UCoreArchiveRiftWidget_SetVisualData, "SetVisualData" }, // 2360054354
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreArchiveRiftWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_HorizontalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "CoreArchiveRiftWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, HorizontalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_HorizontalAlignment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_VerticalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "CoreArchiveRiftWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, VerticalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_VerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__rewardItemClickedDelegate_MetaData[] = {
		{ "Category", "CoreArchiveRiftWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__rewardItemClickedDelegate = { "_rewardItemClickedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, _rewardItemClickedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveRiftOnRewardItemClicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__rewardItemClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__rewardItemClickedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__rewardCurrencyClickedDelegate_MetaData[] = {
		{ "Category", "CoreArchiveRiftWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__rewardCurrencyClickedDelegate = { "_rewardCurrencyClickedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, _rewardCurrencyClickedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveRiftOnRewardCurrencyClicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__rewardCurrencyClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__rewardCurrencyClickedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__purchasePremiumPassClickedDelegate_MetaData[] = {
		{ "Category", "CoreArchiveRiftWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__purchasePremiumPassClickedDelegate = { "_purchasePremiumPassClickedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, _purchasePremiumPassClickedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveRiftOnPurchasePremiumPassClicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__purchasePremiumPassClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__purchasePremiumPassClickedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__purchaseTierClickedDelegate_MetaData[] = {
		{ "Category", "CoreArchiveRiftWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__purchaseTierClickedDelegate = { "_purchaseTierClickedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, _purchaseTierClickedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveRiftOnPurchaseTierClicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__purchaseTierClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__purchaseTierClickedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__outfitClickedDelegate_MetaData[] = {
		{ "Category", "CoreArchiveRiftWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__outfitClickedDelegate = { "_outfitClickedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, _outfitClickedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveRiftOnOutfitClicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__outfitClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__outfitClickedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__bonusTierShownDelegate_MetaData[] = {
		{ "Category", "CoreArchiveRiftWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__bonusTierShownDelegate = { "_bonusTierShownDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, _bonusTierShownDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveRiftOnBonusTierTooltipShown__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__bonusTierShownDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__bonusTierShownDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__genericData_MetaData[] = {
		{ "Category", "CoreArchiveRiftWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__genericData = { "_genericData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, _genericData), Z_Construct_UScriptStruct_FArchivesRiftGenericViewData, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__genericData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__genericData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__riftTiersData_Inner = { "_riftTiersData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__riftTiersData_MetaData[] = {
		{ "Category", "CoreArchiveRiftWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__riftTiersData = { "_riftTiersData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, _riftTiersData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__riftTiersData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__riftTiersData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__currentPage_MetaData[] = {
		{ "Category", "CoreArchiveRiftWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__currentPage = { "_currentPage", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, _currentPage), METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__currentPage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__currentPage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__maxTierItemsPerPage_MetaData[] = {
		{ "Category", "CoreArchiveRiftWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__maxTierItemsPerPage = { "_maxTierItemsPerPage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, _maxTierItemsPerPage), METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__maxTierItemsPerPage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__maxTierItemsPerPage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__animationItemDelay_MetaData[] = {
		{ "Category", "CoreArchiveRiftWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__animationItemDelay = { "_animationItemDelay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, _animationItemDelay), METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__animationItemDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__animationItemDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__animationPremiumTrackDelay_MetaData[] = {
		{ "Category", "CoreArchiveRiftWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__animationPremiumTrackDelay = { "_animationPremiumTrackDelay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, _animationPremiumTrackDelay), METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__animationPremiumTrackDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__animationPremiumTrackDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__pageSwitchFadeDuration_MetaData[] = {
		{ "Category", "CoreArchiveRiftWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__pageSwitchFadeDuration = { "_pageSwitchFadeDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, _pageSwitchFadeDuration), METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__pageSwitchFadeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__pageSwitchFadeDuration_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__pageSwitchFadeTweenEasing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__pageSwitchFadeTweenEasing_MetaData[] = {
		{ "Category", "CoreArchiveRiftWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__pageSwitchFadeTweenEasing = { "_pageSwitchFadeTweenEasing", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, _pageSwitchFadeTweenEasing), Z_Construct_UEnum_UITween_EEasingType, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__pageSwitchFadeTweenEasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__pageSwitchFadeTweenEasing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__archiveRiftTierItemClass_MetaData[] = {
		{ "Category", "CoreArchiveRiftWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__archiveRiftTierItemClass = { "_archiveRiftTierItemClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, _archiveRiftTierItemClass), Z_Construct_UClass_UCoreArchiveRiftTierItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__archiveRiftTierItemClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__archiveRiftTierItemClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__freePurchaseButtonText_MetaData[] = {
		{ "Category", "CoreArchiveRiftWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__freePurchaseButtonText = { "_freePurchaseButtonText", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, _freePurchaseButtonText), METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__freePurchaseButtonText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__freePurchaseButtonText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__freePurchaseDescriptionText_MetaData[] = {
		{ "Category", "CoreArchiveRiftWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__freePurchaseDescriptionText = { "_freePurchaseDescriptionText", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, _freePurchaseDescriptionText), METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__freePurchaseDescriptionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__freePurchaseDescriptionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__premiumPurchaseButtonText_MetaData[] = {
		{ "Category", "CoreArchiveRiftWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__premiumPurchaseButtonText = { "_premiumPurchaseButtonText", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, _premiumPurchaseButtonText), METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__premiumPurchaseButtonText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__premiumPurchaseButtonText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__premiumPurchaseDescriptionText_MetaData[] = {
		{ "Category", "CoreArchiveRiftWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__premiumPurchaseDescriptionText = { "_premiumPurchaseDescriptionText", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, _premiumPurchaseDescriptionText), METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__premiumPurchaseDescriptionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__premiumPurchaseDescriptionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__maxTierText_MetaData[] = {
		{ "Category", "CoreArchiveRiftWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__maxTierText = { "_maxTierText", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, _maxTierText), METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__maxTierText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__maxTierText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__currentProgressInfoText_MetaData[] = {
		{ "Category", "CoreArchiveRiftWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__currentProgressInfoText = { "_currentProgressInfoText", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, _currentProgressInfoText), METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__currentProgressInfoText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__currentProgressInfoText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__riftFragmentTooltipViewData_MetaData[] = {
		{ "Category", "CoreArchiveRiftWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__riftFragmentTooltipViewData = { "_riftFragmentTooltipViewData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, _riftFragmentTooltipViewData), Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__riftFragmentTooltipViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__riftFragmentTooltipViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_OutfitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveRiftWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_OutfitButton = { "OutfitButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, OutfitButton), Z_Construct_UClass_UCoreToggleButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_OutfitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_OutfitButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_PurchaseButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveRiftWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_PurchaseButton = { "PurchaseButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, PurchaseButton), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_PurchaseButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_PurchaseButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_RewardGrid_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveRiftWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_RewardGrid = { "RewardGrid", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, RewardGrid), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_RewardGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_RewardGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_TierInfoDescriptionRTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveRiftWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_TierInfoDescriptionRTB = { "TierInfoDescriptionRTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, TierInfoDescriptionRTB), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_TierInfoDescriptionRTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_TierInfoDescriptionRTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_TierInfoTopTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveRiftWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_TierInfoTopTB = { "TierInfoTopTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, TierInfoTopTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_TierInfoTopTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_TierInfoTopTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_TierInfoBottomTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveRiftWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_TierInfoBottomTB = { "TierInfoBottomTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, TierInfoBottomTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_TierInfoBottomTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_TierInfoBottomTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_FreeTrackLabelTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveRiftWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_FreeTrackLabelTB = { "FreeTrackLabelTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, FreeTrackLabelTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_FreeTrackLabelTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_FreeTrackLabelTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_PremiumTrackLabelTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveRiftWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_PremiumTrackLabelTB = { "PremiumTrackLabelTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, PremiumTrackLabelTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_PremiumTrackLabelTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_PremiumTrackLabelTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_PaginationTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveRiftWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_PaginationTB = { "PaginationTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, PaginationTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_PaginationTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_PaginationTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_PaginationPreviousButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveRiftWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_PaginationPreviousButton = { "PaginationPreviousButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, PaginationPreviousButton), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_PaginationPreviousButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_PaginationPreviousButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_PaginationNextButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveRiftWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_PaginationNextButton = { "PaginationNextButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, PaginationNextButton), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_PaginationNextButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_PaginationNextButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_ImagePreviewArea_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveRiftWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_ImagePreviewArea = { "ImagePreviewArea", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, ImagePreviewArea), Z_Construct_UClass_UCoreImagePreviewAreaWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_ImagePreviewArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_ImagePreviewArea_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__tierItemPool_Inner = { "_tierItemPool", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreArchiveRiftTierItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__tierItemPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreArchiveRiftWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__tierItemPool = { "_tierItemPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, _tierItemPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__tierItemPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__tierItemPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__contentVisbilityTween_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreArchiveRiftWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__contentVisbilityTween = { "_contentVisbilityTween", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, _contentVisbilityTween), Z_Construct_UClass_UUITweenInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__contentVisbilityTween_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__contentVisbilityTween_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__pageSwitchVisbilityTween_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreArchiveRiftWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__pageSwitchVisbilityTween = { "_pageSwitchVisbilityTween", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, _pageSwitchVisbilityTween), Z_Construct_UClass_UUITweenInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__pageSwitchVisbilityTween_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__pageSwitchVisbilityTween_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__currentSelectedReward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreArchiveRiftWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__currentSelectedReward = { "_currentSelectedReward", nullptr, (EPropertyFlags)0x004000000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftWidget, _currentSelectedReward), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__currentSelectedReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__currentSelectedReward_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_HorizontalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_HorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_VerticalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_VerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__rewardItemClickedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__rewardCurrencyClickedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__purchasePremiumPassClickedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__purchaseTierClickedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__outfitClickedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__bonusTierShownDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__genericData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__riftTiersData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__riftTiersData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__currentPage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__maxTierItemsPerPage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__animationItemDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__animationPremiumTrackDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__pageSwitchFadeDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__pageSwitchFadeTweenEasing_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__pageSwitchFadeTweenEasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__archiveRiftTierItemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__freePurchaseButtonText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__freePurchaseDescriptionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__premiumPurchaseButtonText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__premiumPurchaseDescriptionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__maxTierText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__currentProgressInfoText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__riftFragmentTooltipViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_OutfitButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_PurchaseButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_RewardGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_TierInfoDescriptionRTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_TierInfoTopTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_TierInfoBottomTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_FreeTrackLabelTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_PremiumTrackLabelTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_PaginationTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_PaginationPreviousButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_PaginationNextButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp_ImagePreviewArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__tierItemPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__tierItemPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__contentVisbilityTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__pageSwitchVisbilityTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::NewProp__currentSelectedReward,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UArchiveRiftViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreArchiveRiftWidget, IArchiveRiftViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreArchiveRiftWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::ClassParams = {
		&UCoreArchiveRiftWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreArchiveRiftWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreArchiveRiftWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreArchiveRiftWidget, 563584784);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreArchiveRiftWidget>()
	{
		return UCoreArchiveRiftWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreArchiveRiftWidget(Z_Construct_UClass_UCoreArchiveRiftWidget, &UCoreArchiveRiftWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreArchiveRiftWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreArchiveRiftWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
