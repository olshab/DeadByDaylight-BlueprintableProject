// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CorePriceTagWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorePriceTagWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePriceTagWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePriceTagWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPriceTagViewData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCorePriceTagWidget::execSetHighlightInsufficientCurrency)
	{
		P_GET_UBOOL(Z_Param_highlight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHighlightInsufficientCurrency(Z_Param_highlight);
		P_NATIVE_END;
	}
	static FName NAME_UCorePriceTagWidget_SetBackgroundVisible = FName(TEXT("SetBackgroundVisible"));
	void UCorePriceTagWidget::SetBackgroundVisible(bool showBackground)
	{
		CorePriceTagWidget_eventSetBackgroundVisible_Parms Parms;
		Parms.showBackground=showBackground ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCorePriceTagWidget_SetBackgroundVisible),&Parms);
	}
	static FName NAME_UCorePriceTagWidget_SetCurrencyIcon = FName(TEXT("SetCurrencyIcon"));
	void UCorePriceTagWidget::SetCurrencyIcon(ECurrencyType currencyType)
	{
		CorePriceTagWidget_eventSetCurrencyIcon_Parms Parms;
		Parms.currencyType=currencyType;
		ProcessEvent(FindFunctionChecked(NAME_UCorePriceTagWidget_SetCurrencyIcon),&Parms);
	}
	static FName NAME_UCorePriceTagWidget_SetData = FName(TEXT("SetData"));
	void UCorePriceTagWidget::SetData(FPriceTagViewData const& viewData)
	{
		CorePriceTagWidget_eventSetData_Parms Parms;
		Parms.viewData=viewData;
		ProcessEvent(FindFunctionChecked(NAME_UCorePriceTagWidget_SetData),&Parms);
	}
	void UCorePriceTagWidget::StaticRegisterNativesUCorePriceTagWidget()
	{
		UClass* Class = UCorePriceTagWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHighlightInsufficientCurrency", &UCorePriceTagWidget::execSetHighlightInsufficientCurrency },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCorePriceTagWidget_SetBackgroundVisible_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePriceTagWidget_SetBackgroundVisible_Statics::NewProp_showBackground_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCorePriceTagWidget_SetBackgroundVisible_Statics::NewProp_showBackground_SetBit(void* Obj)
	{
		((CorePriceTagWidget_eventSetBackgroundVisible_Parms*)Obj)->showBackground = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCorePriceTagWidget_SetBackgroundVisible_Statics::NewProp_showBackground = { "showBackground", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CorePriceTagWidget_eventSetBackgroundVisible_Parms), &Z_Construct_UFunction_UCorePriceTagWidget_SetBackgroundVisible_Statics::NewProp_showBackground_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCorePriceTagWidget_SetBackgroundVisible_Statics::NewProp_showBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePriceTagWidget_SetBackgroundVisible_Statics::NewProp_showBackground_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePriceTagWidget_SetBackgroundVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePriceTagWidget_SetBackgroundVisible_Statics::NewProp_showBackground,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePriceTagWidget_SetBackgroundVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePriceTagWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePriceTagWidget_SetBackgroundVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePriceTagWidget, nullptr, "SetBackgroundVisible", nullptr, nullptr, sizeof(CorePriceTagWidget_eventSetBackgroundVisible_Parms), Z_Construct_UFunction_UCorePriceTagWidget_SetBackgroundVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePriceTagWidget_SetBackgroundVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePriceTagWidget_SetBackgroundVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePriceTagWidget_SetBackgroundVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePriceTagWidget_SetBackgroundVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePriceTagWidget_SetBackgroundVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePriceTagWidget_SetCurrencyIcon_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currencyType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_currencyType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCorePriceTagWidget_SetCurrencyIcon_Statics::NewProp_currencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCorePriceTagWidget_SetCurrencyIcon_Statics::NewProp_currencyType = { "currencyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePriceTagWidget_eventSetCurrencyIcon_Parms, currencyType), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePriceTagWidget_SetCurrencyIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePriceTagWidget_SetCurrencyIcon_Statics::NewProp_currencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePriceTagWidget_SetCurrencyIcon_Statics::NewProp_currencyType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePriceTagWidget_SetCurrencyIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePriceTagWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePriceTagWidget_SetCurrencyIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePriceTagWidget, nullptr, "SetCurrencyIcon", nullptr, nullptr, sizeof(CorePriceTagWidget_eventSetCurrencyIcon_Parms), Z_Construct_UFunction_UCorePriceTagWidget_SetCurrencyIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePriceTagWidget_SetCurrencyIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePriceTagWidget_SetCurrencyIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePriceTagWidget_SetCurrencyIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePriceTagWidget_SetCurrencyIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePriceTagWidget_SetCurrencyIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePriceTagWidget_SetData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePriceTagWidget_SetData_Statics::NewProp_viewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePriceTagWidget_SetData_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePriceTagWidget_eventSetData_Parms, viewData), Z_Construct_UScriptStruct_FPriceTagViewData, METADATA_PARAMS(Z_Construct_UFunction_UCorePriceTagWidget_SetData_Statics::NewProp_viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePriceTagWidget_SetData_Statics::NewProp_viewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePriceTagWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePriceTagWidget_SetData_Statics::NewProp_viewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePriceTagWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePriceTagWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePriceTagWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePriceTagWidget, nullptr, "SetData", nullptr, nullptr, sizeof(CorePriceTagWidget_eventSetData_Parms), Z_Construct_UFunction_UCorePriceTagWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePriceTagWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePriceTagWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePriceTagWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePriceTagWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePriceTagWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePriceTagWidget_SetHighlightInsufficientCurrency_Statics
	{
		struct CorePriceTagWidget_eventSetHighlightInsufficientCurrency_Parms
		{
			bool highlight;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_highlight_MetaData[];
#endif
		static void NewProp_highlight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_highlight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePriceTagWidget_SetHighlightInsufficientCurrency_Statics::NewProp_highlight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCorePriceTagWidget_SetHighlightInsufficientCurrency_Statics::NewProp_highlight_SetBit(void* Obj)
	{
		((CorePriceTagWidget_eventSetHighlightInsufficientCurrency_Parms*)Obj)->highlight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCorePriceTagWidget_SetHighlightInsufficientCurrency_Statics::NewProp_highlight = { "highlight", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CorePriceTagWidget_eventSetHighlightInsufficientCurrency_Parms), &Z_Construct_UFunction_UCorePriceTagWidget_SetHighlightInsufficientCurrency_Statics::NewProp_highlight_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCorePriceTagWidget_SetHighlightInsufficientCurrency_Statics::NewProp_highlight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePriceTagWidget_SetHighlightInsufficientCurrency_Statics::NewProp_highlight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePriceTagWidget_SetHighlightInsufficientCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePriceTagWidget_SetHighlightInsufficientCurrency_Statics::NewProp_highlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePriceTagWidget_SetHighlightInsufficientCurrency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePriceTagWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePriceTagWidget_SetHighlightInsufficientCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePriceTagWidget, nullptr, "SetHighlightInsufficientCurrency", nullptr, nullptr, sizeof(CorePriceTagWidget_eventSetHighlightInsufficientCurrency_Parms), Z_Construct_UFunction_UCorePriceTagWidget_SetHighlightInsufficientCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePriceTagWidget_SetHighlightInsufficientCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePriceTagWidget_SetHighlightInsufficientCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePriceTagWidget_SetHighlightInsufficientCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePriceTagWidget_SetHighlightInsufficientCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePriceTagWidget_SetHighlightInsufficientCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCorePriceTagWidget_NoRegister()
	{
		return UCorePriceTagWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCorePriceTagWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__highlightInsufficientCurrency_MetaData[];
#endif
		static void NewProp__highlightInsufficientCurrency_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__highlightInsufficientCurrency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrencyIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCorePriceTagWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCorePriceTagWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCorePriceTagWidget_SetBackgroundVisible, "SetBackgroundVisible" }, // 1568848521
		{ &Z_Construct_UFunction_UCorePriceTagWidget_SetCurrencyIcon, "SetCurrencyIcon" }, // 2710491226
		{ &Z_Construct_UFunction_UCorePriceTagWidget_SetData, "SetData" }, // 3045244846
		{ &Z_Construct_UFunction_UCorePriceTagWidget_SetHighlightInsufficientCurrency, "SetHighlightInsufficientCurrency" }, // 494485800
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePriceTagWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CorePriceTagWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CorePriceTagWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePriceTagWidget_Statics::NewProp__highlightInsufficientCurrency_MetaData[] = {
		{ "Category", "CorePriceTagWidget" },
		{ "ModuleRelativePath", "Public/CorePriceTagWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCorePriceTagWidget_Statics::NewProp__highlightInsufficientCurrency_SetBit(void* Obj)
	{
		((UCorePriceTagWidget*)Obj)->_highlightInsufficientCurrency = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCorePriceTagWidget_Statics::NewProp__highlightInsufficientCurrency = { "_highlightInsufficientCurrency", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCorePriceTagWidget), &Z_Construct_UClass_UCorePriceTagWidget_Statics::NewProp__highlightInsufficientCurrency_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCorePriceTagWidget_Statics::NewProp__highlightInsufficientCurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePriceTagWidget_Statics::NewProp__highlightInsufficientCurrency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePriceTagWidget_Statics::NewProp_CurrencyIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePriceTagWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePriceTagWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePriceTagWidget_Statics::NewProp_CurrencyIcon = { "CurrencyIcon", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePriceTagWidget, CurrencyIcon), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePriceTagWidget_Statics::NewProp_CurrencyIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePriceTagWidget_Statics::NewProp_CurrencyIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCorePriceTagWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePriceTagWidget_Statics::NewProp__highlightInsufficientCurrency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePriceTagWidget_Statics::NewProp_CurrencyIcon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCorePriceTagWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCorePriceTagWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCorePriceTagWidget_Statics::ClassParams = {
		&UCorePriceTagWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCorePriceTagWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCorePriceTagWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCorePriceTagWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePriceTagWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCorePriceTagWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCorePriceTagWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCorePriceTagWidget, 2610950719);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCorePriceTagWidget>()
	{
		return UCorePriceTagWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCorePriceTagWidget(Z_Construct_UClass_UCorePriceTagWidget, &UCorePriceTagWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCorePriceTagWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCorePriceTagWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
