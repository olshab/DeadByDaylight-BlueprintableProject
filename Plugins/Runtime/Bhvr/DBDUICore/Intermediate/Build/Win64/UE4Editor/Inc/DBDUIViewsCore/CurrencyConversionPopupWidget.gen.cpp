// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CurrencyConversionPopupWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurrencyConversionPopupWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCurrencyConversionPopupWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCurrencyConversionPopupWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreGenericPopupWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UCurrencyConversionPopupViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UCurrencyConversionPopupViewInterface_NoRegister();
// End Cross Module References
	static FName NAME_UCurrencyConversionPopupWidget_SetData = FName(TEXT("SetData"));
	void UCurrencyConversionPopupWidget::SetData(const UCurrencyConversionPopupViewData* data)
	{
		CurrencyConversionPopupWidget_eventSetData_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_UCurrencyConversionPopupWidget_SetData),&Parms);
	}
	void UCurrencyConversionPopupWidget::StaticRegisterNativesUCurrencyConversionPopupWidget()
	{
	}
	struct Z_Construct_UFunction_UCurrencyConversionPopupWidget_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurrencyConversionPopupWidget_SetData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCurrencyConversionPopupWidget_SetData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CurrencyConversionPopupWidget_eventSetData_Parms, data), Z_Construct_UClass_UCurrencyConversionPopupViewData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCurrencyConversionPopupWidget_SetData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrencyConversionPopupWidget_SetData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurrencyConversionPopupWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurrencyConversionPopupWidget_SetData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurrencyConversionPopupWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CurrencyConversionPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurrencyConversionPopupWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurrencyConversionPopupWidget, nullptr, "SetData", nullptr, nullptr, sizeof(CurrencyConversionPopupWidget_eventSetData_Parms), Z_Construct_UFunction_UCurrencyConversionPopupWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrencyConversionPopupWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurrencyConversionPopupWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrencyConversionPopupWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurrencyConversionPopupWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCurrencyConversionPopupWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCurrencyConversionPopupWidget_NoRegister()
	{
		return UCurrencyConversionPopupWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCurrencyConversionPopupWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurrencyConversionPopupWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreGenericPopupWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCurrencyConversionPopupWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurrencyConversionPopupWidget_SetData, "SetData" }, // 985967083
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrencyConversionPopupWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CurrencyConversionPopupWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CurrencyConversionPopupWidget.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCurrencyConversionPopupWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCurrencyConversionPopupViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCurrencyConversionPopupWidget, ICurrencyConversionPopupViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurrencyConversionPopupWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurrencyConversionPopupWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCurrencyConversionPopupWidget_Statics::ClassParams = {
		&UCurrencyConversionPopupWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurrencyConversionPopupWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyConversionPopupWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurrencyConversionPopupWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCurrencyConversionPopupWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCurrencyConversionPopupWidget, 3501665450);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCurrencyConversionPopupWidget>()
	{
		return UCurrencyConversionPopupWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurrencyConversionPopupWidget(Z_Construct_UClass_UCurrencyConversionPopupWidget, &UCurrencyConversionPopupWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCurrencyConversionPopupWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurrencyConversionPopupWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
