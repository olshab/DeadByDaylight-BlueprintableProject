// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/PlayerStatusViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStatusViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPlayerStatusViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPlayerStatusViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStatusViewData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EConnectionQuality();
// End Cross Module References
	DEFINE_FUNCTION(IPlayerStatusViewInterface::execClearData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerStatusViewInterface::execPlayHookEscapeFailedAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayHookEscapeFailedAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerStatusViewInterface::execPlayTimerAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayTimerAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerStatusViewInterface::execSetCampProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_GET_UBOOL(Z_Param_isLocalPlayerAKiller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCampProgress_Implementation(Z_Param_value,Z_Param_isLocalPlayerAKiller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerStatusViewInterface::execSetData)
	{
		P_GET_STRUCT_REF(FPlayerStatusViewData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData_Implementation(Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerStatusViewInterface::execSetKiller)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_killerTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetKiller_Implementation(Z_Param_killerTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerStatusViewInterface::execSetPlayerNameVisibility)
	{
		P_GET_UBOOL(Z_Param_visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerNameVisibility_Implementation(Z_Param_visible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerStatusViewInterface::execSetTimerProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_GET_UBOOL(Z_Param_isDeepWound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimerProgress_Implementation(Z_Param_value,Z_Param_isDeepWound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerStatusViewInterface::execTriggerAfflictionHit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerAfflictionHit_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerStatusViewInterface::execUpdateSurvivorSpecificPingIcon)
	{
		P_GET_ENUM_REF(EConnectionQuality,Z_Param_Out_connectionQuality);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSurvivorSpecificPingIcon_Implementation((EConnectionQuality&)(Z_Param_Out_connectionQuality));
		P_NATIVE_END;
	}
	void IPlayerStatusViewInterface::ClearData()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClearData instead.");
	}
	void IPlayerStatusViewInterface::EnableChasesMode(bool isChased)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EnableChasesMode instead.");
	}
	void IPlayerStatusViewInterface::HideSurvivorActivity()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HideSurvivorActivity instead.");
	}
	void IPlayerStatusViewInterface::PlayHookEscapeFailedAnimation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayHookEscapeFailedAnimation instead.");
	}
	void IPlayerStatusViewInterface::PlayTimerAnimation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayTimerAnimation instead.");
	}
	void IPlayerStatusViewInterface::SetCampProgress(float value, bool isLocalPlayerAKiller)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetCampProgress instead.");
	}
	void IPlayerStatusViewInterface::SetData(FPlayerStatusViewData const& data)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetData instead.");
	}
	void IPlayerStatusViewInterface::SetKiller(FGameplayTag killerTag)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetKiller instead.");
	}
	void IPlayerStatusViewInterface::SetPlayerNameVisibility(bool visible)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetPlayerNameVisibility instead.");
	}
	void IPlayerStatusViewInterface::SetTimerProgress(float value, bool isDeepWound)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetTimerProgress instead.");
	}
	void IPlayerStatusViewInterface::ShowSurvivorActivity(TSoftObjectPtr<UTexture2D> const& activityIcon, bool shouldDisplayProgress)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShowSurvivorActivity instead.");
	}
	void IPlayerStatusViewInterface::TriggerAfflictionHit()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TriggerAfflictionHit instead.");
	}
	void IPlayerStatusViewInterface::UpdateSurvivorActivityProgress(const float progress)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateSurvivorActivityProgress instead.");
	}
	void IPlayerStatusViewInterface::UpdateSurvivorSpecificPingIcon(EConnectionQuality const& connectionQuality)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateSurvivorSpecificPingIcon instead.");
	}
	void UPlayerStatusViewInterface::StaticRegisterNativesUPlayerStatusViewInterface()
	{
		UClass* Class = UPlayerStatusViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearData", &IPlayerStatusViewInterface::execClearData },
			{ "PlayHookEscapeFailedAnimation", &IPlayerStatusViewInterface::execPlayHookEscapeFailedAnimation },
			{ "PlayTimerAnimation", &IPlayerStatusViewInterface::execPlayTimerAnimation },
			{ "SetCampProgress", &IPlayerStatusViewInterface::execSetCampProgress },
			{ "SetData", &IPlayerStatusViewInterface::execSetData },
			{ "SetKiller", &IPlayerStatusViewInterface::execSetKiller },
			{ "SetPlayerNameVisibility", &IPlayerStatusViewInterface::execSetPlayerNameVisibility },
			{ "SetTimerProgress", &IPlayerStatusViewInterface::execSetTimerProgress },
			{ "TriggerAfflictionHit", &IPlayerStatusViewInterface::execTriggerAfflictionHit },
			{ "UpdateSurvivorSpecificPingIcon", &IPlayerStatusViewInterface::execUpdateSurvivorSpecificPingIcon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerStatusViewInterface_ClearData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatusViewInterface_ClearData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStatusViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStatusViewInterface_ClearData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStatusViewInterface, nullptr, "ClearData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStatusViewInterface_ClearData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_ClearData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerStatusViewInterface_ClearData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerStatusViewInterface_ClearData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerStatusViewInterface_EnableChasesMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isChased_MetaData[];
#endif
		static void NewProp_isChased_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isChased;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatusViewInterface_EnableChasesMode_Statics::NewProp_isChased_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPlayerStatusViewInterface_EnableChasesMode_Statics::NewProp_isChased_SetBit(void* Obj)
	{
		((PlayerStatusViewInterface_eventEnableChasesMode_Parms*)Obj)->isChased = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerStatusViewInterface_EnableChasesMode_Statics::NewProp_isChased = { "isChased", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerStatusViewInterface_eventEnableChasesMode_Parms), &Z_Construct_UFunction_UPlayerStatusViewInterface_EnableChasesMode_Statics::NewProp_isChased_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStatusViewInterface_EnableChasesMode_Statics::NewProp_isChased_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_EnableChasesMode_Statics::NewProp_isChased_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStatusViewInterface_EnableChasesMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStatusViewInterface_EnableChasesMode_Statics::NewProp_isChased,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatusViewInterface_EnableChasesMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStatusViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStatusViewInterface_EnableChasesMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStatusViewInterface, nullptr, "EnableChasesMode", nullptr, nullptr, sizeof(PlayerStatusViewInterface_eventEnableChasesMode_Parms), Z_Construct_UFunction_UPlayerStatusViewInterface_EnableChasesMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_EnableChasesMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStatusViewInterface_EnableChasesMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_EnableChasesMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerStatusViewInterface_EnableChasesMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerStatusViewInterface_EnableChasesMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerStatusViewInterface_HideSurvivorActivity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatusViewInterface_HideSurvivorActivity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStatusViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStatusViewInterface_HideSurvivorActivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStatusViewInterface, nullptr, "HideSurvivorActivity", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStatusViewInterface_HideSurvivorActivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_HideSurvivorActivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerStatusViewInterface_HideSurvivorActivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerStatusViewInterface_HideSurvivorActivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerStatusViewInterface_PlayHookEscapeFailedAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatusViewInterface_PlayHookEscapeFailedAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStatusViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStatusViewInterface_PlayHookEscapeFailedAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStatusViewInterface, nullptr, "PlayHookEscapeFailedAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStatusViewInterface_PlayHookEscapeFailedAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_PlayHookEscapeFailedAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerStatusViewInterface_PlayHookEscapeFailedAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerStatusViewInterface_PlayHookEscapeFailedAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerStatusViewInterface_PlayTimerAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatusViewInterface_PlayTimerAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStatusViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStatusViewInterface_PlayTimerAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStatusViewInterface, nullptr, "PlayTimerAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStatusViewInterface_PlayTimerAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_PlayTimerAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerStatusViewInterface_PlayTimerAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerStatusViewInterface_PlayTimerAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerStatusViewInterface_SetCampProgress_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static void NewProp_isLocalPlayerAKiller_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLocalPlayerAKiller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerStatusViewInterface_SetCampProgress_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStatusViewInterface_eventSetCampProgress_Parms, value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayerStatusViewInterface_SetCampProgress_Statics::NewProp_isLocalPlayerAKiller_SetBit(void* Obj)
	{
		((PlayerStatusViewInterface_eventSetCampProgress_Parms*)Obj)->isLocalPlayerAKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerStatusViewInterface_SetCampProgress_Statics::NewProp_isLocalPlayerAKiller = { "isLocalPlayerAKiller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerStatusViewInterface_eventSetCampProgress_Parms), &Z_Construct_UFunction_UPlayerStatusViewInterface_SetCampProgress_Statics::NewProp_isLocalPlayerAKiller_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStatusViewInterface_SetCampProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStatusViewInterface_SetCampProgress_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStatusViewInterface_SetCampProgress_Statics::NewProp_isLocalPlayerAKiller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatusViewInterface_SetCampProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStatusViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStatusViewInterface_SetCampProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStatusViewInterface, nullptr, "SetCampProgress", nullptr, nullptr, sizeof(PlayerStatusViewInterface_eventSetCampProgress_Parms), Z_Construct_UFunction_UPlayerStatusViewInterface_SetCampProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_SetCampProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStatusViewInterface_SetCampProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_SetCampProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerStatusViewInterface_SetCampProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerStatusViewInterface_SetCampProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerStatusViewInterface_SetData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatusViewInterface_SetData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerStatusViewInterface_SetData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStatusViewInterface_eventSetData_Parms, data), Z_Construct_UScriptStruct_FPlayerStatusViewData, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStatusViewInterface_SetData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_SetData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStatusViewInterface_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStatusViewInterface_SetData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatusViewInterface_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStatusViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStatusViewInterface_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStatusViewInterface, nullptr, "SetData", nullptr, nullptr, sizeof(PlayerStatusViewInterface_eventSetData_Parms), Z_Construct_UFunction_UPlayerStatusViewInterface_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStatusViewInterface_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerStatusViewInterface_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerStatusViewInterface_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerStatusViewInterface_SetKiller_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_killerTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerStatusViewInterface_SetKiller_Statics::NewProp_killerTag = { "killerTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStatusViewInterface_eventSetKiller_Parms, killerTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStatusViewInterface_SetKiller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStatusViewInterface_SetKiller_Statics::NewProp_killerTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatusViewInterface_SetKiller_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStatusViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStatusViewInterface_SetKiller_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStatusViewInterface, nullptr, "SetKiller", nullptr, nullptr, sizeof(PlayerStatusViewInterface_eventSetKiller_Parms), Z_Construct_UFunction_UPlayerStatusViewInterface_SetKiller_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_SetKiller_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStatusViewInterface_SetKiller_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_SetKiller_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerStatusViewInterface_SetKiller()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerStatusViewInterface_SetKiller_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerStatusViewInterface_SetPlayerNameVisibility_Statics
	{
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlayerStatusViewInterface_SetPlayerNameVisibility_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((PlayerStatusViewInterface_eventSetPlayerNameVisibility_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerStatusViewInterface_SetPlayerNameVisibility_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerStatusViewInterface_eventSetPlayerNameVisibility_Parms), &Z_Construct_UFunction_UPlayerStatusViewInterface_SetPlayerNameVisibility_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStatusViewInterface_SetPlayerNameVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStatusViewInterface_SetPlayerNameVisibility_Statics::NewProp_visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatusViewInterface_SetPlayerNameVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStatusViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStatusViewInterface_SetPlayerNameVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStatusViewInterface, nullptr, "SetPlayerNameVisibility", nullptr, nullptr, sizeof(PlayerStatusViewInterface_eventSetPlayerNameVisibility_Parms), Z_Construct_UFunction_UPlayerStatusViewInterface_SetPlayerNameVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_SetPlayerNameVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStatusViewInterface_SetPlayerNameVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_SetPlayerNameVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerStatusViewInterface_SetPlayerNameVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerStatusViewInterface_SetPlayerNameVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerStatusViewInterface_SetTimerProgress_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static void NewProp_isDeepWound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDeepWound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerStatusViewInterface_SetTimerProgress_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStatusViewInterface_eventSetTimerProgress_Parms, value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayerStatusViewInterface_SetTimerProgress_Statics::NewProp_isDeepWound_SetBit(void* Obj)
	{
		((PlayerStatusViewInterface_eventSetTimerProgress_Parms*)Obj)->isDeepWound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerStatusViewInterface_SetTimerProgress_Statics::NewProp_isDeepWound = { "isDeepWound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerStatusViewInterface_eventSetTimerProgress_Parms), &Z_Construct_UFunction_UPlayerStatusViewInterface_SetTimerProgress_Statics::NewProp_isDeepWound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStatusViewInterface_SetTimerProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStatusViewInterface_SetTimerProgress_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStatusViewInterface_SetTimerProgress_Statics::NewProp_isDeepWound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatusViewInterface_SetTimerProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStatusViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStatusViewInterface_SetTimerProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStatusViewInterface, nullptr, "SetTimerProgress", nullptr, nullptr, sizeof(PlayerStatusViewInterface_eventSetTimerProgress_Parms), Z_Construct_UFunction_UPlayerStatusViewInterface_SetTimerProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_SetTimerProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStatusViewInterface_SetTimerProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_SetTimerProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerStatusViewInterface_SetTimerProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerStatusViewInterface_SetTimerProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerStatusViewInterface_ShowSurvivorActivity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_activityIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_activityIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shouldDisplayProgress_MetaData[];
#endif
		static void NewProp_shouldDisplayProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shouldDisplayProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatusViewInterface_ShowSurvivorActivity_Statics::NewProp_activityIcon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UPlayerStatusViewInterface_ShowSurvivorActivity_Statics::NewProp_activityIcon = { "activityIcon", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStatusViewInterface_eventShowSurvivorActivity_Parms, activityIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStatusViewInterface_ShowSurvivorActivity_Statics::NewProp_activityIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_ShowSurvivorActivity_Statics::NewProp_activityIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatusViewInterface_ShowSurvivorActivity_Statics::NewProp_shouldDisplayProgress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPlayerStatusViewInterface_ShowSurvivorActivity_Statics::NewProp_shouldDisplayProgress_SetBit(void* Obj)
	{
		((PlayerStatusViewInterface_eventShowSurvivorActivity_Parms*)Obj)->shouldDisplayProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerStatusViewInterface_ShowSurvivorActivity_Statics::NewProp_shouldDisplayProgress = { "shouldDisplayProgress", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerStatusViewInterface_eventShowSurvivorActivity_Parms), &Z_Construct_UFunction_UPlayerStatusViewInterface_ShowSurvivorActivity_Statics::NewProp_shouldDisplayProgress_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStatusViewInterface_ShowSurvivorActivity_Statics::NewProp_shouldDisplayProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_ShowSurvivorActivity_Statics::NewProp_shouldDisplayProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStatusViewInterface_ShowSurvivorActivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStatusViewInterface_ShowSurvivorActivity_Statics::NewProp_activityIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStatusViewInterface_ShowSurvivorActivity_Statics::NewProp_shouldDisplayProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatusViewInterface_ShowSurvivorActivity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStatusViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStatusViewInterface_ShowSurvivorActivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStatusViewInterface, nullptr, "ShowSurvivorActivity", nullptr, nullptr, sizeof(PlayerStatusViewInterface_eventShowSurvivorActivity_Parms), Z_Construct_UFunction_UPlayerStatusViewInterface_ShowSurvivorActivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_ShowSurvivorActivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStatusViewInterface_ShowSurvivorActivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_ShowSurvivorActivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerStatusViewInterface_ShowSurvivorActivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerStatusViewInterface_ShowSurvivorActivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerStatusViewInterface_TriggerAfflictionHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatusViewInterface_TriggerAfflictionHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStatusViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStatusViewInterface_TriggerAfflictionHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStatusViewInterface, nullptr, "TriggerAfflictionHit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStatusViewInterface_TriggerAfflictionHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_TriggerAfflictionHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerStatusViewInterface_TriggerAfflictionHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerStatusViewInterface_TriggerAfflictionHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorActivityProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorActivityProgress_Statics::NewProp_progress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorActivityProgress_Statics::NewProp_progress = { "progress", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStatusViewInterface_eventUpdateSurvivorActivityProgress_Parms, progress), METADATA_PARAMS(Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorActivityProgress_Statics::NewProp_progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorActivityProgress_Statics::NewProp_progress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorActivityProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorActivityProgress_Statics::NewProp_progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorActivityProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStatusViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorActivityProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStatusViewInterface, nullptr, "UpdateSurvivorActivityProgress", nullptr, nullptr, sizeof(PlayerStatusViewInterface_eventUpdateSurvivorActivityProgress_Parms), Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorActivityProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorActivityProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorActivityProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorActivityProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorActivityProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorActivityProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorSpecificPingIcon_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_connectionQuality_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_connectionQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_connectionQuality;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorSpecificPingIcon_Statics::NewProp_connectionQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorSpecificPingIcon_Statics::NewProp_connectionQuality_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorSpecificPingIcon_Statics::NewProp_connectionQuality = { "connectionQuality", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStatusViewInterface_eventUpdateSurvivorSpecificPingIcon_Parms, connectionQuality), Z_Construct_UEnum_DBDSharedTypes_EConnectionQuality, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorSpecificPingIcon_Statics::NewProp_connectionQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorSpecificPingIcon_Statics::NewProp_connectionQuality_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorSpecificPingIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorSpecificPingIcon_Statics::NewProp_connectionQuality_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorSpecificPingIcon_Statics::NewProp_connectionQuality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorSpecificPingIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStatusViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorSpecificPingIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStatusViewInterface, nullptr, "UpdateSurvivorSpecificPingIcon", nullptr, nullptr, sizeof(PlayerStatusViewInterface_eventUpdateSurvivorSpecificPingIcon_Parms), Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorSpecificPingIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorSpecificPingIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorSpecificPingIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorSpecificPingIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorSpecificPingIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorSpecificPingIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerStatusViewInterface_NoRegister()
	{
		return UPlayerStatusViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerStatusViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerStatusViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerStatusViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerStatusViewInterface_ClearData, "ClearData" }, // 1589740178
		{ &Z_Construct_UFunction_UPlayerStatusViewInterface_EnableChasesMode, "EnableChasesMode" }, // 2196924037
		{ &Z_Construct_UFunction_UPlayerStatusViewInterface_HideSurvivorActivity, "HideSurvivorActivity" }, // 956414044
		{ &Z_Construct_UFunction_UPlayerStatusViewInterface_PlayHookEscapeFailedAnimation, "PlayHookEscapeFailedAnimation" }, // 2943110078
		{ &Z_Construct_UFunction_UPlayerStatusViewInterface_PlayTimerAnimation, "PlayTimerAnimation" }, // 952405987
		{ &Z_Construct_UFunction_UPlayerStatusViewInterface_SetCampProgress, "SetCampProgress" }, // 2604532226
		{ &Z_Construct_UFunction_UPlayerStatusViewInterface_SetData, "SetData" }, // 1079013909
		{ &Z_Construct_UFunction_UPlayerStatusViewInterface_SetKiller, "SetKiller" }, // 2528518575
		{ &Z_Construct_UFunction_UPlayerStatusViewInterface_SetPlayerNameVisibility, "SetPlayerNameVisibility" }, // 991746860
		{ &Z_Construct_UFunction_UPlayerStatusViewInterface_SetTimerProgress, "SetTimerProgress" }, // 1884332656
		{ &Z_Construct_UFunction_UPlayerStatusViewInterface_ShowSurvivorActivity, "ShowSurvivorActivity" }, // 171671596
		{ &Z_Construct_UFunction_UPlayerStatusViewInterface_TriggerAfflictionHit, "TriggerAfflictionHit" }, // 3144848374
		{ &Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorActivityProgress, "UpdateSurvivorActivityProgress" }, // 3721266461
		{ &Z_Construct_UFunction_UPlayerStatusViewInterface_UpdateSurvivorSpecificPingIcon, "UpdateSurvivorSpecificPingIcon" }, // 441970349
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStatusViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerStatusViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlayerStatusViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerStatusViewInterface_Statics::ClassParams = {
		&UPlayerStatusViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayerStatusViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatusViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerStatusViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerStatusViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerStatusViewInterface, 846723439);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UPlayerStatusViewInterface>()
	{
		return UPlayerStatusViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerStatusViewInterface(Z_Construct_UClass_UPlayerStatusViewInterface, &UPlayerStatusViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UPlayerStatusViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerStatusViewInterface);
	static FName NAME_UPlayerStatusViewInterface_ClearData = FName(TEXT("ClearData"));
	void IPlayerStatusViewInterface::Execute_ClearData(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerStatusViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPlayerStatusViewInterface_ClearData);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPlayerStatusViewInterface*)(O->GetNativeInterfaceAddress(UPlayerStatusViewInterface::StaticClass())))
		{
			I->ClearData_Implementation();
		}
	}
	static FName NAME_UPlayerStatusViewInterface_EnableChasesMode = FName(TEXT("EnableChasesMode"));
	void IPlayerStatusViewInterface::Execute_EnableChasesMode(UObject* O, bool isChased)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerStatusViewInterface::StaticClass()));
		PlayerStatusViewInterface_eventEnableChasesMode_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerStatusViewInterface_EnableChasesMode);
		if (Func)
		{
			Parms.isChased=isChased;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UPlayerStatusViewInterface_HideSurvivorActivity = FName(TEXT("HideSurvivorActivity"));
	void IPlayerStatusViewInterface::Execute_HideSurvivorActivity(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerStatusViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPlayerStatusViewInterface_HideSurvivorActivity);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_UPlayerStatusViewInterface_PlayHookEscapeFailedAnimation = FName(TEXT("PlayHookEscapeFailedAnimation"));
	void IPlayerStatusViewInterface::Execute_PlayHookEscapeFailedAnimation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerStatusViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPlayerStatusViewInterface_PlayHookEscapeFailedAnimation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPlayerStatusViewInterface*)(O->GetNativeInterfaceAddress(UPlayerStatusViewInterface::StaticClass())))
		{
			I->PlayHookEscapeFailedAnimation_Implementation();
		}
	}
	static FName NAME_UPlayerStatusViewInterface_PlayTimerAnimation = FName(TEXT("PlayTimerAnimation"));
	void IPlayerStatusViewInterface::Execute_PlayTimerAnimation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerStatusViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPlayerStatusViewInterface_PlayTimerAnimation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPlayerStatusViewInterface*)(O->GetNativeInterfaceAddress(UPlayerStatusViewInterface::StaticClass())))
		{
			I->PlayTimerAnimation_Implementation();
		}
	}
	static FName NAME_UPlayerStatusViewInterface_SetCampProgress = FName(TEXT("SetCampProgress"));
	void IPlayerStatusViewInterface::Execute_SetCampProgress(UObject* O, float value, bool isLocalPlayerAKiller)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerStatusViewInterface::StaticClass()));
		PlayerStatusViewInterface_eventSetCampProgress_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerStatusViewInterface_SetCampProgress);
		if (Func)
		{
			Parms.value=value;
			Parms.isLocalPlayerAKiller=isLocalPlayerAKiller;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerStatusViewInterface*)(O->GetNativeInterfaceAddress(UPlayerStatusViewInterface::StaticClass())))
		{
			I->SetCampProgress_Implementation(value,isLocalPlayerAKiller);
		}
	}
	static FName NAME_UPlayerStatusViewInterface_SetData = FName(TEXT("SetData"));
	void IPlayerStatusViewInterface::Execute_SetData(UObject* O, FPlayerStatusViewData const& data)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerStatusViewInterface::StaticClass()));
		PlayerStatusViewInterface_eventSetData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerStatusViewInterface_SetData);
		if (Func)
		{
			Parms.data=data;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerStatusViewInterface*)(O->GetNativeInterfaceAddress(UPlayerStatusViewInterface::StaticClass())))
		{
			I->SetData_Implementation(data);
		}
	}
	static FName NAME_UPlayerStatusViewInterface_SetKiller = FName(TEXT("SetKiller"));
	void IPlayerStatusViewInterface::Execute_SetKiller(UObject* O, FGameplayTag killerTag)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerStatusViewInterface::StaticClass()));
		PlayerStatusViewInterface_eventSetKiller_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerStatusViewInterface_SetKiller);
		if (Func)
		{
			Parms.killerTag=killerTag;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerStatusViewInterface*)(O->GetNativeInterfaceAddress(UPlayerStatusViewInterface::StaticClass())))
		{
			I->SetKiller_Implementation(killerTag);
		}
	}
	static FName NAME_UPlayerStatusViewInterface_SetPlayerNameVisibility = FName(TEXT("SetPlayerNameVisibility"));
	void IPlayerStatusViewInterface::Execute_SetPlayerNameVisibility(UObject* O, bool visible)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerStatusViewInterface::StaticClass()));
		PlayerStatusViewInterface_eventSetPlayerNameVisibility_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerStatusViewInterface_SetPlayerNameVisibility);
		if (Func)
		{
			Parms.visible=visible;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerStatusViewInterface*)(O->GetNativeInterfaceAddress(UPlayerStatusViewInterface::StaticClass())))
		{
			I->SetPlayerNameVisibility_Implementation(visible);
		}
	}
	static FName NAME_UPlayerStatusViewInterface_SetTimerProgress = FName(TEXT("SetTimerProgress"));
	void IPlayerStatusViewInterface::Execute_SetTimerProgress(UObject* O, float value, bool isDeepWound)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerStatusViewInterface::StaticClass()));
		PlayerStatusViewInterface_eventSetTimerProgress_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerStatusViewInterface_SetTimerProgress);
		if (Func)
		{
			Parms.value=value;
			Parms.isDeepWound=isDeepWound;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerStatusViewInterface*)(O->GetNativeInterfaceAddress(UPlayerStatusViewInterface::StaticClass())))
		{
			I->SetTimerProgress_Implementation(value,isDeepWound);
		}
	}
	static FName NAME_UPlayerStatusViewInterface_ShowSurvivorActivity = FName(TEXT("ShowSurvivorActivity"));
	void IPlayerStatusViewInterface::Execute_ShowSurvivorActivity(UObject* O, TSoftObjectPtr<UTexture2D> const& activityIcon, bool shouldDisplayProgress)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerStatusViewInterface::StaticClass()));
		PlayerStatusViewInterface_eventShowSurvivorActivity_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerStatusViewInterface_ShowSurvivorActivity);
		if (Func)
		{
			Parms.activityIcon=activityIcon;
			Parms.shouldDisplayProgress=shouldDisplayProgress;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UPlayerStatusViewInterface_TriggerAfflictionHit = FName(TEXT("TriggerAfflictionHit"));
	void IPlayerStatusViewInterface::Execute_TriggerAfflictionHit(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerStatusViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPlayerStatusViewInterface_TriggerAfflictionHit);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPlayerStatusViewInterface*)(O->GetNativeInterfaceAddress(UPlayerStatusViewInterface::StaticClass())))
		{
			I->TriggerAfflictionHit_Implementation();
		}
	}
	static FName NAME_UPlayerStatusViewInterface_UpdateSurvivorActivityProgress = FName(TEXT("UpdateSurvivorActivityProgress"));
	void IPlayerStatusViewInterface::Execute_UpdateSurvivorActivityProgress(UObject* O, const float progress)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerStatusViewInterface::StaticClass()));
		PlayerStatusViewInterface_eventUpdateSurvivorActivityProgress_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerStatusViewInterface_UpdateSurvivorActivityProgress);
		if (Func)
		{
			Parms.progress=progress;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UPlayerStatusViewInterface_UpdateSurvivorSpecificPingIcon = FName(TEXT("UpdateSurvivorSpecificPingIcon"));
	void IPlayerStatusViewInterface::Execute_UpdateSurvivorSpecificPingIcon(UObject* O, EConnectionQuality const& connectionQuality)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerStatusViewInterface::StaticClass()));
		PlayerStatusViewInterface_eventUpdateSurvivorSpecificPingIcon_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerStatusViewInterface_UpdateSurvivorSpecificPingIcon);
		if (Func)
		{
			Parms.connectionQuality=connectionQuality;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerStatusViewInterface*)(O->GetNativeInterfaceAddress(UPlayerStatusViewInterface::StaticClass())))
		{
			I->UpdateSurvivorSpecificPingIcon_Implementation(connectionQuality);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
