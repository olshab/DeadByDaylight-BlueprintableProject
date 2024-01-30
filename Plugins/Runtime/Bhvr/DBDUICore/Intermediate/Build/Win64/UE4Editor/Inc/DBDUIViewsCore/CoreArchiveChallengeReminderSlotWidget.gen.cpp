// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreArchiveChallengeReminderSlotWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreArchiveChallengeReminderSlotWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveQuestNodeWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreOnHoverBorderWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreArchiveChallengeReminderSlotWidget::execClearData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveChallengeReminderSlotWidget::execInit)
	{
		P_GET_ENUM(EPlayerRole,Z_Param_role);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(EPlayerRole(Z_Param_role));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveChallengeReminderSlotWidget::execSetData)
	{
		P_GET_STRUCT_REF(FArchiveChallengeReminderViewData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveChallengeReminderSlotWidget::execSetSlotSelectorState)
	{
		P_GET_UBOOL(Z_Param_isSelectorOpen);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSlotSelectorState(Z_Param_isSelectorOpen);
		P_NATIVE_END;
	}
	static FName NAME_UCoreArchiveChallengeReminderSlotWidget_InitVisualState = FName(TEXT("InitVisualState"));
	void UCoreArchiveChallengeReminderSlotWidget::InitVisualState()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveChallengeReminderSlotWidget_InitVisualState),NULL);
	}
	static FName NAME_UCoreArchiveChallengeReminderSlotWidget_SetQuestNodeHoverEffect = FName(TEXT("SetQuestNodeHoverEffect"));
	void UCoreArchiveChallengeReminderSlotWidget::SetQuestNodeHoverEffect(bool isHovered)
	{
		CoreArchiveChallengeReminderSlotWidget_eventSetQuestNodeHoverEffect_Parms Parms;
		Parms.isHovered=isHovered ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveChallengeReminderSlotWidget_SetQuestNodeHoverEffect),&Parms);
	}
	static FName NAME_UCoreArchiveChallengeReminderSlotWidget_SwapChallenge = FName(TEXT("SwapChallenge"));
	void UCoreArchiveChallengeReminderSlotWidget::SwapChallenge(FArchiveChallengeReminderViewData const& data)
	{
		CoreArchiveChallengeReminderSlotWidget_eventSwapChallenge_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveChallengeReminderSlotWidget_SwapChallenge),&Parms);
	}
	static FName NAME_UCoreArchiveChallengeReminderSlotWidget_UpdateActiveState = FName(TEXT("UpdateActiveState"));
	void UCoreArchiveChallengeReminderSlotWidget::UpdateActiveState(bool isActive, bool playAnimation)
	{
		CoreArchiveChallengeReminderSlotWidget_eventUpdateActiveState_Parms Parms;
		Parms.isActive=isActive ? true : false;
		Parms.playAnimation=playAnimation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveChallengeReminderSlotWidget_UpdateActiveState),&Parms);
	}
	static FName NAME_UCoreArchiveChallengeReminderSlotWidget_UpdateProgressBar = FName(TEXT("UpdateProgressBar"));
	void UCoreArchiveChallengeReminderSlotWidget::UpdateProgressBar(float progress)
	{
		CoreArchiveChallengeReminderSlotWidget_eventUpdateProgressBar_Parms Parms;
		Parms.progress=progress;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveChallengeReminderSlotWidget_UpdateProgressBar),&Parms);
	}
	static FName NAME_UCoreArchiveChallengeReminderSlotWidget_UpdateVisualState = FName(TEXT("UpdateVisualState"));
	void UCoreArchiveChallengeReminderSlotWidget::UpdateVisualState(FArchiveChallengeReminderViewData const& data)
	{
		CoreArchiveChallengeReminderSlotWidget_eventUpdateVisualState_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveChallengeReminderSlotWidget_UpdateVisualState),&Parms);
	}
	void UCoreArchiveChallengeReminderSlotWidget::StaticRegisterNativesUCoreArchiveChallengeReminderSlotWidget()
	{
		UClass* Class = UCoreArchiveChallengeReminderSlotWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearData", &UCoreArchiveChallengeReminderSlotWidget::execClearData },
			{ "Init", &UCoreArchiveChallengeReminderSlotWidget::execInit },
			{ "SetData", &UCoreArchiveChallengeReminderSlotWidget::execSetData },
			{ "SetSlotSelectorState", &UCoreArchiveChallengeReminderSlotWidget::execSetSlotSelectorState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_ClearData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_ClearData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveChallengeReminderSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_ClearData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget, nullptr, "ClearData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_ClearData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_ClearData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_ClearData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_ClearData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_Init_Statics
	{
		struct CoreArchiveChallengeReminderSlotWidget_eventInit_Parms
		{
			EPlayerRole role;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_role_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_role;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_Init_Statics::NewProp_role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_Init_Statics::NewProp_role = { "role", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveChallengeReminderSlotWidget_eventInit_Parms, role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_Init_Statics::NewProp_role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_Init_Statics::NewProp_role,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveChallengeReminderSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget, nullptr, "Init", nullptr, nullptr, sizeof(CoreArchiveChallengeReminderSlotWidget_eventInit_Parms), Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_InitVisualState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_InitVisualState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveChallengeReminderSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_InitVisualState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget, nullptr, "InitVisualState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_InitVisualState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_InitVisualState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_InitVisualState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_InitVisualState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetData_Statics
	{
		struct CoreArchiveChallengeReminderSlotWidget_eventSetData_Parms
		{
			FArchiveChallengeReminderViewData data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveChallengeReminderSlotWidget_eventSetData_Parms, data), Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveChallengeReminderSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget, nullptr, "SetData", nullptr, nullptr, sizeof(CoreArchiveChallengeReminderSlotWidget_eventSetData_Parms), Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetQuestNodeHoverEffect_Statics
	{
		static void NewProp_isHovered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isHovered;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetQuestNodeHoverEffect_Statics::NewProp_isHovered_SetBit(void* Obj)
	{
		((CoreArchiveChallengeReminderSlotWidget_eventSetQuestNodeHoverEffect_Parms*)Obj)->isHovered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetQuestNodeHoverEffect_Statics::NewProp_isHovered = { "isHovered", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveChallengeReminderSlotWidget_eventSetQuestNodeHoverEffect_Parms), &Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetQuestNodeHoverEffect_Statics::NewProp_isHovered_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetQuestNodeHoverEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetQuestNodeHoverEffect_Statics::NewProp_isHovered,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetQuestNodeHoverEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveChallengeReminderSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetQuestNodeHoverEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget, nullptr, "SetQuestNodeHoverEffect", nullptr, nullptr, sizeof(CoreArchiveChallengeReminderSlotWidget_eventSetQuestNodeHoverEffect_Parms), Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetQuestNodeHoverEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetQuestNodeHoverEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetQuestNodeHoverEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetQuestNodeHoverEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetQuestNodeHoverEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetQuestNodeHoverEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetSlotSelectorState_Statics
	{
		struct CoreArchiveChallengeReminderSlotWidget_eventSetSlotSelectorState_Parms
		{
			bool isSelectorOpen;
		};
		static void NewProp_isSelectorOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSelectorOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetSlotSelectorState_Statics::NewProp_isSelectorOpen_SetBit(void* Obj)
	{
		((CoreArchiveChallengeReminderSlotWidget_eventSetSlotSelectorState_Parms*)Obj)->isSelectorOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetSlotSelectorState_Statics::NewProp_isSelectorOpen = { "isSelectorOpen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveChallengeReminderSlotWidget_eventSetSlotSelectorState_Parms), &Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetSlotSelectorState_Statics::NewProp_isSelectorOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetSlotSelectorState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetSlotSelectorState_Statics::NewProp_isSelectorOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetSlotSelectorState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveChallengeReminderSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetSlotSelectorState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget, nullptr, "SetSlotSelectorState", nullptr, nullptr, sizeof(CoreArchiveChallengeReminderSlotWidget_eventSetSlotSelectorState_Parms), Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetSlotSelectorState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetSlotSelectorState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetSlotSelectorState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetSlotSelectorState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetSlotSelectorState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetSlotSelectorState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SwapChallenge_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SwapChallenge_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SwapChallenge_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveChallengeReminderSlotWidget_eventSwapChallenge_Parms, data), Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SwapChallenge_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SwapChallenge_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SwapChallenge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SwapChallenge_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SwapChallenge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveChallengeReminderSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SwapChallenge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget, nullptr, "SwapChallenge", nullptr, nullptr, sizeof(CoreArchiveChallengeReminderSlotWidget_eventSwapChallenge_Parms), Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SwapChallenge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SwapChallenge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SwapChallenge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SwapChallenge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SwapChallenge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SwapChallenge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateActiveState_Statics
	{
		static void NewProp_isActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isActive;
		static void NewProp_playAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_playAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateActiveState_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((CoreArchiveChallengeReminderSlotWidget_eventUpdateActiveState_Parms*)Obj)->isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateActiveState_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveChallengeReminderSlotWidget_eventUpdateActiveState_Parms), &Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateActiveState_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateActiveState_Statics::NewProp_playAnimation_SetBit(void* Obj)
	{
		((CoreArchiveChallengeReminderSlotWidget_eventUpdateActiveState_Parms*)Obj)->playAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateActiveState_Statics::NewProp_playAnimation = { "playAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveChallengeReminderSlotWidget_eventUpdateActiveState_Parms), &Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateActiveState_Statics::NewProp_playAnimation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateActiveState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateActiveState_Statics::NewProp_isActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateActiveState_Statics::NewProp_playAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateActiveState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveChallengeReminderSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateActiveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget, nullptr, "UpdateActiveState", nullptr, nullptr, sizeof(CoreArchiveChallengeReminderSlotWidget_eventUpdateActiveState_Parms), Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateActiveState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateActiveState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateActiveState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateActiveState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateActiveState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateActiveState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateProgressBar_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateProgressBar_Statics::NewProp_progress = { "progress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveChallengeReminderSlotWidget_eventUpdateProgressBar_Parms, progress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateProgressBar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateProgressBar_Statics::NewProp_progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateProgressBar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveChallengeReminderSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateProgressBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget, nullptr, "UpdateProgressBar", nullptr, nullptr, sizeof(CoreArchiveChallengeReminderSlotWidget_eventUpdateProgressBar_Parms), Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateProgressBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateProgressBar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateProgressBar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateProgressBar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateProgressBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateProgressBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateVisualState_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateVisualState_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateVisualState_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveChallengeReminderSlotWidget_eventUpdateVisualState_Parms, data), Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateVisualState_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateVisualState_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateVisualState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateVisualState_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateVisualState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveChallengeReminderSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateVisualState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget, nullptr, "UpdateVisualState", nullptr, nullptr, sizeof(CoreArchiveChallengeReminderSlotWidget_eventUpdateVisualState_Parms), Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateVisualState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateVisualState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateVisualState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateVisualState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateVisualState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateVisualState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_NoRegister()
	{
		return UCoreArchiveChallengeReminderSlotWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptySlotImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmptySlotImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactiveBG_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InactiveBG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveBG_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveBG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmokeBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SmokeBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectorHighlight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectorHighlight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitleTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubtitleTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactiveTitleTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InactiveTitleTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactiveSubtitleTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InactiveSubtitleTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHoverBorder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnHoverBorder;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__slotRole_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__slotRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__slotRole;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasActiveHoverEffect_MetaData[];
#endif
		static void NewProp__hasActiveHoverEffect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasActiveHoverEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreSelectableButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_ClearData, "ClearData" }, // 1247028015
		{ &Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_Init, "Init" }, // 751484738
		{ &Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_InitVisualState, "InitVisualState" }, // 275537059
		{ &Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetData, "SetData" }, // 4110481938
		{ &Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetQuestNodeHoverEffect, "SetQuestNodeHoverEffect" }, // 3049331094
		{ &Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SetSlotSelectorState, "SetSlotSelectorState" }, // 3476778545
		{ &Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_SwapChallenge, "SwapChallenge" }, // 3730943818
		{ &Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateActiveState, "UpdateActiveState" }, // 1588877647
		{ &Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateProgressBar, "UpdateProgressBar" }, // 4194334055
		{ &Z_Construct_UFunction_UCoreArchiveChallengeReminderSlotWidget_UpdateVisualState, "UpdateVisualState" }, // 966182992
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreArchiveChallengeReminderSlotWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveChallengeReminderSlotWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_Node_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveChallengeReminderSlotWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveChallengeReminderSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, Node), Z_Construct_UClass_UCoreArchiveQuestNodeWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_Node_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_EmptySlotImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveChallengeReminderSlotWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveChallengeReminderSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_EmptySlotImage = { "EmptySlotImage", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, EmptySlotImage), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_EmptySlotImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_EmptySlotImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_InactiveBG_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveChallengeReminderSlotWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveChallengeReminderSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_InactiveBG = { "InactiveBG", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, InactiveBG), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_InactiveBG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_InactiveBG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_ActiveBG_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveChallengeReminderSlotWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveChallengeReminderSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_ActiveBG = { "ActiveBG", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, ActiveBG), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_ActiveBG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_ActiveBG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_SmokeBackground_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveChallengeReminderSlotWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveChallengeReminderSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_SmokeBackground = { "SmokeBackground", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, SmokeBackground), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_SmokeBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_SmokeBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_ProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveChallengeReminderSlotWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveChallengeReminderSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_ProgressBar = { "ProgressBar", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, ProgressBar), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_ProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_ProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_SelectorHighlight_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveChallengeReminderSlotWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveChallengeReminderSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_SelectorHighlight = { "SelectorHighlight", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, SelectorHighlight), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_SelectorHighlight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_SelectorHighlight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_TitleTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveChallengeReminderSlotWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveChallengeReminderSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_TitleTB = { "TitleTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, TitleTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_TitleTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_TitleTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_SubtitleTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveChallengeReminderSlotWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveChallengeReminderSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_SubtitleTB = { "SubtitleTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, SubtitleTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_SubtitleTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_SubtitleTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_InactiveTitleTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveChallengeReminderSlotWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveChallengeReminderSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_InactiveTitleTB = { "InactiveTitleTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, InactiveTitleTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_InactiveTitleTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_InactiveTitleTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_InactiveSubtitleTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveChallengeReminderSlotWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveChallengeReminderSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_InactiveSubtitleTB = { "InactiveSubtitleTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, InactiveSubtitleTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_InactiveSubtitleTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_InactiveSubtitleTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_OnHoverBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveChallengeReminderSlotWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveChallengeReminderSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_OnHoverBorder = { "OnHoverBorder", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, OnHoverBorder), Z_Construct_UClass_UCoreOnHoverBorderWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_OnHoverBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_OnHoverBorder_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp__slotRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp__slotRole_MetaData[] = {
		{ "Category", "CoreArchiveChallengeReminderSlotWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveChallengeReminderSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp__slotRole = { "_slotRole", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveChallengeReminderSlotWidget, _slotRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp__slotRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp__slotRole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp__hasActiveHoverEffect_MetaData[] = {
		{ "Category", "CoreArchiveChallengeReminderSlotWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveChallengeReminderSlotWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp__hasActiveHoverEffect_SetBit(void* Obj)
	{
		((UCoreArchiveChallengeReminderSlotWidget*)Obj)->_hasActiveHoverEffect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp__hasActiveHoverEffect = { "_hasActiveHoverEffect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreArchiveChallengeReminderSlotWidget), &Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp__hasActiveHoverEffect_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp__hasActiveHoverEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp__hasActiveHoverEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_Node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_EmptySlotImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_InactiveBG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_ActiveBG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_SmokeBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_ProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_SelectorHighlight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_TitleTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_SubtitleTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_InactiveTitleTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_InactiveSubtitleTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp_OnHoverBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp__slotRole_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp__slotRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::NewProp__hasActiveHoverEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreArchiveChallengeReminderSlotWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::ClassParams = {
		&UCoreArchiveChallengeReminderSlotWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreArchiveChallengeReminderSlotWidget, 1871687468);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreArchiveChallengeReminderSlotWidget>()
	{
		return UCoreArchiveChallengeReminderSlotWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreArchiveChallengeReminderSlotWidget(Z_Construct_UClass_UCoreArchiveChallengeReminderSlotWidget, &UCoreArchiveChallengeReminderSlotWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreArchiveChallengeReminderSlotWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreArchiveChallengeReminderSlotWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
