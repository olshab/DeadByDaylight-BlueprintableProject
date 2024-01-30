// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/OnboardingTutorialViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnboardingTutorialViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UOnboardingTutorialViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UOnboardingTutorialViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FOnboardingStepViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FRewardWrapperViewData();
// End Cross Module References
	DEFINE_FUNCTION(IOnboardingTutorialViewInterface::execSetCanShowGoToMainMenuTutorialButton)
	{
		P_GET_UBOOL(Z_Param_canShowGoToMainMenuTutorialButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanShowGoToMainMenuTutorialButton_Implementation(Z_Param_canShowGoToMainMenuTutorialButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IOnboardingTutorialViewInterface::execSetIsKillSwitch)
	{
		P_GET_UBOOL(Z_Param_isKillSwitch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsKillSwitch_Implementation(Z_Param_isKillSwitch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IOnboardingTutorialViewInterface::execSetProgress)
	{
		P_GET_TARRAY_REF(FOnboardingStepViewData,Z_Param_Out_progress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProgress_Implementation(Z_Param_Out_progress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IOnboardingTutorialViewInterface::execSetTutorialProgressionFeedbacks)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_completedStepId);
		P_GET_UBOOL(Z_Param_isOnboardingEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTutorialProgressionFeedbacks_Implementation(Z_Param_completedStepId,Z_Param_isOnboardingEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IOnboardingTutorialViewInterface::execSetUIEnabled)
	{
		P_GET_UBOOL(Z_Param_enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUIEnabled_Implementation(Z_Param_enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IOnboardingTutorialViewInterface::execStopLoadingSpinner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopLoadingSpinner_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IOnboardingTutorialViewInterface::execUpdateProgress)
	{
		P_GET_TARRAY_REF(FOnboardingStepViewData,Z_Param_Out_before);
		P_GET_TARRAY_REF(FOnboardingStepViewData,Z_Param_Out_after);
		P_GET_TARRAY_REF(FRewardWrapperViewData,Z_Param_Out_rewards);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateProgress_Implementation(Z_Param_Out_before,Z_Param_Out_after,Z_Param_Out_rewards);
		P_NATIVE_END;
	}
	void IOnboardingTutorialViewInterface::SetCanShowGoToMainMenuTutorialButton(bool canShowGoToMainMenuTutorialButton)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetCanShowGoToMainMenuTutorialButton instead.");
	}
	void IOnboardingTutorialViewInterface::SetIsKillSwitch(bool isKillSwitch)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetIsKillSwitch instead.");
	}
	void IOnboardingTutorialViewInterface::SetProgress(TArray<FOnboardingStepViewData> const& progress)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetProgress instead.");
	}
	void IOnboardingTutorialViewInterface::SetTutorialProgressionFeedbacks(const FString& completedStepId, bool isOnboardingEnabled)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetTutorialProgressionFeedbacks instead.");
	}
	void IOnboardingTutorialViewInterface::SetUIEnabled(bool enabled)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetUIEnabled instead.");
	}
	void IOnboardingTutorialViewInterface::StopLoadingSpinner()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StopLoadingSpinner instead.");
	}
	void IOnboardingTutorialViewInterface::UpdateProgress(TArray<FOnboardingStepViewData> const& before, TArray<FOnboardingStepViewData> const& after, TArray<FRewardWrapperViewData> const& rewards)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateProgress instead.");
	}
	void UOnboardingTutorialViewInterface::StaticRegisterNativesUOnboardingTutorialViewInterface()
	{
		UClass* Class = UOnboardingTutorialViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCanShowGoToMainMenuTutorialButton", &IOnboardingTutorialViewInterface::execSetCanShowGoToMainMenuTutorialButton },
			{ "SetIsKillSwitch", &IOnboardingTutorialViewInterface::execSetIsKillSwitch },
			{ "SetProgress", &IOnboardingTutorialViewInterface::execSetProgress },
			{ "SetTutorialProgressionFeedbacks", &IOnboardingTutorialViewInterface::execSetTutorialProgressionFeedbacks },
			{ "SetUIEnabled", &IOnboardingTutorialViewInterface::execSetUIEnabled },
			{ "StopLoadingSpinner", &IOnboardingTutorialViewInterface::execStopLoadingSpinner },
			{ "UpdateProgress", &IOnboardingTutorialViewInterface::execUpdateProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetCanShowGoToMainMenuTutorialButton_Statics
	{
		static void NewProp_canShowGoToMainMenuTutorialButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canShowGoToMainMenuTutorialButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetCanShowGoToMainMenuTutorialButton_Statics::NewProp_canShowGoToMainMenuTutorialButton_SetBit(void* Obj)
	{
		((OnboardingTutorialViewInterface_eventSetCanShowGoToMainMenuTutorialButton_Parms*)Obj)->canShowGoToMainMenuTutorialButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetCanShowGoToMainMenuTutorialButton_Statics::NewProp_canShowGoToMainMenuTutorialButton = { "canShowGoToMainMenuTutorialButton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnboardingTutorialViewInterface_eventSetCanShowGoToMainMenuTutorialButton_Parms), &Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetCanShowGoToMainMenuTutorialButton_Statics::NewProp_canShowGoToMainMenuTutorialButton_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetCanShowGoToMainMenuTutorialButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetCanShowGoToMainMenuTutorialButton_Statics::NewProp_canShowGoToMainMenuTutorialButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetCanShowGoToMainMenuTutorialButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnboardingTutorialViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetCanShowGoToMainMenuTutorialButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnboardingTutorialViewInterface, nullptr, "SetCanShowGoToMainMenuTutorialButton", nullptr, nullptr, sizeof(OnboardingTutorialViewInterface_eventSetCanShowGoToMainMenuTutorialButton_Parms), Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetCanShowGoToMainMenuTutorialButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetCanShowGoToMainMenuTutorialButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetCanShowGoToMainMenuTutorialButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetCanShowGoToMainMenuTutorialButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetCanShowGoToMainMenuTutorialButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetCanShowGoToMainMenuTutorialButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetIsKillSwitch_Statics
	{
		static void NewProp_isKillSwitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isKillSwitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetIsKillSwitch_Statics::NewProp_isKillSwitch_SetBit(void* Obj)
	{
		((OnboardingTutorialViewInterface_eventSetIsKillSwitch_Parms*)Obj)->isKillSwitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetIsKillSwitch_Statics::NewProp_isKillSwitch = { "isKillSwitch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnboardingTutorialViewInterface_eventSetIsKillSwitch_Parms), &Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetIsKillSwitch_Statics::NewProp_isKillSwitch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetIsKillSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetIsKillSwitch_Statics::NewProp_isKillSwitch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetIsKillSwitch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnboardingTutorialViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetIsKillSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnboardingTutorialViewInterface, nullptr, "SetIsKillSwitch", nullptr, nullptr, sizeof(OnboardingTutorialViewInterface_eventSetIsKillSwitch_Parms), Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetIsKillSwitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetIsKillSwitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetIsKillSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetIsKillSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetIsKillSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetIsKillSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetProgress_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_progress_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetProgress_Statics::NewProp_progress_Inner = { "progress", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOnboardingStepViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetProgress_Statics::NewProp_progress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetProgress_Statics::NewProp_progress = { "progress", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnboardingTutorialViewInterface_eventSetProgress_Parms, progress), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetProgress_Statics::NewProp_progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetProgress_Statics::NewProp_progress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetProgress_Statics::NewProp_progress_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetProgress_Statics::NewProp_progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnboardingTutorialViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnboardingTutorialViewInterface, nullptr, "SetProgress", nullptr, nullptr, sizeof(OnboardingTutorialViewInterface_eventSetProgress_Parms), Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_completedStepId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_completedStepId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isOnboardingEnabled_MetaData[];
#endif
		static void NewProp_isOnboardingEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOnboardingEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks_Statics::NewProp_completedStepId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks_Statics::NewProp_completedStepId = { "completedStepId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnboardingTutorialViewInterface_eventSetTutorialProgressionFeedbacks_Parms, completedStepId), METADATA_PARAMS(Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks_Statics::NewProp_completedStepId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks_Statics::NewProp_completedStepId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks_Statics::NewProp_isOnboardingEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks_Statics::NewProp_isOnboardingEnabled_SetBit(void* Obj)
	{
		((OnboardingTutorialViewInterface_eventSetTutorialProgressionFeedbacks_Parms*)Obj)->isOnboardingEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks_Statics::NewProp_isOnboardingEnabled = { "isOnboardingEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnboardingTutorialViewInterface_eventSetTutorialProgressionFeedbacks_Parms), &Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks_Statics::NewProp_isOnboardingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks_Statics::NewProp_isOnboardingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks_Statics::NewProp_isOnboardingEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks_Statics::NewProp_completedStepId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks_Statics::NewProp_isOnboardingEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnboardingTutorialViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnboardingTutorialViewInterface, nullptr, "SetTutorialProgressionFeedbacks", nullptr, nullptr, sizeof(OnboardingTutorialViewInterface_eventSetTutorialProgressionFeedbacks_Parms), Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetUIEnabled_Statics
	{
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetUIEnabled_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((OnboardingTutorialViewInterface_eventSetUIEnabled_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetUIEnabled_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnboardingTutorialViewInterface_eventSetUIEnabled_Parms), &Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetUIEnabled_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetUIEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetUIEnabled_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetUIEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnboardingTutorialViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetUIEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnboardingTutorialViewInterface, nullptr, "SetUIEnabled", nullptr, nullptr, sizeof(OnboardingTutorialViewInterface_eventSetUIEnabled_Parms), Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetUIEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetUIEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetUIEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetUIEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetUIEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetUIEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnboardingTutorialViewInterface_StopLoadingSpinner_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingTutorialViewInterface_StopLoadingSpinner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnboardingTutorialViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnboardingTutorialViewInterface_StopLoadingSpinner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnboardingTutorialViewInterface, nullptr, "StopLoadingSpinner", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnboardingTutorialViewInterface_StopLoadingSpinner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingTutorialViewInterface_StopLoadingSpinner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnboardingTutorialViewInterface_StopLoadingSpinner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnboardingTutorialViewInterface_StopLoadingSpinner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_before_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_before_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_before;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_after_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_after_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_after;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rewards_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_rewards;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::NewProp_before_Inner = { "before", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOnboardingStepViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::NewProp_before_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::NewProp_before = { "before", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnboardingTutorialViewInterface_eventUpdateProgress_Parms, before), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::NewProp_before_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::NewProp_before_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::NewProp_after_Inner = { "after", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOnboardingStepViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::NewProp_after_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::NewProp_after = { "after", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnboardingTutorialViewInterface_eventUpdateProgress_Parms, after), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::NewProp_after_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::NewProp_after_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::NewProp_rewards_Inner = { "rewards", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRewardWrapperViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::NewProp_rewards_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::NewProp_rewards = { "rewards", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnboardingTutorialViewInterface_eventUpdateProgress_Parms, rewards), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::NewProp_rewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::NewProp_rewards_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::NewProp_before_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::NewProp_before,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::NewProp_after_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::NewProp_after,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::NewProp_rewards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::NewProp_rewards,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnboardingTutorialViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnboardingTutorialViewInterface, nullptr, "UpdateProgress", nullptr, nullptr, sizeof(OnboardingTutorialViewInterface_eventUpdateProgress_Parms), Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnboardingTutorialViewInterface_NoRegister()
	{
		return UOnboardingTutorialViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOnboardingTutorialViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnboardingTutorialViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnboardingTutorialViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetCanShowGoToMainMenuTutorialButton, "SetCanShowGoToMainMenuTutorialButton" }, // 2321415829
		{ &Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetIsKillSwitch, "SetIsKillSwitch" }, // 3805055038
		{ &Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetProgress, "SetProgress" }, // 2283275100
		{ &Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks, "SetTutorialProgressionFeedbacks" }, // 1200645786
		{ &Z_Construct_UFunction_UOnboardingTutorialViewInterface_SetUIEnabled, "SetUIEnabled" }, // 1021277463
		{ &Z_Construct_UFunction_UOnboardingTutorialViewInterface_StopLoadingSpinner, "StopLoadingSpinner" }, // 3859535709
		{ &Z_Construct_UFunction_UOnboardingTutorialViewInterface_UpdateProgress, "UpdateProgress" }, // 3803581869
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnboardingTutorialViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnboardingTutorialViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOnboardingTutorialViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnboardingTutorialViewInterface_Statics::ClassParams = {
		&UOnboardingTutorialViewInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UOnboardingTutorialViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnboardingTutorialViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnboardingTutorialViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnboardingTutorialViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnboardingTutorialViewInterface, 146834621);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UOnboardingTutorialViewInterface>()
	{
		return UOnboardingTutorialViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnboardingTutorialViewInterface(Z_Construct_UClass_UOnboardingTutorialViewInterface, &UOnboardingTutorialViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UOnboardingTutorialViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnboardingTutorialViewInterface);
	static FName NAME_UOnboardingTutorialViewInterface_SetCanShowGoToMainMenuTutorialButton = FName(TEXT("SetCanShowGoToMainMenuTutorialButton"));
	void IOnboardingTutorialViewInterface::Execute_SetCanShowGoToMainMenuTutorialButton(UObject* O, bool canShowGoToMainMenuTutorialButton)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UOnboardingTutorialViewInterface::StaticClass()));
		OnboardingTutorialViewInterface_eventSetCanShowGoToMainMenuTutorialButton_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UOnboardingTutorialViewInterface_SetCanShowGoToMainMenuTutorialButton);
		if (Func)
		{
			Parms.canShowGoToMainMenuTutorialButton=canShowGoToMainMenuTutorialButton;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IOnboardingTutorialViewInterface*)(O->GetNativeInterfaceAddress(UOnboardingTutorialViewInterface::StaticClass())))
		{
			I->SetCanShowGoToMainMenuTutorialButton_Implementation(canShowGoToMainMenuTutorialButton);
		}
	}
	static FName NAME_UOnboardingTutorialViewInterface_SetIsKillSwitch = FName(TEXT("SetIsKillSwitch"));
	void IOnboardingTutorialViewInterface::Execute_SetIsKillSwitch(UObject* O, bool isKillSwitch)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UOnboardingTutorialViewInterface::StaticClass()));
		OnboardingTutorialViewInterface_eventSetIsKillSwitch_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UOnboardingTutorialViewInterface_SetIsKillSwitch);
		if (Func)
		{
			Parms.isKillSwitch=isKillSwitch;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IOnboardingTutorialViewInterface*)(O->GetNativeInterfaceAddress(UOnboardingTutorialViewInterface::StaticClass())))
		{
			I->SetIsKillSwitch_Implementation(isKillSwitch);
		}
	}
	static FName NAME_UOnboardingTutorialViewInterface_SetProgress = FName(TEXT("SetProgress"));
	void IOnboardingTutorialViewInterface::Execute_SetProgress(UObject* O, TArray<FOnboardingStepViewData> const& progress)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UOnboardingTutorialViewInterface::StaticClass()));
		OnboardingTutorialViewInterface_eventSetProgress_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UOnboardingTutorialViewInterface_SetProgress);
		if (Func)
		{
			Parms.progress=progress;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IOnboardingTutorialViewInterface*)(O->GetNativeInterfaceAddress(UOnboardingTutorialViewInterface::StaticClass())))
		{
			I->SetProgress_Implementation(progress);
		}
	}
	static FName NAME_UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks = FName(TEXT("SetTutorialProgressionFeedbacks"));
	void IOnboardingTutorialViewInterface::Execute_SetTutorialProgressionFeedbacks(UObject* O, const FString& completedStepId, bool isOnboardingEnabled)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UOnboardingTutorialViewInterface::StaticClass()));
		OnboardingTutorialViewInterface_eventSetTutorialProgressionFeedbacks_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks);
		if (Func)
		{
			Parms.completedStepId=completedStepId;
			Parms.isOnboardingEnabled=isOnboardingEnabled;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IOnboardingTutorialViewInterface*)(O->GetNativeInterfaceAddress(UOnboardingTutorialViewInterface::StaticClass())))
		{
			I->SetTutorialProgressionFeedbacks_Implementation(completedStepId,isOnboardingEnabled);
		}
	}
	static FName NAME_UOnboardingTutorialViewInterface_SetUIEnabled = FName(TEXT("SetUIEnabled"));
	void IOnboardingTutorialViewInterface::Execute_SetUIEnabled(UObject* O, bool enabled)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UOnboardingTutorialViewInterface::StaticClass()));
		OnboardingTutorialViewInterface_eventSetUIEnabled_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UOnboardingTutorialViewInterface_SetUIEnabled);
		if (Func)
		{
			Parms.enabled=enabled;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IOnboardingTutorialViewInterface*)(O->GetNativeInterfaceAddress(UOnboardingTutorialViewInterface::StaticClass())))
		{
			I->SetUIEnabled_Implementation(enabled);
		}
	}
	static FName NAME_UOnboardingTutorialViewInterface_StopLoadingSpinner = FName(TEXT("StopLoadingSpinner"));
	void IOnboardingTutorialViewInterface::Execute_StopLoadingSpinner(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UOnboardingTutorialViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UOnboardingTutorialViewInterface_StopLoadingSpinner);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IOnboardingTutorialViewInterface*)(O->GetNativeInterfaceAddress(UOnboardingTutorialViewInterface::StaticClass())))
		{
			I->StopLoadingSpinner_Implementation();
		}
	}
	static FName NAME_UOnboardingTutorialViewInterface_UpdateProgress = FName(TEXT("UpdateProgress"));
	void IOnboardingTutorialViewInterface::Execute_UpdateProgress(UObject* O, TArray<FOnboardingStepViewData> const& before, TArray<FOnboardingStepViewData> const& after, TArray<FRewardWrapperViewData> const& rewards)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UOnboardingTutorialViewInterface::StaticClass()));
		OnboardingTutorialViewInterface_eventUpdateProgress_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UOnboardingTutorialViewInterface_UpdateProgress);
		if (Func)
		{
			Parms.before=before;
			Parms.after=after;
			Parms.rewards=rewards;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IOnboardingTutorialViewInterface*)(O->GetNativeInterfaceAddress(UOnboardingTutorialViewInterface::StaticClass())))
		{
			I->UpdateProgress_Implementation(before,after,rewards);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
