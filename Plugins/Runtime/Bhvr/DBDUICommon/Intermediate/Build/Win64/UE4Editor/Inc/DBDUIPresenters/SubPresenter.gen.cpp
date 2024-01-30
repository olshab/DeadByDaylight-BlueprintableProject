// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/SubPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USubPresenter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
// End Cross Module References
	DEFINE_FUNCTION(USubPresenter::execOnPresenterStartAsyncOperation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPresenterStartAsyncOperation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubPresenter::execOnPresenterStopAsyncOperation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPresenterStopAsyncOperation();
		P_NATIVE_END;
	}
	void USubPresenter::StaticRegisterNativesUSubPresenter()
	{
		UClass* Class = USubPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPresenterStartAsyncOperation", &USubPresenter::execOnPresenterStartAsyncOperation },
			{ "OnPresenterStopAsyncOperation", &USubPresenter::execOnPresenterStopAsyncOperation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubPresenter_OnPresenterStartAsyncOperation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubPresenter_OnPresenterStartAsyncOperation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubPresenter_OnPresenterStartAsyncOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubPresenter, nullptr, "OnPresenterStartAsyncOperation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubPresenter_OnPresenterStartAsyncOperation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubPresenter_OnPresenterStartAsyncOperation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubPresenter_OnPresenterStartAsyncOperation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubPresenter_OnPresenterStartAsyncOperation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubPresenter_OnPresenterStopAsyncOperation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubPresenter_OnPresenterStopAsyncOperation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubPresenter_OnPresenterStopAsyncOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubPresenter, nullptr, "OnPresenterStopAsyncOperation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubPresenter_OnPresenterStopAsyncOperation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubPresenter_OnPresenterStopAsyncOperation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubPresenter_OnPresenterStopAsyncOperation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubPresenter_OnPresenterStopAsyncOperation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubPresenter_NoRegister()
	{
		return USubPresenter::StaticClass();
	}
	struct Z_Construct_UClass_USubPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubPresenter_OnPresenterStartAsyncOperation, "OnPresenterStartAsyncOperation" }, // 4159085525
		{ &Z_Construct_UFunction_USubPresenter_OnPresenterStopAsyncOperation, "OnPresenterStopAsyncOperation" }, // 712786632
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SubPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SubPresenter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubPresenter_Statics::ClassParams = {
		&USubPresenter::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USubPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubPresenter, 655074276);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<USubPresenter>()
	{
		return USubPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubPresenter(Z_Construct_UClass_USubPresenter, &USubPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("USubPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
