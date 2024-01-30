// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/NewActiveTomePopupPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewActiveTomePopupPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UNewActiveTomePopupPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UNewActiveTomePopupPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UGenericPopupPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
// End Cross Module References
	DEFINE_FUNCTION(UNewActiveTomePopupPresenter::execOnCurrentTomeButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCurrentTomeButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNewActiveTomePopupPresenter::execOnRiftButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRiftButtonClicked();
		P_NATIVE_END;
	}
	void UNewActiveTomePopupPresenter::StaticRegisterNativesUNewActiveTomePopupPresenter()
	{
		UClass* Class = UNewActiveTomePopupPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCurrentTomeButtonClicked", &UNewActiveTomePopupPresenter::execOnCurrentTomeButtonClicked },
			{ "OnRiftButtonClicked", &UNewActiveTomePopupPresenter::execOnRiftButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNewActiveTomePopupPresenter_OnCurrentTomeButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewActiveTomePopupPresenter_OnCurrentTomeButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NewActiveTomePopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewActiveTomePopupPresenter_OnCurrentTomeButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewActiveTomePopupPresenter, nullptr, "OnCurrentTomeButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewActiveTomePopupPresenter_OnCurrentTomeButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewActiveTomePopupPresenter_OnCurrentTomeButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewActiveTomePopupPresenter_OnCurrentTomeButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNewActiveTomePopupPresenter_OnCurrentTomeButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNewActiveTomePopupPresenter_OnRiftButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewActiveTomePopupPresenter_OnRiftButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NewActiveTomePopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewActiveTomePopupPresenter_OnRiftButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewActiveTomePopupPresenter, nullptr, "OnRiftButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewActiveTomePopupPresenter_OnRiftButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewActiveTomePopupPresenter_OnRiftButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewActiveTomePopupPresenter_OnRiftButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNewActiveTomePopupPresenter_OnRiftButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNewActiveTomePopupPresenter_NoRegister()
	{
		return UNewActiveTomePopupPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UNewActiveTomePopupPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNewActiveTomePopupPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNewActiveTomePopupPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNewActiveTomePopupPresenter_OnCurrentTomeButtonClicked, "OnCurrentTomeButtonClicked" }, // 1097451734
		{ &Z_Construct_UFunction_UNewActiveTomePopupPresenter_OnRiftButtonClicked, "OnRiftButtonClicked" }, // 1163554919
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewActiveTomePopupPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NewActiveTomePopupPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NewActiveTomePopupPresenter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNewActiveTomePopupPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewActiveTomePopupPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNewActiveTomePopupPresenter_Statics::ClassParams = {
		&UNewActiveTomePopupPresenter::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNewActiveTomePopupPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNewActiveTomePopupPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNewActiveTomePopupPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNewActiveTomePopupPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNewActiveTomePopupPresenter, 4038095015);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UNewActiveTomePopupPresenter>()
	{
		return UNewActiveTomePopupPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNewActiveTomePopupPresenter(Z_Construct_UClass_UNewActiveTomePopupPresenter, &UNewActiveTomePopupPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UNewActiveTomePopupPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNewActiveTomePopupPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
