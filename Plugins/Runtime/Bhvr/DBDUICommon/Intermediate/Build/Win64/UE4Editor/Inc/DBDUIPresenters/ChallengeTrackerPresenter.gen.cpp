// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/ChallengeTrackerPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeTrackerPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UChallengeTrackerPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UChallengeTrackerPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UChallengeTrackerPresenter::execBindToQuestRepetitionEvents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindToQuestRepetitionEvents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChallengeTrackerPresenter::execOnQuestEventRepetitionValueChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_GET_PROPERTY(FStrProperty,Z_Param_questEventIdTracked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestEventRepetitionValueChanged(Z_Param_value,Z_Param_questEventIdTracked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChallengeTrackerPresenter::execOnReadingTimeDelayDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReadingTimeDelayDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChallengeTrackerPresenter::execOnWidgetClosingDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWidgetClosingDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChallengeTrackerPresenter::execOnWidgetOpeningDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWidgetOpeningDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChallengeTrackerPresenter::execOnWidgetProgressingDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWidgetProgressingDone();
		P_NATIVE_END;
	}
	void UChallengeTrackerPresenter::StaticRegisterNativesUChallengeTrackerPresenter()
	{
		UClass* Class = UChallengeTrackerPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindToQuestRepetitionEvents", &UChallengeTrackerPresenter::execBindToQuestRepetitionEvents },
			{ "OnQuestEventRepetitionValueChanged", &UChallengeTrackerPresenter::execOnQuestEventRepetitionValueChanged },
			{ "OnReadingTimeDelayDone", &UChallengeTrackerPresenter::execOnReadingTimeDelayDone },
			{ "OnWidgetClosingDone", &UChallengeTrackerPresenter::execOnWidgetClosingDone },
			{ "OnWidgetOpeningDone", &UChallengeTrackerPresenter::execOnWidgetOpeningDone },
			{ "OnWidgetProgressingDone", &UChallengeTrackerPresenter::execOnWidgetProgressingDone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChallengeTrackerPresenter_BindToQuestRepetitionEvents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChallengeTrackerPresenter_BindToQuestRepetitionEvents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChallengeTrackerPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChallengeTrackerPresenter_BindToQuestRepetitionEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChallengeTrackerPresenter, nullptr, "BindToQuestRepetitionEvents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChallengeTrackerPresenter_BindToQuestRepetitionEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChallengeTrackerPresenter_BindToQuestRepetitionEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChallengeTrackerPresenter_BindToQuestRepetitionEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChallengeTrackerPresenter_BindToQuestRepetitionEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChallengeTrackerPresenter_OnQuestEventRepetitionValueChanged_Statics
	{
		struct ChallengeTrackerPresenter_eventOnQuestEventRepetitionValueChanged_Parms
		{
			int32 value;
			FString questEventIdTracked;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_questEventIdTracked_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_questEventIdTracked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChallengeTrackerPresenter_OnQuestEventRepetitionValueChanged_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChallengeTrackerPresenter_eventOnQuestEventRepetitionValueChanged_Parms, value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChallengeTrackerPresenter_OnQuestEventRepetitionValueChanged_Statics::NewProp_questEventIdTracked_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UChallengeTrackerPresenter_OnQuestEventRepetitionValueChanged_Statics::NewProp_questEventIdTracked = { "questEventIdTracked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChallengeTrackerPresenter_eventOnQuestEventRepetitionValueChanged_Parms, questEventIdTracked), METADATA_PARAMS(Z_Construct_UFunction_UChallengeTrackerPresenter_OnQuestEventRepetitionValueChanged_Statics::NewProp_questEventIdTracked_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChallengeTrackerPresenter_OnQuestEventRepetitionValueChanged_Statics::NewProp_questEventIdTracked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChallengeTrackerPresenter_OnQuestEventRepetitionValueChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChallengeTrackerPresenter_OnQuestEventRepetitionValueChanged_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChallengeTrackerPresenter_OnQuestEventRepetitionValueChanged_Statics::NewProp_questEventIdTracked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChallengeTrackerPresenter_OnQuestEventRepetitionValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChallengeTrackerPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChallengeTrackerPresenter_OnQuestEventRepetitionValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChallengeTrackerPresenter, nullptr, "OnQuestEventRepetitionValueChanged", nullptr, nullptr, sizeof(ChallengeTrackerPresenter_eventOnQuestEventRepetitionValueChanged_Parms), Z_Construct_UFunction_UChallengeTrackerPresenter_OnQuestEventRepetitionValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChallengeTrackerPresenter_OnQuestEventRepetitionValueChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChallengeTrackerPresenter_OnQuestEventRepetitionValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChallengeTrackerPresenter_OnQuestEventRepetitionValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChallengeTrackerPresenter_OnQuestEventRepetitionValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChallengeTrackerPresenter_OnQuestEventRepetitionValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChallengeTrackerPresenter_OnReadingTimeDelayDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChallengeTrackerPresenter_OnReadingTimeDelayDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChallengeTrackerPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChallengeTrackerPresenter_OnReadingTimeDelayDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChallengeTrackerPresenter, nullptr, "OnReadingTimeDelayDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChallengeTrackerPresenter_OnReadingTimeDelayDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChallengeTrackerPresenter_OnReadingTimeDelayDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChallengeTrackerPresenter_OnReadingTimeDelayDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChallengeTrackerPresenter_OnReadingTimeDelayDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChallengeTrackerPresenter_OnWidgetClosingDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChallengeTrackerPresenter_OnWidgetClosingDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChallengeTrackerPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChallengeTrackerPresenter_OnWidgetClosingDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChallengeTrackerPresenter, nullptr, "OnWidgetClosingDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChallengeTrackerPresenter_OnWidgetClosingDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChallengeTrackerPresenter_OnWidgetClosingDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChallengeTrackerPresenter_OnWidgetClosingDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChallengeTrackerPresenter_OnWidgetClosingDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChallengeTrackerPresenter_OnWidgetOpeningDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChallengeTrackerPresenter_OnWidgetOpeningDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChallengeTrackerPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChallengeTrackerPresenter_OnWidgetOpeningDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChallengeTrackerPresenter, nullptr, "OnWidgetOpeningDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChallengeTrackerPresenter_OnWidgetOpeningDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChallengeTrackerPresenter_OnWidgetOpeningDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChallengeTrackerPresenter_OnWidgetOpeningDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChallengeTrackerPresenter_OnWidgetOpeningDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChallengeTrackerPresenter_OnWidgetProgressingDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChallengeTrackerPresenter_OnWidgetProgressingDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChallengeTrackerPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChallengeTrackerPresenter_OnWidgetProgressingDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChallengeTrackerPresenter, nullptr, "OnWidgetProgressingDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChallengeTrackerPresenter_OnWidgetProgressingDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChallengeTrackerPresenter_OnWidgetProgressingDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChallengeTrackerPresenter_OnWidgetProgressingDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChallengeTrackerPresenter_OnWidgetProgressingDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChallengeTrackerPresenter_NoRegister()
	{
		return UChallengeTrackerPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UChallengeTrackerPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeTrackerWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ChallengeTrackerWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadingTimeDelaySec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReadingTimeDelaySec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChallengeTrackerPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHudPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChallengeTrackerPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChallengeTrackerPresenter_BindToQuestRepetitionEvents, "BindToQuestRepetitionEvents" }, // 2092647435
		{ &Z_Construct_UFunction_UChallengeTrackerPresenter_OnQuestEventRepetitionValueChanged, "OnQuestEventRepetitionValueChanged" }, // 937649881
		{ &Z_Construct_UFunction_UChallengeTrackerPresenter_OnReadingTimeDelayDone, "OnReadingTimeDelayDone" }, // 707908455
		{ &Z_Construct_UFunction_UChallengeTrackerPresenter_OnWidgetClosingDone, "OnWidgetClosingDone" }, // 1223532613
		{ &Z_Construct_UFunction_UChallengeTrackerPresenter_OnWidgetOpeningDone, "OnWidgetOpeningDone" }, // 1365491059
		{ &Z_Construct_UFunction_UChallengeTrackerPresenter_OnWidgetProgressingDone, "OnWidgetProgressingDone" }, // 3771104777
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChallengeTrackerPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ChallengeTrackerPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ChallengeTrackerPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChallengeTrackerPresenter_Statics::NewProp_ChallengeTrackerWidgetClass_MetaData[] = {
		{ "Category", "ChallengeTrackerPresenter" },
		{ "ModuleRelativePath", "Public/ChallengeTrackerPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UChallengeTrackerPresenter_Statics::NewProp_ChallengeTrackerWidgetClass = { "ChallengeTrackerWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChallengeTrackerPresenter, ChallengeTrackerWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UChallengeTrackerPresenter_Statics::NewProp_ChallengeTrackerWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChallengeTrackerPresenter_Statics::NewProp_ChallengeTrackerWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChallengeTrackerPresenter_Statics::NewProp_ReadingTimeDelaySec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeTrackerPresenter" },
		{ "ModuleRelativePath", "Public/ChallengeTrackerPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChallengeTrackerPresenter_Statics::NewProp_ReadingTimeDelaySec = { "ReadingTimeDelaySec", nullptr, (EPropertyFlags)0x0040000002000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChallengeTrackerPresenter, ReadingTimeDelaySec), METADATA_PARAMS(Z_Construct_UClass_UChallengeTrackerPresenter_Statics::NewProp_ReadingTimeDelaySec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChallengeTrackerPresenter_Statics::NewProp_ReadingTimeDelaySec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChallengeTrackerPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChallengeTrackerPresenter_Statics::NewProp_ChallengeTrackerWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChallengeTrackerPresenter_Statics::NewProp_ReadingTimeDelaySec,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChallengeTrackerPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChallengeTrackerPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChallengeTrackerPresenter_Statics::ClassParams = {
		&UChallengeTrackerPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UChallengeTrackerPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UChallengeTrackerPresenter_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChallengeTrackerPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChallengeTrackerPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChallengeTrackerPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChallengeTrackerPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChallengeTrackerPresenter, 2180573271);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UChallengeTrackerPresenter>()
	{
		return UChallengeTrackerPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChallengeTrackerPresenter(Z_Construct_UClass_UChallengeTrackerPresenter, &UChallengeTrackerPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UChallengeTrackerPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChallengeTrackerPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
