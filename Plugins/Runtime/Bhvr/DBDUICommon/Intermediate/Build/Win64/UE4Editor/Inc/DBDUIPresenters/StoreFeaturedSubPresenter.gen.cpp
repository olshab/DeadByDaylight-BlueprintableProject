// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/StoreFeaturedSubPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreFeaturedSubPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UStoreFeaturedSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UStoreFeaturedSubPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UStoreSubPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreFeaturedViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UStoreFeaturedSubPresenter::execOnBackendStoreDataReceived)
	{
		P_GET_UBOOL(Z_Param_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackendStoreDataReceived(Z_Param_success);
		P_NATIVE_END;
	}
	void UStoreFeaturedSubPresenter::StaticRegisterNativesUStoreFeaturedSubPresenter()
	{
		UClass* Class = UStoreFeaturedSubPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBackendStoreDataReceived", &UStoreFeaturedSubPresenter::execOnBackendStoreDataReceived },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStoreFeaturedSubPresenter_OnBackendStoreDataReceived_Statics
	{
		struct StoreFeaturedSubPresenter_eventOnBackendStoreDataReceived_Parms
		{
			bool success;
		};
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStoreFeaturedSubPresenter_OnBackendStoreDataReceived_Statics::NewProp_success_SetBit(void* Obj)
	{
		((StoreFeaturedSubPresenter_eventOnBackendStoreDataReceived_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStoreFeaturedSubPresenter_OnBackendStoreDataReceived_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StoreFeaturedSubPresenter_eventOnBackendStoreDataReceived_Parms), &Z_Construct_UFunction_UStoreFeaturedSubPresenter_OnBackendStoreDataReceived_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreFeaturedSubPresenter_OnBackendStoreDataReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreFeaturedSubPresenter_OnBackendStoreDataReceived_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreFeaturedSubPresenter_OnBackendStoreDataReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreFeaturedSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreFeaturedSubPresenter_OnBackendStoreDataReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreFeaturedSubPresenter, nullptr, "OnBackendStoreDataReceived", nullptr, nullptr, sizeof(StoreFeaturedSubPresenter_eventOnBackendStoreDataReceived_Parms), Z_Construct_UFunction_UStoreFeaturedSubPresenter_OnBackendStoreDataReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreFeaturedSubPresenter_OnBackendStoreDataReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreFeaturedSubPresenter_OnBackendStoreDataReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreFeaturedSubPresenter_OnBackendStoreDataReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreFeaturedSubPresenter_OnBackendStoreDataReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreFeaturedSubPresenter_OnBackendStoreDataReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStoreFeaturedSubPresenter_NoRegister()
	{
		return UStoreFeaturedSubPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UStoreFeaturedSubPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__storeFeaturedWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__storeFeaturedWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreFeaturedSubPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStoreSubPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStoreFeaturedSubPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStoreFeaturedSubPresenter_OnBackendStoreDataReceived, "OnBackendStoreDataReceived" }, // 2498338900
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreFeaturedSubPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StoreFeaturedSubPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StoreFeaturedSubPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreFeaturedSubPresenter_Statics::NewProp__storeFeaturedWidget_MetaData[] = {
		{ "Category", "StoreFeaturedSubPresenter" },
		{ "ModuleRelativePath", "Public/StoreFeaturedSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UStoreFeaturedSubPresenter_Statics::NewProp__storeFeaturedWidget = { "_storeFeaturedWidget", nullptr, (EPropertyFlags)0x0024080000002005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreFeaturedSubPresenter, _storeFeaturedWidget), Z_Construct_UClass_UStoreFeaturedViewInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreFeaturedSubPresenter_Statics::NewProp__storeFeaturedWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreFeaturedSubPresenter_Statics::NewProp__storeFeaturedWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStoreFeaturedSubPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreFeaturedSubPresenter_Statics::NewProp__storeFeaturedWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreFeaturedSubPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStoreFeaturedSubPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoreFeaturedSubPresenter_Statics::ClassParams = {
		&UStoreFeaturedSubPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStoreFeaturedSubPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStoreFeaturedSubPresenter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStoreFeaturedSubPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreFeaturedSubPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreFeaturedSubPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoreFeaturedSubPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoreFeaturedSubPresenter, 3027848344);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UStoreFeaturedSubPresenter>()
	{
		return UStoreFeaturedSubPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoreFeaturedSubPresenter(Z_Construct_UClass_UStoreFeaturedSubPresenter, &UStoreFeaturedSubPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UStoreFeaturedSubPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreFeaturedSubPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
