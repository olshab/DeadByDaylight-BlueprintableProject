// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/HudEventProgression2023ViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudEventProgression2023ViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UHudEventProgression2023ViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UHudEventProgression2023ViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FHudEventProgression2023ViewData();
// End Cross Module References
	DEFINE_FUNCTION(IHudEventProgression2023ViewInterface::execEnableEventProgression)
	{
		P_GET_UBOOL(Z_Param_isEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableEventProgression_Implementation(Z_Param_isEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudEventProgression2023ViewInterface::execInitEventProgression)
	{
		P_GET_STRUCT_REF(FHudEventProgression2023ViewData,Z_Param_Out_hudEventProgressionViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitEventProgression_Implementation(Z_Param_Out_hudEventProgressionViewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudEventProgression2023ViewInterface::execUpdateEnergyProgress)
	{
		P_GET_STRUCT_REF(FHudEventProgression2023ViewData,Z_Param_Out_hudEventProgressionViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateEnergyProgress_Implementation(Z_Param_Out_hudEventProgressionViewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudEventProgression2023ViewInterface::execUpdateHauntTarget)
	{
		P_GET_STRUCT_REF(FHudEventProgression2023ViewData,Z_Param_Out_hudEventProgressionViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHauntTarget_Implementation(Z_Param_Out_hudEventProgressionViewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudEventProgression2023ViewInterface::execUpdateVoidZoneState)
	{
		P_GET_STRUCT_REF(FHudEventProgression2023ViewData,Z_Param_Out_hudEventProgressionViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateVoidZoneState_Implementation(Z_Param_Out_hudEventProgressionViewData);
		P_NATIVE_END;
	}
	void IHudEventProgression2023ViewInterface::EnableEventProgression(bool isEnabled)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EnableEventProgression instead.");
	}
	void IHudEventProgression2023ViewInterface::InitEventProgression(FHudEventProgression2023ViewData const& hudEventProgressionViewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InitEventProgression instead.");
	}
	void IHudEventProgression2023ViewInterface::UpdateEnergyProgress(FHudEventProgression2023ViewData const& hudEventProgressionViewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateEnergyProgress instead.");
	}
	void IHudEventProgression2023ViewInterface::UpdateHauntTarget(FHudEventProgression2023ViewData const& hudEventProgressionViewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateHauntTarget instead.");
	}
	void IHudEventProgression2023ViewInterface::UpdateVoidZoneState(FHudEventProgression2023ViewData const& hudEventProgressionViewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateVoidZoneState instead.");
	}
	void UHudEventProgression2023ViewInterface::StaticRegisterNativesUHudEventProgression2023ViewInterface()
	{
		UClass* Class = UHudEventProgression2023ViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableEventProgression", &IHudEventProgression2023ViewInterface::execEnableEventProgression },
			{ "InitEventProgression", &IHudEventProgression2023ViewInterface::execInitEventProgression },
			{ "UpdateEnergyProgress", &IHudEventProgression2023ViewInterface::execUpdateEnergyProgress },
			{ "UpdateHauntTarget", &IHudEventProgression2023ViewInterface::execUpdateHauntTarget },
			{ "UpdateVoidZoneState", &IHudEventProgression2023ViewInterface::execUpdateVoidZoneState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHudEventProgression2023ViewInterface_EnableEventProgression_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isEnabled_MetaData[];
#endif
		static void NewProp_isEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgression2023ViewInterface_EnableEventProgression_Statics::NewProp_isEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHudEventProgression2023ViewInterface_EnableEventProgression_Statics::NewProp_isEnabled_SetBit(void* Obj)
	{
		((HudEventProgression2023ViewInterface_eventEnableEventProgression_Parms*)Obj)->isEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHudEventProgression2023ViewInterface_EnableEventProgression_Statics::NewProp_isEnabled = { "isEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HudEventProgression2023ViewInterface_eventEnableEventProgression_Parms), &Z_Construct_UFunction_UHudEventProgression2023ViewInterface_EnableEventProgression_Statics::NewProp_isEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgression2023ViewInterface_EnableEventProgression_Statics::NewProp_isEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgression2023ViewInterface_EnableEventProgression_Statics::NewProp_isEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudEventProgression2023ViewInterface_EnableEventProgression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudEventProgression2023ViewInterface_EnableEventProgression_Statics::NewProp_isEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgression2023ViewInterface_EnableEventProgression_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudEventProgression2023ViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudEventProgression2023ViewInterface_EnableEventProgression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudEventProgression2023ViewInterface, nullptr, "EnableEventProgression", nullptr, nullptr, sizeof(HudEventProgression2023ViewInterface_eventEnableEventProgression_Parms), Z_Construct_UFunction_UHudEventProgression2023ViewInterface_EnableEventProgression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgression2023ViewInterface_EnableEventProgression_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgression2023ViewInterface_EnableEventProgression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgression2023ViewInterface_EnableEventProgression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudEventProgression2023ViewInterface_EnableEventProgression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudEventProgression2023ViewInterface_EnableEventProgression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudEventProgression2023ViewInterface_InitEventProgression_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hudEventProgressionViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hudEventProgressionViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgression2023ViewInterface_InitEventProgression_Statics::NewProp_hudEventProgressionViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHudEventProgression2023ViewInterface_InitEventProgression_Statics::NewProp_hudEventProgressionViewData = { "hudEventProgressionViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudEventProgression2023ViewInterface_eventInitEventProgression_Parms, hudEventProgressionViewData), Z_Construct_UScriptStruct_FHudEventProgression2023ViewData, METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgression2023ViewInterface_InitEventProgression_Statics::NewProp_hudEventProgressionViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgression2023ViewInterface_InitEventProgression_Statics::NewProp_hudEventProgressionViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudEventProgression2023ViewInterface_InitEventProgression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudEventProgression2023ViewInterface_InitEventProgression_Statics::NewProp_hudEventProgressionViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgression2023ViewInterface_InitEventProgression_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudEventProgression2023ViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudEventProgression2023ViewInterface_InitEventProgression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudEventProgression2023ViewInterface, nullptr, "InitEventProgression", nullptr, nullptr, sizeof(HudEventProgression2023ViewInterface_eventInitEventProgression_Parms), Z_Construct_UFunction_UHudEventProgression2023ViewInterface_InitEventProgression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgression2023ViewInterface_InitEventProgression_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgression2023ViewInterface_InitEventProgression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgression2023ViewInterface_InitEventProgression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudEventProgression2023ViewInterface_InitEventProgression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudEventProgression2023ViewInterface_InitEventProgression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateEnergyProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hudEventProgressionViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hudEventProgressionViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateEnergyProgress_Statics::NewProp_hudEventProgressionViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateEnergyProgress_Statics::NewProp_hudEventProgressionViewData = { "hudEventProgressionViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudEventProgression2023ViewInterface_eventUpdateEnergyProgress_Parms, hudEventProgressionViewData), Z_Construct_UScriptStruct_FHudEventProgression2023ViewData, METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateEnergyProgress_Statics::NewProp_hudEventProgressionViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateEnergyProgress_Statics::NewProp_hudEventProgressionViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateEnergyProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateEnergyProgress_Statics::NewProp_hudEventProgressionViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateEnergyProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudEventProgression2023ViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateEnergyProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudEventProgression2023ViewInterface, nullptr, "UpdateEnergyProgress", nullptr, nullptr, sizeof(HudEventProgression2023ViewInterface_eventUpdateEnergyProgress_Parms), Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateEnergyProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateEnergyProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateEnergyProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateEnergyProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateEnergyProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateEnergyProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateHauntTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hudEventProgressionViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hudEventProgressionViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateHauntTarget_Statics::NewProp_hudEventProgressionViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateHauntTarget_Statics::NewProp_hudEventProgressionViewData = { "hudEventProgressionViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudEventProgression2023ViewInterface_eventUpdateHauntTarget_Parms, hudEventProgressionViewData), Z_Construct_UScriptStruct_FHudEventProgression2023ViewData, METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateHauntTarget_Statics::NewProp_hudEventProgressionViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateHauntTarget_Statics::NewProp_hudEventProgressionViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateHauntTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateHauntTarget_Statics::NewProp_hudEventProgressionViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateHauntTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudEventProgression2023ViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateHauntTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudEventProgression2023ViewInterface, nullptr, "UpdateHauntTarget", nullptr, nullptr, sizeof(HudEventProgression2023ViewInterface_eventUpdateHauntTarget_Parms), Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateHauntTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateHauntTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateHauntTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateHauntTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateHauntTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateHauntTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateVoidZoneState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hudEventProgressionViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hudEventProgressionViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateVoidZoneState_Statics::NewProp_hudEventProgressionViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateVoidZoneState_Statics::NewProp_hudEventProgressionViewData = { "hudEventProgressionViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudEventProgression2023ViewInterface_eventUpdateVoidZoneState_Parms, hudEventProgressionViewData), Z_Construct_UScriptStruct_FHudEventProgression2023ViewData, METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateVoidZoneState_Statics::NewProp_hudEventProgressionViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateVoidZoneState_Statics::NewProp_hudEventProgressionViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateVoidZoneState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateVoidZoneState_Statics::NewProp_hudEventProgressionViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateVoidZoneState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudEventProgression2023ViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateVoidZoneState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudEventProgression2023ViewInterface, nullptr, "UpdateVoidZoneState", nullptr, nullptr, sizeof(HudEventProgression2023ViewInterface_eventUpdateVoidZoneState_Parms), Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateVoidZoneState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateVoidZoneState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateVoidZoneState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateVoidZoneState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateVoidZoneState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateVoidZoneState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHudEventProgression2023ViewInterface_NoRegister()
	{
		return UHudEventProgression2023ViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UHudEventProgression2023ViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHudEventProgression2023ViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHudEventProgression2023ViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHudEventProgression2023ViewInterface_EnableEventProgression, "EnableEventProgression" }, // 2872162014
		{ &Z_Construct_UFunction_UHudEventProgression2023ViewInterface_InitEventProgression, "InitEventProgression" }, // 132781307
		{ &Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateEnergyProgress, "UpdateEnergyProgress" }, // 2081122512
		{ &Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateHauntTarget, "UpdateHauntTarget" }, // 3905377961
		{ &Z_Construct_UFunction_UHudEventProgression2023ViewInterface_UpdateVoidZoneState, "UpdateVoidZoneState" }, // 3473564482
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudEventProgression2023ViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HudEventProgression2023ViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHudEventProgression2023ViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHudEventProgression2023ViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHudEventProgression2023ViewInterface_Statics::ClassParams = {
		&UHudEventProgression2023ViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHudEventProgression2023ViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHudEventProgression2023ViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHudEventProgression2023ViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHudEventProgression2023ViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHudEventProgression2023ViewInterface, 1043975567);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UHudEventProgression2023ViewInterface>()
	{
		return UHudEventProgression2023ViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHudEventProgression2023ViewInterface(Z_Construct_UClass_UHudEventProgression2023ViewInterface, &UHudEventProgression2023ViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UHudEventProgression2023ViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudEventProgression2023ViewInterface);
	static FName NAME_UHudEventProgression2023ViewInterface_EnableEventProgression = FName(TEXT("EnableEventProgression"));
	void IHudEventProgression2023ViewInterface::Execute_EnableEventProgression(UObject* O, bool isEnabled)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudEventProgression2023ViewInterface::StaticClass()));
		HudEventProgression2023ViewInterface_eventEnableEventProgression_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudEventProgression2023ViewInterface_EnableEventProgression);
		if (Func)
		{
			Parms.isEnabled=isEnabled;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudEventProgression2023ViewInterface*)(O->GetNativeInterfaceAddress(UHudEventProgression2023ViewInterface::StaticClass())))
		{
			I->EnableEventProgression_Implementation(isEnabled);
		}
	}
	static FName NAME_UHudEventProgression2023ViewInterface_InitEventProgression = FName(TEXT("InitEventProgression"));
	void IHudEventProgression2023ViewInterface::Execute_InitEventProgression(UObject* O, FHudEventProgression2023ViewData const& hudEventProgressionViewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudEventProgression2023ViewInterface::StaticClass()));
		HudEventProgression2023ViewInterface_eventInitEventProgression_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudEventProgression2023ViewInterface_InitEventProgression);
		if (Func)
		{
			Parms.hudEventProgressionViewData=hudEventProgressionViewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudEventProgression2023ViewInterface*)(O->GetNativeInterfaceAddress(UHudEventProgression2023ViewInterface::StaticClass())))
		{
			I->InitEventProgression_Implementation(hudEventProgressionViewData);
		}
	}
	static FName NAME_UHudEventProgression2023ViewInterface_UpdateEnergyProgress = FName(TEXT("UpdateEnergyProgress"));
	void IHudEventProgression2023ViewInterface::Execute_UpdateEnergyProgress(UObject* O, FHudEventProgression2023ViewData const& hudEventProgressionViewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudEventProgression2023ViewInterface::StaticClass()));
		HudEventProgression2023ViewInterface_eventUpdateEnergyProgress_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudEventProgression2023ViewInterface_UpdateEnergyProgress);
		if (Func)
		{
			Parms.hudEventProgressionViewData=hudEventProgressionViewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudEventProgression2023ViewInterface*)(O->GetNativeInterfaceAddress(UHudEventProgression2023ViewInterface::StaticClass())))
		{
			I->UpdateEnergyProgress_Implementation(hudEventProgressionViewData);
		}
	}
	static FName NAME_UHudEventProgression2023ViewInterface_UpdateHauntTarget = FName(TEXT("UpdateHauntTarget"));
	void IHudEventProgression2023ViewInterface::Execute_UpdateHauntTarget(UObject* O, FHudEventProgression2023ViewData const& hudEventProgressionViewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudEventProgression2023ViewInterface::StaticClass()));
		HudEventProgression2023ViewInterface_eventUpdateHauntTarget_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudEventProgression2023ViewInterface_UpdateHauntTarget);
		if (Func)
		{
			Parms.hudEventProgressionViewData=hudEventProgressionViewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudEventProgression2023ViewInterface*)(O->GetNativeInterfaceAddress(UHudEventProgression2023ViewInterface::StaticClass())))
		{
			I->UpdateHauntTarget_Implementation(hudEventProgressionViewData);
		}
	}
	static FName NAME_UHudEventProgression2023ViewInterface_UpdateVoidZoneState = FName(TEXT("UpdateVoidZoneState"));
	void IHudEventProgression2023ViewInterface::Execute_UpdateVoidZoneState(UObject* O, FHudEventProgression2023ViewData const& hudEventProgressionViewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudEventProgression2023ViewInterface::StaticClass()));
		HudEventProgression2023ViewInterface_eventUpdateVoidZoneState_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudEventProgression2023ViewInterface_UpdateVoidZoneState);
		if (Func)
		{
			Parms.hudEventProgressionViewData=hudEventProgressionViewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudEventProgression2023ViewInterface*)(O->GetNativeInterfaceAddress(UHudEventProgression2023ViewInterface::StaticClass())))
		{
			I->UpdateVoidZoneState_Implementation(hudEventProgressionViewData);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
