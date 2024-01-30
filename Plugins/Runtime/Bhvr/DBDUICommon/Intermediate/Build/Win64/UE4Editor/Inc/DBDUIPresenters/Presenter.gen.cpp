// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/Presenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UUIComponent();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EContext();
	DBDUIPRESENTERS_API UEnum* Z_Construct_UEnum_DBDUIPresenters_EPresenterPhase();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenterParentInfo_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenterRequirementFunction_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPresenter::execIsContextReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsContextReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPresenter::execIsGameStateReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGameStateReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPresenter::execIsPlayerStateReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayerStateReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPresenter::execOnContextChanged)
	{
		P_GET_ENUM(EContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnContextChanged(EContext(Z_Param_context));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPresenter::execOnContextFocus)
	{
		P_GET_ENUM(EContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnContextFocus(EContext(Z_Param_context));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPresenter::execOnContextUnfocus)
	{
		P_GET_ENUM(EContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnContextUnfocus(EContext(Z_Param_context));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPresenter::execShouldPresent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldPresent();
		P_NATIVE_END;
	}
	void UPresenter::StaticRegisterNativesUPresenter()
	{
		UClass* Class = UPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsContextReady", &UPresenter::execIsContextReady },
			{ "IsGameStateReady", &UPresenter::execIsGameStateReady },
			{ "IsPlayerStateReady", &UPresenter::execIsPlayerStateReady },
			{ "OnContextChanged", &UPresenter::execOnContextChanged },
			{ "OnContextFocus", &UPresenter::execOnContextFocus },
			{ "OnContextUnfocus", &UPresenter::execOnContextUnfocus },
			{ "ShouldPresent", &UPresenter::execShouldPresent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPresenter_IsContextReady_Statics
	{
		struct Presenter_eventIsContextReady_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPresenter_IsContextReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Presenter_eventIsContextReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPresenter_IsContextReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Presenter_eventIsContextReady_Parms), &Z_Construct_UFunction_UPresenter_IsContextReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPresenter_IsContextReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPresenter_IsContextReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPresenter_IsContextReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Presenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPresenter_IsContextReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPresenter, nullptr, "IsContextReady", nullptr, nullptr, sizeof(Presenter_eventIsContextReady_Parms), Z_Construct_UFunction_UPresenter_IsContextReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPresenter_IsContextReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPresenter_IsContextReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPresenter_IsContextReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPresenter_IsContextReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPresenter_IsContextReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPresenter_IsGameStateReady_Statics
	{
		struct Presenter_eventIsGameStateReady_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPresenter_IsGameStateReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Presenter_eventIsGameStateReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPresenter_IsGameStateReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Presenter_eventIsGameStateReady_Parms), &Z_Construct_UFunction_UPresenter_IsGameStateReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPresenter_IsGameStateReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPresenter_IsGameStateReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPresenter_IsGameStateReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Presenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPresenter_IsGameStateReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPresenter, nullptr, "IsGameStateReady", nullptr, nullptr, sizeof(Presenter_eventIsGameStateReady_Parms), Z_Construct_UFunction_UPresenter_IsGameStateReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPresenter_IsGameStateReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPresenter_IsGameStateReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPresenter_IsGameStateReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPresenter_IsGameStateReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPresenter_IsGameStateReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPresenter_IsPlayerStateReady_Statics
	{
		struct Presenter_eventIsPlayerStateReady_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPresenter_IsPlayerStateReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Presenter_eventIsPlayerStateReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPresenter_IsPlayerStateReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Presenter_eventIsPlayerStateReady_Parms), &Z_Construct_UFunction_UPresenter_IsPlayerStateReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPresenter_IsPlayerStateReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPresenter_IsPlayerStateReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPresenter_IsPlayerStateReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Presenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPresenter_IsPlayerStateReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPresenter, nullptr, "IsPlayerStateReady", nullptr, nullptr, sizeof(Presenter_eventIsPlayerStateReady_Parms), Z_Construct_UFunction_UPresenter_IsPlayerStateReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPresenter_IsPlayerStateReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPresenter_IsPlayerStateReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPresenter_IsPlayerStateReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPresenter_IsPlayerStateReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPresenter_IsPlayerStateReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPresenter_OnContextChanged_Statics
	{
		struct Presenter_eventOnContextChanged_Parms
		{
			EContext context;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_context_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPresenter_OnContextChanged_Statics::NewProp_context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPresenter_OnContextChanged_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Presenter_eventOnContextChanged_Parms, context), Z_Construct_UEnum_DeadByDaylight_EContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPresenter_OnContextChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPresenter_OnContextChanged_Statics::NewProp_context_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPresenter_OnContextChanged_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPresenter_OnContextChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Presenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPresenter_OnContextChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPresenter, nullptr, "OnContextChanged", nullptr, nullptr, sizeof(Presenter_eventOnContextChanged_Parms), Z_Construct_UFunction_UPresenter_OnContextChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPresenter_OnContextChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPresenter_OnContextChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPresenter_OnContextChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPresenter_OnContextChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPresenter_OnContextChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPresenter_OnContextFocus_Statics
	{
		struct Presenter_eventOnContextFocus_Parms
		{
			EContext context;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_context_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPresenter_OnContextFocus_Statics::NewProp_context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPresenter_OnContextFocus_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Presenter_eventOnContextFocus_Parms, context), Z_Construct_UEnum_DeadByDaylight_EContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPresenter_OnContextFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPresenter_OnContextFocus_Statics::NewProp_context_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPresenter_OnContextFocus_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPresenter_OnContextFocus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Presenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPresenter_OnContextFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPresenter, nullptr, "OnContextFocus", nullptr, nullptr, sizeof(Presenter_eventOnContextFocus_Parms), Z_Construct_UFunction_UPresenter_OnContextFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPresenter_OnContextFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPresenter_OnContextFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPresenter_OnContextFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPresenter_OnContextFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPresenter_OnContextFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPresenter_OnContextUnfocus_Statics
	{
		struct Presenter_eventOnContextUnfocus_Parms
		{
			EContext context;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_context_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPresenter_OnContextUnfocus_Statics::NewProp_context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPresenter_OnContextUnfocus_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Presenter_eventOnContextUnfocus_Parms, context), Z_Construct_UEnum_DeadByDaylight_EContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPresenter_OnContextUnfocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPresenter_OnContextUnfocus_Statics::NewProp_context_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPresenter_OnContextUnfocus_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPresenter_OnContextUnfocus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Presenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPresenter_OnContextUnfocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPresenter, nullptr, "OnContextUnfocus", nullptr, nullptr, sizeof(Presenter_eventOnContextUnfocus_Parms), Z_Construct_UFunction_UPresenter_OnContextUnfocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPresenter_OnContextUnfocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPresenter_OnContextUnfocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPresenter_OnContextUnfocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPresenter_OnContextUnfocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPresenter_OnContextUnfocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPresenter_ShouldPresent_Statics
	{
		struct Presenter_eventShouldPresent_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPresenter_ShouldPresent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Presenter_eventShouldPresent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPresenter_ShouldPresent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Presenter_eventShouldPresent_Parms), &Z_Construct_UFunction_UPresenter_ShouldPresent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPresenter_ShouldPresent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPresenter_ShouldPresent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPresenter_ShouldPresent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Presenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPresenter_ShouldPresent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPresenter, nullptr, "ShouldPresent", nullptr, nullptr, sizeof(Presenter_eventShouldPresent_Parms), Z_Construct_UFunction_UPresenter_ShouldPresent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPresenter_ShouldPresent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPresenter_ShouldPresent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPresenter_ShouldPresent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPresenter_ShouldPresent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPresenter_ShouldPresent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPresenter_NoRegister()
	{
		return UPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__overrideWidgetInstantiationPhase_MetaData[];
#endif
		static void NewProp__overrideWidgetInstantiationPhase_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__overrideWidgetInstantiationPhase;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__widgetInstantiationPhase_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__widgetInstantiationPhase_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__widgetInstantiationPhase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestPresentationAtBeginPlay_MetaData[];
#endif
		static void NewProp_RequestPresentationAtBeginPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RequestPresentationAtBeginPlay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InitialVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InitialVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__widgetZOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__widgetZOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__parentInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__parentInfo;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__ignoredPresentationRequirementFunctions_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ignoredPresentationRequirementFunctions_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__ignoredPresentationRequirementFunctions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__presentationRequirementFunctions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__presentationRequirementFunctions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__presentationRequirementFunctions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__filter_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__filter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currencyFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__currencyFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUIComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPresenter_IsContextReady, "IsContextReady" }, // 2765809591
		{ &Z_Construct_UFunction_UPresenter_IsGameStateReady, "IsGameStateReady" }, // 537814872
		{ &Z_Construct_UFunction_UPresenter_IsPlayerStateReady, "IsPlayerStateReady" }, // 2539487513
		{ &Z_Construct_UFunction_UPresenter_OnContextChanged, "OnContextChanged" }, // 1065030265
		{ &Z_Construct_UFunction_UPresenter_OnContextFocus, "OnContextFocus" }, // 4294925568
		{ &Z_Construct_UFunction_UPresenter_OnContextUnfocus, "OnContextUnfocus" }, // 2685690589
		{ &Z_Construct_UFunction_UPresenter_ShouldPresent, "ShouldPresent" }, // 1864781129
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Presenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Presenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresenter_Statics::NewProp__overrideWidgetInstantiationPhase_MetaData[] = {
		{ "Category", "Presenter" },
		{ "ModuleRelativePath", "Public/Presenter.h" },
	};
#endif
	void Z_Construct_UClass_UPresenter_Statics::NewProp__overrideWidgetInstantiationPhase_SetBit(void* Obj)
	{
		((UPresenter*)Obj)->_overrideWidgetInstantiationPhase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPresenter_Statics::NewProp__overrideWidgetInstantiationPhase = { "_overrideWidgetInstantiationPhase", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPresenter), &Z_Construct_UClass_UPresenter_Statics::NewProp__overrideWidgetInstantiationPhase_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPresenter_Statics::NewProp__overrideWidgetInstantiationPhase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPresenter_Statics::NewProp__overrideWidgetInstantiationPhase_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPresenter_Statics::NewProp__widgetInstantiationPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresenter_Statics::NewProp__widgetInstantiationPhase_MetaData[] = {
		{ "Category", "Presenter" },
		{ "ModuleRelativePath", "Public/Presenter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPresenter_Statics::NewProp__widgetInstantiationPhase = { "_widgetInstantiationPhase", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPresenter, _widgetInstantiationPhase), Z_Construct_UEnum_DBDUIPresenters_EPresenterPhase, METADATA_PARAMS(Z_Construct_UClass_UPresenter_Statics::NewProp__widgetInstantiationPhase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPresenter_Statics::NewProp__widgetInstantiationPhase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresenter_Statics::NewProp_RequestPresentationAtBeginPlay_MetaData[] = {
		{ "Category", "Presenter" },
		{ "ModuleRelativePath", "Public/Presenter.h" },
	};
#endif
	void Z_Construct_UClass_UPresenter_Statics::NewProp_RequestPresentationAtBeginPlay_SetBit(void* Obj)
	{
		((UPresenter*)Obj)->RequestPresentationAtBeginPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPresenter_Statics::NewProp_RequestPresentationAtBeginPlay = { "RequestPresentationAtBeginPlay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPresenter), &Z_Construct_UClass_UPresenter_Statics::NewProp_RequestPresentationAtBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPresenter_Statics::NewProp_RequestPresentationAtBeginPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPresenter_Statics::NewProp_RequestPresentationAtBeginPlay_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPresenter_Statics::NewProp_InitialVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresenter_Statics::NewProp_InitialVisibility_MetaData[] = {
		{ "Category", "Presenter" },
		{ "ModuleRelativePath", "Public/Presenter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPresenter_Statics::NewProp_InitialVisibility = { "InitialVisibility", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPresenter, InitialVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UPresenter_Statics::NewProp_InitialVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPresenter_Statics::NewProp_InitialVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresenter_Statics::NewProp__widgetZOrder_MetaData[] = {
		{ "Category", "Presenter" },
		{ "ModuleRelativePath", "Public/Presenter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPresenter_Statics::NewProp__widgetZOrder = { "_widgetZOrder", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPresenter, _widgetZOrder), METADATA_PARAMS(Z_Construct_UClass_UPresenter_Statics::NewProp__widgetZOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPresenter_Statics::NewProp__widgetZOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresenter_Statics::NewProp__widget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Presenter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Presenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPresenter_Statics::NewProp__widget = { "_widget", nullptr, (EPropertyFlags)0x002008000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPresenter, _widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPresenter_Statics::NewProp__widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPresenter_Statics::NewProp__widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresenter_Statics::NewProp__parentInfo_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Presenter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Presenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPresenter_Statics::NewProp__parentInfo = { "_parentInfo", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPresenter, _parentInfo), Z_Construct_UClass_UPresenterParentInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPresenter_Statics::NewProp__parentInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPresenter_Statics::NewProp__parentInfo_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPresenter_Statics::NewProp__ignoredPresentationRequirementFunctions_ElementProp = { "_ignoredPresentationRequirementFunctions", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresenter_Statics::NewProp__ignoredPresentationRequirementFunctions_MetaData[] = {
		{ "Category", "Presenter" },
		{ "ModuleRelativePath", "Public/Presenter.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPresenter_Statics::NewProp__ignoredPresentationRequirementFunctions = { "_ignoredPresentationRequirementFunctions", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPresenter, _ignoredPresentationRequirementFunctions), METADATA_PARAMS(Z_Construct_UClass_UPresenter_Statics::NewProp__ignoredPresentationRequirementFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPresenter_Statics::NewProp__ignoredPresentationRequirementFunctions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPresenter_Statics::NewProp__presentationRequirementFunctions_Inner = { "_presentationRequirementFunctions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPresenterRequirementFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresenter_Statics::NewProp__presentationRequirementFunctions_MetaData[] = {
		{ "Category", "Presenter" },
		{ "ModuleRelativePath", "Public/Presenter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPresenter_Statics::NewProp__presentationRequirementFunctions = { "_presentationRequirementFunctions", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPresenter, _presentationRequirementFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPresenter_Statics::NewProp__presentationRequirementFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPresenter_Statics::NewProp__presentationRequirementFunctions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresenter_Statics::NewProp__filter_MetaData[] = {
		{ "Category", "Presenter" },
		{ "ModuleRelativePath", "Public/Presenter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPresenter_Statics::NewProp__filter = { "_filter", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPresenter, _filter), nullptr, METADATA_PARAMS(Z_Construct_UClass_UPresenter_Statics::NewProp__filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPresenter_Statics::NewProp__filter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresenter_Statics::NewProp__currencyFilter_MetaData[] = {
		{ "Category", "Presenter" },
		{ "ModuleRelativePath", "Public/Presenter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPresenter_Statics::NewProp__currencyFilter = { "_currencyFilter", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPresenter, _currencyFilter), nullptr, METADATA_PARAMS(Z_Construct_UClass_UPresenter_Statics::NewProp__currencyFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPresenter_Statics::NewProp__currencyFilter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPresenter_Statics::NewProp__overrideWidgetInstantiationPhase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPresenter_Statics::NewProp__widgetInstantiationPhase_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPresenter_Statics::NewProp__widgetInstantiationPhase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPresenter_Statics::NewProp_RequestPresentationAtBeginPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPresenter_Statics::NewProp_InitialVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPresenter_Statics::NewProp_InitialVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPresenter_Statics::NewProp__widgetZOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPresenter_Statics::NewProp__widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPresenter_Statics::NewProp__parentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPresenter_Statics::NewProp__ignoredPresentationRequirementFunctions_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPresenter_Statics::NewProp__ignoredPresentationRequirementFunctions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPresenter_Statics::NewProp__presentationRequirementFunctions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPresenter_Statics::NewProp__presentationRequirementFunctions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPresenter_Statics::NewProp__filter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPresenter_Statics::NewProp__currencyFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPresenter_Statics::ClassParams = {
		&UPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPresenter_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPresenter, 2637043703);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UPresenter>()
	{
		return UPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPresenter(Z_Construct_UClass_UPresenter, &UPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
