// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreCurrencyExpirationLabelWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreCurrencyExpirationLabelWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreCurrencyExpirationLabelWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreCurrencyExpirationLabelWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData();
// End Cross Module References
	static FName NAME_UCoreCurrencyExpirationLabelWidget_SetData = FName(TEXT("SetData"));
	void UCoreCurrencyExpirationLabelWidget::SetData(FCurrencyExpirationLabelViewData const& viewData)
	{
		CoreCurrencyExpirationLabelWidget_eventSetData_Parms Parms;
		Parms.viewData=viewData;
		ProcessEvent(FindFunctionChecked(NAME_UCoreCurrencyExpirationLabelWidget_SetData),&Parms);
	}
	void UCoreCurrencyExpirationLabelWidget::StaticRegisterNativesUCoreCurrencyExpirationLabelWidget()
	{
	}
	struct Z_Construct_UFunction_UCoreCurrencyExpirationLabelWidget_SetData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCurrencyExpirationLabelWidget_SetData_Statics::NewProp_viewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreCurrencyExpirationLabelWidget_SetData_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreCurrencyExpirationLabelWidget_eventSetData_Parms, viewData), Z_Construct_UScriptStruct_FCurrencyExpirationLabelViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreCurrencyExpirationLabelWidget_SetData_Statics::NewProp_viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCurrencyExpirationLabelWidget_SetData_Statics::NewProp_viewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreCurrencyExpirationLabelWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreCurrencyExpirationLabelWidget_SetData_Statics::NewProp_viewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCurrencyExpirationLabelWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreCurrencyExpirationLabelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreCurrencyExpirationLabelWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreCurrencyExpirationLabelWidget, nullptr, "SetData", nullptr, nullptr, sizeof(CoreCurrencyExpirationLabelWidget_eventSetData_Parms), Z_Construct_UFunction_UCoreCurrencyExpirationLabelWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCurrencyExpirationLabelWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreCurrencyExpirationLabelWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCurrencyExpirationLabelWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreCurrencyExpirationLabelWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreCurrencyExpirationLabelWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreCurrencyExpirationLabelWidget_NoRegister()
	{
		return UCoreCurrencyExpirationLabelWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreCurrencyExpirationLabelWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreCurrencyExpirationLabelWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreCurrencyExpirationLabelWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreCurrencyExpirationLabelWidget_SetData, "SetData" }, // 3462749120
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreCurrencyExpirationLabelWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreCurrencyExpirationLabelWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreCurrencyExpirationLabelWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreCurrencyExpirationLabelWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreCurrencyExpirationLabelWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreCurrencyExpirationLabelWidget_Statics::ClassParams = {
		&UCoreCurrencyExpirationLabelWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoreCurrencyExpirationLabelWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCurrencyExpirationLabelWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreCurrencyExpirationLabelWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreCurrencyExpirationLabelWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreCurrencyExpirationLabelWidget, 2480487216);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreCurrencyExpirationLabelWidget>()
	{
		return UCoreCurrencyExpirationLabelWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreCurrencyExpirationLabelWidget(Z_Construct_UClass_UCoreCurrencyExpirationLabelWidget, &UCoreCurrencyExpirationLabelWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreCurrencyExpirationLabelWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreCurrencyExpirationLabelWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
