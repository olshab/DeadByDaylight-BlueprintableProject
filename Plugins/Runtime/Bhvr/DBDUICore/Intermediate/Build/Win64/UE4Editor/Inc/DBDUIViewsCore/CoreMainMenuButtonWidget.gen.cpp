// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreMainMenuButtonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreMainMenuButtonWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMainMenuButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMainMenuButtonWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FMainMenuButtonViewData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
// End Cross Module References
	static FName NAME_UCoreMainMenuButtonWidget_SetButtonData = FName(TEXT("SetButtonData"));
	void UCoreMainMenuButtonWidget::SetButtonData(FMainMenuButtonViewData const& buttonData)
	{
		CoreMainMenuButtonWidget_eventSetButtonData_Parms Parms;
		Parms.buttonData=buttonData;
		ProcessEvent(FindFunctionChecked(NAME_UCoreMainMenuButtonWidget_SetButtonData),&Parms);
	}
	void UCoreMainMenuButtonWidget::StaticRegisterNativesUCoreMainMenuButtonWidget()
	{
	}
	struct Z_Construct_UFunction_UCoreMainMenuButtonWidget_SetButtonData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_buttonData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMainMenuButtonWidget_SetButtonData_Statics::NewProp_buttonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreMainMenuButtonWidget_SetButtonData_Statics::NewProp_buttonData = { "buttonData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreMainMenuButtonWidget_eventSetButtonData_Parms, buttonData), Z_Construct_UScriptStruct_FMainMenuButtonViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreMainMenuButtonWidget_SetButtonData_Statics::NewProp_buttonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMainMenuButtonWidget_SetButtonData_Statics::NewProp_buttonData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreMainMenuButtonWidget_SetButtonData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMainMenuButtonWidget_SetButtonData_Statics::NewProp_buttonData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMainMenuButtonWidget_SetButtonData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreMainMenuButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMainMenuButtonWidget_SetButtonData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMainMenuButtonWidget, nullptr, "SetButtonData", nullptr, nullptr, sizeof(CoreMainMenuButtonWidget_eventSetButtonData_Parms), Z_Construct_UFunction_UCoreMainMenuButtonWidget_SetButtonData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMainMenuButtonWidget_SetButtonData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMainMenuButtonWidget_SetButtonData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMainMenuButtonWidget_SetButtonData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMainMenuButtonWidget_SetButtonData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMainMenuButtonWidget_SetButtonData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreMainMenuButtonWidget_NoRegister()
	{
		return UCoreMainMenuButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreMainMenuButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimerTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonusTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BonusTB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreMainMenuButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreMainMenuButtonWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreMainMenuButtonWidget_SetButtonData, "SetButtonData" }, // 1038093836
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMainMenuButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreMainMenuButtonWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreMainMenuButtonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMainMenuButtonWidget_Statics::NewProp_TimerTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreMainMenuButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreMainMenuButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreMainMenuButtonWidget_Statics::NewProp_TimerTB = { "TimerTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreMainMenuButtonWidget, TimerTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreMainMenuButtonWidget_Statics::NewProp_TimerTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMainMenuButtonWidget_Statics::NewProp_TimerTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMainMenuButtonWidget_Statics::NewProp_BonusTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreMainMenuButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreMainMenuButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreMainMenuButtonWidget_Statics::NewProp_BonusTB = { "BonusTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreMainMenuButtonWidget, BonusTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreMainMenuButtonWidget_Statics::NewProp_BonusTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMainMenuButtonWidget_Statics::NewProp_BonusTB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreMainMenuButtonWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMainMenuButtonWidget_Statics::NewProp_TimerTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreMainMenuButtonWidget_Statics::NewProp_BonusTB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreMainMenuButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreMainMenuButtonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreMainMenuButtonWidget_Statics::ClassParams = {
		&UCoreMainMenuButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreMainMenuButtonWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMainMenuButtonWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreMainMenuButtonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMainMenuButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreMainMenuButtonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreMainMenuButtonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreMainMenuButtonWidget, 2631975874);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreMainMenuButtonWidget>()
	{
		return UCoreMainMenuButtonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreMainMenuButtonWidget(Z_Construct_UClass_UCoreMainMenuButtonWidget, &UCoreMainMenuButtonWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreMainMenuButtonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreMainMenuButtonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
