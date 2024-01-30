// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreCurrencyLabelWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreCurrencyLabelWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreCurrencyLabelWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreCurrencyLabelWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyLabelViewData();
// End Cross Module References
	static FName NAME_UCoreCurrencyLabelWidget_PlayNotEnoughCurrency = FName(TEXT("PlayNotEnoughCurrency"));
	void UCoreCurrencyLabelWidget::PlayNotEnoughCurrency()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreCurrencyLabelWidget_PlayNotEnoughCurrency),NULL);
	}
	static FName NAME_UCoreCurrencyLabelWidget_SetData = FName(TEXT("SetData"));
	void UCoreCurrencyLabelWidget::SetData(FCurrencyLabelViewData const& viewData)
	{
		CoreCurrencyLabelWidget_eventSetData_Parms Parms;
		Parms.viewData=viewData;
		ProcessEvent(FindFunctionChecked(NAME_UCoreCurrencyLabelWidget_SetData),&Parms);
	}
	static FName NAME_UCoreCurrencyLabelWidget_UpdateCurrency = FName(TEXT("UpdateCurrency"));
	void UCoreCurrencyLabelWidget::UpdateCurrency(int32 newBalance, int32 previousBalance)
	{
		CoreCurrencyLabelWidget_eventUpdateCurrency_Parms Parms;
		Parms.newBalance=newBalance;
		Parms.previousBalance=previousBalance;
		ProcessEvent(FindFunctionChecked(NAME_UCoreCurrencyLabelWidget_UpdateCurrency),&Parms);
	}
	void UCoreCurrencyLabelWidget::StaticRegisterNativesUCoreCurrencyLabelWidget()
	{
	}
	struct Z_Construct_UFunction_UCoreCurrencyLabelWidget_PlayNotEnoughCurrency_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCurrencyLabelWidget_PlayNotEnoughCurrency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreCurrencyLabelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreCurrencyLabelWidget_PlayNotEnoughCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreCurrencyLabelWidget, nullptr, "PlayNotEnoughCurrency", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreCurrencyLabelWidget_PlayNotEnoughCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCurrencyLabelWidget_PlayNotEnoughCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreCurrencyLabelWidget_PlayNotEnoughCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreCurrencyLabelWidget_PlayNotEnoughCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreCurrencyLabelWidget_SetData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCurrencyLabelWidget_SetData_Statics::NewProp_viewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreCurrencyLabelWidget_SetData_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreCurrencyLabelWidget_eventSetData_Parms, viewData), Z_Construct_UScriptStruct_FCurrencyLabelViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreCurrencyLabelWidget_SetData_Statics::NewProp_viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCurrencyLabelWidget_SetData_Statics::NewProp_viewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreCurrencyLabelWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreCurrencyLabelWidget_SetData_Statics::NewProp_viewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCurrencyLabelWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreCurrencyLabelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreCurrencyLabelWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreCurrencyLabelWidget, nullptr, "SetData", nullptr, nullptr, sizeof(CoreCurrencyLabelWidget_eventSetData_Parms), Z_Construct_UFunction_UCoreCurrencyLabelWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCurrencyLabelWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreCurrencyLabelWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCurrencyLabelWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreCurrencyLabelWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreCurrencyLabelWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreCurrencyLabelWidget_UpdateCurrency_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newBalance;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_previousBalance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreCurrencyLabelWidget_UpdateCurrency_Statics::NewProp_newBalance = { "newBalance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreCurrencyLabelWidget_eventUpdateCurrency_Parms, newBalance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreCurrencyLabelWidget_UpdateCurrency_Statics::NewProp_previousBalance = { "previousBalance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreCurrencyLabelWidget_eventUpdateCurrency_Parms, previousBalance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreCurrencyLabelWidget_UpdateCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreCurrencyLabelWidget_UpdateCurrency_Statics::NewProp_newBalance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreCurrencyLabelWidget_UpdateCurrency_Statics::NewProp_previousBalance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCurrencyLabelWidget_UpdateCurrency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreCurrencyLabelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreCurrencyLabelWidget_UpdateCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreCurrencyLabelWidget, nullptr, "UpdateCurrency", nullptr, nullptr, sizeof(CoreCurrencyLabelWidget_eventUpdateCurrency_Parms), Z_Construct_UFunction_UCoreCurrencyLabelWidget_UpdateCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCurrencyLabelWidget_UpdateCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreCurrencyLabelWidget_UpdateCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCurrencyLabelWidget_UpdateCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreCurrencyLabelWidget_UpdateCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreCurrencyLabelWidget_UpdateCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreCurrencyLabelWidget_NoRegister()
	{
		return UCoreCurrencyLabelWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreCurrencyLabelWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreCurrencyLabelWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreCurrencyLabelWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreCurrencyLabelWidget_PlayNotEnoughCurrency, "PlayNotEnoughCurrency" }, // 3394758854
		{ &Z_Construct_UFunction_UCoreCurrencyLabelWidget_SetData, "SetData" }, // 2021078215
		{ &Z_Construct_UFunction_UCoreCurrencyLabelWidget_UpdateCurrency, "UpdateCurrency" }, // 3741625060
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreCurrencyLabelWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreCurrencyLabelWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreCurrencyLabelWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreCurrencyLabelWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreCurrencyLabelWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreCurrencyLabelWidget_Statics::ClassParams = {
		&UCoreCurrencyLabelWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreCurrencyLabelWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCurrencyLabelWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreCurrencyLabelWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreCurrencyLabelWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreCurrencyLabelWidget, 1060263671);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreCurrencyLabelWidget>()
	{
		return UCoreCurrencyLabelWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreCurrencyLabelWidget(Z_Construct_UClass_UCoreCurrencyLabelWidget, &UCoreCurrencyLabelWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreCurrencyLabelWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreCurrencyLabelWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
