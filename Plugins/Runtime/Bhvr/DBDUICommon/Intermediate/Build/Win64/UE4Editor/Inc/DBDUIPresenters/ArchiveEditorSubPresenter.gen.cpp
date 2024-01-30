// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/ArchiveEditorSubPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveEditorSubPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UArchiveEditorSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UArchiveEditorSubPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UArchiveQuestMapSubPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveNodeGraphViewData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveEditorViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UArchiveEditorSubPresenter::execOnSaveTomeGraph)
	{
		P_GET_TARRAY_REF(FArchiveNodeGraphViewData,Z_Param_Out_nodeList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSaveTomeGraph(Z_Param_Out_nodeList);
		P_NATIVE_END;
	}
	void UArchiveEditorSubPresenter::StaticRegisterNativesUArchiveEditorSubPresenter()
	{
		UClass* Class = UArchiveEditorSubPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSaveTomeGraph", &UArchiveEditorSubPresenter::execOnSaveTomeGraph },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchiveEditorSubPresenter_OnSaveTomeGraph_Statics
	{
		struct ArchiveEditorSubPresenter_eventOnSaveTomeGraph_Parms
		{
			TArray<FArchiveNodeGraphViewData> nodeList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_nodeList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nodeList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_nodeList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveEditorSubPresenter_OnSaveTomeGraph_Statics::NewProp_nodeList_Inner = { "nodeList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FArchiveNodeGraphViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveEditorSubPresenter_OnSaveTomeGraph_Statics::NewProp_nodeList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArchiveEditorSubPresenter_OnSaveTomeGraph_Statics::NewProp_nodeList = { "nodeList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveEditorSubPresenter_eventOnSaveTomeGraph_Parms, nodeList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UArchiveEditorSubPresenter_OnSaveTomeGraph_Statics::NewProp_nodeList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveEditorSubPresenter_OnSaveTomeGraph_Statics::NewProp_nodeList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveEditorSubPresenter_OnSaveTomeGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveEditorSubPresenter_OnSaveTomeGraph_Statics::NewProp_nodeList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveEditorSubPresenter_OnSaveTomeGraph_Statics::NewProp_nodeList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveEditorSubPresenter_OnSaveTomeGraph_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveEditorSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveEditorSubPresenter_OnSaveTomeGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveEditorSubPresenter, nullptr, "OnSaveTomeGraph", nullptr, nullptr, sizeof(ArchiveEditorSubPresenter_eventOnSaveTomeGraph_Parms), Z_Construct_UFunction_UArchiveEditorSubPresenter_OnSaveTomeGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveEditorSubPresenter_OnSaveTomeGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveEditorSubPresenter_OnSaveTomeGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveEditorSubPresenter_OnSaveTomeGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveEditorSubPresenter_OnSaveTomeGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveEditorSubPresenter_OnSaveTomeGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArchiveEditorSubPresenter_NoRegister()
	{
		return UArchiveEditorSubPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveEditorSubPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__archiveEditorWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__archiveEditorWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveEditorSubPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArchiveQuestMapSubPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchiveEditorSubPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchiveEditorSubPresenter_OnSaveTomeGraph, "OnSaveTomeGraph" }, // 1164321761
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveEditorSubPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ArchiveEditorSubPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArchiveEditorSubPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveEditorSubPresenter_Statics::NewProp__archiveEditorWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArchiveEditorSubPresenter" },
		{ "ModuleRelativePath", "Public/ArchiveEditorSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UArchiveEditorSubPresenter_Statics::NewProp__archiveEditorWidget = { "_archiveEditorWidget", nullptr, (EPropertyFlags)0x0044000000002005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveEditorSubPresenter, _archiveEditorWidget), Z_Construct_UClass_UArchiveEditorViewInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveEditorSubPresenter_Statics::NewProp__archiveEditorWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveEditorSubPresenter_Statics::NewProp__archiveEditorWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchiveEditorSubPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveEditorSubPresenter_Statics::NewProp__archiveEditorWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveEditorSubPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchiveEditorSubPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveEditorSubPresenter_Statics::ClassParams = {
		&UArchiveEditorSubPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UArchiveEditorSubPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveEditorSubPresenter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UArchiveEditorSubPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveEditorSubPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveEditorSubPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveEditorSubPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveEditorSubPresenter, 2260236635);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UArchiveEditorSubPresenter>()
	{
		return UArchiveEditorSubPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveEditorSubPresenter(Z_Construct_UClass_UArchiveEditorSubPresenter, &UArchiveEditorSubPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UArchiveEditorSubPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveEditorSubPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
