// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CurrencyProgressionTooltipWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurrencyProgressionTooltipWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCurrencyProgressionTooltipWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCurrencyProgressionTooltipWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UTooltipWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreCurrencyExpirationLabelWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCurrencyProgressionTooltipWidget::execSetTooltipData)
	{
		P_GET_STRUCT_REF(FCurrencyProgressionTooltipViewData,Z_Param_Out_currencyViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTooltipData(Z_Param_Out_currencyViewData);
		P_NATIVE_END;
	}
	void UCurrencyProgressionTooltipWidget::StaticRegisterNativesUCurrencyProgressionTooltipWidget()
	{
		UClass* Class = UCurrencyProgressionTooltipWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetTooltipData", &UCurrencyProgressionTooltipWidget::execSetTooltipData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCurrencyProgressionTooltipWidget_SetTooltipData_Statics
	{
		struct CurrencyProgressionTooltipWidget_eventSetTooltipData_Parms
		{
			FCurrencyProgressionTooltipViewData currencyViewData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currencyViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_currencyViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurrencyProgressionTooltipWidget_SetTooltipData_Statics::NewProp_currencyViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCurrencyProgressionTooltipWidget_SetTooltipData_Statics::NewProp_currencyViewData = { "currencyViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CurrencyProgressionTooltipWidget_eventSetTooltipData_Parms, currencyViewData), Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData, METADATA_PARAMS(Z_Construct_UFunction_UCurrencyProgressionTooltipWidget_SetTooltipData_Statics::NewProp_currencyViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrencyProgressionTooltipWidget_SetTooltipData_Statics::NewProp_currencyViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurrencyProgressionTooltipWidget_SetTooltipData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurrencyProgressionTooltipWidget_SetTooltipData_Statics::NewProp_currencyViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurrencyProgressionTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurrencyProgressionTooltipWidget_SetTooltipData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurrencyProgressionTooltipWidget, nullptr, "SetTooltipData", nullptr, nullptr, sizeof(CurrencyProgressionTooltipWidget_eventSetTooltipData_Parms), Z_Construct_UFunction_UCurrencyProgressionTooltipWidget_SetTooltipData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrencyProgressionTooltipWidget_SetTooltipData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurrencyProgressionTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrencyProgressionTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurrencyProgressionTooltipWidget_SetTooltipData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCurrencyProgressionTooltipWidget_SetTooltipData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCurrencyProgressionTooltipWidget_NoRegister()
	{
		return UCurrencyProgressionTooltipWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxExpirationLabels_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxExpirationLabels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoreCurrencyExpirationLabelWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CoreCurrencyExpirationLabelWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrencyTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyTitleTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrencyTitleTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyDescriptionRTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrencyDescriptionRTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleBgIMG_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleBgIMG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleDecorationIMG_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleDecorationIMG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventNameTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventNameTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventDescriptionTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventDescriptionTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTimerTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventTimerTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpirationPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExpirationPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpirationLabelContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExpirationLabelContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpirationTitleTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExpirationTitleTB;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currencyExpirationWidgetPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currencyExpirationWidgetPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__currencyExpirationWidgetPool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTooltipWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurrencyProgressionTooltipWidget_SetTooltipData, "SetTooltipData" }, // 3925479196
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CurrencyProgressionTooltipWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_MaxExpirationLabels_MetaData[] = {
		{ "Category", "CurrencyProgressionTooltipWidget" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_MaxExpirationLabels = { "MaxExpirationLabels", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurrencyProgressionTooltipWidget, MaxExpirationLabels), METADATA_PARAMS(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_MaxExpirationLabels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_MaxExpirationLabels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_CoreCurrencyExpirationLabelWidgetClass_MetaData[] = {
		{ "Category", "CurrencyProgressionTooltipWidget" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_CoreCurrencyExpirationLabelWidgetClass = { "CoreCurrencyExpirationLabelWidgetClass", nullptr, (EPropertyFlags)0x0014000002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurrencyProgressionTooltipWidget, CoreCurrencyExpirationLabelWidgetClass), Z_Construct_UClass_UCoreCurrencyExpirationLabelWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_CoreCurrencyExpirationLabelWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_CoreCurrencyExpirationLabelWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_CurrencyTB_MetaData[] = {
		{ "Category", "CurrencyProgressionTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_CurrencyTB = { "CurrencyTB", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurrencyProgressionTooltipWidget, CurrencyTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_CurrencyTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_CurrencyTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_CurrencyTitleTB_MetaData[] = {
		{ "Category", "CurrencyProgressionTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_CurrencyTitleTB = { "CurrencyTitleTB", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurrencyProgressionTooltipWidget, CurrencyTitleTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_CurrencyTitleTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_CurrencyTitleTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_CurrencyDescriptionRTB_MetaData[] = {
		{ "Category", "CurrencyProgressionTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_CurrencyDescriptionRTB = { "CurrencyDescriptionRTB", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurrencyProgressionTooltipWidget, CurrencyDescriptionRTB), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_CurrencyDescriptionRTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_CurrencyDescriptionRTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_TitleBgIMG_MetaData[] = {
		{ "Category", "CurrencyProgressionTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_TitleBgIMG = { "TitleBgIMG", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurrencyProgressionTooltipWidget, TitleBgIMG), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_TitleBgIMG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_TitleBgIMG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_TitleDecorationIMG_MetaData[] = {
		{ "Category", "CurrencyProgressionTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_TitleDecorationIMG = { "TitleDecorationIMG", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurrencyProgressionTooltipWidget, TitleDecorationIMG), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_TitleDecorationIMG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_TitleDecorationIMG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_EventContainer_MetaData[] = {
		{ "Category", "CurrencyProgressionTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_EventContainer = { "EventContainer", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurrencyProgressionTooltipWidget, EventContainer), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_EventContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_EventContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_EventNameTB_MetaData[] = {
		{ "Category", "CurrencyProgressionTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_EventNameTB = { "EventNameTB", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurrencyProgressionTooltipWidget, EventNameTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_EventNameTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_EventNameTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_EventDescriptionTB_MetaData[] = {
		{ "Category", "CurrencyProgressionTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_EventDescriptionTB = { "EventDescriptionTB", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurrencyProgressionTooltipWidget, EventDescriptionTB), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_EventDescriptionTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_EventDescriptionTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_EventTimerTB_MetaData[] = {
		{ "Category", "CurrencyProgressionTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_EventTimerTB = { "EventTimerTB", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurrencyProgressionTooltipWidget, EventTimerTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_EventTimerTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_EventTimerTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_ExpirationPanel_MetaData[] = {
		{ "Category", "CurrencyProgressionTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_ExpirationPanel = { "ExpirationPanel", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurrencyProgressionTooltipWidget, ExpirationPanel), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_ExpirationPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_ExpirationPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_ExpirationLabelContainer_MetaData[] = {
		{ "Category", "CurrencyProgressionTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_ExpirationLabelContainer = { "ExpirationLabelContainer", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurrencyProgressionTooltipWidget, ExpirationLabelContainer), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_ExpirationLabelContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_ExpirationLabelContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_ExpirationTitleTB_MetaData[] = {
		{ "Category", "CurrencyProgressionTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_ExpirationTitleTB = { "ExpirationTitleTB", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurrencyProgressionTooltipWidget, ExpirationTitleTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_ExpirationTitleTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_ExpirationTitleTB_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp__currencyExpirationWidgetPool_Inner = { "_currencyExpirationWidgetPool", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreCurrencyExpirationLabelWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp__currencyExpirationWidgetPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CurrencyProgressionTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp__currencyExpirationWidgetPool = { "_currencyExpirationWidgetPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurrencyProgressionTooltipWidget, _currencyExpirationWidgetPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp__currencyExpirationWidgetPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp__currencyExpirationWidgetPool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_MaxExpirationLabels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_CoreCurrencyExpirationLabelWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_CurrencyTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_CurrencyTitleTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_CurrencyDescriptionRTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_TitleBgIMG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_TitleDecorationIMG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_EventContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_EventNameTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_EventDescriptionTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_EventTimerTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_ExpirationPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_ExpirationLabelContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp_ExpirationTitleTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp__currencyExpirationWidgetPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::NewProp__currencyExpirationWidgetPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurrencyProgressionTooltipWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::ClassParams = {
		&UCurrencyProgressionTooltipWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurrencyProgressionTooltipWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCurrencyProgressionTooltipWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCurrencyProgressionTooltipWidget, 2848487871);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCurrencyProgressionTooltipWidget>()
	{
		return UCurrencyProgressionTooltipWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurrencyProgressionTooltipWidget(Z_Construct_UClass_UCurrencyProgressionTooltipWidget, &UCurrencyProgressionTooltipWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCurrencyProgressionTooltipWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurrencyProgressionTooltipWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
