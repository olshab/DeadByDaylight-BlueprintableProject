// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/OnboardingMenuPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnboardingMenuPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UOnboardingMenuPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UOnboardingMenuPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EOnboardingMenuState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UOnboardingTutorialSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UGameManualSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USubPresenter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOnboardingMenuPresenter::execOnBackAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnboardingMenuPresenter::execOnChangeAccountAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChangeAccountAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnboardingMenuPresenter::execOnFirstOnboardingStepsDone)
	{
		P_GET_UBOOL(Z_Param_isFirstStepsDone);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFirstOnboardingStepsDone(Z_Param_isFirstStepsDone);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnboardingMenuPresenter::execOnMenuTabSelected)
	{
		P_GET_ENUM(EOnboardingMenuState,Z_Param_menuState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMenuTabSelected(EOnboardingMenuState(Z_Param_menuState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnboardingMenuPresenter::execOnMenuTabSelectedAgain)
	{
		P_GET_ENUM(EOnboardingMenuState,Z_Param_menuState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMenuTabSelectedAgain(EOnboardingMenuState(Z_Param_menuState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnboardingMenuPresenter::execOnQuitGameAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuitGameAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnboardingMenuPresenter::execOnSettingsAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSettingsAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnboardingMenuPresenter::execOnSetUIEnabled)
	{
		P_GET_UBOOL(Z_Param_enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSetUIEnabled(Z_Param_enabled);
		P_NATIVE_END;
	}
	void UOnboardingMenuPresenter::StaticRegisterNativesUOnboardingMenuPresenter()
	{
		UClass* Class = UOnboardingMenuPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBackAction", &UOnboardingMenuPresenter::execOnBackAction },
			{ "OnChangeAccountAction", &UOnboardingMenuPresenter::execOnChangeAccountAction },
			{ "OnFirstOnboardingStepsDone", &UOnboardingMenuPresenter::execOnFirstOnboardingStepsDone },
			{ "OnMenuTabSelected", &UOnboardingMenuPresenter::execOnMenuTabSelected },
			{ "OnMenuTabSelectedAgain", &UOnboardingMenuPresenter::execOnMenuTabSelectedAgain },
			{ "OnQuitGameAction", &UOnboardingMenuPresenter::execOnQuitGameAction },
			{ "OnSettingsAction", &UOnboardingMenuPresenter::execOnSettingsAction },
			{ "OnSetUIEnabled", &UOnboardingMenuPresenter::execOnSetUIEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnboardingMenuPresenter_OnBackAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingMenuPresenter_OnBackAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnboardingMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnboardingMenuPresenter_OnBackAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnboardingMenuPresenter, nullptr, "OnBackAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnboardingMenuPresenter_OnBackAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingMenuPresenter_OnBackAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnboardingMenuPresenter_OnBackAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnboardingMenuPresenter_OnBackAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnboardingMenuPresenter_OnChangeAccountAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingMenuPresenter_OnChangeAccountAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnboardingMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnboardingMenuPresenter_OnChangeAccountAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnboardingMenuPresenter, nullptr, "OnChangeAccountAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnboardingMenuPresenter_OnChangeAccountAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingMenuPresenter_OnChangeAccountAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnboardingMenuPresenter_OnChangeAccountAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnboardingMenuPresenter_OnChangeAccountAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnboardingMenuPresenter_OnFirstOnboardingStepsDone_Statics
	{
		struct OnboardingMenuPresenter_eventOnFirstOnboardingStepsDone_Parms
		{
			bool isFirstStepsDone;
		};
		static void NewProp_isFirstStepsDone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isFirstStepsDone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOnboardingMenuPresenter_OnFirstOnboardingStepsDone_Statics::NewProp_isFirstStepsDone_SetBit(void* Obj)
	{
		((OnboardingMenuPresenter_eventOnFirstOnboardingStepsDone_Parms*)Obj)->isFirstStepsDone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnboardingMenuPresenter_OnFirstOnboardingStepsDone_Statics::NewProp_isFirstStepsDone = { "isFirstStepsDone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnboardingMenuPresenter_eventOnFirstOnboardingStepsDone_Parms), &Z_Construct_UFunction_UOnboardingMenuPresenter_OnFirstOnboardingStepsDone_Statics::NewProp_isFirstStepsDone_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnboardingMenuPresenter_OnFirstOnboardingStepsDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingMenuPresenter_OnFirstOnboardingStepsDone_Statics::NewProp_isFirstStepsDone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingMenuPresenter_OnFirstOnboardingStepsDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnboardingMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnboardingMenuPresenter_OnFirstOnboardingStepsDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnboardingMenuPresenter, nullptr, "OnFirstOnboardingStepsDone", nullptr, nullptr, sizeof(OnboardingMenuPresenter_eventOnFirstOnboardingStepsDone_Parms), Z_Construct_UFunction_UOnboardingMenuPresenter_OnFirstOnboardingStepsDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingMenuPresenter_OnFirstOnboardingStepsDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnboardingMenuPresenter_OnFirstOnboardingStepsDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingMenuPresenter_OnFirstOnboardingStepsDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnboardingMenuPresenter_OnFirstOnboardingStepsDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnboardingMenuPresenter_OnFirstOnboardingStepsDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelected_Statics
	{
		struct OnboardingMenuPresenter_eventOnMenuTabSelected_Parms
		{
			EOnboardingMenuState menuState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_menuState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_menuState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelected_Statics::NewProp_menuState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelected_Statics::NewProp_menuState = { "menuState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnboardingMenuPresenter_eventOnMenuTabSelected_Parms, menuState), Z_Construct_UEnum_DBDUIViewInterfaces_EOnboardingMenuState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelected_Statics::NewProp_menuState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelected_Statics::NewProp_menuState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnboardingMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnboardingMenuPresenter, nullptr, "OnMenuTabSelected", nullptr, nullptr, sizeof(OnboardingMenuPresenter_eventOnMenuTabSelected_Parms), Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelectedAgain_Statics
	{
		struct OnboardingMenuPresenter_eventOnMenuTabSelectedAgain_Parms
		{
			EOnboardingMenuState menuState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_menuState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_menuState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelectedAgain_Statics::NewProp_menuState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelectedAgain_Statics::NewProp_menuState = { "menuState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnboardingMenuPresenter_eventOnMenuTabSelectedAgain_Parms, menuState), Z_Construct_UEnum_DBDUIViewInterfaces_EOnboardingMenuState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelectedAgain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelectedAgain_Statics::NewProp_menuState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelectedAgain_Statics::NewProp_menuState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelectedAgain_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnboardingMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelectedAgain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnboardingMenuPresenter, nullptr, "OnMenuTabSelectedAgain", nullptr, nullptr, sizeof(OnboardingMenuPresenter_eventOnMenuTabSelectedAgain_Parms), Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelectedAgain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelectedAgain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelectedAgain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelectedAgain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelectedAgain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelectedAgain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnboardingMenuPresenter_OnQuitGameAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingMenuPresenter_OnQuitGameAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnboardingMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnboardingMenuPresenter_OnQuitGameAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnboardingMenuPresenter, nullptr, "OnQuitGameAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnboardingMenuPresenter_OnQuitGameAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingMenuPresenter_OnQuitGameAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnboardingMenuPresenter_OnQuitGameAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnboardingMenuPresenter_OnQuitGameAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnboardingMenuPresenter_OnSettingsAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingMenuPresenter_OnSettingsAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnboardingMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnboardingMenuPresenter_OnSettingsAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnboardingMenuPresenter, nullptr, "OnSettingsAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnboardingMenuPresenter_OnSettingsAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingMenuPresenter_OnSettingsAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnboardingMenuPresenter_OnSettingsAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnboardingMenuPresenter_OnSettingsAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnboardingMenuPresenter_OnSetUIEnabled_Statics
	{
		struct OnboardingMenuPresenter_eventOnSetUIEnabled_Parms
		{
			bool enabled;
		};
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOnboardingMenuPresenter_OnSetUIEnabled_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((OnboardingMenuPresenter_eventOnSetUIEnabled_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnboardingMenuPresenter_OnSetUIEnabled_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnboardingMenuPresenter_eventOnSetUIEnabled_Parms), &Z_Construct_UFunction_UOnboardingMenuPresenter_OnSetUIEnabled_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnboardingMenuPresenter_OnSetUIEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingMenuPresenter_OnSetUIEnabled_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingMenuPresenter_OnSetUIEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnboardingMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnboardingMenuPresenter_OnSetUIEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnboardingMenuPresenter, nullptr, "OnSetUIEnabled", nullptr, nullptr, sizeof(OnboardingMenuPresenter_eventOnSetUIEnabled_Parms), Z_Construct_UFunction_UOnboardingMenuPresenter_OnSetUIEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingMenuPresenter_OnSetUIEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnboardingMenuPresenter_OnSetUIEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingMenuPresenter_OnSetUIEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnboardingMenuPresenter_OnSetUIEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnboardingMenuPresenter_OnSetUIEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnboardingMenuPresenter_NoRegister()
	{
		return UOnboardingMenuPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UOnboardingMenuPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnboardingMenuWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OnboardingMenuWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onboardingTutorialSubPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__onboardingTutorialSubPresenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameManualSubPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gameManualSubPresenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activeSubPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__activeSubPresenter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnboardingMenuPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnboardingMenuPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnboardingMenuPresenter_OnBackAction, "OnBackAction" }, // 1366235595
		{ &Z_Construct_UFunction_UOnboardingMenuPresenter_OnChangeAccountAction, "OnChangeAccountAction" }, // 2229348837
		{ &Z_Construct_UFunction_UOnboardingMenuPresenter_OnFirstOnboardingStepsDone, "OnFirstOnboardingStepsDone" }, // 2157058782
		{ &Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelected, "OnMenuTabSelected" }, // 3450308882
		{ &Z_Construct_UFunction_UOnboardingMenuPresenter_OnMenuTabSelectedAgain, "OnMenuTabSelectedAgain" }, // 3712020406
		{ &Z_Construct_UFunction_UOnboardingMenuPresenter_OnQuitGameAction, "OnQuitGameAction" }, // 993594898
		{ &Z_Construct_UFunction_UOnboardingMenuPresenter_OnSettingsAction, "OnSettingsAction" }, // 3607233215
		{ &Z_Construct_UFunction_UOnboardingMenuPresenter_OnSetUIEnabled, "OnSetUIEnabled" }, // 2122514545
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnboardingMenuPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnboardingMenuPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnboardingMenuPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnboardingMenuPresenter_Statics::NewProp_OnboardingMenuWidgetClass_MetaData[] = {
		{ "Category", "OnboardingMenuPresenter" },
		{ "ModuleRelativePath", "Public/OnboardingMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOnboardingMenuPresenter_Statics::NewProp_OnboardingMenuWidgetClass = { "OnboardingMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnboardingMenuPresenter, OnboardingMenuWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UOnboardingMenuPresenter_Statics::NewProp_OnboardingMenuWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnboardingMenuPresenter_Statics::NewProp_OnboardingMenuWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnboardingMenuPresenter_Statics::NewProp__onboardingTutorialSubPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnboardingMenuPresenter" },
		{ "ModuleRelativePath", "Public/OnboardingMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnboardingMenuPresenter_Statics::NewProp__onboardingTutorialSubPresenter = { "_onboardingTutorialSubPresenter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnboardingMenuPresenter, _onboardingTutorialSubPresenter), Z_Construct_UClass_UOnboardingTutorialSubPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnboardingMenuPresenter_Statics::NewProp__onboardingTutorialSubPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnboardingMenuPresenter_Statics::NewProp__onboardingTutorialSubPresenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnboardingMenuPresenter_Statics::NewProp__gameManualSubPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnboardingMenuPresenter" },
		{ "ModuleRelativePath", "Public/OnboardingMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnboardingMenuPresenter_Statics::NewProp__gameManualSubPresenter = { "_gameManualSubPresenter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnboardingMenuPresenter, _gameManualSubPresenter), Z_Construct_UClass_UGameManualSubPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnboardingMenuPresenter_Statics::NewProp__gameManualSubPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnboardingMenuPresenter_Statics::NewProp__gameManualSubPresenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnboardingMenuPresenter_Statics::NewProp__activeSubPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnboardingMenuPresenter" },
		{ "ModuleRelativePath", "Public/OnboardingMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnboardingMenuPresenter_Statics::NewProp__activeSubPresenter = { "_activeSubPresenter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnboardingMenuPresenter, _activeSubPresenter), Z_Construct_UClass_USubPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnboardingMenuPresenter_Statics::NewProp__activeSubPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnboardingMenuPresenter_Statics::NewProp__activeSubPresenter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnboardingMenuPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnboardingMenuPresenter_Statics::NewProp_OnboardingMenuWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnboardingMenuPresenter_Statics::NewProp__onboardingTutorialSubPresenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnboardingMenuPresenter_Statics::NewProp__gameManualSubPresenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnboardingMenuPresenter_Statics::NewProp__activeSubPresenter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnboardingMenuPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnboardingMenuPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnboardingMenuPresenter_Statics::ClassParams = {
		&UOnboardingMenuPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnboardingMenuPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnboardingMenuPresenter_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnboardingMenuPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnboardingMenuPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnboardingMenuPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnboardingMenuPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnboardingMenuPresenter, 1444231509);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UOnboardingMenuPresenter>()
	{
		return UOnboardingMenuPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnboardingMenuPresenter(Z_Construct_UClass_UOnboardingMenuPresenter, &UOnboardingMenuPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UOnboardingMenuPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnboardingMenuPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
