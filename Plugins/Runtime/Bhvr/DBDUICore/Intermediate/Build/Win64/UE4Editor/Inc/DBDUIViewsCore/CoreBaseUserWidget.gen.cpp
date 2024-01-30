// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreBaseUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreBaseUserWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EControlMode();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EUMGSequencePlayMode();
	UMG_API UClass* Z_Construct_UClass_UScaleBox_NoRegister();
	DBDUIMANAGERS_API UEnum* Z_Construct_UEnum_DBDUIManagers_EScaleType();
	DBDINPUT_API UClass* Z_Construct_UClass_UDBDInputManager_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UCoreBaseViewInterface_NoRegister();
	DBDINPUT_API UClass* Z_Construct_UClass_UInteractiveWidgetInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreBaseUserWidget::execDeregisterFromInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeregisterFromInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreBaseUserWidget::execGetAnimationByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_animName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidgetAnimation**)Z_Param__Result=P_THIS->GetAnimationByName(Z_Param_animName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreBaseUserWidget::execPlayAnimationByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_animName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_starttime);
		P_GET_PROPERTY(FIntProperty,Z_Param_loopcount);
		P_GET_PROPERTY(FByteProperty,Z_Param_playMode);
		P_GET_PROPERTY(FFloatProperty,Z_Param_playbackspeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PlayAnimationByName(Z_Param_animName,Z_Param_starttime,Z_Param_loopcount,EUMGSequencePlayMode::Type(Z_Param_playMode),Z_Param_playbackspeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreBaseUserWidget::execRegisterForInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterForInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreBaseUserWidget::execStopAnimationByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_animName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StopAnimationByName(Z_Param_animName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreBaseUserWidget::execUpdateScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateScale_Implementation(Z_Param_scale);
		P_NATIVE_END;
	}
	static FName NAME_UCoreBaseUserWidget_OnControlModeChangedBP = FName(TEXT("OnControlModeChangedBP"));
	void UCoreBaseUserWidget::OnControlModeChangedBP(EControlMode controlMode)
	{
		CoreBaseUserWidget_eventOnControlModeChangedBP_Parms Parms;
		Parms.controlMode=controlMode;
		ProcessEvent(FindFunctionChecked(NAME_UCoreBaseUserWidget_OnControlModeChangedBP),&Parms);
	}
	static FName NAME_UCoreBaseUserWidget_UpdateScale = FName(TEXT("UpdateScale"));
	void UCoreBaseUserWidget::UpdateScale(float scale)
	{
		CoreBaseUserWidget_eventUpdateScale_Parms Parms;
		Parms.scale=scale;
		ProcessEvent(FindFunctionChecked(NAME_UCoreBaseUserWidget_UpdateScale),&Parms);
	}
	void UCoreBaseUserWidget::StaticRegisterNativesUCoreBaseUserWidget()
	{
		UClass* Class = UCoreBaseUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeregisterFromInput", &UCoreBaseUserWidget::execDeregisterFromInput },
			{ "GetAnimationByName", &UCoreBaseUserWidget::execGetAnimationByName },
			{ "PlayAnimationByName", &UCoreBaseUserWidget::execPlayAnimationByName },
			{ "RegisterForInput", &UCoreBaseUserWidget::execRegisterForInput },
			{ "StopAnimationByName", &UCoreBaseUserWidget::execStopAnimationByName },
			{ "UpdateScale", &UCoreBaseUserWidget::execUpdateScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreBaseUserWidget_DeregisterFromInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBaseUserWidget_DeregisterFromInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreBaseUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreBaseUserWidget_DeregisterFromInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreBaseUserWidget, nullptr, "DeregisterFromInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreBaseUserWidget_DeregisterFromInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBaseUserWidget_DeregisterFromInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreBaseUserWidget_DeregisterFromInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreBaseUserWidget_DeregisterFromInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreBaseUserWidget_GetAnimationByName_Statics
	{
		struct CoreBaseUserWidget_eventGetAnimationByName_Parms
		{
			FName animName;
			UWidgetAnimation* ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_animName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCoreBaseUserWidget_GetAnimationByName_Statics::NewProp_animName = { "animName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreBaseUserWidget_eventGetAnimationByName_Parms, animName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreBaseUserWidget_GetAnimationByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreBaseUserWidget_eventGetAnimationByName_Parms, ReturnValue), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreBaseUserWidget_GetAnimationByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBaseUserWidget_GetAnimationByName_Statics::NewProp_animName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBaseUserWidget_GetAnimationByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBaseUserWidget_GetAnimationByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreBaseUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreBaseUserWidget_GetAnimationByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreBaseUserWidget, nullptr, "GetAnimationByName", nullptr, nullptr, sizeof(CoreBaseUserWidget_eventGetAnimationByName_Parms), Z_Construct_UFunction_UCoreBaseUserWidget_GetAnimationByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBaseUserWidget_GetAnimationByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreBaseUserWidget_GetAnimationByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBaseUserWidget_GetAnimationByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreBaseUserWidget_GetAnimationByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreBaseUserWidget_GetAnimationByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreBaseUserWidget_OnControlModeChangedBP_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_controlMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_controlMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreBaseUserWidget_OnControlModeChangedBP_Statics::NewProp_controlMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreBaseUserWidget_OnControlModeChangedBP_Statics::NewProp_controlMode = { "controlMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreBaseUserWidget_eventOnControlModeChangedBP_Parms, controlMode), Z_Construct_UEnum_DBDSharedTypes_EControlMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreBaseUserWidget_OnControlModeChangedBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBaseUserWidget_OnControlModeChangedBP_Statics::NewProp_controlMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBaseUserWidget_OnControlModeChangedBP_Statics::NewProp_controlMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBaseUserWidget_OnControlModeChangedBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreBaseUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreBaseUserWidget_OnControlModeChangedBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreBaseUserWidget, nullptr, "OnControlModeChangedBP", nullptr, nullptr, sizeof(CoreBaseUserWidget_eventOnControlModeChangedBP_Parms), Z_Construct_UFunction_UCoreBaseUserWidget_OnControlModeChangedBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBaseUserWidget_OnControlModeChangedBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreBaseUserWidget_OnControlModeChangedBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBaseUserWidget_OnControlModeChangedBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreBaseUserWidget_OnControlModeChangedBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreBaseUserWidget_OnControlModeChangedBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreBaseUserWidget_PlayAnimationByName_Statics
	{
		struct CoreBaseUserWidget_eventPlayAnimationByName_Parms
		{
			FName animName;
			float starttime;
			int32 loopcount;
			TEnumAsByte<EUMGSequencePlayMode::Type> playMode;
			float playbackspeed;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_animName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_starttime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_loopcount;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_playMode;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_playbackspeed;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCoreBaseUserWidget_PlayAnimationByName_Statics::NewProp_animName = { "animName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreBaseUserWidget_eventPlayAnimationByName_Parms, animName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoreBaseUserWidget_PlayAnimationByName_Statics::NewProp_starttime = { "starttime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreBaseUserWidget_eventPlayAnimationByName_Parms, starttime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreBaseUserWidget_PlayAnimationByName_Statics::NewProp_loopcount = { "loopcount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreBaseUserWidget_eventPlayAnimationByName_Parms, loopcount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreBaseUserWidget_PlayAnimationByName_Statics::NewProp_playMode = { "playMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreBaseUserWidget_eventPlayAnimationByName_Parms, playMode), Z_Construct_UEnum_UMG_EUMGSequencePlayMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoreBaseUserWidget_PlayAnimationByName_Statics::NewProp_playbackspeed = { "playbackspeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreBaseUserWidget_eventPlayAnimationByName_Parms, playbackspeed), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoreBaseUserWidget_PlayAnimationByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoreBaseUserWidget_eventPlayAnimationByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreBaseUserWidget_PlayAnimationByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreBaseUserWidget_eventPlayAnimationByName_Parms), &Z_Construct_UFunction_UCoreBaseUserWidget_PlayAnimationByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreBaseUserWidget_PlayAnimationByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBaseUserWidget_PlayAnimationByName_Statics::NewProp_animName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBaseUserWidget_PlayAnimationByName_Statics::NewProp_starttime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBaseUserWidget_PlayAnimationByName_Statics::NewProp_loopcount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBaseUserWidget_PlayAnimationByName_Statics::NewProp_playMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBaseUserWidget_PlayAnimationByName_Statics::NewProp_playbackspeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBaseUserWidget_PlayAnimationByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBaseUserWidget_PlayAnimationByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreBaseUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreBaseUserWidget_PlayAnimationByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreBaseUserWidget, nullptr, "PlayAnimationByName", nullptr, nullptr, sizeof(CoreBaseUserWidget_eventPlayAnimationByName_Parms), Z_Construct_UFunction_UCoreBaseUserWidget_PlayAnimationByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBaseUserWidget_PlayAnimationByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreBaseUserWidget_PlayAnimationByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBaseUserWidget_PlayAnimationByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreBaseUserWidget_PlayAnimationByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreBaseUserWidget_PlayAnimationByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreBaseUserWidget_RegisterForInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBaseUserWidget_RegisterForInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreBaseUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreBaseUserWidget_RegisterForInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreBaseUserWidget, nullptr, "RegisterForInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreBaseUserWidget_RegisterForInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBaseUserWidget_RegisterForInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreBaseUserWidget_RegisterForInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreBaseUserWidget_RegisterForInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreBaseUserWidget_StopAnimationByName_Statics
	{
		struct CoreBaseUserWidget_eventStopAnimationByName_Parms
		{
			FName animName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_animName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCoreBaseUserWidget_StopAnimationByName_Statics::NewProp_animName = { "animName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreBaseUserWidget_eventStopAnimationByName_Parms, animName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoreBaseUserWidget_StopAnimationByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoreBaseUserWidget_eventStopAnimationByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreBaseUserWidget_StopAnimationByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreBaseUserWidget_eventStopAnimationByName_Parms), &Z_Construct_UFunction_UCoreBaseUserWidget_StopAnimationByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreBaseUserWidget_StopAnimationByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBaseUserWidget_StopAnimationByName_Statics::NewProp_animName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBaseUserWidget_StopAnimationByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBaseUserWidget_StopAnimationByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreBaseUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreBaseUserWidget_StopAnimationByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreBaseUserWidget, nullptr, "StopAnimationByName", nullptr, nullptr, sizeof(CoreBaseUserWidget_eventStopAnimationByName_Parms), Z_Construct_UFunction_UCoreBaseUserWidget_StopAnimationByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBaseUserWidget_StopAnimationByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreBaseUserWidget_StopAnimationByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBaseUserWidget_StopAnimationByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreBaseUserWidget_StopAnimationByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreBaseUserWidget_StopAnimationByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreBaseUserWidget_UpdateScale_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoreBaseUserWidget_UpdateScale_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreBaseUserWidget_eventUpdateScale_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreBaseUserWidget_UpdateScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBaseUserWidget_UpdateScale_Statics::NewProp_scale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBaseUserWidget_UpdateScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreBaseUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreBaseUserWidget_UpdateScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreBaseUserWidget, nullptr, "UpdateScale", nullptr, nullptr, sizeof(CoreBaseUserWidget_eventUpdateScale_Parms), Z_Construct_UFunction_UCoreBaseUserWidget_UpdateScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBaseUserWidget_UpdateScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreBaseUserWidget_UpdateScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBaseUserWidget_UpdateScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreBaseUserWidget_UpdateScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreBaseUserWidget_UpdateScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreBaseUserWidget_NoRegister()
	{
		return UCoreBaseUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreBaseUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScaleContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInteractive_MetaData[];
#endif
		static void NewProp_IsInteractive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInteractive;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__controlMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__controlMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__controlMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScaleType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScaleType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inputManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__inputManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__animationMap_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__animationMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animationMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__animationMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreBaseUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreBaseUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreBaseUserWidget_DeregisterFromInput, "DeregisterFromInput" }, // 4011613444
		{ &Z_Construct_UFunction_UCoreBaseUserWidget_GetAnimationByName, "GetAnimationByName" }, // 2710692113
		{ &Z_Construct_UFunction_UCoreBaseUserWidget_OnControlModeChangedBP, "OnControlModeChangedBP" }, // 2227153658
		{ &Z_Construct_UFunction_UCoreBaseUserWidget_PlayAnimationByName, "PlayAnimationByName" }, // 177309467
		{ &Z_Construct_UFunction_UCoreBaseUserWidget_RegisterForInput, "RegisterForInput" }, // 3067195055
		{ &Z_Construct_UFunction_UCoreBaseUserWidget_StopAnimationByName, "StopAnimationByName" }, // 1886897518
		{ &Z_Construct_UFunction_UCoreBaseUserWidget_UpdateScale, "UpdateScale" }, // 1176360738
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBaseUserWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreBaseUserWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreBaseUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp_ScaleContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreBaseUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreBaseUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp_ScaleContainer = { "ScaleContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreBaseUserWidget, ScaleContainer), Z_Construct_UClass_UScaleBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp_ScaleContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp_ScaleContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp_IsInteractive_MetaData[] = {
		{ "Category", "CoreBaseUserWidget" },
		{ "ModuleRelativePath", "Public/CoreBaseUserWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp_IsInteractive_SetBit(void* Obj)
	{
		((UCoreBaseUserWidget*)Obj)->IsInteractive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp_IsInteractive = { "IsInteractive", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreBaseUserWidget), &Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp_IsInteractive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp_IsInteractive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp_IsInteractive_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp__controlMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp__controlMode_MetaData[] = {
		{ "Category", "CoreBaseUserWidget" },
		{ "ModuleRelativePath", "Public/CoreBaseUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp__controlMode = { "_controlMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreBaseUserWidget, _controlMode), Z_Construct_UEnum_DBDSharedTypes_EControlMode, METADATA_PARAMS(Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp__controlMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp__controlMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp_ScaleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp_ScaleType_MetaData[] = {
		{ "Category", "CoreBaseUserWidget" },
		{ "ModuleRelativePath", "Public/CoreBaseUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp_ScaleType = { "ScaleType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreBaseUserWidget, ScaleType), Z_Construct_UEnum_DBDUIManagers_EScaleType, METADATA_PARAMS(Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp_ScaleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp_ScaleType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp__inputManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreBaseUserWidget" },
		{ "ModuleRelativePath", "Public/CoreBaseUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp__inputManager = { "_inputManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreBaseUserWidget, _inputManager), Z_Construct_UClass_UDBDInputManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp__inputManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp__inputManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp__animationMap_ValueProp = { "_animationMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp__animationMap_Key_KeyProp = { "_animationMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp__animationMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreBaseUserWidget" },
		{ "ModuleRelativePath", "Public/CoreBaseUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp__animationMap = { "_animationMap", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreBaseUserWidget, _animationMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp__animationMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp__animationMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreBaseUserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp_ScaleContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp_IsInteractive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp__controlMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp__controlMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp_ScaleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp_ScaleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp__inputManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp__animationMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp__animationMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBaseUserWidget_Statics::NewProp__animationMap,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreBaseUserWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCoreBaseViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreBaseUserWidget, ICoreBaseViewInterface), false },
			{ Z_Construct_UClass_UInteractiveWidgetInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreBaseUserWidget, IInteractiveWidgetInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreBaseUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreBaseUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreBaseUserWidget_Statics::ClassParams = {
		&UCoreBaseUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreBaseUserWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBaseUserWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreBaseUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBaseUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreBaseUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreBaseUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreBaseUserWidget, 3394172525);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreBaseUserWidget>()
	{
		return UCoreBaseUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreBaseUserWidget(Z_Construct_UClass_UCoreBaseUserWidget, &UCoreBaseUserWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreBaseUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreBaseUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
