// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreFooterButtonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreFooterButtonWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreFooterButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreFooterButtonWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	static FName NAME_UCoreFooterButtonWidget_SetHoveredColor = FName(TEXT("SetHoveredColor"));
	void UCoreFooterButtonWidget::SetHoveredColor()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreFooterButtonWidget_SetHoveredColor),NULL);
	}
	static FName NAME_UCoreFooterButtonWidget_SetUnhoveredColor = FName(TEXT("SetUnhoveredColor"));
	void UCoreFooterButtonWidget::SetUnhoveredColor()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreFooterButtonWidget_SetUnhoveredColor),NULL);
	}
	void UCoreFooterButtonWidget::StaticRegisterNativesUCoreFooterButtonWidget()
	{
	}
	struct Z_Construct_UFunction_UCoreFooterButtonWidget_SetHoveredColor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreFooterButtonWidget_SetHoveredColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreFooterButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreFooterButtonWidget_SetHoveredColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreFooterButtonWidget, nullptr, "SetHoveredColor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreFooterButtonWidget_SetHoveredColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFooterButtonWidget_SetHoveredColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreFooterButtonWidget_SetHoveredColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreFooterButtonWidget_SetHoveredColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreFooterButtonWidget_SetUnhoveredColor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreFooterButtonWidget_SetUnhoveredColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreFooterButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreFooterButtonWidget_SetUnhoveredColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreFooterButtonWidget, nullptr, "SetUnhoveredColor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreFooterButtonWidget_SetUnhoveredColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFooterButtonWidget_SetUnhoveredColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreFooterButtonWidget_SetUnhoveredColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreFooterButtonWidget_SetUnhoveredColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreFooterButtonWidget_NoRegister()
	{
		return UCoreFooterButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreFooterButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconIMG_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IconIMG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hoveredColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__hoveredColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__unhoveredColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__unhoveredColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tooltipLabelText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__tooltipLabelText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreFooterButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreFooterButtonWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreFooterButtonWidget_SetHoveredColor, "SetHoveredColor" }, // 1649960291
		{ &Z_Construct_UFunction_UCoreFooterButtonWidget_SetUnhoveredColor, "SetUnhoveredColor" }, // 3408707046
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreFooterButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreFooterButtonWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreFooterButtonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreFooterButtonWidget_Statics::NewProp_IconIMG_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreFooterButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreFooterButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreFooterButtonWidget_Statics::NewProp_IconIMG = { "IconIMG", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreFooterButtonWidget, IconIMG), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreFooterButtonWidget_Statics::NewProp_IconIMG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreFooterButtonWidget_Statics::NewProp_IconIMG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreFooterButtonWidget_Statics::NewProp__hoveredColor_MetaData[] = {
		{ "Category", "CoreFooterButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreFooterButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreFooterButtonWidget_Statics::NewProp__hoveredColor = { "_hoveredColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreFooterButtonWidget, _hoveredColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCoreFooterButtonWidget_Statics::NewProp__hoveredColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreFooterButtonWidget_Statics::NewProp__hoveredColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreFooterButtonWidget_Statics::NewProp__unhoveredColor_MetaData[] = {
		{ "Category", "CoreFooterButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreFooterButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreFooterButtonWidget_Statics::NewProp__unhoveredColor = { "_unhoveredColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreFooterButtonWidget, _unhoveredColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCoreFooterButtonWidget_Statics::NewProp__unhoveredColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreFooterButtonWidget_Statics::NewProp__unhoveredColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreFooterButtonWidget_Statics::NewProp__tooltipLabelText_MetaData[] = {
		{ "Category", "CoreFooterButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreFooterButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCoreFooterButtonWidget_Statics::NewProp__tooltipLabelText = { "_tooltipLabelText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreFooterButtonWidget, _tooltipLabelText), METADATA_PARAMS(Z_Construct_UClass_UCoreFooterButtonWidget_Statics::NewProp__tooltipLabelText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreFooterButtonWidget_Statics::NewProp__tooltipLabelText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreFooterButtonWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreFooterButtonWidget_Statics::NewProp_IconIMG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreFooterButtonWidget_Statics::NewProp__hoveredColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreFooterButtonWidget_Statics::NewProp__unhoveredColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreFooterButtonWidget_Statics::NewProp__tooltipLabelText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreFooterButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreFooterButtonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreFooterButtonWidget_Statics::ClassParams = {
		&UCoreFooterButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreFooterButtonWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreFooterButtonWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreFooterButtonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreFooterButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreFooterButtonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreFooterButtonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreFooterButtonWidget, 3063156022);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreFooterButtonWidget>()
	{
		return UCoreFooterButtonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreFooterButtonWidget(Z_Construct_UClass_UCoreFooterButtonWidget, &UCoreFooterButtonWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreFooterButtonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreFooterButtonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
