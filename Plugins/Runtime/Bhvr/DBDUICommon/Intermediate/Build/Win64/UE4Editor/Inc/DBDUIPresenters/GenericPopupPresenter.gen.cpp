// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/GenericPopupPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenericPopupPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UGenericPopupPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UGenericPopupPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UBasePopupPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPopupButtonType();
// End Cross Module References
	DEFINE_FUNCTION(UGenericPopupPresenter::execOnAction)
	{
		P_GET_ENUM(EPopupButtonType,Z_Param_popupAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAction(EPopupButtonType(Z_Param_popupAction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGenericPopupPresenter::execOnAppResumed)
	{
		P_GET_UBOOL(Z_Param_isAppResumed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAppResumed(Z_Param_isAppResumed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGenericPopupPresenter::execOnBack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBack();
		P_NATIVE_END;
	}
	void UGenericPopupPresenter::StaticRegisterNativesUGenericPopupPresenter()
	{
		UClass* Class = UGenericPopupPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAction", &UGenericPopupPresenter::execOnAction },
			{ "OnAppResumed", &UGenericPopupPresenter::execOnAppResumed },
			{ "OnBack", &UGenericPopupPresenter::execOnBack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGenericPopupPresenter_OnAction_Statics
	{
		struct GenericPopupPresenter_eventOnAction_Parms
		{
			EPopupButtonType popupAction;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_popupAction_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_popupAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGenericPopupPresenter_OnAction_Statics::NewProp_popupAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGenericPopupPresenter_OnAction_Statics::NewProp_popupAction = { "popupAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenericPopupPresenter_eventOnAction_Parms, popupAction), Z_Construct_UEnum_DBDSharedTypes_EPopupButtonType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenericPopupPresenter_OnAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericPopupPresenter_OnAction_Statics::NewProp_popupAction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericPopupPresenter_OnAction_Statics::NewProp_popupAction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenericPopupPresenter_OnAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GenericPopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenericPopupPresenter_OnAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenericPopupPresenter, nullptr, "OnAction", nullptr, nullptr, sizeof(GenericPopupPresenter_eventOnAction_Parms), Z_Construct_UFunction_UGenericPopupPresenter_OnAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericPopupPresenter_OnAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenericPopupPresenter_OnAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericPopupPresenter_OnAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenericPopupPresenter_OnAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGenericPopupPresenter_OnAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGenericPopupPresenter_OnAppResumed_Statics
	{
		struct GenericPopupPresenter_eventOnAppResumed_Parms
		{
			bool isAppResumed;
		};
		static void NewProp_isAppResumed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAppResumed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGenericPopupPresenter_OnAppResumed_Statics::NewProp_isAppResumed_SetBit(void* Obj)
	{
		((GenericPopupPresenter_eventOnAppResumed_Parms*)Obj)->isAppResumed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGenericPopupPresenter_OnAppResumed_Statics::NewProp_isAppResumed = { "isAppResumed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GenericPopupPresenter_eventOnAppResumed_Parms), &Z_Construct_UFunction_UGenericPopupPresenter_OnAppResumed_Statics::NewProp_isAppResumed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenericPopupPresenter_OnAppResumed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericPopupPresenter_OnAppResumed_Statics::NewProp_isAppResumed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenericPopupPresenter_OnAppResumed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GenericPopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenericPopupPresenter_OnAppResumed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenericPopupPresenter, nullptr, "OnAppResumed", nullptr, nullptr, sizeof(GenericPopupPresenter_eventOnAppResumed_Parms), Z_Construct_UFunction_UGenericPopupPresenter_OnAppResumed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericPopupPresenter_OnAppResumed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenericPopupPresenter_OnAppResumed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericPopupPresenter_OnAppResumed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenericPopupPresenter_OnAppResumed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGenericPopupPresenter_OnAppResumed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGenericPopupPresenter_OnBack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenericPopupPresenter_OnBack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GenericPopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenericPopupPresenter_OnBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenericPopupPresenter, nullptr, "OnBack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenericPopupPresenter_OnBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericPopupPresenter_OnBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenericPopupPresenter_OnBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGenericPopupPresenter_OnBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGenericPopupPresenter_NoRegister()
	{
		return UGenericPopupPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UGenericPopupPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenericPopupPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasePopupPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGenericPopupPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenericPopupPresenter_OnAction, "OnAction" }, // 3114181843
		{ &Z_Construct_UFunction_UGenericPopupPresenter_OnAppResumed, "OnAppResumed" }, // 3571331038
		{ &Z_Construct_UFunction_UGenericPopupPresenter_OnBack, "OnBack" }, // 3797275107
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericPopupPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GenericPopupPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GenericPopupPresenter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenericPopupPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenericPopupPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGenericPopupPresenter_Statics::ClassParams = {
		&UGenericPopupPresenter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGenericPopupPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericPopupPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenericPopupPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGenericPopupPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGenericPopupPresenter, 3376333000);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UGenericPopupPresenter>()
	{
		return UGenericPopupPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGenericPopupPresenter(Z_Construct_UClass_UGenericPopupPresenter, &UGenericPopupPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UGenericPopupPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenericPopupPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
