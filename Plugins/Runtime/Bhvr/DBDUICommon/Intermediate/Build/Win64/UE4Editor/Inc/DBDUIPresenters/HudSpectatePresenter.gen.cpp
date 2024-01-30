// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/HudSpectatePresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudSpectatePresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudSpectatePresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudSpectatePresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayerState_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EGameState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHudSpectatePresenter::execOnLeaveTriggered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLeaveTriggered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudSpectatePresenter::execOnNextPlayerTriggered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNextPlayerTriggered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudSpectatePresenter::execOnPlayerGameStateChanged)
	{
		P_GET_OBJECT(ADBDPlayerState,Z_Param_dbdPlayerState);
		P_GET_ENUM(EGameState,Z_Param_newGameState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerGameStateChanged(Z_Param_dbdPlayerState,EGameState(Z_Param_newGameState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudSpectatePresenter::execOnPreviousPlayerTriggered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPreviousPlayerTriggered();
		P_NATIVE_END;
	}
	void UHudSpectatePresenter::StaticRegisterNativesUHudSpectatePresenter()
	{
		UClass* Class = UHudSpectatePresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLeaveTriggered", &UHudSpectatePresenter::execOnLeaveTriggered },
			{ "OnNextPlayerTriggered", &UHudSpectatePresenter::execOnNextPlayerTriggered },
			{ "OnPlayerGameStateChanged", &UHudSpectatePresenter::execOnPlayerGameStateChanged },
			{ "OnPreviousPlayerTriggered", &UHudSpectatePresenter::execOnPreviousPlayerTriggered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHudSpectatePresenter_OnLeaveTriggered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudSpectatePresenter_OnLeaveTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudSpectatePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudSpectatePresenter_OnLeaveTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudSpectatePresenter, nullptr, "OnLeaveTriggered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudSpectatePresenter_OnLeaveTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudSpectatePresenter_OnLeaveTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudSpectatePresenter_OnLeaveTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudSpectatePresenter_OnLeaveTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudSpectatePresenter_OnNextPlayerTriggered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudSpectatePresenter_OnNextPlayerTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudSpectatePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudSpectatePresenter_OnNextPlayerTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudSpectatePresenter, nullptr, "OnNextPlayerTriggered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudSpectatePresenter_OnNextPlayerTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudSpectatePresenter_OnNextPlayerTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudSpectatePresenter_OnNextPlayerTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudSpectatePresenter_OnNextPlayerTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudSpectatePresenter_OnPlayerGameStateChanged_Statics
	{
		struct HudSpectatePresenter_eventOnPlayerGameStateChanged_Parms
		{
			ADBDPlayerState* dbdPlayerState;
			EGameState newGameState;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dbdPlayerState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newGameState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newGameState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHudSpectatePresenter_OnPlayerGameStateChanged_Statics::NewProp_dbdPlayerState = { "dbdPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudSpectatePresenter_eventOnPlayerGameStateChanged_Parms, dbdPlayerState), Z_Construct_UClass_ADBDPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHudSpectatePresenter_OnPlayerGameStateChanged_Statics::NewProp_newGameState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHudSpectatePresenter_OnPlayerGameStateChanged_Statics::NewProp_newGameState = { "newGameState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudSpectatePresenter_eventOnPlayerGameStateChanged_Parms, newGameState), Z_Construct_UEnum_DBDSharedTypes_EGameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudSpectatePresenter_OnPlayerGameStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudSpectatePresenter_OnPlayerGameStateChanged_Statics::NewProp_dbdPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudSpectatePresenter_OnPlayerGameStateChanged_Statics::NewProp_newGameState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudSpectatePresenter_OnPlayerGameStateChanged_Statics::NewProp_newGameState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudSpectatePresenter_OnPlayerGameStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudSpectatePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudSpectatePresenter_OnPlayerGameStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudSpectatePresenter, nullptr, "OnPlayerGameStateChanged", nullptr, nullptr, sizeof(HudSpectatePresenter_eventOnPlayerGameStateChanged_Parms), Z_Construct_UFunction_UHudSpectatePresenter_OnPlayerGameStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudSpectatePresenter_OnPlayerGameStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudSpectatePresenter_OnPlayerGameStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudSpectatePresenter_OnPlayerGameStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudSpectatePresenter_OnPlayerGameStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudSpectatePresenter_OnPlayerGameStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudSpectatePresenter_OnPreviousPlayerTriggered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudSpectatePresenter_OnPreviousPlayerTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudSpectatePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudSpectatePresenter_OnPreviousPlayerTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudSpectatePresenter, nullptr, "OnPreviousPlayerTriggered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudSpectatePresenter_OnPreviousPlayerTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudSpectatePresenter_OnPreviousPlayerTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudSpectatePresenter_OnPreviousPlayerTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudSpectatePresenter_OnPreviousPlayerTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHudSpectatePresenter_NoRegister()
	{
		return UHudSpectatePresenter::StaticClass();
	}
	struct Z_Construct_UClass_UHudSpectatePresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoreSpectateBarWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CoreSpectateBarWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHudSpectatePresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHudPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHudSpectatePresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHudSpectatePresenter_OnLeaveTriggered, "OnLeaveTriggered" }, // 1042132205
		{ &Z_Construct_UFunction_UHudSpectatePresenter_OnNextPlayerTriggered, "OnNextPlayerTriggered" }, // 4098435047
		{ &Z_Construct_UFunction_UHudSpectatePresenter_OnPlayerGameStateChanged, "OnPlayerGameStateChanged" }, // 2275406461
		{ &Z_Construct_UFunction_UHudSpectatePresenter_OnPreviousPlayerTriggered, "OnPreviousPlayerTriggered" }, // 3917314347
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudSpectatePresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HudSpectatePresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HudSpectatePresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudSpectatePresenter_Statics::NewProp_CoreSpectateBarWidget_MetaData[] = {
		{ "Category", "HudSpectatePresenter" },
		{ "ModuleRelativePath", "Public/HudSpectatePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHudSpectatePresenter_Statics::NewProp_CoreSpectateBarWidget = { "CoreSpectateBarWidget", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudSpectatePresenter, CoreSpectateBarWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UHudSpectatePresenter_Statics::NewProp_CoreSpectateBarWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudSpectatePresenter_Statics::NewProp_CoreSpectateBarWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHudSpectatePresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudSpectatePresenter_Statics::NewProp_CoreSpectateBarWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHudSpectatePresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHudSpectatePresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHudSpectatePresenter_Statics::ClassParams = {
		&UHudSpectatePresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHudSpectatePresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHudSpectatePresenter_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHudSpectatePresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHudSpectatePresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHudSpectatePresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHudSpectatePresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHudSpectatePresenter, 889713986);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UHudSpectatePresenter>()
	{
		return UHudSpectatePresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHudSpectatePresenter(Z_Construct_UClass_UHudSpectatePresenter, &UHudSpectatePresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UHudSpectatePresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudSpectatePresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
