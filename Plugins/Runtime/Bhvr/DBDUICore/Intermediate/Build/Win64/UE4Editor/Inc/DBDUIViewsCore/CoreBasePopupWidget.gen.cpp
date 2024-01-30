// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreBasePopupWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreBasePopupWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBasePopupWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBasePopupWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UBasePopupViewData_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UBasePopupViewInterface_NoRegister();
// End Cross Module References
	static FName NAME_UCoreBasePopupWidget_Hide = FName(TEXT("Hide"));
	void UCoreBasePopupWidget::Hide()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreBasePopupWidget_Hide),NULL);
	}
	static FName NAME_UCoreBasePopupWidget_Show = FName(TEXT("Show"));
	void UCoreBasePopupWidget::Show(UBasePopupViewData* data)
	{
		CoreBasePopupWidget_eventShow_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_UCoreBasePopupWidget_Show),&Parms);
	}
	void UCoreBasePopupWidget::StaticRegisterNativesUCoreBasePopupWidget()
	{
	}
	struct Z_Construct_UFunction_UCoreBasePopupWidget_Hide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBasePopupWidget_Hide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreBasePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreBasePopupWidget_Hide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreBasePopupWidget, nullptr, "Hide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreBasePopupWidget_Hide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBasePopupWidget_Hide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreBasePopupWidget_Hide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreBasePopupWidget_Hide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreBasePopupWidget_Show_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreBasePopupWidget_Show_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreBasePopupWidget_eventShow_Parms, data), Z_Construct_UClass_UBasePopupViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreBasePopupWidget_Show_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBasePopupWidget_Show_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBasePopupWidget_Show_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreBasePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreBasePopupWidget_Show_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreBasePopupWidget, nullptr, "Show", nullptr, nullptr, sizeof(CoreBasePopupWidget_eventShow_Parms), Z_Construct_UFunction_UCoreBasePopupWidget_Show_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBasePopupWidget_Show_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreBasePopupWidget_Show_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBasePopupWidget_Show_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreBasePopupWidget_Show()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreBasePopupWidget_Show_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreBasePopupWidget_NoRegister()
	{
		return UCoreBasePopupWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreBasePopupWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MessageText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreBasePopupWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreBasePopupWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreBasePopupWidget_Hide, "Hide" }, // 4270170488
		{ &Z_Construct_UFunction_UCoreBasePopupWidget_Show, "Show" }, // 3828650638
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBasePopupWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreBasePopupWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreBasePopupWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBasePopupWidget_Statics::NewProp_TitleText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreBasePopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreBasePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreBasePopupWidget_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreBasePopupWidget, TitleText), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreBasePopupWidget_Statics::NewProp_TitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBasePopupWidget_Statics::NewProp_TitleText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBasePopupWidget_Statics::NewProp_MessageText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreBasePopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreBasePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreBasePopupWidget_Statics::NewProp_MessageText = { "MessageText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreBasePopupWidget, MessageText), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreBasePopupWidget_Statics::NewProp_MessageText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBasePopupWidget_Statics::NewProp_MessageText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreBasePopupWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBasePopupWidget_Statics::NewProp_TitleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBasePopupWidget_Statics::NewProp_MessageText,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreBasePopupWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBasePopupViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreBasePopupWidget, IBasePopupViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreBasePopupWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreBasePopupWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreBasePopupWidget_Statics::ClassParams = {
		&UCoreBasePopupWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreBasePopupWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBasePopupWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreBasePopupWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBasePopupWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreBasePopupWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreBasePopupWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreBasePopupWidget, 1907476827);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreBasePopupWidget>()
	{
		return UCoreBasePopupWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreBasePopupWidget(Z_Construct_UClass_UCoreBasePopupWidget, &UCoreBasePopupWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreBasePopupWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreBasePopupWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
