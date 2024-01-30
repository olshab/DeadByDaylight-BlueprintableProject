// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/BaseAlertPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAlertPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UBaseAlertPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UBaseAlertPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EContext();
// End Cross Module References
	DEFINE_FUNCTION(UBaseAlertPresenter::execIsContextEntered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsContextEntered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseAlertPresenter::execOnContextEnter)
	{
		P_GET_ENUM(EContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnContextEnter(EContext(Z_Param_context));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseAlertPresenter::execOnContextLeave)
	{
		P_GET_ENUM(EContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnContextLeave(EContext(Z_Param_context));
		P_NATIVE_END;
	}
	void UBaseAlertPresenter::StaticRegisterNativesUBaseAlertPresenter()
	{
		UClass* Class = UBaseAlertPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsContextEntered", &UBaseAlertPresenter::execIsContextEntered },
			{ "OnContextEnter", &UBaseAlertPresenter::execOnContextEnter },
			{ "OnContextLeave", &UBaseAlertPresenter::execOnContextLeave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseAlertPresenter_IsContextEntered_Statics
	{
		struct BaseAlertPresenter_eventIsContextEntered_Parms
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
	void Z_Construct_UFunction_UBaseAlertPresenter_IsContextEntered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseAlertPresenter_eventIsContextEntered_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseAlertPresenter_IsContextEntered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseAlertPresenter_eventIsContextEntered_Parms), &Z_Construct_UFunction_UBaseAlertPresenter_IsContextEntered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAlertPresenter_IsContextEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAlertPresenter_IsContextEntered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAlertPresenter_IsContextEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseAlertPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAlertPresenter_IsContextEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAlertPresenter, nullptr, "IsContextEntered", nullptr, nullptr, sizeof(BaseAlertPresenter_eventIsContextEntered_Parms), Z_Construct_UFunction_UBaseAlertPresenter_IsContextEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAlertPresenter_IsContextEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseAlertPresenter_IsContextEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAlertPresenter_IsContextEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseAlertPresenter_IsContextEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseAlertPresenter_IsContextEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseAlertPresenter_OnContextEnter_Statics
	{
		struct BaseAlertPresenter_eventOnContextEnter_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseAlertPresenter_OnContextEnter_Statics::NewProp_context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseAlertPresenter_OnContextEnter_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseAlertPresenter_eventOnContextEnter_Parms, context), Z_Construct_UEnum_DeadByDaylight_EContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAlertPresenter_OnContextEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAlertPresenter_OnContextEnter_Statics::NewProp_context_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAlertPresenter_OnContextEnter_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAlertPresenter_OnContextEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseAlertPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAlertPresenter_OnContextEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAlertPresenter, nullptr, "OnContextEnter", nullptr, nullptr, sizeof(BaseAlertPresenter_eventOnContextEnter_Parms), Z_Construct_UFunction_UBaseAlertPresenter_OnContextEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAlertPresenter_OnContextEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseAlertPresenter_OnContextEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAlertPresenter_OnContextEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseAlertPresenter_OnContextEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseAlertPresenter_OnContextEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseAlertPresenter_OnContextLeave_Statics
	{
		struct BaseAlertPresenter_eventOnContextLeave_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseAlertPresenter_OnContextLeave_Statics::NewProp_context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseAlertPresenter_OnContextLeave_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseAlertPresenter_eventOnContextLeave_Parms, context), Z_Construct_UEnum_DeadByDaylight_EContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAlertPresenter_OnContextLeave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAlertPresenter_OnContextLeave_Statics::NewProp_context_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAlertPresenter_OnContextLeave_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAlertPresenter_OnContextLeave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseAlertPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAlertPresenter_OnContextLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAlertPresenter, nullptr, "OnContextLeave", nullptr, nullptr, sizeof(BaseAlertPresenter_eventOnContextLeave_Parms), Z_Construct_UFunction_UBaseAlertPresenter_OnContextLeave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAlertPresenter_OnContextLeave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseAlertPresenter_OnContextLeave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAlertPresenter_OnContextLeave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseAlertPresenter_OnContextLeave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseAlertPresenter_OnContextLeave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseAlertPresenter_NoRegister()
	{
		return UBaseAlertPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UBaseAlertPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObservedContext_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObservedContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ObservedContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseAlertPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseAlertPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseAlertPresenter_IsContextEntered, "IsContextEntered" }, // 362182274
		{ &Z_Construct_UFunction_UBaseAlertPresenter_OnContextEnter, "OnContextEnter" }, // 832284023
		{ &Z_Construct_UFunction_UBaseAlertPresenter_OnContextLeave, "OnContextLeave" }, // 642242050
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAlertPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BaseAlertPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BaseAlertPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseAlertPresenter_Statics::NewProp_ObservedContext_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAlertPresenter_Statics::NewProp_ObservedContext_MetaData[] = {
		{ "Category", "BaseAlertPresenter" },
		{ "ModuleRelativePath", "Public/BaseAlertPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseAlertPresenter_Statics::NewProp_ObservedContext = { "ObservedContext", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseAlertPresenter, ObservedContext), Z_Construct_UEnum_DeadByDaylight_EContext, METADATA_PARAMS(Z_Construct_UClass_UBaseAlertPresenter_Statics::NewProp_ObservedContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAlertPresenter_Statics::NewProp_ObservedContext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseAlertPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAlertPresenter_Statics::NewProp_ObservedContext_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAlertPresenter_Statics::NewProp_ObservedContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseAlertPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAlertPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseAlertPresenter_Statics::ClassParams = {
		&UBaseAlertPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseAlertPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAlertPresenter_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseAlertPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAlertPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseAlertPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseAlertPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseAlertPresenter, 3745304233);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UBaseAlertPresenter>()
	{
		return UBaseAlertPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseAlertPresenter(Z_Construct_UClass_UBaseAlertPresenter, &UBaseAlertPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UBaseAlertPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseAlertPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
