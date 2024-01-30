// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreStoryLevelsSelectorWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreStoryLevelsSelectorWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoryLevelsSelectorWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonSelector();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoryLevelButtonWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveStoryLevelViewData_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EArchivesStoryLevelStatus();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UGridPanel_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreStoryLevelsSelectorWidget::execAdaptButtonsPoolToData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_dataNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdaptButtonsPoolToData(Z_Param_dataNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoryLevelsSelectorWidget::execGetStoryLevelButton)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_level);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCoreStoryLevelButtonWidget**)Z_Param__Result=P_THIS->GetStoryLevelButton(Z_Param_level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoryLevelsSelectorWidget::execOnStoryLevelUnlockedAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStoryLevelUnlockedAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoryLevelsSelectorWidget::execSetData)
	{
		P_GET_TARRAY_REF(UArchiveStoryLevelViewData*,Z_Param_Out_levelbuttonsData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_Out_levelbuttonsData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoryLevelsSelectorWidget::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoryLevelsSelectorWidget::execSetUpInteractionMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpInteractionMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoryLevelsSelectorWidget::execUpdateLevelStatus)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_level);
		P_GET_ENUM(EArchivesStoryLevelStatus,Z_Param_status);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLevelStatus(Z_Param_level,EArchivesStoryLevelStatus(Z_Param_status));
		P_NATIVE_END;
	}
	static FName NAME_UCoreStoryLevelsSelectorWidget_UpdateVisual = FName(TEXT("UpdateVisual"));
	void UCoreStoryLevelsSelectorWidget::UpdateVisual(EArchivesStoryLevelStatus globalStatus, bool playAnimation)
	{
		CoreStoryLevelsSelectorWidget_eventUpdateVisual_Parms Parms;
		Parms.globalStatus=globalStatus;
		Parms.playAnimation=playAnimation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreStoryLevelsSelectorWidget_UpdateVisual),&Parms);
	}
	void UCoreStoryLevelsSelectorWidget::StaticRegisterNativesUCoreStoryLevelsSelectorWidget()
	{
		UClass* Class = UCoreStoryLevelsSelectorWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdaptButtonsPoolToData", &UCoreStoryLevelsSelectorWidget::execAdaptButtonsPoolToData },
			{ "GetStoryLevelButton", &UCoreStoryLevelsSelectorWidget::execGetStoryLevelButton },
			{ "OnStoryLevelUnlockedAnimation", &UCoreStoryLevelsSelectorWidget::execOnStoryLevelUnlockedAnimation },
			{ "SetData", &UCoreStoryLevelsSelectorWidget::execSetData },
			{ "SetEnabled", &UCoreStoryLevelsSelectorWidget::execSetEnabled },
			{ "SetUpInteractionMode", &UCoreStoryLevelsSelectorWidget::execSetUpInteractionMode },
			{ "UpdateLevelStatus", &UCoreStoryLevelsSelectorWidget::execUpdateLevelStatus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_AdaptButtonsPoolToData_Statics
	{
		struct CoreStoryLevelsSelectorWidget_eventAdaptButtonsPoolToData_Parms
		{
			int32 dataNumber;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_dataNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_AdaptButtonsPoolToData_Statics::NewProp_dataNumber = { "dataNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoryLevelsSelectorWidget_eventAdaptButtonsPoolToData_Parms, dataNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_AdaptButtonsPoolToData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_AdaptButtonsPoolToData_Statics::NewProp_dataNumber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_AdaptButtonsPoolToData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoryLevelsSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_AdaptButtonsPoolToData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoryLevelsSelectorWidget, nullptr, "AdaptButtonsPoolToData", nullptr, nullptr, sizeof(CoreStoryLevelsSelectorWidget_eventAdaptButtonsPoolToData_Parms), Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_AdaptButtonsPoolToData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_AdaptButtonsPoolToData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_AdaptButtonsPoolToData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_AdaptButtonsPoolToData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_AdaptButtonsPoolToData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_AdaptButtonsPoolToData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_GetStoryLevelButton_Statics
	{
		struct CoreStoryLevelsSelectorWidget_eventGetStoryLevelButton_Parms
		{
			int32 level;
			UCoreStoryLevelButtonWidget* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_GetStoryLevelButton_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoryLevelsSelectorWidget_eventGetStoryLevelButton_Parms, level), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_GetStoryLevelButton_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_GetStoryLevelButton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoryLevelsSelectorWidget_eventGetStoryLevelButton_Parms, ReturnValue), Z_Construct_UClass_UCoreStoryLevelButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_GetStoryLevelButton_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_GetStoryLevelButton_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_GetStoryLevelButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_GetStoryLevelButton_Statics::NewProp_level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_GetStoryLevelButton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_GetStoryLevelButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoryLevelsSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_GetStoryLevelButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoryLevelsSelectorWidget, nullptr, "GetStoryLevelButton", nullptr, nullptr, sizeof(CoreStoryLevelsSelectorWidget_eventGetStoryLevelButton_Parms), Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_GetStoryLevelButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_GetStoryLevelButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_GetStoryLevelButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_GetStoryLevelButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_GetStoryLevelButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_GetStoryLevelButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_OnStoryLevelUnlockedAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_OnStoryLevelUnlockedAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoryLevelsSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_OnStoryLevelUnlockedAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoryLevelsSelectorWidget, nullptr, "OnStoryLevelUnlockedAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_OnStoryLevelUnlockedAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_OnStoryLevelUnlockedAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_OnStoryLevelUnlockedAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_OnStoryLevelUnlockedAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetData_Statics
	{
		struct CoreStoryLevelsSelectorWidget_eventSetData_Parms
		{
			TArray<UArchiveStoryLevelViewData*> levelbuttonsData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_levelbuttonsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_levelbuttonsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_levelbuttonsData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetData_Statics::NewProp_levelbuttonsData_Inner = { "levelbuttonsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UArchiveStoryLevelViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetData_Statics::NewProp_levelbuttonsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetData_Statics::NewProp_levelbuttonsData = { "levelbuttonsData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoryLevelsSelectorWidget_eventSetData_Parms, levelbuttonsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetData_Statics::NewProp_levelbuttonsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetData_Statics::NewProp_levelbuttonsData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetData_Statics::NewProp_levelbuttonsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetData_Statics::NewProp_levelbuttonsData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoryLevelsSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoryLevelsSelectorWidget, nullptr, "SetData", nullptr, nullptr, sizeof(CoreStoryLevelsSelectorWidget_eventSetData_Parms), Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetEnabled_Statics
	{
		struct CoreStoryLevelsSelectorWidget_eventSetEnabled_Parms
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
	void Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetEnabled_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((CoreStoryLevelsSelectorWidget_eventSetEnabled_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetEnabled_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreStoryLevelsSelectorWidget_eventSetEnabled_Parms), &Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetEnabled_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetEnabled_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoryLevelsSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoryLevelsSelectorWidget, nullptr, "SetEnabled", nullptr, nullptr, sizeof(CoreStoryLevelsSelectorWidget_eventSetEnabled_Parms), Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetUpInteractionMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetUpInteractionMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoryLevelsSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetUpInteractionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoryLevelsSelectorWidget, nullptr, "SetUpInteractionMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetUpInteractionMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetUpInteractionMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetUpInteractionMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetUpInteractionMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateLevelStatus_Statics
	{
		struct CoreStoryLevelsSelectorWidget_eventUpdateLevelStatus_Parms
		{
			int32 level;
			EArchivesStoryLevelStatus status;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_level;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_status_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_status_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateLevelStatus_Statics::NewProp_level_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateLevelStatus_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoryLevelsSelectorWidget_eventUpdateLevelStatus_Parms, level), METADATA_PARAMS(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateLevelStatus_Statics::NewProp_level_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateLevelStatus_Statics::NewProp_level_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateLevelStatus_Statics::NewProp_status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateLevelStatus_Statics::NewProp_status_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateLevelStatus_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoryLevelsSelectorWidget_eventUpdateLevelStatus_Parms, status), Z_Construct_UEnum_DBDSharedTypes_EArchivesStoryLevelStatus, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateLevelStatus_Statics::NewProp_status_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateLevelStatus_Statics::NewProp_status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateLevelStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateLevelStatus_Statics::NewProp_level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateLevelStatus_Statics::NewProp_status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateLevelStatus_Statics::NewProp_status,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateLevelStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoryLevelsSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateLevelStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoryLevelsSelectorWidget, nullptr, "UpdateLevelStatus", nullptr, nullptr, sizeof(CoreStoryLevelsSelectorWidget_eventUpdateLevelStatus_Parms), Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateLevelStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateLevelStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateLevelStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateLevelStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateLevelStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateLevelStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateVisual_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_globalStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_globalStatus;
		static void NewProp_playAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_playAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateVisual_Statics::NewProp_globalStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateVisual_Statics::NewProp_globalStatus = { "globalStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoryLevelsSelectorWidget_eventUpdateVisual_Parms, globalStatus), Z_Construct_UEnum_DBDSharedTypes_EArchivesStoryLevelStatus, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateVisual_Statics::NewProp_playAnimation_SetBit(void* Obj)
	{
		((CoreStoryLevelsSelectorWidget_eventUpdateVisual_Parms*)Obj)->playAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateVisual_Statics::NewProp_playAnimation = { "playAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreStoryLevelsSelectorWidget_eventUpdateVisual_Parms), &Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateVisual_Statics::NewProp_playAnimation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateVisual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateVisual_Statics::NewProp_globalStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateVisual_Statics::NewProp_globalStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateVisual_Statics::NewProp_playAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateVisual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoryLevelsSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateVisual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoryLevelsSelectorWidget, nullptr, "UpdateVisual", nullptr, nullptr, sizeof(CoreStoryLevelsSelectorWidget_eventUpdateVisual_Parms), Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateVisual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateVisual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateVisual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateVisual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateVisual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateVisual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_NoRegister()
	{
		return UCoreStoryLevelsSelectorWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsReadOnly_MetaData[];
#endif
		static void NewProp_IsReadOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsReadOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoreStoryLevelButtonWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CoreStoryLevelButtonWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelButtonsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelButtonsContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousLevelInputSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousLevelInputSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextLevelInputSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NextLevelInputSwitcher;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__levelButtonsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__levelButtonsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__levelButtonsData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreButtonSelector,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_AdaptButtonsPoolToData, "AdaptButtonsPoolToData" }, // 157802806
		{ &Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_GetStoryLevelButton, "GetStoryLevelButton" }, // 2342382231
		{ &Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_OnStoryLevelUnlockedAnimation, "OnStoryLevelUnlockedAnimation" }, // 2013308933
		{ &Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetData, "SetData" }, // 467187476
		{ &Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetEnabled, "SetEnabled" }, // 267337586
		{ &Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_SetUpInteractionMode, "SetUpInteractionMode" }, // 2187555879
		{ &Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateLevelStatus, "UpdateLevelStatus" }, // 3568277145
		{ &Z_Construct_UFunction_UCoreStoryLevelsSelectorWidget_UpdateVisual, "UpdateVisual" }, // 4159614089
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreStoryLevelsSelectorWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreStoryLevelsSelectorWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_IsReadOnly_MetaData[] = {
		{ "Category", "CoreStoryLevelsSelectorWidget" },
		{ "ModuleRelativePath", "Public/CoreStoryLevelsSelectorWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_IsReadOnly_SetBit(void* Obj)
	{
		((UCoreStoryLevelsSelectorWidget*)Obj)->IsReadOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_IsReadOnly = { "IsReadOnly", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreStoryLevelsSelectorWidget), &Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_IsReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_IsReadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_IsReadOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_CoreStoryLevelButtonWidgetClass_MetaData[] = {
		{ "Category", "CoreStoryLevelsSelectorWidget" },
		{ "ModuleRelativePath", "Public/CoreStoryLevelsSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_CoreStoryLevelButtonWidgetClass = { "CoreStoryLevelButtonWidgetClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoryLevelsSelectorWidget, CoreStoryLevelButtonWidgetClass), Z_Construct_UClass_UCoreStoryLevelButtonWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_CoreStoryLevelButtonWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_CoreStoryLevelButtonWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_LevelButtonsContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoryLevelsSelectorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoryLevelsSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_LevelButtonsContainer = { "LevelButtonsContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoryLevelsSelectorWidget, LevelButtonsContainer), Z_Construct_UClass_UGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_LevelButtonsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_LevelButtonsContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_PreviousLevelInputSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoryLevelsSelectorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoryLevelsSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_PreviousLevelInputSwitcher = { "PreviousLevelInputSwitcher", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoryLevelsSelectorWidget, PreviousLevelInputSwitcher), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_PreviousLevelInputSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_PreviousLevelInputSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_NextLevelInputSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoryLevelsSelectorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoryLevelsSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_NextLevelInputSwitcher = { "NextLevelInputSwitcher", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoryLevelsSelectorWidget, NextLevelInputSwitcher), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_NextLevelInputSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_NextLevelInputSwitcher_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp__levelButtonsData_Inner = { "_levelButtonsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UArchiveStoryLevelViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp__levelButtonsData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreStoryLevelsSelectorWidget" },
		{ "ModuleRelativePath", "Public/CoreStoryLevelsSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp__levelButtonsData = { "_levelButtonsData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoryLevelsSelectorWidget, _levelButtonsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp__levelButtonsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp__levelButtonsData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_IsReadOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_CoreStoryLevelButtonWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_LevelButtonsContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_PreviousLevelInputSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp_NextLevelInputSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp__levelButtonsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::NewProp__levelButtonsData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStoryLevelsSelectorWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::ClassParams = {
		&UCoreStoryLevelsSelectorWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreStoryLevelsSelectorWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreStoryLevelsSelectorWidget, 3037798354);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreStoryLevelsSelectorWidget>()
	{
		return UCoreStoryLevelsSelectorWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreStoryLevelsSelectorWidget(Z_Construct_UClass_UCoreStoryLevelsSelectorWidget, &UCoreStoryLevelsSelectorWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreStoryLevelsSelectorWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStoryLevelsSelectorWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
