// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/LightSensitivityPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightSensitivityPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_ULightSensitivityPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_ULightSensitivityPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULightSensitivityPresenter::execOnCompletedFadeOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompletedFadeOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightSensitivityPresenter::execOnContinue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnContinue();
		P_NATIVE_END;
	}
	void ULightSensitivityPresenter::StaticRegisterNativesULightSensitivityPresenter()
	{
		UClass* Class = ULightSensitivityPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCompletedFadeOut", &ULightSensitivityPresenter::execOnCompletedFadeOut },
			{ "OnContinue", &ULightSensitivityPresenter::execOnContinue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULightSensitivityPresenter_OnCompletedFadeOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightSensitivityPresenter_OnCompletedFadeOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightSensitivityPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightSensitivityPresenter_OnCompletedFadeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightSensitivityPresenter, nullptr, "OnCompletedFadeOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightSensitivityPresenter_OnCompletedFadeOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightSensitivityPresenter_OnCompletedFadeOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightSensitivityPresenter_OnCompletedFadeOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightSensitivityPresenter_OnCompletedFadeOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightSensitivityPresenter_OnContinue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightSensitivityPresenter_OnContinue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightSensitivityPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightSensitivityPresenter_OnContinue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightSensitivityPresenter, nullptr, "OnContinue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightSensitivityPresenter_OnContinue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightSensitivityPresenter_OnContinue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightSensitivityPresenter_OnContinue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightSensitivityPresenter_OnContinue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULightSensitivityPresenter_NoRegister()
	{
		return ULightSensitivityPresenter::StaticClass();
	}
	struct Z_Construct_UClass_ULightSensitivityPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightSensitivityScreenWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LightSensitivityScreenWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoCompleteTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoCompleteTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightSensitivityPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULightSensitivityPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULightSensitivityPresenter_OnCompletedFadeOut, "OnCompletedFadeOut" }, // 3343109794
		{ &Z_Construct_UFunction_ULightSensitivityPresenter_OnContinue, "OnContinue" }, // 1904230932
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightSensitivityPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LightSensitivityPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LightSensitivityPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightSensitivityPresenter_Statics::NewProp_LightSensitivityScreenWidgetClass_MetaData[] = {
		{ "Category", "LightSensitivityPresenter" },
		{ "ModuleRelativePath", "Public/LightSensitivityPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULightSensitivityPresenter_Statics::NewProp_LightSensitivityScreenWidgetClass = { "LightSensitivityScreenWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightSensitivityPresenter, LightSensitivityScreenWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ULightSensitivityPresenter_Statics::NewProp_LightSensitivityScreenWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightSensitivityPresenter_Statics::NewProp_LightSensitivityScreenWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightSensitivityPresenter_Statics::NewProp_AutoCompleteTime_MetaData[] = {
		{ "Category", "LightSensitivityPresenter" },
		{ "ModuleRelativePath", "Public/LightSensitivityPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightSensitivityPresenter_Statics::NewProp_AutoCompleteTime = { "AutoCompleteTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightSensitivityPresenter, AutoCompleteTime), METADATA_PARAMS(Z_Construct_UClass_ULightSensitivityPresenter_Statics::NewProp_AutoCompleteTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightSensitivityPresenter_Statics::NewProp_AutoCompleteTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightSensitivityPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightSensitivityPresenter_Statics::NewProp_LightSensitivityScreenWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightSensitivityPresenter_Statics::NewProp_AutoCompleteTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightSensitivityPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightSensitivityPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightSensitivityPresenter_Statics::ClassParams = {
		&ULightSensitivityPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULightSensitivityPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULightSensitivityPresenter_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULightSensitivityPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightSensitivityPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightSensitivityPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightSensitivityPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightSensitivityPresenter, 1282377440);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<ULightSensitivityPresenter>()
	{
		return ULightSensitivityPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightSensitivityPresenter(Z_Construct_UClass_ULightSensitivityPresenter, &ULightSensitivityPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("ULightSensitivityPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightSensitivityPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
