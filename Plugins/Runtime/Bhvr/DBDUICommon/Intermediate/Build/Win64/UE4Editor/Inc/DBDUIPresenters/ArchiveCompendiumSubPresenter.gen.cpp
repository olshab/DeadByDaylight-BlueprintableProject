// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/ArchiveCompendiumSubPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveCompendiumSubPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UArchiveCompendiumSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UArchiveCompendiumSubPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USubPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveCompendiumViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UArchiveCompendiumSubPresenter::execOnTomeSelected)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_tomeId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTomeSelected(Z_Param_tomeId);
		P_NATIVE_END;
	}
	void UArchiveCompendiumSubPresenter::StaticRegisterNativesUArchiveCompendiumSubPresenter()
	{
		UClass* Class = UArchiveCompendiumSubPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTomeSelected", &UArchiveCompendiumSubPresenter::execOnTomeSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchiveCompendiumSubPresenter_OnTomeSelected_Statics
	{
		struct ArchiveCompendiumSubPresenter_eventOnTomeSelected_Parms
		{
			FString tomeId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tomeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tomeId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveCompendiumSubPresenter_OnTomeSelected_Statics::NewProp_tomeId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArchiveCompendiumSubPresenter_OnTomeSelected_Statics::NewProp_tomeId = { "tomeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveCompendiumSubPresenter_eventOnTomeSelected_Parms, tomeId), METADATA_PARAMS(Z_Construct_UFunction_UArchiveCompendiumSubPresenter_OnTomeSelected_Statics::NewProp_tomeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveCompendiumSubPresenter_OnTomeSelected_Statics::NewProp_tomeId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveCompendiumSubPresenter_OnTomeSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveCompendiumSubPresenter_OnTomeSelected_Statics::NewProp_tomeId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveCompendiumSubPresenter_OnTomeSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveCompendiumSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveCompendiumSubPresenter_OnTomeSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveCompendiumSubPresenter, nullptr, "OnTomeSelected", nullptr, nullptr, sizeof(ArchiveCompendiumSubPresenter_eventOnTomeSelected_Parms), Z_Construct_UFunction_UArchiveCompendiumSubPresenter_OnTomeSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveCompendiumSubPresenter_OnTomeSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveCompendiumSubPresenter_OnTomeSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveCompendiumSubPresenter_OnTomeSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveCompendiumSubPresenter_OnTomeSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveCompendiumSubPresenter_OnTomeSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArchiveCompendiumSubPresenter_NoRegister()
	{
		return UArchiveCompendiumSubPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveCompendiumSubPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__archiveCompendiumWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__archiveCompendiumWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveCompendiumSubPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchiveCompendiumSubPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchiveCompendiumSubPresenter_OnTomeSelected, "OnTomeSelected" }, // 4255292923
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveCompendiumSubPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ArchiveCompendiumSubPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArchiveCompendiumSubPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveCompendiumSubPresenter_Statics::NewProp__archiveCompendiumWidget_MetaData[] = {
		{ "Category", "ArchiveCompendiumSubPresenter" },
		{ "ModuleRelativePath", "Public/ArchiveCompendiumSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UArchiveCompendiumSubPresenter_Statics::NewProp__archiveCompendiumWidget = { "_archiveCompendiumWidget", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveCompendiumSubPresenter, _archiveCompendiumWidget), Z_Construct_UClass_UArchiveCompendiumViewInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveCompendiumSubPresenter_Statics::NewProp__archiveCompendiumWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveCompendiumSubPresenter_Statics::NewProp__archiveCompendiumWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchiveCompendiumSubPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveCompendiumSubPresenter_Statics::NewProp__archiveCompendiumWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveCompendiumSubPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchiveCompendiumSubPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveCompendiumSubPresenter_Statics::ClassParams = {
		&UArchiveCompendiumSubPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UArchiveCompendiumSubPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveCompendiumSubPresenter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UArchiveCompendiumSubPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveCompendiumSubPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveCompendiumSubPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveCompendiumSubPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveCompendiumSubPresenter, 1989283227);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UArchiveCompendiumSubPresenter>()
	{
		return UArchiveCompendiumSubPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveCompendiumSubPresenter(Z_Construct_UClass_UArchiveCompendiumSubPresenter, &UArchiveCompendiumSubPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UArchiveCompendiumSubPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveCompendiumSubPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
