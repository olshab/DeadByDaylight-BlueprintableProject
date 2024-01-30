// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/CreditsPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreditsPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UCreditsPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UCreditsPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCreditsPresenter::execCredits_ScrollToEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Credits_ScrollToEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCreditsPresenter::execCredits_ScrollToName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_delay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Credits_ScrollToName(Z_Param_name,Z_Param_delay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCreditsPresenter::execOnBackAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackAction();
		P_NATIVE_END;
	}
	void UCreditsPresenter::StaticRegisterNativesUCreditsPresenter()
	{
		UClass* Class = UCreditsPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Credits_ScrollToEnd", &UCreditsPresenter::execCredits_ScrollToEnd },
			{ "Credits_ScrollToName", &UCreditsPresenter::execCredits_ScrollToName },
			{ "OnBackAction", &UCreditsPresenter::execOnBackAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCreditsPresenter_Credits_ScrollToEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreditsPresenter_Credits_ScrollToEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CreditsPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreditsPresenter_Credits_ScrollToEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreditsPresenter, nullptr, "Credits_ScrollToEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreditsPresenter_Credits_ScrollToEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreditsPresenter_Credits_ScrollToEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreditsPresenter_Credits_ScrollToEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCreditsPresenter_Credits_ScrollToEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCreditsPresenter_Credits_ScrollToName_Statics
	{
		struct CreditsPresenter_eventCredits_ScrollToName_Parms
		{
			FString name;
			float delay;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreditsPresenter_Credits_ScrollToName_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCreditsPresenter_Credits_ScrollToName_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreditsPresenter_eventCredits_ScrollToName_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UCreditsPresenter_Credits_ScrollToName_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreditsPresenter_Credits_ScrollToName_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCreditsPresenter_Credits_ScrollToName_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreditsPresenter_eventCredits_ScrollToName_Parms, delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreditsPresenter_Credits_ScrollToName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreditsPresenter_Credits_ScrollToName_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreditsPresenter_Credits_ScrollToName_Statics::NewProp_delay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreditsPresenter_Credits_ScrollToName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CreditsPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreditsPresenter_Credits_ScrollToName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreditsPresenter, nullptr, "Credits_ScrollToName", nullptr, nullptr, sizeof(CreditsPresenter_eventCredits_ScrollToName_Parms), Z_Construct_UFunction_UCreditsPresenter_Credits_ScrollToName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreditsPresenter_Credits_ScrollToName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreditsPresenter_Credits_ScrollToName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreditsPresenter_Credits_ScrollToName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreditsPresenter_Credits_ScrollToName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCreditsPresenter_Credits_ScrollToName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCreditsPresenter_OnBackAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreditsPresenter_OnBackAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CreditsPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreditsPresenter_OnBackAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreditsPresenter, nullptr, "OnBackAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreditsPresenter_OnBackAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreditsPresenter_OnBackAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreditsPresenter_OnBackAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCreditsPresenter_OnBackAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCreditsPresenter_NoRegister()
	{
		return UCreditsPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UCreditsPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreditsScreenWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CreditsScreenWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCreditsPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCreditsPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCreditsPresenter_Credits_ScrollToEnd, "Credits_ScrollToEnd" }, // 619500117
		{ &Z_Construct_UFunction_UCreditsPresenter_Credits_ScrollToName, "Credits_ScrollToName" }, // 1352044204
		{ &Z_Construct_UFunction_UCreditsPresenter_OnBackAction, "OnBackAction" }, // 1947286436
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreditsPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CreditsPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CreditsPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreditsPresenter_Statics::NewProp_CreditsScreenWidgetClass_MetaData[] = {
		{ "Category", "CreditsPresenter" },
		{ "ModuleRelativePath", "Public/CreditsPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCreditsPresenter_Statics::NewProp_CreditsScreenWidgetClass = { "CreditsScreenWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreditsPresenter, CreditsScreenWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCreditsPresenter_Statics::NewProp_CreditsScreenWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreditsPresenter_Statics::NewProp_CreditsScreenWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCreditsPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreditsPresenter_Statics::NewProp_CreditsScreenWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreditsPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreditsPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCreditsPresenter_Statics::ClassParams = {
		&UCreditsPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCreditsPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCreditsPresenter_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCreditsPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCreditsPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreditsPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCreditsPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCreditsPresenter, 3162786986);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UCreditsPresenter>()
	{
		return UCreditsPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCreditsPresenter(Z_Construct_UClass_UCreditsPresenter, &UCreditsPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UCreditsPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreditsPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
