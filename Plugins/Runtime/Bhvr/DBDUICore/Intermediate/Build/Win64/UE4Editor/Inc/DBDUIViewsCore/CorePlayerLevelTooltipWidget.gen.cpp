// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CorePlayerLevelTooltipWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorePlayerLevelTooltipWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePlayerLevelTooltipWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePlayerLevelTooltipWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UTooltipWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
// End Cross Module References
	static FName NAME_UCorePlayerLevelTooltipWidget_SetTooltipData = FName(TEXT("SetTooltipData"));
	void UCorePlayerLevelTooltipWidget::SetTooltipData(FCorePlayerLevelTooltipViewData const& viewData)
	{
		CorePlayerLevelTooltipWidget_eventSetTooltipData_Parms Parms;
		Parms.viewData=viewData;
		ProcessEvent(FindFunctionChecked(NAME_UCorePlayerLevelTooltipWidget_SetTooltipData),&Parms);
	}
	void UCorePlayerLevelTooltipWidget::StaticRegisterNativesUCorePlayerLevelTooltipWidget()
	{
	}
	struct Z_Construct_UFunction_UCorePlayerLevelTooltipWidget_SetTooltipData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerLevelTooltipWidget_SetTooltipData_Statics::NewProp_viewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePlayerLevelTooltipWidget_SetTooltipData_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerLevelTooltipWidget_eventSetTooltipData_Parms, viewData), Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerLevelTooltipWidget_SetTooltipData_Statics::NewProp_viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerLevelTooltipWidget_SetTooltipData_Statics::NewProp_viewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerLevelTooltipWidget_SetTooltipData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerLevelTooltipWidget_SetTooltipData_Statics::NewProp_viewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerLevelTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerLevelTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerLevelTooltipWidget_SetTooltipData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerLevelTooltipWidget, nullptr, "SetTooltipData", nullptr, nullptr, sizeof(CorePlayerLevelTooltipWidget_eventSetTooltipData_Parms), Z_Construct_UFunction_UCorePlayerLevelTooltipWidget_SetTooltipData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerLevelTooltipWidget_SetTooltipData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerLevelTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerLevelTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerLevelTooltipWidget_SetTooltipData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerLevelTooltipWidget_SetTooltipData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCorePlayerLevelTooltipWidget_NoRegister()
	{
		return UCorePlayerLevelTooltipWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XPCurrentTitleTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_XPCurrentTitleTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XPTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_XPTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XPNextTitleTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_XPNextTitleTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextXpTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NextXpTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLevelTitleTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerLevelTitleTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrestigeTitleTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrestigeTitleTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfoTB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTooltipWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCorePlayerLevelTooltipWidget_SetTooltipData, "SetTooltipData" }, // 3929609534
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CorePlayerLevelTooltipWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerLevelTooltipWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_TitleTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePlayerLevelTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerLevelTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_TitleTB = { "TitleTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerLevelTooltipWidget, TitleTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_TitleTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_TitleTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_XPCurrentTitleTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePlayerLevelTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerLevelTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_XPCurrentTitleTB = { "XPCurrentTitleTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerLevelTooltipWidget, XPCurrentTitleTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_XPCurrentTitleTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_XPCurrentTitleTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_XPTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePlayerLevelTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerLevelTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_XPTB = { "XPTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerLevelTooltipWidget, XPTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_XPTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_XPTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_XPNextTitleTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePlayerLevelTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerLevelTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_XPNextTitleTB = { "XPNextTitleTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerLevelTooltipWidget, XPNextTitleTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_XPNextTitleTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_XPNextTitleTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_NextXpTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePlayerLevelTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerLevelTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_NextXpTB = { "NextXpTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerLevelTooltipWidget, NextXpTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_NextXpTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_NextXpTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_PlayerLevelTitleTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePlayerLevelTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerLevelTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_PlayerLevelTitleTB = { "PlayerLevelTitleTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerLevelTooltipWidget, PlayerLevelTitleTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_PlayerLevelTitleTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_PlayerLevelTitleTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_PrestigeTitleTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePlayerLevelTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerLevelTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_PrestigeTitleTB = { "PrestigeTitleTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerLevelTooltipWidget, PrestigeTitleTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_PrestigeTitleTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_PrestigeTitleTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_InfoTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePlayerLevelTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerLevelTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_InfoTB = { "InfoTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerLevelTooltipWidget, InfoTB), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_InfoTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_InfoTB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_TitleTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_XPCurrentTitleTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_XPTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_XPNextTitleTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_NextXpTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_PlayerLevelTitleTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_PrestigeTitleTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::NewProp_InfoTB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCorePlayerLevelTooltipWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::ClassParams = {
		&UCorePlayerLevelTooltipWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCorePlayerLevelTooltipWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCorePlayerLevelTooltipWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCorePlayerLevelTooltipWidget, 2209483237);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCorePlayerLevelTooltipWidget>()
	{
		return UCorePlayerLevelTooltipWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCorePlayerLevelTooltipWidget(Z_Construct_UClass_UCorePlayerLevelTooltipWidget, &UCorePlayerLevelTooltipWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCorePlayerLevelTooltipWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCorePlayerLevelTooltipWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
