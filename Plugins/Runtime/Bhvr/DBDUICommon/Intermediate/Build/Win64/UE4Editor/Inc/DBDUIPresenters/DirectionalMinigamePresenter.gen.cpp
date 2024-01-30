// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/DirectionalMinigamePresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectionalMinigamePresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UDirectionalMinigamePresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UDirectionalMinigamePresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EDirectionalMinigameResult();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EDirectionalInputKey();
	DBDSHAREDTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FDirectionalMiniGameDefinition();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDirectionalMinigamePresenter::execOnMinigameEnd)
	{
		P_GET_ENUM(EDirectionalMinigameResult,Z_Param_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMinigameEnd(EDirectionalMinigameResult(Z_Param_result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectionalMinigamePresenter::execOnMinigameEnterKey)
	{
		P_GET_ENUM(EDirectionalInputKey,Z_Param_enteredKey);
		P_GET_PROPERTY(FIntProperty,Z_Param_enteredIndex);
		P_GET_UBOOL(Z_Param_isCorrect);
		P_GET_PROPERTY(FIntProperty,Z_Param_currentIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMinigameEnterKey(EDirectionalInputKey(Z_Param_enteredKey),Z_Param_enteredIndex,Z_Param_isCorrect,Z_Param_currentIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectionalMinigamePresenter::execOnMinigameInit)
	{
		P_GET_STRUCT(FDirectionalMiniGameDefinition,Z_Param_miniGameDefinition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMinigameInit(Z_Param_miniGameDefinition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectionalMinigamePresenter::execOnMinigameStart)
	{
		P_GET_TARRAY(EDirectionalInputKey,Z_Param_sequence);
		P_GET_PROPERTY(FIntProperty,Z_Param_currentIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMinigameStart(Z_Param_sequence,Z_Param_currentIndex);
		P_NATIVE_END;
	}
	void UDirectionalMinigamePresenter::StaticRegisterNativesUDirectionalMinigamePresenter()
	{
		UClass* Class = UDirectionalMinigamePresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMinigameEnd", &UDirectionalMinigamePresenter::execOnMinigameEnd },
			{ "OnMinigameEnterKey", &UDirectionalMinigamePresenter::execOnMinigameEnterKey },
			{ "OnMinigameInit", &UDirectionalMinigamePresenter::execOnMinigameInit },
			{ "OnMinigameStart", &UDirectionalMinigamePresenter::execOnMinigameStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnd_Statics
	{
		struct DirectionalMinigamePresenter_eventOnMinigameEnd_Parms
		{
			EDirectionalMinigameResult result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnd_Statics::NewProp_result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnd_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DirectionalMinigamePresenter_eventOnMinigameEnd_Parms, result), Z_Construct_UEnum_DBDSharedTypes_EDirectionalMinigameResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnd_Statics::NewProp_result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnd_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DirectionalMinigamePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalMinigamePresenter, nullptr, "OnMinigameEnd", nullptr, nullptr, sizeof(DirectionalMinigamePresenter_eventOnMinigameEnd_Parms), Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnterKey_Statics
	{
		struct DirectionalMinigamePresenter_eventOnMinigameEnterKey_Parms
		{
			EDirectionalInputKey enteredKey;
			int32 enteredIndex;
			bool isCorrect;
			int32 currentIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_enteredKey_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_enteredKey;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_enteredIndex;
		static void NewProp_isCorrect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isCorrect;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currentIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnterKey_Statics::NewProp_enteredKey_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnterKey_Statics::NewProp_enteredKey = { "enteredKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DirectionalMinigamePresenter_eventOnMinigameEnterKey_Parms, enteredKey), Z_Construct_UEnum_DBDSharedTypes_EDirectionalInputKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnterKey_Statics::NewProp_enteredIndex = { "enteredIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DirectionalMinigamePresenter_eventOnMinigameEnterKey_Parms, enteredIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnterKey_Statics::NewProp_isCorrect_SetBit(void* Obj)
	{
		((DirectionalMinigamePresenter_eventOnMinigameEnterKey_Parms*)Obj)->isCorrect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnterKey_Statics::NewProp_isCorrect = { "isCorrect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DirectionalMinigamePresenter_eventOnMinigameEnterKey_Parms), &Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnterKey_Statics::NewProp_isCorrect_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnterKey_Statics::NewProp_currentIndex = { "currentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DirectionalMinigamePresenter_eventOnMinigameEnterKey_Parms, currentIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnterKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnterKey_Statics::NewProp_enteredKey_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnterKey_Statics::NewProp_enteredKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnterKey_Statics::NewProp_enteredIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnterKey_Statics::NewProp_isCorrect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnterKey_Statics::NewProp_currentIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnterKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DirectionalMinigamePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnterKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalMinigamePresenter, nullptr, "OnMinigameEnterKey", nullptr, nullptr, sizeof(DirectionalMinigamePresenter_eventOnMinigameEnterKey_Parms), Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnterKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnterKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnterKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnterKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnterKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnterKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameInit_Statics
	{
		struct DirectionalMinigamePresenter_eventOnMinigameInit_Parms
		{
			FDirectionalMiniGameDefinition miniGameDefinition;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_miniGameDefinition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameInit_Statics::NewProp_miniGameDefinition = { "miniGameDefinition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DirectionalMinigamePresenter_eventOnMinigameInit_Parms, miniGameDefinition), Z_Construct_UScriptStruct_FDirectionalMiniGameDefinition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameInit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameInit_Statics::NewProp_miniGameDefinition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameInit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DirectionalMinigamePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalMinigamePresenter, nullptr, "OnMinigameInit", nullptr, nullptr, sizeof(DirectionalMinigamePresenter_eventOnMinigameInit_Parms), Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameInit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameInit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameStart_Statics
	{
		struct DirectionalMinigamePresenter_eventOnMinigameStart_Parms
		{
			TArray<EDirectionalInputKey> sequence;
			int32 currentIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_sequence_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_sequence_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_sequence;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currentIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameStart_Statics::NewProp_sequence_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameStart_Statics::NewProp_sequence_Inner = { "sequence", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EDirectionalInputKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameStart_Statics::NewProp_sequence = { "sequence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DirectionalMinigamePresenter_eventOnMinigameStart_Parms, sequence), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameStart_Statics::NewProp_currentIndex = { "currentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DirectionalMinigamePresenter_eventOnMinigameStart_Parms, currentIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameStart_Statics::NewProp_sequence_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameStart_Statics::NewProp_sequence_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameStart_Statics::NewProp_sequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameStart_Statics::NewProp_currentIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DirectionalMinigamePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalMinigamePresenter, nullptr, "OnMinigameStart", nullptr, nullptr, sizeof(DirectionalMinigamePresenter_eventOnMinigameStart_Parms), Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDirectionalMinigamePresenter_NoRegister()
	{
		return UDirectionalMinigamePresenter::StaticClass();
	}
	struct Z_Construct_UClass_UDirectionalMinigamePresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionalMinigameWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DirectionalMinigameWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDirectionalMinigamePresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHudPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDirectionalMinigamePresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnd, "OnMinigameEnd" }, // 2398191136
		{ &Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameEnterKey, "OnMinigameEnterKey" }, // 3033306121
		{ &Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameInit, "OnMinigameInit" }, // 1008926934
		{ &Z_Construct_UFunction_UDirectionalMinigamePresenter_OnMinigameStart, "OnMinigameStart" }, // 1649740869
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalMinigamePresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DirectionalMinigamePresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DirectionalMinigamePresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalMinigamePresenter_Statics::NewProp_DirectionalMinigameWidgetClass_MetaData[] = {
		{ "Category", "DirectionalMinigamePresenter" },
		{ "ModuleRelativePath", "Public/DirectionalMinigamePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDirectionalMinigamePresenter_Statics::NewProp_DirectionalMinigameWidgetClass = { "DirectionalMinigameWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDirectionalMinigamePresenter, DirectionalMinigameWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDirectionalMinigamePresenter_Statics::NewProp_DirectionalMinigameWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalMinigamePresenter_Statics::NewProp_DirectionalMinigameWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDirectionalMinigamePresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalMinigamePresenter_Statics::NewProp_DirectionalMinigameWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDirectionalMinigamePresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDirectionalMinigamePresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDirectionalMinigamePresenter_Statics::ClassParams = {
		&UDirectionalMinigamePresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDirectionalMinigamePresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalMinigamePresenter_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDirectionalMinigamePresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalMinigamePresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDirectionalMinigamePresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDirectionalMinigamePresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDirectionalMinigamePresenter, 3555964203);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UDirectionalMinigamePresenter>()
	{
		return UDirectionalMinigamePresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDirectionalMinigamePresenter(Z_Construct_UClass_UDirectionalMinigamePresenter, &UDirectionalMinigamePresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UDirectionalMinigamePresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDirectionalMinigamePresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
