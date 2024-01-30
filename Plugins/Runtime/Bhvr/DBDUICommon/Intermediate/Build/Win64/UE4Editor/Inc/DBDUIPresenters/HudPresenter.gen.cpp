// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/HudPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EHudParentContainerType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDSpectator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHudScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCoreHudRootWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHudPresenter::execIsHudReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHudReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudPresenter::execIsPendingPawnReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPendingPawnReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudPresenter::execOnLocallyObservedChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocallyObservedChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudPresenter::execOnPawnPossessed)
	{
		P_GET_OBJECT(APawn,Z_Param_pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnPossessed(Z_Param_pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudPresenter::execOnPawnUnpossessed)
	{
		P_GET_OBJECT(APawn,Z_Param_pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnUnpossessed(Z_Param_pawn);
		P_NATIVE_END;
	}
	void UHudPresenter::StaticRegisterNativesUHudPresenter()
	{
		UClass* Class = UHudPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsHudReady", &UHudPresenter::execIsHudReady },
			{ "IsPendingPawnReady", &UHudPresenter::execIsPendingPawnReady },
			{ "OnLocallyObservedChanged", &UHudPresenter::execOnLocallyObservedChanged },
			{ "OnPawnPossessed", &UHudPresenter::execOnPawnPossessed },
			{ "OnPawnUnpossessed", &UHudPresenter::execOnPawnUnpossessed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHudPresenter_IsHudReady_Statics
	{
		struct HudPresenter_eventIsHudReady_Parms
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
	void Z_Construct_UFunction_UHudPresenter_IsHudReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HudPresenter_eventIsHudReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHudPresenter_IsHudReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HudPresenter_eventIsHudReady_Parms), &Z_Construct_UFunction_UHudPresenter_IsHudReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudPresenter_IsHudReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudPresenter_IsHudReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudPresenter_IsHudReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudPresenter_IsHudReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudPresenter, nullptr, "IsHudReady", nullptr, nullptr, sizeof(HudPresenter_eventIsHudReady_Parms), Z_Construct_UFunction_UHudPresenter_IsHudReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudPresenter_IsHudReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudPresenter_IsHudReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudPresenter_IsHudReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudPresenter_IsHudReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudPresenter_IsHudReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudPresenter_IsPendingPawnReady_Statics
	{
		struct HudPresenter_eventIsPendingPawnReady_Parms
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
	void Z_Construct_UFunction_UHudPresenter_IsPendingPawnReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HudPresenter_eventIsPendingPawnReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHudPresenter_IsPendingPawnReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HudPresenter_eventIsPendingPawnReady_Parms), &Z_Construct_UFunction_UHudPresenter_IsPendingPawnReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudPresenter_IsPendingPawnReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudPresenter_IsPendingPawnReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudPresenter_IsPendingPawnReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudPresenter_IsPendingPawnReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudPresenter, nullptr, "IsPendingPawnReady", nullptr, nullptr, sizeof(HudPresenter_eventIsPendingPawnReady_Parms), Z_Construct_UFunction_UHudPresenter_IsPendingPawnReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudPresenter_IsPendingPawnReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudPresenter_IsPendingPawnReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudPresenter_IsPendingPawnReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudPresenter_IsPendingPawnReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudPresenter_IsPendingPawnReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudPresenter_OnLocallyObservedChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudPresenter_OnLocallyObservedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudPresenter_OnLocallyObservedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudPresenter, nullptr, "OnLocallyObservedChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudPresenter_OnLocallyObservedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudPresenter_OnLocallyObservedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudPresenter_OnLocallyObservedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudPresenter_OnLocallyObservedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudPresenter_OnPawnPossessed_Statics
	{
		struct HudPresenter_eventOnPawnPossessed_Parms
		{
			APawn* pawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHudPresenter_OnPawnPossessed_Statics::NewProp_pawn = { "pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudPresenter_eventOnPawnPossessed_Parms, pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudPresenter_OnPawnPossessed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudPresenter_OnPawnPossessed_Statics::NewProp_pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudPresenter_OnPawnPossessed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudPresenter_OnPawnPossessed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudPresenter, nullptr, "OnPawnPossessed", nullptr, nullptr, sizeof(HudPresenter_eventOnPawnPossessed_Parms), Z_Construct_UFunction_UHudPresenter_OnPawnPossessed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudPresenter_OnPawnPossessed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudPresenter_OnPawnPossessed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudPresenter_OnPawnPossessed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudPresenter_OnPawnPossessed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudPresenter_OnPawnPossessed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudPresenter_OnPawnUnpossessed_Statics
	{
		struct HudPresenter_eventOnPawnUnpossessed_Parms
		{
			APawn* pawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHudPresenter_OnPawnUnpossessed_Statics::NewProp_pawn = { "pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudPresenter_eventOnPawnUnpossessed_Parms, pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudPresenter_OnPawnUnpossessed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudPresenter_OnPawnUnpossessed_Statics::NewProp_pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudPresenter_OnPawnUnpossessed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudPresenter_OnPawnUnpossessed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudPresenter, nullptr, "OnPawnUnpossessed", nullptr, nullptr, sizeof(HudPresenter_eventOnPawnUnpossessed_Parms), Z_Construct_UFunction_UHudPresenter_OnPawnUnpossessed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudPresenter_OnPawnUnpossessed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudPresenter_OnPawnUnpossessed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudPresenter_OnPawnUnpossessed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudPresenter_OnPawnUnpossessed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudPresenter_OnPawnUnpossessed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHudPresenter_NoRegister()
	{
		return UHudPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UHudPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HudParentContainer_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HudParentContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HudParentContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pendingCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pendingCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__presentedCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__presentedCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spectatorPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__spectatorPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hudScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hudScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rootWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__rootWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHudPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHudPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHudPresenter_IsHudReady, "IsHudReady" }, // 592622243
		{ &Z_Construct_UFunction_UHudPresenter_IsPendingPawnReady, "IsPendingPawnReady" }, // 4010319615
		{ &Z_Construct_UFunction_UHudPresenter_OnLocallyObservedChanged, "OnLocallyObservedChanged" }, // 1649798045
		{ &Z_Construct_UFunction_UHudPresenter_OnPawnPossessed, "OnPawnPossessed" }, // 1543591958
		{ &Z_Construct_UFunction_UHudPresenter_OnPawnUnpossessed, "OnPawnUnpossessed" }, // 574216807
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HudPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HudPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHudPresenter_Statics::NewProp_HudParentContainer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudPresenter_Statics::NewProp_HudParentContainer_MetaData[] = {
		{ "Category", "HudPresenter" },
		{ "ModuleRelativePath", "Public/HudPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHudPresenter_Statics::NewProp_HudParentContainer = { "HudParentContainer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudPresenter, HudParentContainer), Z_Construct_UEnum_DBDSharedTypes_EHudParentContainerType, METADATA_PARAMS(Z_Construct_UClass_UHudPresenter_Statics::NewProp_HudParentContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudPresenter_Statics::NewProp_HudParentContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudPresenter_Statics::NewProp__pendingCharacter_MetaData[] = {
		{ "Category", "HudPresenter" },
		{ "ModuleRelativePath", "Public/HudPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudPresenter_Statics::NewProp__pendingCharacter = { "_pendingCharacter", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudPresenter, _pendingCharacter), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHudPresenter_Statics::NewProp__pendingCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudPresenter_Statics::NewProp__pendingCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudPresenter_Statics::NewProp__presentedCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HudPresenter" },
		{ "ModuleRelativePath", "Public/HudPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudPresenter_Statics::NewProp__presentedCharacter = { "_presentedCharacter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudPresenter, _presentedCharacter), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHudPresenter_Statics::NewProp__presentedCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudPresenter_Statics::NewProp__presentedCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudPresenter_Statics::NewProp__spectatorPawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HudPresenter" },
		{ "ModuleRelativePath", "Public/HudPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudPresenter_Statics::NewProp__spectatorPawn = { "_spectatorPawn", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudPresenter, _spectatorPawn), Z_Construct_UClass_ADBDSpectator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHudPresenter_Statics::NewProp__spectatorPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudPresenter_Statics::NewProp__spectatorPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudPresenter_Statics::NewProp__hudScreen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HudPresenter" },
		{ "ModuleRelativePath", "Public/HudPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudPresenter_Statics::NewProp__hudScreen = { "_hudScreen", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudPresenter, _hudScreen), Z_Construct_UClass_UHudScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHudPresenter_Statics::NewProp__hudScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudPresenter_Statics::NewProp__hudScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudPresenter_Statics::NewProp__rootWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HudPresenter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HudPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudPresenter_Statics::NewProp__rootWidget = { "_rootWidget", nullptr, (EPropertyFlags)0x004000000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudPresenter, _rootWidget), Z_Construct_UClass_UCoreHudRootWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHudPresenter_Statics::NewProp__rootWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudPresenter_Statics::NewProp__rootWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHudPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudPresenter_Statics::NewProp_HudParentContainer_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudPresenter_Statics::NewProp_HudParentContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudPresenter_Statics::NewProp__pendingCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudPresenter_Statics::NewProp__presentedCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudPresenter_Statics::NewProp__spectatorPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudPresenter_Statics::NewProp__hudScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudPresenter_Statics::NewProp__rootWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHudPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHudPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHudPresenter_Statics::ClassParams = {
		&UHudPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHudPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHudPresenter_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UHudPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHudPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHudPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHudPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHudPresenter, 1064427107);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UHudPresenter>()
	{
		return UHudPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHudPresenter(Z_Construct_UClass_UHudPresenter, &UHudPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UHudPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
