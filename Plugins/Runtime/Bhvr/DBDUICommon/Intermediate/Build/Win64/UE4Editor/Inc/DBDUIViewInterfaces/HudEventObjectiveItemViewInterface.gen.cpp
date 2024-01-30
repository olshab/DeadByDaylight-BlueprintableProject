// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/HudEventObjectiveItemViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudEventObjectiveItemViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UHudEventObjectiveItemViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UHudEventObjectiveItemViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EEventObjectiveItemState();
// End Cross Module References
	DEFINE_FUNCTION(IHudEventObjectiveItemViewInterface::execClearData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudEventObjectiveItemViewInterface::execInitWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitWidget_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudEventObjectiveItemViewInterface::execSetAvailableCharges)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_charges);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxCharges);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAvailableCharges_Implementation(Z_Param_charges,Z_Param_maxCharges);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudEventObjectiveItemViewInterface::execSetChargePercentage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_chargePercent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChargePercentage_Implementation(Z_Param_chargePercent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudEventObjectiveItemViewInterface::execSetCooldownPercentage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_cooldownPercent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCooldownPercentage_Implementation(Z_Param_cooldownPercent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudEventObjectiveItemViewInterface::execSetInputKey)
	{
		P_GET_STRUCT(FKey,Z_Param_inputKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputKey_Implementation(Z_Param_inputKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudEventObjectiveItemViewInterface::execSetWidgetData)
	{
		P_GET_ENUM(EEventObjectiveItemState,Z_Param_eventItemState);
		P_GET_PROPERTY(FIntProperty,Z_Param_charges);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxCharges);
		P_GET_PROPERTY(FFloatProperty,Z_Param_chargePercent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetData_Implementation(EEventObjectiveItemState(Z_Param_eventItemState),Z_Param_charges,Z_Param_maxCharges,Z_Param_chargePercent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudEventObjectiveItemViewInterface::execSetWidgetState)
	{
		P_GET_ENUM(EEventObjectiveItemState,Z_Param_eventItemState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetState_Implementation(EEventObjectiveItemState(Z_Param_eventItemState));
		P_NATIVE_END;
	}
	void IHudEventObjectiveItemViewInterface::ClearData()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClearData instead.");
	}
	void IHudEventObjectiveItemViewInterface::InitWidget()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InitWidget instead.");
	}
	void IHudEventObjectiveItemViewInterface::SetAvailableCharges(const int32 charges, const int32 maxCharges)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetAvailableCharges instead.");
	}
	void IHudEventObjectiveItemViewInterface::SetChargePercentage(const float chargePercent)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetChargePercentage instead.");
	}
	void IHudEventObjectiveItemViewInterface::SetCooldownPercentage(const float cooldownPercent)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetCooldownPercentage instead.");
	}
	void IHudEventObjectiveItemViewInterface::SetInputKey(const FKey inputKey)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetInputKey instead.");
	}
	void IHudEventObjectiveItemViewInterface::SetWidgetData(const EEventObjectiveItemState eventItemState, const int32 charges, const int32 maxCharges, const float chargePercent)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetWidgetData instead.");
	}
	void IHudEventObjectiveItemViewInterface::SetWidgetState(const EEventObjectiveItemState eventItemState)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetWidgetState instead.");
	}
	void UHudEventObjectiveItemViewInterface::StaticRegisterNativesUHudEventObjectiveItemViewInterface()
	{
		UClass* Class = UHudEventObjectiveItemViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearData", &IHudEventObjectiveItemViewInterface::execClearData },
			{ "InitWidget", &IHudEventObjectiveItemViewInterface::execInitWidget },
			{ "SetAvailableCharges", &IHudEventObjectiveItemViewInterface::execSetAvailableCharges },
			{ "SetChargePercentage", &IHudEventObjectiveItemViewInterface::execSetChargePercentage },
			{ "SetCooldownPercentage", &IHudEventObjectiveItemViewInterface::execSetCooldownPercentage },
			{ "SetInputKey", &IHudEventObjectiveItemViewInterface::execSetInputKey },
			{ "SetWidgetData", &IHudEventObjectiveItemViewInterface::execSetWidgetData },
			{ "SetWidgetState", &IHudEventObjectiveItemViewInterface::execSetWidgetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_ClearData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_ClearData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudEventObjectiveItemViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_ClearData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudEventObjectiveItemViewInterface, nullptr, "ClearData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_ClearData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_ClearData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_ClearData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_ClearData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_InitWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_InitWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudEventObjectiveItemViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_InitWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudEventObjectiveItemViewInterface, nullptr, "InitWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_InitWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_InitWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_InitWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_InitWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetAvailableCharges_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_charges_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_charges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxCharges_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxCharges;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetAvailableCharges_Statics::NewProp_charges_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetAvailableCharges_Statics::NewProp_charges = { "charges", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudEventObjectiveItemViewInterface_eventSetAvailableCharges_Parms, charges), METADATA_PARAMS(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetAvailableCharges_Statics::NewProp_charges_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetAvailableCharges_Statics::NewProp_charges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetAvailableCharges_Statics::NewProp_maxCharges_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetAvailableCharges_Statics::NewProp_maxCharges = { "maxCharges", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudEventObjectiveItemViewInterface_eventSetAvailableCharges_Parms, maxCharges), METADATA_PARAMS(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetAvailableCharges_Statics::NewProp_maxCharges_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetAvailableCharges_Statics::NewProp_maxCharges_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetAvailableCharges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetAvailableCharges_Statics::NewProp_charges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetAvailableCharges_Statics::NewProp_maxCharges,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetAvailableCharges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudEventObjectiveItemViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetAvailableCharges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudEventObjectiveItemViewInterface, nullptr, "SetAvailableCharges", nullptr, nullptr, sizeof(HudEventObjectiveItemViewInterface_eventSetAvailableCharges_Parms), Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetAvailableCharges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetAvailableCharges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetAvailableCharges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetAvailableCharges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetAvailableCharges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetAvailableCharges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetChargePercentage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chargePercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_chargePercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetChargePercentage_Statics::NewProp_chargePercent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetChargePercentage_Statics::NewProp_chargePercent = { "chargePercent", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudEventObjectiveItemViewInterface_eventSetChargePercentage_Parms, chargePercent), METADATA_PARAMS(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetChargePercentage_Statics::NewProp_chargePercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetChargePercentage_Statics::NewProp_chargePercent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetChargePercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetChargePercentage_Statics::NewProp_chargePercent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetChargePercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudEventObjectiveItemViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetChargePercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudEventObjectiveItemViewInterface, nullptr, "SetChargePercentage", nullptr, nullptr, sizeof(HudEventObjectiveItemViewInterface_eventSetChargePercentage_Parms), Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetChargePercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetChargePercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetChargePercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetChargePercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetChargePercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetChargePercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetCooldownPercentage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cooldownPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_cooldownPercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetCooldownPercentage_Statics::NewProp_cooldownPercent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetCooldownPercentage_Statics::NewProp_cooldownPercent = { "cooldownPercent", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudEventObjectiveItemViewInterface_eventSetCooldownPercentage_Parms, cooldownPercent), METADATA_PARAMS(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetCooldownPercentage_Statics::NewProp_cooldownPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetCooldownPercentage_Statics::NewProp_cooldownPercent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetCooldownPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetCooldownPercentage_Statics::NewProp_cooldownPercent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetCooldownPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudEventObjectiveItemViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetCooldownPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudEventObjectiveItemViewInterface, nullptr, "SetCooldownPercentage", nullptr, nullptr, sizeof(HudEventObjectiveItemViewInterface_eventSetCooldownPercentage_Parms), Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetCooldownPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetCooldownPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetCooldownPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetCooldownPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetCooldownPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetCooldownPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetInputKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inputKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetInputKey_Statics::NewProp_inputKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetInputKey_Statics::NewProp_inputKey = { "inputKey", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudEventObjectiveItemViewInterface_eventSetInputKey_Parms, inputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetInputKey_Statics::NewProp_inputKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetInputKey_Statics::NewProp_inputKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetInputKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetInputKey_Statics::NewProp_inputKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetInputKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudEventObjectiveItemViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudEventObjectiveItemViewInterface, nullptr, "SetInputKey", nullptr, nullptr, sizeof(HudEventObjectiveItemViewInterface_eventSetInputKey_Parms), Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetInputKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetInputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetInputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eventItemState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eventItemState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eventItemState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_charges_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_charges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxCharges_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxCharges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chargePercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_chargePercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::NewProp_eventItemState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::NewProp_eventItemState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::NewProp_eventItemState = { "eventItemState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudEventObjectiveItemViewInterface_eventSetWidgetData_Parms, eventItemState), Z_Construct_UEnum_DBDSharedTypes_EEventObjectiveItemState, METADATA_PARAMS(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::NewProp_eventItemState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::NewProp_eventItemState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::NewProp_charges_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::NewProp_charges = { "charges", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudEventObjectiveItemViewInterface_eventSetWidgetData_Parms, charges), METADATA_PARAMS(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::NewProp_charges_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::NewProp_charges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::NewProp_maxCharges_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::NewProp_maxCharges = { "maxCharges", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudEventObjectiveItemViewInterface_eventSetWidgetData_Parms, maxCharges), METADATA_PARAMS(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::NewProp_maxCharges_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::NewProp_maxCharges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::NewProp_chargePercent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::NewProp_chargePercent = { "chargePercent", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudEventObjectiveItemViewInterface_eventSetWidgetData_Parms, chargePercent), METADATA_PARAMS(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::NewProp_chargePercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::NewProp_chargePercent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::NewProp_eventItemState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::NewProp_eventItemState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::NewProp_charges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::NewProp_maxCharges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::NewProp_chargePercent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudEventObjectiveItemViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudEventObjectiveItemViewInterface, nullptr, "SetWidgetData", nullptr, nullptr, sizeof(HudEventObjectiveItemViewInterface_eventSetWidgetData_Parms), Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eventItemState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eventItemState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eventItemState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetState_Statics::NewProp_eventItemState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetState_Statics::NewProp_eventItemState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetState_Statics::NewProp_eventItemState = { "eventItemState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudEventObjectiveItemViewInterface_eventSetWidgetState_Parms, eventItemState), Z_Construct_UEnum_DBDSharedTypes_EEventObjectiveItemState, METADATA_PARAMS(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetState_Statics::NewProp_eventItemState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetState_Statics::NewProp_eventItemState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetState_Statics::NewProp_eventItemState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetState_Statics::NewProp_eventItemState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudEventObjectiveItemViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudEventObjectiveItemViewInterface, nullptr, "SetWidgetState", nullptr, nullptr, sizeof(HudEventObjectiveItemViewInterface_eventSetWidgetState_Parms), Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHudEventObjectiveItemViewInterface_NoRegister()
	{
		return UHudEventObjectiveItemViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UHudEventObjectiveItemViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHudEventObjectiveItemViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHudEventObjectiveItemViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_ClearData, "ClearData" }, // 3040592748
		{ &Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_InitWidget, "InitWidget" }, // 1766633243
		{ &Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetAvailableCharges, "SetAvailableCharges" }, // 534009561
		{ &Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetChargePercentage, "SetChargePercentage" }, // 2511856707
		{ &Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetCooldownPercentage, "SetCooldownPercentage" }, // 3871671461
		{ &Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetInputKey, "SetInputKey" }, // 1884607508
		{ &Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetData, "SetWidgetData" }, // 2521365718
		{ &Z_Construct_UFunction_UHudEventObjectiveItemViewInterface_SetWidgetState, "SetWidgetState" }, // 3206037054
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudEventObjectiveItemViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HudEventObjectiveItemViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHudEventObjectiveItemViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHudEventObjectiveItemViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHudEventObjectiveItemViewInterface_Statics::ClassParams = {
		&UHudEventObjectiveItemViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHudEventObjectiveItemViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHudEventObjectiveItemViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHudEventObjectiveItemViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHudEventObjectiveItemViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHudEventObjectiveItemViewInterface, 2082926585);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UHudEventObjectiveItemViewInterface>()
	{
		return UHudEventObjectiveItemViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHudEventObjectiveItemViewInterface(Z_Construct_UClass_UHudEventObjectiveItemViewInterface, &UHudEventObjectiveItemViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UHudEventObjectiveItemViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudEventObjectiveItemViewInterface);
	static FName NAME_UHudEventObjectiveItemViewInterface_ClearData = FName(TEXT("ClearData"));
	void IHudEventObjectiveItemViewInterface::Execute_ClearData(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudEventObjectiveItemViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UHudEventObjectiveItemViewInterface_ClearData);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IHudEventObjectiveItemViewInterface*)(O->GetNativeInterfaceAddress(UHudEventObjectiveItemViewInterface::StaticClass())))
		{
			I->ClearData_Implementation();
		}
	}
	static FName NAME_UHudEventObjectiveItemViewInterface_InitWidget = FName(TEXT("InitWidget"));
	void IHudEventObjectiveItemViewInterface::Execute_InitWidget(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudEventObjectiveItemViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UHudEventObjectiveItemViewInterface_InitWidget);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IHudEventObjectiveItemViewInterface*)(O->GetNativeInterfaceAddress(UHudEventObjectiveItemViewInterface::StaticClass())))
		{
			I->InitWidget_Implementation();
		}
	}
	static FName NAME_UHudEventObjectiveItemViewInterface_SetAvailableCharges = FName(TEXT("SetAvailableCharges"));
	void IHudEventObjectiveItemViewInterface::Execute_SetAvailableCharges(UObject* O, const int32 charges, const int32 maxCharges)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudEventObjectiveItemViewInterface::StaticClass()));
		HudEventObjectiveItemViewInterface_eventSetAvailableCharges_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudEventObjectiveItemViewInterface_SetAvailableCharges);
		if (Func)
		{
			Parms.charges=charges;
			Parms.maxCharges=maxCharges;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudEventObjectiveItemViewInterface*)(O->GetNativeInterfaceAddress(UHudEventObjectiveItemViewInterface::StaticClass())))
		{
			I->SetAvailableCharges_Implementation(charges,maxCharges);
		}
	}
	static FName NAME_UHudEventObjectiveItemViewInterface_SetChargePercentage = FName(TEXT("SetChargePercentage"));
	void IHudEventObjectiveItemViewInterface::Execute_SetChargePercentage(UObject* O, const float chargePercent)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudEventObjectiveItemViewInterface::StaticClass()));
		HudEventObjectiveItemViewInterface_eventSetChargePercentage_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudEventObjectiveItemViewInterface_SetChargePercentage);
		if (Func)
		{
			Parms.chargePercent=chargePercent;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudEventObjectiveItemViewInterface*)(O->GetNativeInterfaceAddress(UHudEventObjectiveItemViewInterface::StaticClass())))
		{
			I->SetChargePercentage_Implementation(chargePercent);
		}
	}
	static FName NAME_UHudEventObjectiveItemViewInterface_SetCooldownPercentage = FName(TEXT("SetCooldownPercentage"));
	void IHudEventObjectiveItemViewInterface::Execute_SetCooldownPercentage(UObject* O, const float cooldownPercent)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudEventObjectiveItemViewInterface::StaticClass()));
		HudEventObjectiveItemViewInterface_eventSetCooldownPercentage_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudEventObjectiveItemViewInterface_SetCooldownPercentage);
		if (Func)
		{
			Parms.cooldownPercent=cooldownPercent;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudEventObjectiveItemViewInterface*)(O->GetNativeInterfaceAddress(UHudEventObjectiveItemViewInterface::StaticClass())))
		{
			I->SetCooldownPercentage_Implementation(cooldownPercent);
		}
	}
	static FName NAME_UHudEventObjectiveItemViewInterface_SetInputKey = FName(TEXT("SetInputKey"));
	void IHudEventObjectiveItemViewInterface::Execute_SetInputKey(UObject* O, const FKey inputKey)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudEventObjectiveItemViewInterface::StaticClass()));
		HudEventObjectiveItemViewInterface_eventSetInputKey_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudEventObjectiveItemViewInterface_SetInputKey);
		if (Func)
		{
			Parms.inputKey=inputKey;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudEventObjectiveItemViewInterface*)(O->GetNativeInterfaceAddress(UHudEventObjectiveItemViewInterface::StaticClass())))
		{
			I->SetInputKey_Implementation(inputKey);
		}
	}
	static FName NAME_UHudEventObjectiveItemViewInterface_SetWidgetData = FName(TEXT("SetWidgetData"));
	void IHudEventObjectiveItemViewInterface::Execute_SetWidgetData(UObject* O, const EEventObjectiveItemState eventItemState, const int32 charges, const int32 maxCharges, const float chargePercent)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudEventObjectiveItemViewInterface::StaticClass()));
		HudEventObjectiveItemViewInterface_eventSetWidgetData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudEventObjectiveItemViewInterface_SetWidgetData);
		if (Func)
		{
			Parms.eventItemState=eventItemState;
			Parms.charges=charges;
			Parms.maxCharges=maxCharges;
			Parms.chargePercent=chargePercent;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudEventObjectiveItemViewInterface*)(O->GetNativeInterfaceAddress(UHudEventObjectiveItemViewInterface::StaticClass())))
		{
			I->SetWidgetData_Implementation(eventItemState,charges,maxCharges,chargePercent);
		}
	}
	static FName NAME_UHudEventObjectiveItemViewInterface_SetWidgetState = FName(TEXT("SetWidgetState"));
	void IHudEventObjectiveItemViewInterface::Execute_SetWidgetState(UObject* O, const EEventObjectiveItemState eventItemState)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudEventObjectiveItemViewInterface::StaticClass()));
		HudEventObjectiveItemViewInterface_eventSetWidgetState_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudEventObjectiveItemViewInterface_SetWidgetState);
		if (Func)
		{
			Parms.eventItemState=eventItemState;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudEventObjectiveItemViewInterface*)(O->GetNativeInterfaceAddress(UHudEventObjectiveItemViewInterface::StaticClass())))
		{
			I->SetWidgetState_Implementation(eventItemState);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
