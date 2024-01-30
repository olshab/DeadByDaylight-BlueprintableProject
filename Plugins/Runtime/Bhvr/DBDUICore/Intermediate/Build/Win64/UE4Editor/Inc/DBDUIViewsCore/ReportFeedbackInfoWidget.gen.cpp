// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/ReportFeedbackInfoWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReportFeedbackInfoWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UReportFeedbackInfoWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UReportFeedbackInfoWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDSHAREDTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FReportFeedbackData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UReportFeedbackInfoWidget::execSetData)
	{
		P_GET_STRUCT_REF(FReportFeedbackData,Z_Param_Out_reportData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_Out_reportData);
		P_NATIVE_END;
	}
	void UReportFeedbackInfoWidget::StaticRegisterNativesUReportFeedbackInfoWidget()
	{
		UClass* Class = UReportFeedbackInfoWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetData", &UReportFeedbackInfoWidget::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReportFeedbackInfoWidget_SetData_Statics
	{
		struct ReportFeedbackInfoWidget_eventSetData_Parms
		{
			FReportFeedbackData reportData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_reportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_reportData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReportFeedbackInfoWidget_SetData_Statics::NewProp_reportData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReportFeedbackInfoWidget_SetData_Statics::NewProp_reportData = { "reportData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReportFeedbackInfoWidget_eventSetData_Parms, reportData), Z_Construct_UScriptStruct_FReportFeedbackData, METADATA_PARAMS(Z_Construct_UFunction_UReportFeedbackInfoWidget_SetData_Statics::NewProp_reportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReportFeedbackInfoWidget_SetData_Statics::NewProp_reportData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReportFeedbackInfoWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReportFeedbackInfoWidget_SetData_Statics::NewProp_reportData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReportFeedbackInfoWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReportFeedbackInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReportFeedbackInfoWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReportFeedbackInfoWidget, nullptr, "SetData", nullptr, nullptr, sizeof(ReportFeedbackInfoWidget_eventSetData_Parms), Z_Construct_UFunction_UReportFeedbackInfoWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReportFeedbackInfoWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReportFeedbackInfoWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReportFeedbackInfoWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReportFeedbackInfoWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReportFeedbackInfoWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UReportFeedbackInfoWidget_NoRegister()
	{
		return UReportFeedbackInfoWidget::StaticClass();
	}
	struct Z_Construct_UClass_UReportFeedbackInfoWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BanTimestampTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BanTimestampTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReasonTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReasonTB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReportFeedbackInfoWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReportFeedbackInfoWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReportFeedbackInfoWidget_SetData, "SetData" }, // 3306690794
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReportFeedbackInfoWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ReportFeedbackInfoWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ReportFeedbackInfoWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReportFeedbackInfoWidget_Statics::NewProp_BanTimestampTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ReportFeedbackInfoWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ReportFeedbackInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReportFeedbackInfoWidget_Statics::NewProp_BanTimestampTB = { "BanTimestampTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReportFeedbackInfoWidget, BanTimestampTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReportFeedbackInfoWidget_Statics::NewProp_BanTimestampTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReportFeedbackInfoWidget_Statics::NewProp_BanTimestampTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReportFeedbackInfoWidget_Statics::NewProp_ReasonTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ReportFeedbackInfoWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ReportFeedbackInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReportFeedbackInfoWidget_Statics::NewProp_ReasonTB = { "ReasonTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReportFeedbackInfoWidget, ReasonTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReportFeedbackInfoWidget_Statics::NewProp_ReasonTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReportFeedbackInfoWidget_Statics::NewProp_ReasonTB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReportFeedbackInfoWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReportFeedbackInfoWidget_Statics::NewProp_BanTimestampTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReportFeedbackInfoWidget_Statics::NewProp_ReasonTB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReportFeedbackInfoWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReportFeedbackInfoWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReportFeedbackInfoWidget_Statics::ClassParams = {
		&UReportFeedbackInfoWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UReportFeedbackInfoWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UReportFeedbackInfoWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReportFeedbackInfoWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReportFeedbackInfoWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReportFeedbackInfoWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReportFeedbackInfoWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReportFeedbackInfoWidget, 443905133);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UReportFeedbackInfoWidget>()
	{
		return UReportFeedbackInfoWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReportFeedbackInfoWidget(Z_Construct_UClass_UReportFeedbackInfoWidget, &UReportFeedbackInfoWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UReportFeedbackInfoWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReportFeedbackInfoWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
