// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreRankTooltipWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreRankTooltipWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreRankTooltipWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreRankTooltipWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UTooltipWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FRankTooltipViewData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreRankTooltipWidget::execSetTooltipData)
	{
		P_GET_STRUCT_REF(FRankTooltipViewData,Z_Param_Out_viewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTooltipData_Implementation(Z_Param_Out_viewData);
		P_NATIVE_END;
	}
	static FName NAME_UCoreRankTooltipWidget_SetTooltipData = FName(TEXT("SetTooltipData"));
	void UCoreRankTooltipWidget::SetTooltipData(FRankTooltipViewData const& viewData)
	{
		CoreRankTooltipWidget_eventSetTooltipData_Parms Parms;
		Parms.viewData=viewData;
		ProcessEvent(FindFunctionChecked(NAME_UCoreRankTooltipWidget_SetTooltipData),&Parms);
	}
	void UCoreRankTooltipWidget::StaticRegisterNativesUCoreRankTooltipWidget()
	{
		UClass* Class = UCoreRankTooltipWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetTooltipData", &UCoreRankTooltipWidget::execSetTooltipData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreRankTooltipWidget_SetTooltipData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_viewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreRankTooltipWidget_SetTooltipData_Statics::NewProp_viewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreRankTooltipWidget_SetTooltipData_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreRankTooltipWidget_eventSetTooltipData_Parms, viewData), Z_Construct_UScriptStruct_FRankTooltipViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreRankTooltipWidget_SetTooltipData_Statics::NewProp_viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRankTooltipWidget_SetTooltipData_Statics::NewProp_viewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreRankTooltipWidget_SetTooltipData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreRankTooltipWidget_SetTooltipData_Statics::NewProp_viewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreRankTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreRankTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreRankTooltipWidget_SetTooltipData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreRankTooltipWidget, nullptr, "SetTooltipData", nullptr, nullptr, sizeof(CoreRankTooltipWidget_eventSetTooltipData_Parms), Z_Construct_UFunction_UCoreRankTooltipWidget_SetTooltipData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRankTooltipWidget_SetTooltipData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreRankTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRankTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreRankTooltipWidget_SetTooltipData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreRankTooltipWidget_SetTooltipData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreRankTooltipWidget_NoRegister()
	{
		return UCoreRankTooltipWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreRankTooltipWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankNameTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RankNameTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfoTB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreRankTooltipWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTooltipWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreRankTooltipWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreRankTooltipWidget_SetTooltipData, "SetTooltipData" }, // 1047526851
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreRankTooltipWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreRankTooltipWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreRankTooltipWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreRankTooltipWidget_Statics::NewProp_TitleTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreRankTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreRankTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreRankTooltipWidget_Statics::NewProp_TitleTB = { "TitleTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreRankTooltipWidget, TitleTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreRankTooltipWidget_Statics::NewProp_TitleTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreRankTooltipWidget_Statics::NewProp_TitleTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreRankTooltipWidget_Statics::NewProp_RankNameTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreRankTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreRankTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreRankTooltipWidget_Statics::NewProp_RankNameTB = { "RankNameTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreRankTooltipWidget, RankNameTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreRankTooltipWidget_Statics::NewProp_RankNameTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreRankTooltipWidget_Statics::NewProp_RankNameTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreRankTooltipWidget_Statics::NewProp_ProgressTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreRankTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreRankTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreRankTooltipWidget_Statics::NewProp_ProgressTB = { "ProgressTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreRankTooltipWidget, ProgressTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreRankTooltipWidget_Statics::NewProp_ProgressTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreRankTooltipWidget_Statics::NewProp_ProgressTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreRankTooltipWidget_Statics::NewProp_InfoTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreRankTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreRankTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreRankTooltipWidget_Statics::NewProp_InfoTB = { "InfoTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreRankTooltipWidget, InfoTB), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreRankTooltipWidget_Statics::NewProp_InfoTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreRankTooltipWidget_Statics::NewProp_InfoTB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreRankTooltipWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreRankTooltipWidget_Statics::NewProp_TitleTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreRankTooltipWidget_Statics::NewProp_RankNameTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreRankTooltipWidget_Statics::NewProp_ProgressTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreRankTooltipWidget_Statics::NewProp_InfoTB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreRankTooltipWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreRankTooltipWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreRankTooltipWidget_Statics::ClassParams = {
		&UCoreRankTooltipWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreRankTooltipWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreRankTooltipWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreRankTooltipWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreRankTooltipWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreRankTooltipWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreRankTooltipWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreRankTooltipWidget, 1877442489);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreRankTooltipWidget>()
	{
		return UCoreRankTooltipWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreRankTooltipWidget(Z_Construct_UClass_UCoreRankTooltipWidget, &UCoreRankTooltipWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreRankTooltipWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreRankTooltipWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
