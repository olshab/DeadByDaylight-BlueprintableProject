// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/StoreSubPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreSubPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UStoreSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UStoreSubPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USubPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UShopManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UStoreSubPresenter::execOnSubTabSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_subTabId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSubTabSelected(Z_Param_subTabId);
		P_NATIVE_END;
	}
	void UStoreSubPresenter::StaticRegisterNativesUStoreSubPresenter()
	{
		UClass* Class = UStoreSubPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSubTabSelected", &UStoreSubPresenter::execOnSubTabSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStoreSubPresenter_OnSubTabSelected_Statics
	{
		struct StoreSubPresenter_eventOnSubTabSelected_Parms
		{
			int32 subTabId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_subTabId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStoreSubPresenter_OnSubTabSelected_Statics::NewProp_subTabId = { "subTabId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreSubPresenter_eventOnSubTabSelected_Parms, subTabId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreSubPresenter_OnSubTabSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreSubPresenter_OnSubTabSelected_Statics::NewProp_subTabId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreSubPresenter_OnSubTabSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreSubPresenter_OnSubTabSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreSubPresenter, nullptr, "OnSubTabSelected", nullptr, nullptr, sizeof(StoreSubPresenter_eventOnSubTabSelected_Parms), Z_Construct_UFunction_UStoreSubPresenter_OnSubTabSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreSubPresenter_OnSubTabSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreSubPresenter_OnSubTabSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreSubPresenter_OnSubTabSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreSubPresenter_OnSubTabSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreSubPresenter_OnSubTabSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStoreSubPresenter_NoRegister()
	{
		return UStoreSubPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UStoreSubPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__shopManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__shopManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreSubPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStoreSubPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStoreSubPresenter_OnSubTabSelected, "OnSubTabSelected" }, // 339613596
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreSubPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StoreSubPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StoreSubPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreSubPresenter_Statics::NewProp__shopManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StoreSubPresenter" },
		{ "ModuleRelativePath", "Public/StoreSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreSubPresenter_Statics::NewProp__shopManager = { "_shopManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreSubPresenter, _shopManager), Z_Construct_UClass_UShopManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreSubPresenter_Statics::NewProp__shopManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreSubPresenter_Statics::NewProp__shopManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStoreSubPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreSubPresenter_Statics::NewProp__shopManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreSubPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStoreSubPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoreSubPresenter_Statics::ClassParams = {
		&UStoreSubPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStoreSubPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStoreSubPresenter_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UStoreSubPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreSubPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreSubPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoreSubPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoreSubPresenter, 1625755807);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UStoreSubPresenter>()
	{
		return UStoreSubPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoreSubPresenter(Z_Construct_UClass_UStoreSubPresenter, &UStoreSubPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UStoreSubPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreSubPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
