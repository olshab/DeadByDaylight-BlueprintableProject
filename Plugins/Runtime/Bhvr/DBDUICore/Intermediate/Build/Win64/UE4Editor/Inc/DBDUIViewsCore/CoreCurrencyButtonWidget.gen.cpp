// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreCurrencyButtonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreCurrencyButtonWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreCurrencyButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreCurrencyButtonWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreKeyListenerButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPriceTagViewData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePriceTagWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreCurrencyButtonWidget::execSetBackgroundVisible)
	{
		P_GET_UBOOL(Z_Param_showBackground);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBackgroundVisible(Z_Param_showBackground);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreCurrencyButtonWidget::execSetCurrencyData)
	{
		P_GET_STRUCT_REF(FPriceTagViewData,Z_Param_Out_currencyData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrencyData_Implementation(Z_Param_Out_currencyData);
		P_NATIVE_END;
	}
	static FName NAME_UCoreCurrencyButtonWidget_SetCurrencyData = FName(TEXT("SetCurrencyData"));
	void UCoreCurrencyButtonWidget::SetCurrencyData(FPriceTagViewData const& currencyData)
	{
		CoreCurrencyButtonWidget_eventSetCurrencyData_Parms Parms;
		Parms.currencyData=currencyData;
		ProcessEvent(FindFunctionChecked(NAME_UCoreCurrencyButtonWidget_SetCurrencyData),&Parms);
	}
	void UCoreCurrencyButtonWidget::StaticRegisterNativesUCoreCurrencyButtonWidget()
	{
		UClass* Class = UCoreCurrencyButtonWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBackgroundVisible", &UCoreCurrencyButtonWidget::execSetBackgroundVisible },
			{ "SetCurrencyData", &UCoreCurrencyButtonWidget::execSetCurrencyData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetBackgroundVisible_Statics
	{
		struct CoreCurrencyButtonWidget_eventSetBackgroundVisible_Parms
		{
			bool showBackground;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_showBackground_MetaData[];
#endif
		static void NewProp_showBackground_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_showBackground;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetBackgroundVisible_Statics::NewProp_showBackground_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetBackgroundVisible_Statics::NewProp_showBackground_SetBit(void* Obj)
	{
		((CoreCurrencyButtonWidget_eventSetBackgroundVisible_Parms*)Obj)->showBackground = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetBackgroundVisible_Statics::NewProp_showBackground = { "showBackground", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreCurrencyButtonWidget_eventSetBackgroundVisible_Parms), &Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetBackgroundVisible_Statics::NewProp_showBackground_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetBackgroundVisible_Statics::NewProp_showBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetBackgroundVisible_Statics::NewProp_showBackground_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetBackgroundVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetBackgroundVisible_Statics::NewProp_showBackground,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetBackgroundVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreCurrencyButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetBackgroundVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreCurrencyButtonWidget, nullptr, "SetBackgroundVisible", nullptr, nullptr, sizeof(CoreCurrencyButtonWidget_eventSetBackgroundVisible_Parms), Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetBackgroundVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetBackgroundVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetBackgroundVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetBackgroundVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetBackgroundVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetBackgroundVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetCurrencyData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currencyData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_currencyData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetCurrencyData_Statics::NewProp_currencyData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetCurrencyData_Statics::NewProp_currencyData = { "currencyData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreCurrencyButtonWidget_eventSetCurrencyData_Parms, currencyData), Z_Construct_UScriptStruct_FPriceTagViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetCurrencyData_Statics::NewProp_currencyData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetCurrencyData_Statics::NewProp_currencyData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetCurrencyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetCurrencyData_Statics::NewProp_currencyData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetCurrencyData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreCurrencyButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetCurrencyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreCurrencyButtonWidget, nullptr, "SetCurrencyData", nullptr, nullptr, sizeof(CoreCurrencyButtonWidget_eventSetCurrencyData_Parms), Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetCurrencyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetCurrencyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetCurrencyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetCurrencyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetCurrencyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetCurrencyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreCurrencyButtonWidget_NoRegister()
	{
		return UCoreCurrencyButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreCurrencyButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriceTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PriceTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreCurrencyButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreKeyListenerButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreCurrencyButtonWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetBackgroundVisible, "SetBackgroundVisible" }, // 38417257
		{ &Z_Construct_UFunction_UCoreCurrencyButtonWidget_SetCurrencyData, "SetCurrencyData" }, // 127686935
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreCurrencyButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreCurrencyButtonWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreCurrencyButtonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreCurrencyButtonWidget_Statics::NewProp_PriceTag_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreCurrencyButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreCurrencyButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreCurrencyButtonWidget_Statics::NewProp_PriceTag = { "PriceTag", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreCurrencyButtonWidget, PriceTag), Z_Construct_UClass_UCorePriceTagWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreCurrencyButtonWidget_Statics::NewProp_PriceTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCurrencyButtonWidget_Statics::NewProp_PriceTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreCurrencyButtonWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreCurrencyButtonWidget_Statics::NewProp_PriceTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreCurrencyButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreCurrencyButtonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreCurrencyButtonWidget_Statics::ClassParams = {
		&UCoreCurrencyButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreCurrencyButtonWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCurrencyButtonWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreCurrencyButtonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCurrencyButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreCurrencyButtonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreCurrencyButtonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreCurrencyButtonWidget, 2829683471);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreCurrencyButtonWidget>()
	{
		return UCoreCurrencyButtonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreCurrencyButtonWidget(Z_Construct_UClass_UCoreCurrencyButtonWidget, &UCoreCurrencyButtonWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreCurrencyButtonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreCurrencyButtonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
