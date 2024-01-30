// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/StoreSpecialPacksSubPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreSpecialPacksSubPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UStoreSpecialPacksSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UStoreSpecialPacksSubPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UStoreSubPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreSpecialPackViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreChapterPackViewData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UStoreSpecialPacksSubPresenter::execOnSpecialPackBuyClicked)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_packId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSpecialPackBuyClicked(Z_Param_packId);
		P_NATIVE_END;
	}
	void UStoreSpecialPacksSubPresenter::StaticRegisterNativesUStoreSpecialPacksSubPresenter()
	{
		UClass* Class = UStoreSpecialPacksSubPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSpecialPackBuyClicked", &UStoreSpecialPacksSubPresenter::execOnSpecialPackBuyClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStoreSpecialPacksSubPresenter_OnSpecialPackBuyClicked_Statics
	{
		struct StoreSpecialPacksSubPresenter_eventOnSpecialPackBuyClicked_Parms
		{
			FString packId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_packId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_packId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreSpecialPacksSubPresenter_OnSpecialPackBuyClicked_Statics::NewProp_packId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStoreSpecialPacksSubPresenter_OnSpecialPackBuyClicked_Statics::NewProp_packId = { "packId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreSpecialPacksSubPresenter_eventOnSpecialPackBuyClicked_Parms, packId), METADATA_PARAMS(Z_Construct_UFunction_UStoreSpecialPacksSubPresenter_OnSpecialPackBuyClicked_Statics::NewProp_packId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreSpecialPacksSubPresenter_OnSpecialPackBuyClicked_Statics::NewProp_packId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreSpecialPacksSubPresenter_OnSpecialPackBuyClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreSpecialPacksSubPresenter_OnSpecialPackBuyClicked_Statics::NewProp_packId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreSpecialPacksSubPresenter_OnSpecialPackBuyClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreSpecialPacksSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreSpecialPacksSubPresenter_OnSpecialPackBuyClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreSpecialPacksSubPresenter, nullptr, "OnSpecialPackBuyClicked", nullptr, nullptr, sizeof(StoreSpecialPacksSubPresenter_eventOnSpecialPackBuyClicked_Parms), Z_Construct_UFunction_UStoreSpecialPacksSubPresenter_OnSpecialPackBuyClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreSpecialPacksSubPresenter_OnSpecialPackBuyClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreSpecialPacksSubPresenter_OnSpecialPackBuyClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreSpecialPacksSubPresenter_OnSpecialPackBuyClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreSpecialPacksSubPresenter_OnSpecialPackBuyClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreSpecialPacksSubPresenter_OnSpecialPackBuyClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStoreSpecialPacksSubPresenter_NoRegister()
	{
		return UStoreSpecialPacksSubPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoreBundlesWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StoreBundlesWidgetClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__specialPacks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__specialPacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__specialPacks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chapterPacks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chapterPacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__chapterPacks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStoreSubPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStoreSpecialPacksSubPresenter_OnSpecialPackBuyClicked, "OnSpecialPackBuyClicked" }, // 280586056
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StoreSpecialPacksSubPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StoreSpecialPacksSubPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::NewProp_StoreBundlesWidgetClass_MetaData[] = {
		{ "Category", "StoreSpecialPacksSubPresenter" },
		{ "ModuleRelativePath", "Public/StoreSpecialPacksSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::NewProp_StoreBundlesWidgetClass = { "StoreBundlesWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreSpecialPacksSubPresenter, StoreBundlesWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::NewProp_StoreBundlesWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::NewProp_StoreBundlesWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::NewProp__specialPacks_Inner = { "_specialPacks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStoreSpecialPackViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::NewProp__specialPacks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StoreSpecialPacksSubPresenter" },
		{ "ModuleRelativePath", "Public/StoreSpecialPacksSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::NewProp__specialPacks = { "_specialPacks", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreSpecialPacksSubPresenter, _specialPacks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::NewProp__specialPacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::NewProp__specialPacks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::NewProp__chapterPacks_Inner = { "_chapterPacks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStoreChapterPackViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::NewProp__chapterPacks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StoreSpecialPacksSubPresenter" },
		{ "ModuleRelativePath", "Public/StoreSpecialPacksSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::NewProp__chapterPacks = { "_chapterPacks", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreSpecialPacksSubPresenter, _chapterPacks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::NewProp__chapterPacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::NewProp__chapterPacks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::NewProp_StoreBundlesWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::NewProp__specialPacks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::NewProp__specialPacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::NewProp__chapterPacks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::NewProp__chapterPacks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStoreSpecialPacksSubPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::ClassParams = {
		&UStoreSpecialPacksSubPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreSpecialPacksSubPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoreSpecialPacksSubPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoreSpecialPacksSubPresenter, 2627138495);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UStoreSpecialPacksSubPresenter>()
	{
		return UStoreSpecialPacksSubPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoreSpecialPacksSubPresenter(Z_Construct_UClass_UStoreSpecialPacksSubPresenter, &UStoreSpecialPacksSubPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UStoreSpecialPacksSubPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreSpecialPacksSubPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
