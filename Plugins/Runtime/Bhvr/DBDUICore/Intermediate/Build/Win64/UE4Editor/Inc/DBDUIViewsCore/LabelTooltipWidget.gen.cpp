// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/LabelTooltipWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLabelTooltipWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_ULabelTooltipWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_ULabelTooltipWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UTooltipWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULabelTooltipWidget::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULabelTooltipWidget::execSetTooltipData)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_labelText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTooltipData(Z_Param_Out_labelText);
		P_NATIVE_END;
	}
	void ULabelTooltipWidget::StaticRegisterNativesULabelTooltipWidget()
	{
		UClass* Class = ULabelTooltipWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Reset", &ULabelTooltipWidget::execReset },
			{ "SetTooltipData", &ULabelTooltipWidget::execSetTooltipData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULabelTooltipWidget_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULabelTooltipWidget_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LabelTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULabelTooltipWidget_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULabelTooltipWidget, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULabelTooltipWidget_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULabelTooltipWidget_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULabelTooltipWidget_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULabelTooltipWidget_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULabelTooltipWidget_SetTooltipData_Statics
	{
		struct LabelTooltipWidget_eventSetTooltipData_Parms
		{
			FText labelText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_labelText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_labelText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULabelTooltipWidget_SetTooltipData_Statics::NewProp_labelText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ULabelTooltipWidget_SetTooltipData_Statics::NewProp_labelText = { "labelText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LabelTooltipWidget_eventSetTooltipData_Parms, labelText), METADATA_PARAMS(Z_Construct_UFunction_ULabelTooltipWidget_SetTooltipData_Statics::NewProp_labelText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULabelTooltipWidget_SetTooltipData_Statics::NewProp_labelText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULabelTooltipWidget_SetTooltipData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULabelTooltipWidget_SetTooltipData_Statics::NewProp_labelText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULabelTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LabelTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULabelTooltipWidget_SetTooltipData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULabelTooltipWidget, nullptr, "SetTooltipData", nullptr, nullptr, sizeof(LabelTooltipWidget_eventSetTooltipData_Parms), Z_Construct_UFunction_ULabelTooltipWidget_SetTooltipData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULabelTooltipWidget_SetTooltipData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULabelTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULabelTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULabelTooltipWidget_SetTooltipData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULabelTooltipWidget_SetTooltipData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULabelTooltipWidget_NoRegister()
	{
		return ULabelTooltipWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULabelTooltipWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LabelRTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LabelRTB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULabelTooltipWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTooltipWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULabelTooltipWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULabelTooltipWidget_Reset, "Reset" }, // 749717773
		{ &Z_Construct_UFunction_ULabelTooltipWidget_SetTooltipData, "SetTooltipData" }, // 2401561705
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULabelTooltipWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LabelTooltipWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LabelTooltipWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULabelTooltipWidget_Statics::NewProp_LabelRTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LabelTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LabelTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULabelTooltipWidget_Statics::NewProp_LabelRTB = { "LabelRTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULabelTooltipWidget, LabelRTB), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULabelTooltipWidget_Statics::NewProp_LabelRTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULabelTooltipWidget_Statics::NewProp_LabelRTB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULabelTooltipWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULabelTooltipWidget_Statics::NewProp_LabelRTB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULabelTooltipWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULabelTooltipWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULabelTooltipWidget_Statics::ClassParams = {
		&ULabelTooltipWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULabelTooltipWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULabelTooltipWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULabelTooltipWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULabelTooltipWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULabelTooltipWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULabelTooltipWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULabelTooltipWidget, 1882888034);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<ULabelTooltipWidget>()
	{
		return ULabelTooltipWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULabelTooltipWidget(Z_Construct_UClass_ULabelTooltipWidget, &ULabelTooltipWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("ULabelTooltipWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULabelTooltipWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
