// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/HudEventProgressionPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudEventProgressionPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudEventProgressionPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudEventProgressionPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FHudEventProgression2023ViewData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHudEventProgressionPresenter::execOnEventHauntTargetChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEventHauntTargetChanged(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudEventProgressionPresenter::execOnEventInVoidZoneChanged)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEventInVoidZoneChanged(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudEventProgressionPresenter::execOnEventIsChannelingHauntChanged)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEventIsChannelingHauntChanged(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudEventProgressionPresenter::execOnEventProgressChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEventProgressChanged(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudEventProgressionPresenter::execOnEventProgressionDataInitialized)
	{
		P_GET_STRUCT_REF(FHudEventProgression2023ViewData,Z_Param_Out_eventProgressionData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEventProgressionDataInitialized(Z_Param_Out_eventProgressionData);
		P_NATIVE_END;
	}
	void UHudEventProgressionPresenter::StaticRegisterNativesUHudEventProgressionPresenter()
	{
		UClass* Class = UHudEventProgressionPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEventHauntTargetChanged", &UHudEventProgressionPresenter::execOnEventHauntTargetChanged },
			{ "OnEventInVoidZoneChanged", &UHudEventProgressionPresenter::execOnEventInVoidZoneChanged },
			{ "OnEventIsChannelingHauntChanged", &UHudEventProgressionPresenter::execOnEventIsChannelingHauntChanged },
			{ "OnEventProgressChanged", &UHudEventProgressionPresenter::execOnEventProgressChanged },
			{ "OnEventProgressionDataInitialized", &UHudEventProgressionPresenter::execOnEventProgressionDataInitialized },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventHauntTargetChanged_Statics
	{
		struct HudEventProgressionPresenter_eventOnEventHauntTargetChanged_Parms
		{
			int32 value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventHauntTargetChanged_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventHauntTargetChanged_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudEventProgressionPresenter_eventOnEventHauntTargetChanged_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventHauntTargetChanged_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventHauntTargetChanged_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventHauntTargetChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventHauntTargetChanged_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventHauntTargetChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudEventProgressionPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventHauntTargetChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudEventProgressionPresenter, nullptr, "OnEventHauntTargetChanged", nullptr, nullptr, sizeof(HudEventProgressionPresenter_eventOnEventHauntTargetChanged_Parms), Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventHauntTargetChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventHauntTargetChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventHauntTargetChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventHauntTargetChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventHauntTargetChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventHauntTargetChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventInVoidZoneChanged_Statics
	{
		struct HudEventProgressionPresenter_eventOnEventInVoidZoneChanged_Parms
		{
			bool value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventInVoidZoneChanged_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventInVoidZoneChanged_Statics::NewProp_value_SetBit(void* Obj)
	{
		((HudEventProgressionPresenter_eventOnEventInVoidZoneChanged_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventInVoidZoneChanged_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HudEventProgressionPresenter_eventOnEventInVoidZoneChanged_Parms), &Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventInVoidZoneChanged_Statics::NewProp_value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventInVoidZoneChanged_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventInVoidZoneChanged_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventInVoidZoneChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventInVoidZoneChanged_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventInVoidZoneChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudEventProgressionPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventInVoidZoneChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudEventProgressionPresenter, nullptr, "OnEventInVoidZoneChanged", nullptr, nullptr, sizeof(HudEventProgressionPresenter_eventOnEventInVoidZoneChanged_Parms), Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventInVoidZoneChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventInVoidZoneChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventInVoidZoneChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventInVoidZoneChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventInVoidZoneChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventInVoidZoneChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventIsChannelingHauntChanged_Statics
	{
		struct HudEventProgressionPresenter_eventOnEventIsChannelingHauntChanged_Parms
		{
			bool value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventIsChannelingHauntChanged_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventIsChannelingHauntChanged_Statics::NewProp_value_SetBit(void* Obj)
	{
		((HudEventProgressionPresenter_eventOnEventIsChannelingHauntChanged_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventIsChannelingHauntChanged_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HudEventProgressionPresenter_eventOnEventIsChannelingHauntChanged_Parms), &Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventIsChannelingHauntChanged_Statics::NewProp_value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventIsChannelingHauntChanged_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventIsChannelingHauntChanged_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventIsChannelingHauntChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventIsChannelingHauntChanged_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventIsChannelingHauntChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudEventProgressionPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventIsChannelingHauntChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudEventProgressionPresenter, nullptr, "OnEventIsChannelingHauntChanged", nullptr, nullptr, sizeof(HudEventProgressionPresenter_eventOnEventIsChannelingHauntChanged_Parms), Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventIsChannelingHauntChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventIsChannelingHauntChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventIsChannelingHauntChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventIsChannelingHauntChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventIsChannelingHauntChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventIsChannelingHauntChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressChanged_Statics
	{
		struct HudEventProgressionPresenter_eventOnEventProgressChanged_Parms
		{
			int32 value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressChanged_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressChanged_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudEventProgressionPresenter_eventOnEventProgressChanged_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressChanged_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressChanged_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressChanged_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudEventProgressionPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudEventProgressionPresenter, nullptr, "OnEventProgressChanged", nullptr, nullptr, sizeof(HudEventProgressionPresenter_eventOnEventProgressChanged_Parms), Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressionDataInitialized_Statics
	{
		struct HudEventProgressionPresenter_eventOnEventProgressionDataInitialized_Parms
		{
			FHudEventProgression2023ViewData eventProgressionData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eventProgressionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_eventProgressionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressionDataInitialized_Statics::NewProp_eventProgressionData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressionDataInitialized_Statics::NewProp_eventProgressionData = { "eventProgressionData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudEventProgressionPresenter_eventOnEventProgressionDataInitialized_Parms, eventProgressionData), Z_Construct_UScriptStruct_FHudEventProgression2023ViewData, METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressionDataInitialized_Statics::NewProp_eventProgressionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressionDataInitialized_Statics::NewProp_eventProgressionData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressionDataInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressionDataInitialized_Statics::NewProp_eventProgressionData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressionDataInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudEventProgressionPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressionDataInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudEventProgressionPresenter, nullptr, "OnEventProgressionDataInitialized", nullptr, nullptr, sizeof(HudEventProgressionPresenter_eventOnEventProgressionDataInitialized_Parms), Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressionDataInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressionDataInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressionDataInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressionDataInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressionDataInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressionDataInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHudEventProgressionPresenter_NoRegister()
	{
		return UHudEventProgressionPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UHudEventProgressionPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoreHudEventProgressionWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CoreHudEventProgressionWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHudEventProgressionPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHudPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHudEventProgressionPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventHauntTargetChanged, "OnEventHauntTargetChanged" }, // 707709418
		{ &Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventInVoidZoneChanged, "OnEventInVoidZoneChanged" }, // 2122201465
		{ &Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventIsChannelingHauntChanged, "OnEventIsChannelingHauntChanged" }, // 1342830182
		{ &Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressChanged, "OnEventProgressChanged" }, // 648063124
		{ &Z_Construct_UFunction_UHudEventProgressionPresenter_OnEventProgressionDataInitialized, "OnEventProgressionDataInitialized" }, // 1452823460
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudEventProgressionPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HudEventProgressionPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HudEventProgressionPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudEventProgressionPresenter_Statics::NewProp_CoreHudEventProgressionWidgetClass_MetaData[] = {
		{ "Category", "HudEventProgressionPresenter" },
		{ "ModuleRelativePath", "Public/HudEventProgressionPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHudEventProgressionPresenter_Statics::NewProp_CoreHudEventProgressionWidgetClass = { "CoreHudEventProgressionWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudEventProgressionPresenter, CoreHudEventProgressionWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UHudEventProgressionPresenter_Statics::NewProp_CoreHudEventProgressionWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudEventProgressionPresenter_Statics::NewProp_CoreHudEventProgressionWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHudEventProgressionPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudEventProgressionPresenter_Statics::NewProp_CoreHudEventProgressionWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHudEventProgressionPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHudEventProgressionPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHudEventProgressionPresenter_Statics::ClassParams = {
		&UHudEventProgressionPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHudEventProgressionPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHudEventProgressionPresenter_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHudEventProgressionPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHudEventProgressionPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHudEventProgressionPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHudEventProgressionPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHudEventProgressionPresenter, 2903146254);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UHudEventProgressionPresenter>()
	{
		return UHudEventProgressionPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHudEventProgressionPresenter(Z_Construct_UClass_UHudEventProgressionPresenter, &UHudEventProgressionPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UHudEventProgressionPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudEventProgressionPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
