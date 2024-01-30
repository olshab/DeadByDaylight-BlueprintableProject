// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreOnboardingTutorialPanelWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreOnboardingTutorialPanelWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_TutorialSelectedDelegate__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_NoRegister();
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPendingStepData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UOnboardingTutorialViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreOnboardingTutorialPanelWidget::execCheckNextPendingButtonUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckNextPendingButtonUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreOnboardingTutorialPanelWidget::execNextPendingButtonUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextPendingButtonUpdated();
		P_NATIVE_END;
	}
	static FName NAME_UCoreOnboardingTutorialPanelWidget_SetTutorialDescription = FName(TEXT("SetTutorialDescription"));
	void UCoreOnboardingTutorialPanelWidget::SetTutorialDescription(FText const& description, bool isWarning)
	{
		CoreOnboardingTutorialPanelWidget_eventSetTutorialDescription_Parms Parms;
		Parms.description=description;
		Parms.isWarning=isWarning ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreOnboardingTutorialPanelWidget_SetTutorialDescription),&Parms);
	}
	static FName NAME_UCoreOnboardingTutorialPanelWidget_SetTutorialSeparators = FName(TEXT("SetTutorialSeparators"));
	void UCoreOnboardingTutorialPanelWidget::SetTutorialSeparators(const FString& completedStepId)
	{
		CoreOnboardingTutorialPanelWidget_eventSetTutorialSeparators_Parms Parms;
		Parms.completedStepId=completedStepId;
		ProcessEvent(FindFunctionChecked(NAME_UCoreOnboardingTutorialPanelWidget_SetTutorialSeparators),&Parms);
	}
	static FName NAME_UCoreOnboardingTutorialPanelWidget_TryBroadcastSelectedTutorial = FName(TEXT("TryBroadcastSelectedTutorial"));
	void UCoreOnboardingTutorialPanelWidget::TryBroadcastSelectedTutorial(UCoreButtonWidget* buttonTarget)
	{
		CoreOnboardingTutorialPanelWidget_eventTryBroadcastSelectedTutorial_Parms Parms;
		Parms.buttonTarget=buttonTarget;
		ProcessEvent(FindFunctionChecked(NAME_UCoreOnboardingTutorialPanelWidget_TryBroadcastSelectedTutorial),&Parms);
	}
	void UCoreOnboardingTutorialPanelWidget::StaticRegisterNativesUCoreOnboardingTutorialPanelWidget()
	{
		UClass* Class = UCoreOnboardingTutorialPanelWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckNextPendingButtonUpdate", &UCoreOnboardingTutorialPanelWidget::execCheckNextPendingButtonUpdate },
			{ "NextPendingButtonUpdated", &UCoreOnboardingTutorialPanelWidget::execNextPendingButtonUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_CheckNextPendingButtonUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_CheckNextPendingButtonUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialPanelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_CheckNextPendingButtonUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget, nullptr, "CheckNextPendingButtonUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_CheckNextPendingButtonUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_CheckNextPendingButtonUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_CheckNextPendingButtonUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_CheckNextPendingButtonUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_NextPendingButtonUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_NextPendingButtonUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialPanelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_NextPendingButtonUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget, nullptr, "NextPendingButtonUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_NextPendingButtonUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_NextPendingButtonUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_NextPendingButtonUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_NextPendingButtonUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialDescription_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_description;
		static void NewProp_isWarning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isWarning;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialDescription_Statics::NewProp_description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialDescription_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreOnboardingTutorialPanelWidget_eventSetTutorialDescription_Parms, description), METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialDescription_Statics::NewProp_description_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialDescription_Statics::NewProp_description_MetaData)) };
	void Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialDescription_Statics::NewProp_isWarning_SetBit(void* Obj)
	{
		((CoreOnboardingTutorialPanelWidget_eventSetTutorialDescription_Parms*)Obj)->isWarning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialDescription_Statics::NewProp_isWarning = { "isWarning", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreOnboardingTutorialPanelWidget_eventSetTutorialDescription_Parms), &Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialDescription_Statics::NewProp_isWarning_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialDescription_Statics::NewProp_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialDescription_Statics::NewProp_isWarning,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialDescription_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialPanelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget, nullptr, "SetTutorialDescription", nullptr, nullptr, sizeof(CoreOnboardingTutorialPanelWidget_eventSetTutorialDescription_Parms), Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialSeparators_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_completedStepId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_completedStepId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialSeparators_Statics::NewProp_completedStepId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialSeparators_Statics::NewProp_completedStepId = { "completedStepId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreOnboardingTutorialPanelWidget_eventSetTutorialSeparators_Parms, completedStepId), METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialSeparators_Statics::NewProp_completedStepId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialSeparators_Statics::NewProp_completedStepId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialSeparators_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialSeparators_Statics::NewProp_completedStepId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialSeparators_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialPanelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialSeparators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget, nullptr, "SetTutorialSeparators", nullptr, nullptr, sizeof(CoreOnboardingTutorialPanelWidget_eventSetTutorialSeparators_Parms), Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialSeparators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialSeparators_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialSeparators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialSeparators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialSeparators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialSeparators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_TryBroadcastSelectedTutorial_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_TryBroadcastSelectedTutorial_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_TryBroadcastSelectedTutorial_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreOnboardingTutorialPanelWidget_eventTryBroadcastSelectedTutorial_Parms, buttonTarget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_TryBroadcastSelectedTutorial_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_TryBroadcastSelectedTutorial_Statics::NewProp_buttonTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_TryBroadcastSelectedTutorial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_TryBroadcastSelectedTutorial_Statics::NewProp_buttonTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_TryBroadcastSelectedTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialPanelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_TryBroadcastSelectedTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget, nullptr, "TryBroadcastSelectedTutorial", nullptr, nullptr, sizeof(CoreOnboardingTutorialPanelWidget_eventTryBroadcastSelectedTutorial_Parms), Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_TryBroadcastSelectedTutorial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_TryBroadcastSelectedTutorial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_TryBroadcastSelectedTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_TryBroadcastSelectedTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_TryBroadcastSelectedTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_TryBroadcastSelectedTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_NoRegister()
	{
		return UCoreOnboardingTutorialPanelWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnboardingButtonHolderContainers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnboardingButtonHolderContainers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OnboardingButtonHolderContainers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialSelectedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_TutorialSelectedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadingWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__arrowHighlightRenderOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__arrowHighlightRenderOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__arrowUnhighlightRenderOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__arrowUnhighlightRenderOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__oneTutorialButtonHolderWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__oneTutorialButtonHolderWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__twoTutorialButtonHolderWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__twoTutorialButtonHolderWidgetClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__onboardingButtonHolderWidgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onboardingButtonHolderWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__onboardingButtonHolderWidgets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pendingData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pendingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__pendingData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_CheckNextPendingButtonUpdate, "CheckNextPendingButtonUpdate" }, // 3934649456
		{ &Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_NextPendingButtonUpdated, "NextPendingButtonUpdated" }, // 1826540587
		{ &Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialDescription, "SetTutorialDescription" }, // 3999765647
		{ &Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_SetTutorialSeparators, "SetTutorialSeparators" }, // 106530466
		{ &Z_Construct_UFunction_UCoreOnboardingTutorialPanelWidget_TryBroadcastSelectedTutorial, "TryBroadcastSelectedTutorial" }, // 3695416826
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreOnboardingTutorialPanelWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialPanelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp_OnboardingButtonHolderContainers_Inner = { "OnboardingButtonHolderContainers", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp_OnboardingButtonHolderContainers_MetaData[] = {
		{ "Category", "CoreOnboardingTutorialPanelWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialPanelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp_OnboardingButtonHolderContainers = { "OnboardingButtonHolderContainers", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingTutorialPanelWidget, OnboardingButtonHolderContainers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp_OnboardingButtonHolderContainers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp_OnboardingButtonHolderContainers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp_TutorialSelectedDelegate_MetaData[] = {
		{ "Category", "CoreOnboardingTutorialPanelWidget" },
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialPanelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp_TutorialSelectedDelegate = { "TutorialSelectedDelegate", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingTutorialPanelWidget, TutorialSelectedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_TutorialSelectedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp_TutorialSelectedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp_TutorialSelectedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp_LoadingWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreOnboardingTutorialPanelWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialPanelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp_LoadingWidget = { "LoadingWidget", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingTutorialPanelWidget, LoadingWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp_LoadingWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp_LoadingWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__arrowHighlightRenderOpacity_MetaData[] = {
		{ "Category", "CoreOnboardingTutorialPanelWidget" },
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialPanelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__arrowHighlightRenderOpacity = { "_arrowHighlightRenderOpacity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingTutorialPanelWidget, _arrowHighlightRenderOpacity), METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__arrowHighlightRenderOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__arrowHighlightRenderOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__arrowUnhighlightRenderOpacity_MetaData[] = {
		{ "Category", "CoreOnboardingTutorialPanelWidget" },
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialPanelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__arrowUnhighlightRenderOpacity = { "_arrowUnhighlightRenderOpacity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingTutorialPanelWidget, _arrowUnhighlightRenderOpacity), METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__arrowUnhighlightRenderOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__arrowUnhighlightRenderOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__oneTutorialButtonHolderWidgetClass_MetaData[] = {
		{ "Category", "CoreOnboardingTutorialPanelWidget" },
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialPanelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__oneTutorialButtonHolderWidgetClass = { "_oneTutorialButtonHolderWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingTutorialPanelWidget, _oneTutorialButtonHolderWidgetClass), Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__oneTutorialButtonHolderWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__oneTutorialButtonHolderWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__twoTutorialButtonHolderWidgetClass_MetaData[] = {
		{ "Category", "CoreOnboardingTutorialPanelWidget" },
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialPanelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__twoTutorialButtonHolderWidgetClass = { "_twoTutorialButtonHolderWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingTutorialPanelWidget, _twoTutorialButtonHolderWidgetClass), Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__twoTutorialButtonHolderWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__twoTutorialButtonHolderWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__onboardingButtonHolderWidgets_Inner = { "_onboardingButtonHolderWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__onboardingButtonHolderWidgets_MetaData[] = {
		{ "Category", "CoreOnboardingTutorialPanelWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialPanelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__onboardingButtonHolderWidgets = { "_onboardingButtonHolderWidgets", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingTutorialPanelWidget, _onboardingButtonHolderWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__onboardingButtonHolderWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__onboardingButtonHolderWidgets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__pendingData_Inner = { "_pendingData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPendingStepData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__pendingData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreOnboardingTutorialPanelWidget" },
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialPanelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__pendingData = { "_pendingData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingTutorialPanelWidget, _pendingData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__pendingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__pendingData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp_OnboardingButtonHolderContainers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp_OnboardingButtonHolderContainers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp_TutorialSelectedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp_LoadingWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__arrowHighlightRenderOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__arrowUnhighlightRenderOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__oneTutorialButtonHolderWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__twoTutorialButtonHolderWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__onboardingButtonHolderWidgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__onboardingButtonHolderWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__pendingData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::NewProp__pendingData,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOnboardingTutorialViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreOnboardingTutorialPanelWidget, IOnboardingTutorialViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreOnboardingTutorialPanelWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::ClassParams = {
		&UCoreOnboardingTutorialPanelWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreOnboardingTutorialPanelWidget, 2465936367);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreOnboardingTutorialPanelWidget>()
	{
		return UCoreOnboardingTutorialPanelWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreOnboardingTutorialPanelWidget(Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget, &UCoreOnboardingTutorialPanelWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreOnboardingTutorialPanelWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreOnboardingTutorialPanelWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
