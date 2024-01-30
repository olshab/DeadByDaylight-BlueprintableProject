// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/DailyRitualsPopupPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDailyRitualsPopupPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UDailyRitualsPopupPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UDailyRitualsPopupPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UGenericPopupPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
// End Cross Module References
	DEFINE_FUNCTION(UDailyRitualsPopupPresenter::execOnClaimAllRituals)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClaimAllRituals();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDailyRitualsPopupPresenter::execOnClaimRitual)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClaimRitual(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDailyRitualsPopupPresenter::execOnRemoveRitual)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRemoveRitual(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDailyRitualsPopupPresenter::execOnRitualsFetchedEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRitualsFetchedEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDailyRitualsPopupPresenter::execOnRitualsSyncErrorEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRitualsSyncErrorEvent();
		P_NATIVE_END;
	}
	void UDailyRitualsPopupPresenter::StaticRegisterNativesUDailyRitualsPopupPresenter()
	{
		UClass* Class = UDailyRitualsPopupPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClaimAllRituals", &UDailyRitualsPopupPresenter::execOnClaimAllRituals },
			{ "OnClaimRitual", &UDailyRitualsPopupPresenter::execOnClaimRitual },
			{ "OnRemoveRitual", &UDailyRitualsPopupPresenter::execOnRemoveRitual },
			{ "OnRitualsFetchedEvent", &UDailyRitualsPopupPresenter::execOnRitualsFetchedEvent },
			{ "OnRitualsSyncErrorEvent", &UDailyRitualsPopupPresenter::execOnRitualsSyncErrorEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnClaimAllRituals_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnClaimAllRituals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualsPopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnClaimAllRituals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualsPopupPresenter, nullptr, "OnClaimAllRituals", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnClaimAllRituals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnClaimAllRituals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnClaimAllRituals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnClaimAllRituals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnClaimRitual_Statics
	{
		struct DailyRitualsPopupPresenter_eventOnClaimRitual_Parms
		{
			FString id;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnClaimRitual_Statics::NewProp_id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnClaimRitual_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DailyRitualsPopupPresenter_eventOnClaimRitual_Parms, id), METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnClaimRitual_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnClaimRitual_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnClaimRitual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnClaimRitual_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnClaimRitual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualsPopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnClaimRitual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualsPopupPresenter, nullptr, "OnClaimRitual", nullptr, nullptr, sizeof(DailyRitualsPopupPresenter_eventOnClaimRitual_Parms), Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnClaimRitual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnClaimRitual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnClaimRitual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnClaimRitual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnClaimRitual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnClaimRitual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRemoveRitual_Statics
	{
		struct DailyRitualsPopupPresenter_eventOnRemoveRitual_Parms
		{
			FString id;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRemoveRitual_Statics::NewProp_id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRemoveRitual_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DailyRitualsPopupPresenter_eventOnRemoveRitual_Parms, id), METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRemoveRitual_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRemoveRitual_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRemoveRitual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRemoveRitual_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRemoveRitual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualsPopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRemoveRitual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualsPopupPresenter, nullptr, "OnRemoveRitual", nullptr, nullptr, sizeof(DailyRitualsPopupPresenter_eventOnRemoveRitual_Parms), Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRemoveRitual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRemoveRitual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRemoveRitual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRemoveRitual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRemoveRitual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRemoveRitual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRitualsFetchedEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRitualsFetchedEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualsPopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRitualsFetchedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualsPopupPresenter, nullptr, "OnRitualsFetchedEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRitualsFetchedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRitualsFetchedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRitualsFetchedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRitualsFetchedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRitualsSyncErrorEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRitualsSyncErrorEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualsPopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRitualsSyncErrorEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualsPopupPresenter, nullptr, "OnRitualsSyncErrorEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRitualsSyncErrorEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRitualsSyncErrorEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRitualsSyncErrorEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRitualsSyncErrorEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDailyRitualsPopupPresenter_NoRegister()
	{
		return UDailyRitualsPopupPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UDailyRitualsPopupPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDailyRitualsPopupPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDailyRitualsPopupPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnClaimAllRituals, "OnClaimAllRituals" }, // 929612738
		{ &Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnClaimRitual, "OnClaimRitual" }, // 3433687944
		{ &Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRemoveRitual, "OnRemoveRitual" }, // 2748232287
		{ &Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRitualsFetchedEvent, "OnRitualsFetchedEvent" }, // 603263695
		{ &Z_Construct_UFunction_UDailyRitualsPopupPresenter_OnRitualsSyncErrorEvent, "OnRitualsSyncErrorEvent" }, // 1658506603
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualsPopupPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DailyRitualsPopupPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualsPopupPresenter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDailyRitualsPopupPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDailyRitualsPopupPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDailyRitualsPopupPresenter_Statics::ClassParams = {
		&UDailyRitualsPopupPresenter::StaticClass,
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
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDailyRitualsPopupPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualsPopupPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDailyRitualsPopupPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDailyRitualsPopupPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDailyRitualsPopupPresenter, 715314345);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UDailyRitualsPopupPresenter>()
	{
		return UDailyRitualsPopupPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDailyRitualsPopupPresenter(Z_Construct_UClass_UDailyRitualsPopupPresenter, &UDailyRitualsPopupPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UDailyRitualsPopupPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDailyRitualsPopupPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
