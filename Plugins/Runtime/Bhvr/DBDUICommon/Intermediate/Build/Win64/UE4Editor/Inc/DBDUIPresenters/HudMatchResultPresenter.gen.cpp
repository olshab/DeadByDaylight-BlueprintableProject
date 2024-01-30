// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/HudMatchResultPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudMatchResultPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudMatchResultPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudMatchResultPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHudMatchResultPresenter::execNotifyInParadiseOrEscaped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyInParadiseOrEscaped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudMatchResultPresenter::execOnMatchResultFadeOutCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMatchResultFadeOutCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudMatchResultPresenter::execShowEndSequence)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_GET_UBOOL(Z_Param_isSlasher);
		P_GET_PROPERTY(FIntProperty,Z_Param_matchResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowEndSequence(Z_Param_duration,Z_Param_isSlasher,Z_Param_matchResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudMatchResultPresenter::execStartEndGameSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartEndGameSequence();
		P_NATIVE_END;
	}
	void UHudMatchResultPresenter::StaticRegisterNativesUHudMatchResultPresenter()
	{
		UClass* Class = UHudMatchResultPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NotifyInParadiseOrEscaped", &UHudMatchResultPresenter::execNotifyInParadiseOrEscaped },
			{ "OnMatchResultFadeOutCompleted", &UHudMatchResultPresenter::execOnMatchResultFadeOutCompleted },
			{ "ShowEndSequence", &UHudMatchResultPresenter::execShowEndSequence },
			{ "StartEndGameSequence", &UHudMatchResultPresenter::execStartEndGameSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHudMatchResultPresenter_NotifyInParadiseOrEscaped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudMatchResultPresenter_NotifyInParadiseOrEscaped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudMatchResultPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudMatchResultPresenter_NotifyInParadiseOrEscaped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudMatchResultPresenter, nullptr, "NotifyInParadiseOrEscaped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudMatchResultPresenter_NotifyInParadiseOrEscaped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudMatchResultPresenter_NotifyInParadiseOrEscaped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudMatchResultPresenter_NotifyInParadiseOrEscaped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudMatchResultPresenter_NotifyInParadiseOrEscaped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudMatchResultPresenter_OnMatchResultFadeOutCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudMatchResultPresenter_OnMatchResultFadeOutCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudMatchResultPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudMatchResultPresenter_OnMatchResultFadeOutCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudMatchResultPresenter, nullptr, "OnMatchResultFadeOutCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudMatchResultPresenter_OnMatchResultFadeOutCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudMatchResultPresenter_OnMatchResultFadeOutCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudMatchResultPresenter_OnMatchResultFadeOutCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudMatchResultPresenter_OnMatchResultFadeOutCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudMatchResultPresenter_ShowEndSequence_Statics
	{
		struct HudMatchResultPresenter_eventShowEndSequence_Parms
		{
			float duration;
			bool isSlasher;
			int32 matchResult;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
		static void NewProp_isSlasher_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSlasher;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_matchResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHudMatchResultPresenter_ShowEndSequence_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudMatchResultPresenter_eventShowEndSequence_Parms, duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHudMatchResultPresenter_ShowEndSequence_Statics::NewProp_isSlasher_SetBit(void* Obj)
	{
		((HudMatchResultPresenter_eventShowEndSequence_Parms*)Obj)->isSlasher = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHudMatchResultPresenter_ShowEndSequence_Statics::NewProp_isSlasher = { "isSlasher", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HudMatchResultPresenter_eventShowEndSequence_Parms), &Z_Construct_UFunction_UHudMatchResultPresenter_ShowEndSequence_Statics::NewProp_isSlasher_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHudMatchResultPresenter_ShowEndSequence_Statics::NewProp_matchResult = { "matchResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudMatchResultPresenter_eventShowEndSequence_Parms, matchResult), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudMatchResultPresenter_ShowEndSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudMatchResultPresenter_ShowEndSequence_Statics::NewProp_duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudMatchResultPresenter_ShowEndSequence_Statics::NewProp_isSlasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudMatchResultPresenter_ShowEndSequence_Statics::NewProp_matchResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudMatchResultPresenter_ShowEndSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudMatchResultPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudMatchResultPresenter_ShowEndSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudMatchResultPresenter, nullptr, "ShowEndSequence", nullptr, nullptr, sizeof(HudMatchResultPresenter_eventShowEndSequence_Parms), Z_Construct_UFunction_UHudMatchResultPresenter_ShowEndSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudMatchResultPresenter_ShowEndSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudMatchResultPresenter_ShowEndSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudMatchResultPresenter_ShowEndSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudMatchResultPresenter_ShowEndSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudMatchResultPresenter_ShowEndSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudMatchResultPresenter_StartEndGameSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudMatchResultPresenter_StartEndGameSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudMatchResultPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudMatchResultPresenter_StartEndGameSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudMatchResultPresenter, nullptr, "StartEndGameSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudMatchResultPresenter_StartEndGameSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudMatchResultPresenter_StartEndGameSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudMatchResultPresenter_StartEndGameSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudMatchResultPresenter_StartEndGameSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHudMatchResultPresenter_NoRegister()
	{
		return UHudMatchResultPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UHudMatchResultPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchResultWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MatchResultWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHudMatchResultPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHudPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHudMatchResultPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHudMatchResultPresenter_NotifyInParadiseOrEscaped, "NotifyInParadiseOrEscaped" }, // 4006718157
		{ &Z_Construct_UFunction_UHudMatchResultPresenter_OnMatchResultFadeOutCompleted, "OnMatchResultFadeOutCompleted" }, // 679974132
		{ &Z_Construct_UFunction_UHudMatchResultPresenter_ShowEndSequence, "ShowEndSequence" }, // 985699868
		{ &Z_Construct_UFunction_UHudMatchResultPresenter_StartEndGameSequence, "StartEndGameSequence" }, // 2922365273
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudMatchResultPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HudMatchResultPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HudMatchResultPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudMatchResultPresenter_Statics::NewProp_MatchResultWidgetClass_MetaData[] = {
		{ "Category", "HudMatchResultPresenter" },
		{ "ModuleRelativePath", "Public/HudMatchResultPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHudMatchResultPresenter_Statics::NewProp_MatchResultWidgetClass = { "MatchResultWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudMatchResultPresenter, MatchResultWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UHudMatchResultPresenter_Statics::NewProp_MatchResultWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudMatchResultPresenter_Statics::NewProp_MatchResultWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHudMatchResultPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudMatchResultPresenter_Statics::NewProp_MatchResultWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHudMatchResultPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHudMatchResultPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHudMatchResultPresenter_Statics::ClassParams = {
		&UHudMatchResultPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHudMatchResultPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHudMatchResultPresenter_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHudMatchResultPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHudMatchResultPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHudMatchResultPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHudMatchResultPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHudMatchResultPresenter, 2711031653);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UHudMatchResultPresenter>()
	{
		return UHudMatchResultPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHudMatchResultPresenter(Z_Construct_UClass_UHudMatchResultPresenter, &UHudMatchResultPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UHudMatchResultPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudMatchResultPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
