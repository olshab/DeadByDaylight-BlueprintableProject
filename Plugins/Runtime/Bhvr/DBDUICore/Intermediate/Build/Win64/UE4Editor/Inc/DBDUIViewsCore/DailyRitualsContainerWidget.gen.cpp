// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/DailyRitualsContainerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDailyRitualsContainerWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDailyRitualsContainerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDailyRitualsContainerWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDailyRitualTileWidget_NoRegister();
	UITWEEN_API UClass* Z_Construct_UClass_UUITweenInstance_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FDailyRitualViewData();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ClaimedRitualDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_RemovedDailyRitualDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_OnOutOfDailyRitualsDelegate__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDailyRitualsContainerWidget::execOnDailyRitualClaimButtonClicked)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_dailyRitualKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDailyRitualClaimButtonClicked(Z_Param_dailyRitualKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDailyRitualsContainerWidget::execOnDailyRitualRemoveButtonClicked)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_dailyRitualKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDailyRitualRemoveButtonClicked(Z_Param_dailyRitualKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDailyRitualsContainerWidget::execOnDailyRitualTileFadeOutComplete)
	{
		P_GET_OBJECT(UDailyRitualTileWidget,Z_Param_dailyRitualTile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDailyRitualTileFadeOutComplete(Z_Param_dailyRitualTile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDailyRitualsContainerWidget::execOnDelayUntilFadeInSequenceComplete)
	{
		P_GET_OBJECT(UUITweenInstance,Z_Param_delayUntilFadeInSequenceTween);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDelayUntilFadeInSequenceComplete(Z_Param_delayUntilFadeInSequenceTween);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDailyRitualsContainerWidget::execOnRecentlyAssignedDailyRitualFadeInComplete)
	{
		P_GET_OBJECT(UDailyRitualTileWidget,Z_Param_dailyRitualTile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRecentlyAssignedDailyRitualFadeInComplete(Z_Param_dailyRitualTile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDailyRitualsContainerWidget::execSetData)
	{
		P_GET_TARRAY(FDailyRitualViewData,Z_Param_dailyRitualsData);
		P_GET_UBOOL(Z_Param_isAfterTrial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_dailyRitualsData,Z_Param_isAfterTrial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDailyRitualsContainerWidget::execStartAnim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAnim();
		P_NATIVE_END;
	}
	void UDailyRitualsContainerWidget::StaticRegisterNativesUDailyRitualsContainerWidget()
	{
		UClass* Class = UDailyRitualsContainerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDailyRitualClaimButtonClicked", &UDailyRitualsContainerWidget::execOnDailyRitualClaimButtonClicked },
			{ "OnDailyRitualRemoveButtonClicked", &UDailyRitualsContainerWidget::execOnDailyRitualRemoveButtonClicked },
			{ "OnDailyRitualTileFadeOutComplete", &UDailyRitualsContainerWidget::execOnDailyRitualTileFadeOutComplete },
			{ "OnDelayUntilFadeInSequenceComplete", &UDailyRitualsContainerWidget::execOnDelayUntilFadeInSequenceComplete },
			{ "OnRecentlyAssignedDailyRitualFadeInComplete", &UDailyRitualsContainerWidget::execOnRecentlyAssignedDailyRitualFadeInComplete },
			{ "SetData", &UDailyRitualsContainerWidget::execSetData },
			{ "StartAnim", &UDailyRitualsContainerWidget::execStartAnim },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualClaimButtonClicked_Statics
	{
		struct DailyRitualsContainerWidget_eventOnDailyRitualClaimButtonClicked_Parms
		{
			FString dailyRitualKey;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dailyRitualKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_dailyRitualKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualClaimButtonClicked_Statics::NewProp_dailyRitualKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualClaimButtonClicked_Statics::NewProp_dailyRitualKey = { "dailyRitualKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DailyRitualsContainerWidget_eventOnDailyRitualClaimButtonClicked_Parms, dailyRitualKey), METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualClaimButtonClicked_Statics::NewProp_dailyRitualKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualClaimButtonClicked_Statics::NewProp_dailyRitualKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualClaimButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualClaimButtonClicked_Statics::NewProp_dailyRitualKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualClaimButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualClaimButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualsContainerWidget, nullptr, "OnDailyRitualClaimButtonClicked", nullptr, nullptr, sizeof(DailyRitualsContainerWidget_eventOnDailyRitualClaimButtonClicked_Parms), Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualClaimButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualClaimButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualClaimButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualClaimButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualClaimButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualClaimButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualRemoveButtonClicked_Statics
	{
		struct DailyRitualsContainerWidget_eventOnDailyRitualRemoveButtonClicked_Parms
		{
			FString dailyRitualKey;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dailyRitualKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_dailyRitualKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualRemoveButtonClicked_Statics::NewProp_dailyRitualKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualRemoveButtonClicked_Statics::NewProp_dailyRitualKey = { "dailyRitualKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DailyRitualsContainerWidget_eventOnDailyRitualRemoveButtonClicked_Parms, dailyRitualKey), METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualRemoveButtonClicked_Statics::NewProp_dailyRitualKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualRemoveButtonClicked_Statics::NewProp_dailyRitualKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualRemoveButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualRemoveButtonClicked_Statics::NewProp_dailyRitualKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualRemoveButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualRemoveButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualsContainerWidget, nullptr, "OnDailyRitualRemoveButtonClicked", nullptr, nullptr, sizeof(DailyRitualsContainerWidget_eventOnDailyRitualRemoveButtonClicked_Parms), Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualRemoveButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualRemoveButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualRemoveButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualRemoveButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualRemoveButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualRemoveButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualTileFadeOutComplete_Statics
	{
		struct DailyRitualsContainerWidget_eventOnDailyRitualTileFadeOutComplete_Parms
		{
			UDailyRitualTileWidget* dailyRitualTile;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dailyRitualTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dailyRitualTile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualTileFadeOutComplete_Statics::NewProp_dailyRitualTile_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualTileFadeOutComplete_Statics::NewProp_dailyRitualTile = { "dailyRitualTile", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DailyRitualsContainerWidget_eventOnDailyRitualTileFadeOutComplete_Parms, dailyRitualTile), Z_Construct_UClass_UDailyRitualTileWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualTileFadeOutComplete_Statics::NewProp_dailyRitualTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualTileFadeOutComplete_Statics::NewProp_dailyRitualTile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualTileFadeOutComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualTileFadeOutComplete_Statics::NewProp_dailyRitualTile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualTileFadeOutComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualTileFadeOutComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualsContainerWidget, nullptr, "OnDailyRitualTileFadeOutComplete", nullptr, nullptr, sizeof(DailyRitualsContainerWidget_eventOnDailyRitualTileFadeOutComplete_Parms), Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualTileFadeOutComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualTileFadeOutComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualTileFadeOutComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualTileFadeOutComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualTileFadeOutComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualTileFadeOutComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDelayUntilFadeInSequenceComplete_Statics
	{
		struct DailyRitualsContainerWidget_eventOnDelayUntilFadeInSequenceComplete_Parms
		{
			UUITweenInstance* delayUntilFadeInSequenceTween;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_delayUntilFadeInSequenceTween;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDelayUntilFadeInSequenceComplete_Statics::NewProp_delayUntilFadeInSequenceTween = { "delayUntilFadeInSequenceTween", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DailyRitualsContainerWidget_eventOnDelayUntilFadeInSequenceComplete_Parms, delayUntilFadeInSequenceTween), Z_Construct_UClass_UUITweenInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDelayUntilFadeInSequenceComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDelayUntilFadeInSequenceComplete_Statics::NewProp_delayUntilFadeInSequenceTween,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDelayUntilFadeInSequenceComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDelayUntilFadeInSequenceComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualsContainerWidget, nullptr, "OnDelayUntilFadeInSequenceComplete", nullptr, nullptr, sizeof(DailyRitualsContainerWidget_eventOnDelayUntilFadeInSequenceComplete_Parms), Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDelayUntilFadeInSequenceComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDelayUntilFadeInSequenceComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDelayUntilFadeInSequenceComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDelayUntilFadeInSequenceComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDelayUntilFadeInSequenceComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDelayUntilFadeInSequenceComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDailyRitualsContainerWidget_OnRecentlyAssignedDailyRitualFadeInComplete_Statics
	{
		struct DailyRitualsContainerWidget_eventOnRecentlyAssignedDailyRitualFadeInComplete_Parms
		{
			UDailyRitualTileWidget* dailyRitualTile;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dailyRitualTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dailyRitualTile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsContainerWidget_OnRecentlyAssignedDailyRitualFadeInComplete_Statics::NewProp_dailyRitualTile_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDailyRitualsContainerWidget_OnRecentlyAssignedDailyRitualFadeInComplete_Statics::NewProp_dailyRitualTile = { "dailyRitualTile", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DailyRitualsContainerWidget_eventOnRecentlyAssignedDailyRitualFadeInComplete_Parms, dailyRitualTile), Z_Construct_UClass_UDailyRitualTileWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsContainerWidget_OnRecentlyAssignedDailyRitualFadeInComplete_Statics::NewProp_dailyRitualTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsContainerWidget_OnRecentlyAssignedDailyRitualFadeInComplete_Statics::NewProp_dailyRitualTile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDailyRitualsContainerWidget_OnRecentlyAssignedDailyRitualFadeInComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDailyRitualsContainerWidget_OnRecentlyAssignedDailyRitualFadeInComplete_Statics::NewProp_dailyRitualTile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsContainerWidget_OnRecentlyAssignedDailyRitualFadeInComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualsContainerWidget_OnRecentlyAssignedDailyRitualFadeInComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualsContainerWidget, nullptr, "OnRecentlyAssignedDailyRitualFadeInComplete", nullptr, nullptr, sizeof(DailyRitualsContainerWidget_eventOnRecentlyAssignedDailyRitualFadeInComplete_Parms), Z_Construct_UFunction_UDailyRitualsContainerWidget_OnRecentlyAssignedDailyRitualFadeInComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsContainerWidget_OnRecentlyAssignedDailyRitualFadeInComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsContainerWidget_OnRecentlyAssignedDailyRitualFadeInComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsContainerWidget_OnRecentlyAssignedDailyRitualFadeInComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualsContainerWidget_OnRecentlyAssignedDailyRitualFadeInComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualsContainerWidget_OnRecentlyAssignedDailyRitualFadeInComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDailyRitualsContainerWidget_SetData_Statics
	{
		struct DailyRitualsContainerWidget_eventSetData_Parms
		{
			TArray<FDailyRitualViewData> dailyRitualsData;
			bool isAfterTrial;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_dailyRitualsData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_dailyRitualsData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isAfterTrial_MetaData[];
#endif
		static void NewProp_isAfterTrial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAfterTrial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDailyRitualsContainerWidget_SetData_Statics::NewProp_dailyRitualsData_Inner = { "dailyRitualsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDailyRitualViewData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDailyRitualsContainerWidget_SetData_Statics::NewProp_dailyRitualsData = { "dailyRitualsData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DailyRitualsContainerWidget_eventSetData_Parms, dailyRitualsData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsContainerWidget_SetData_Statics::NewProp_isAfterTrial_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDailyRitualsContainerWidget_SetData_Statics::NewProp_isAfterTrial_SetBit(void* Obj)
	{
		((DailyRitualsContainerWidget_eventSetData_Parms*)Obj)->isAfterTrial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDailyRitualsContainerWidget_SetData_Statics::NewProp_isAfterTrial = { "isAfterTrial", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DailyRitualsContainerWidget_eventSetData_Parms), &Z_Construct_UFunction_UDailyRitualsContainerWidget_SetData_Statics::NewProp_isAfterTrial_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsContainerWidget_SetData_Statics::NewProp_isAfterTrial_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsContainerWidget_SetData_Statics::NewProp_isAfterTrial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDailyRitualsContainerWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDailyRitualsContainerWidget_SetData_Statics::NewProp_dailyRitualsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDailyRitualsContainerWidget_SetData_Statics::NewProp_dailyRitualsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDailyRitualsContainerWidget_SetData_Statics::NewProp_isAfterTrial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsContainerWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualsContainerWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualsContainerWidget, nullptr, "SetData", nullptr, nullptr, sizeof(DailyRitualsContainerWidget_eventSetData_Parms), Z_Construct_UFunction_UDailyRitualsContainerWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsContainerWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsContainerWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsContainerWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualsContainerWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualsContainerWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDailyRitualsContainerWidget_StartAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsContainerWidget_StartAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualsContainerWidget_StartAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualsContainerWidget, nullptr, "StartAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsContainerWidget_StartAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsContainerWidget_StartAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualsContainerWidget_StartAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualsContainerWidget_StartAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDailyRitualsContainerWidget_NoRegister()
	{
		return UDailyRitualsContainerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDailyRitualsContainerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__claimButtonClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__claimButtonClickedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__removeButtonClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__removeButtonClickedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onOutOfDailyRitualsDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__onOutOfDailyRitualsDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DailyRitualTileWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DailyRitualTileWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Container;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoRitualWarningText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoRitualWarningText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TilePadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TilePadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeInNoRitualsWarningTextDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInNoRitualsWarningTextDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlignmentAnimationDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlignmentAnimationDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__alignAssignedRitualsTween_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__alignAssignedRitualsTween;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualClaimButtonClicked, "OnDailyRitualClaimButtonClicked" }, // 2661777645
		{ &Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualRemoveButtonClicked, "OnDailyRitualRemoveButtonClicked" }, // 1298796097
		{ &Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDailyRitualTileFadeOutComplete, "OnDailyRitualTileFadeOutComplete" }, // 2875103966
		{ &Z_Construct_UFunction_UDailyRitualsContainerWidget_OnDelayUntilFadeInSequenceComplete, "OnDelayUntilFadeInSequenceComplete" }, // 642730345
		{ &Z_Construct_UFunction_UDailyRitualsContainerWidget_OnRecentlyAssignedDailyRitualFadeInComplete, "OnRecentlyAssignedDailyRitualFadeInComplete" }, // 1455511551
		{ &Z_Construct_UFunction_UDailyRitualsContainerWidget_SetData, "SetData" }, // 1128894395
		{ &Z_Construct_UFunction_UDailyRitualsContainerWidget_StartAnim, "StartAnim" }, // 1174437501
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DailyRitualsContainerWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualsContainerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp__claimButtonClickedDelegate_MetaData[] = {
		{ "Category", "DailyRitualsContainerWidget" },
		{ "ModuleRelativePath", "Public/DailyRitualsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp__claimButtonClickedDelegate = { "_claimButtonClickedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualsContainerWidget, _claimButtonClickedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ClaimedRitualDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp__claimButtonClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp__claimButtonClickedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp__removeButtonClickedDelegate_MetaData[] = {
		{ "Category", "DailyRitualsContainerWidget" },
		{ "ModuleRelativePath", "Public/DailyRitualsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp__removeButtonClickedDelegate = { "_removeButtonClickedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualsContainerWidget, _removeButtonClickedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_RemovedDailyRitualDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp__removeButtonClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp__removeButtonClickedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp__onOutOfDailyRitualsDelegate_MetaData[] = {
		{ "Category", "DailyRitualsContainerWidget" },
		{ "ModuleRelativePath", "Public/DailyRitualsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp__onOutOfDailyRitualsDelegate = { "_onOutOfDailyRitualsDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualsContainerWidget, _onOutOfDailyRitualsDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_OnOutOfDailyRitualsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp__onOutOfDailyRitualsDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp__onOutOfDailyRitualsDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_DailyRitualTileWidgetClass_MetaData[] = {
		{ "Category", "DailyRitualsContainerWidget" },
		{ "ModuleRelativePath", "Public/DailyRitualsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_DailyRitualTileWidgetClass = { "DailyRitualTileWidgetClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualsContainerWidget, DailyRitualTileWidgetClass), Z_Construct_UClass_UDailyRitualTileWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_DailyRitualTileWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_DailyRitualTileWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_Container_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DailyRitualsContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualsContainerWidget, Container), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_Container_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_Container_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_NoRitualWarningText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DailyRitualsContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_NoRitualWarningText = { "NoRitualWarningText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualsContainerWidget, NoRitualWarningText), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_NoRitualWarningText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_NoRitualWarningText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_TilePadding_MetaData[] = {
		{ "Category", "DailyRitualsContainerWidget" },
		{ "ModuleRelativePath", "Public/DailyRitualsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_TilePadding = { "TilePadding", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualsContainerWidget, TilePadding), METADATA_PARAMS(Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_TilePadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_TilePadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_FadeInNoRitualsWarningTextDuration_MetaData[] = {
		{ "Category", "DailyRitualsContainerWidget" },
		{ "ModuleRelativePath", "Public/DailyRitualsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_FadeInNoRitualsWarningTextDuration = { "FadeInNoRitualsWarningTextDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualsContainerWidget, FadeInNoRitualsWarningTextDuration), METADATA_PARAMS(Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_FadeInNoRitualsWarningTextDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_FadeInNoRitualsWarningTextDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_AlignmentAnimationDuration_MetaData[] = {
		{ "Category", "DailyRitualsContainerWidget" },
		{ "ModuleRelativePath", "Public/DailyRitualsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_AlignmentAnimationDuration = { "AlignmentAnimationDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualsContainerWidget, AlignmentAnimationDuration), METADATA_PARAMS(Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_AlignmentAnimationDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_AlignmentAnimationDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp__alignAssignedRitualsTween_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DailyRitualsContainerWidget" },
		{ "ModuleRelativePath", "Public/DailyRitualsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp__alignAssignedRitualsTween = { "_alignAssignedRitualsTween", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualsContainerWidget, _alignAssignedRitualsTween), Z_Construct_UClass_UUITweenInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp__alignAssignedRitualsTween_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp__alignAssignedRitualsTween_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp__claimButtonClickedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp__removeButtonClickedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp__onOutOfDailyRitualsDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_DailyRitualTileWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_Container,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_NoRitualWarningText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_TilePadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_FadeInNoRitualsWarningTextDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp_AlignmentAnimationDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::NewProp__alignAssignedRitualsTween,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDailyRitualsContainerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::ClassParams = {
		&UDailyRitualsContainerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDailyRitualsContainerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDailyRitualsContainerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDailyRitualsContainerWidget, 3018798502);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UDailyRitualsContainerWidget>()
	{
		return UDailyRitualsContainerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDailyRitualsContainerWidget(Z_Construct_UClass_UDailyRitualsContainerWidget, &UDailyRitualsContainerWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UDailyRitualsContainerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDailyRitualsContainerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
