// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/HudPeekingPromptsPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudPeekingPromptsPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudPeekingPromptsPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudPeekingPromptsPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ELeanState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHudPeekingPromptsPresenter::execCanPlayerLean)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPlayerLean();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudPeekingPromptsPresenter::execHandleBestPlayerInteractionsChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleBestPlayerInteractionsChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudPeekingPromptsPresenter::execUpdatePeekingState)
	{
		P_GET_ENUM(ELeanState,Z_Param_potentialLeanState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePeekingState(ELeanState(Z_Param_potentialLeanState));
		P_NATIVE_END;
	}
	void UHudPeekingPromptsPresenter::StaticRegisterNativesUHudPeekingPromptsPresenter()
	{
		UClass* Class = UHudPeekingPromptsPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanPlayerLean", &UHudPeekingPromptsPresenter::execCanPlayerLean },
			{ "HandleBestPlayerInteractionsChanged", &UHudPeekingPromptsPresenter::execHandleBestPlayerInteractionsChanged },
			{ "UpdatePeekingState", &UHudPeekingPromptsPresenter::execUpdatePeekingState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHudPeekingPromptsPresenter_CanPlayerLean_Statics
	{
		struct HudPeekingPromptsPresenter_eventCanPlayerLean_Parms
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
	void Z_Construct_UFunction_UHudPeekingPromptsPresenter_CanPlayerLean_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HudPeekingPromptsPresenter_eventCanPlayerLean_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHudPeekingPromptsPresenter_CanPlayerLean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HudPeekingPromptsPresenter_eventCanPlayerLean_Parms), &Z_Construct_UFunction_UHudPeekingPromptsPresenter_CanPlayerLean_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudPeekingPromptsPresenter_CanPlayerLean_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudPeekingPromptsPresenter_CanPlayerLean_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudPeekingPromptsPresenter_CanPlayerLean_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudPeekingPromptsPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudPeekingPromptsPresenter_CanPlayerLean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudPeekingPromptsPresenter, nullptr, "CanPlayerLean", nullptr, nullptr, sizeof(HudPeekingPromptsPresenter_eventCanPlayerLean_Parms), Z_Construct_UFunction_UHudPeekingPromptsPresenter_CanPlayerLean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudPeekingPromptsPresenter_CanPlayerLean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudPeekingPromptsPresenter_CanPlayerLean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudPeekingPromptsPresenter_CanPlayerLean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudPeekingPromptsPresenter_CanPlayerLean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudPeekingPromptsPresenter_CanPlayerLean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudPeekingPromptsPresenter_HandleBestPlayerInteractionsChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudPeekingPromptsPresenter_HandleBestPlayerInteractionsChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudPeekingPromptsPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudPeekingPromptsPresenter_HandleBestPlayerInteractionsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudPeekingPromptsPresenter, nullptr, "HandleBestPlayerInteractionsChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudPeekingPromptsPresenter_HandleBestPlayerInteractionsChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudPeekingPromptsPresenter_HandleBestPlayerInteractionsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudPeekingPromptsPresenter_HandleBestPlayerInteractionsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudPeekingPromptsPresenter_HandleBestPlayerInteractionsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudPeekingPromptsPresenter_UpdatePeekingState_Statics
	{
		struct HudPeekingPromptsPresenter_eventUpdatePeekingState_Parms
		{
			ELeanState potentialLeanState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_potentialLeanState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_potentialLeanState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHudPeekingPromptsPresenter_UpdatePeekingState_Statics::NewProp_potentialLeanState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHudPeekingPromptsPresenter_UpdatePeekingState_Statics::NewProp_potentialLeanState = { "potentialLeanState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudPeekingPromptsPresenter_eventUpdatePeekingState_Parms, potentialLeanState), Z_Construct_UEnum_DBDSharedTypes_ELeanState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudPeekingPromptsPresenter_UpdatePeekingState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudPeekingPromptsPresenter_UpdatePeekingState_Statics::NewProp_potentialLeanState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudPeekingPromptsPresenter_UpdatePeekingState_Statics::NewProp_potentialLeanState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudPeekingPromptsPresenter_UpdatePeekingState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudPeekingPromptsPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudPeekingPromptsPresenter_UpdatePeekingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudPeekingPromptsPresenter, nullptr, "UpdatePeekingState", nullptr, nullptr, sizeof(HudPeekingPromptsPresenter_eventUpdatePeekingState_Parms), Z_Construct_UFunction_UHudPeekingPromptsPresenter_UpdatePeekingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudPeekingPromptsPresenter_UpdatePeekingState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudPeekingPromptsPresenter_UpdatePeekingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudPeekingPromptsPresenter_UpdatePeekingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudPeekingPromptsPresenter_UpdatePeekingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudPeekingPromptsPresenter_UpdatePeekingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHudPeekingPromptsPresenter_NoRegister()
	{
		return UHudPeekingPromptsPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UHudPeekingPromptsPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaningArrowsWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LeaningArrowsWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHudPeekingPromptsPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHudPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHudPeekingPromptsPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHudPeekingPromptsPresenter_CanPlayerLean, "CanPlayerLean" }, // 825704905
		{ &Z_Construct_UFunction_UHudPeekingPromptsPresenter_HandleBestPlayerInteractionsChanged, "HandleBestPlayerInteractionsChanged" }, // 3191000748
		{ &Z_Construct_UFunction_UHudPeekingPromptsPresenter_UpdatePeekingState, "UpdatePeekingState" }, // 2608391124
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudPeekingPromptsPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HudPeekingPromptsPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HudPeekingPromptsPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudPeekingPromptsPresenter_Statics::NewProp_LeaningArrowsWidgetClass_MetaData[] = {
		{ "Category", "HudPeekingPromptsPresenter" },
		{ "ModuleRelativePath", "Public/HudPeekingPromptsPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHudPeekingPromptsPresenter_Statics::NewProp_LeaningArrowsWidgetClass = { "LeaningArrowsWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudPeekingPromptsPresenter, LeaningArrowsWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UHudPeekingPromptsPresenter_Statics::NewProp_LeaningArrowsWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudPeekingPromptsPresenter_Statics::NewProp_LeaningArrowsWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHudPeekingPromptsPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudPeekingPromptsPresenter_Statics::NewProp_LeaningArrowsWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHudPeekingPromptsPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHudPeekingPromptsPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHudPeekingPromptsPresenter_Statics::ClassParams = {
		&UHudPeekingPromptsPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHudPeekingPromptsPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHudPeekingPromptsPresenter_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHudPeekingPromptsPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHudPeekingPromptsPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHudPeekingPromptsPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHudPeekingPromptsPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHudPeekingPromptsPresenter, 1195229443);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UHudPeekingPromptsPresenter>()
	{
		return UHudPeekingPromptsPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHudPeekingPromptsPresenter(Z_Construct_UClass_UHudPeekingPromptsPresenter, &UHudPeekingPromptsPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UHudPeekingPromptsPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudPeekingPromptsPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
