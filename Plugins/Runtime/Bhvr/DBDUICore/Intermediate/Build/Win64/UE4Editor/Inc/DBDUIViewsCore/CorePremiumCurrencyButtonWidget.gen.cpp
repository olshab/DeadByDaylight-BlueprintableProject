// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CorePremiumCurrencyButtonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorePremiumCurrencyButtonWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePremiumCurrencyButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePremiumCurrencyButtonWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCorePremiumCurrencyButtonWidget::execSetPrice)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_priceText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPrice(Z_Param_Out_priceText);
		P_NATIVE_END;
	}
	void UCorePremiumCurrencyButtonWidget::StaticRegisterNativesUCorePremiumCurrencyButtonWidget()
	{
		UClass* Class = UCorePremiumCurrencyButtonWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPrice", &UCorePremiumCurrencyButtonWidget::execSetPrice },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCorePremiumCurrencyButtonWidget_SetPrice_Statics
	{
		struct CorePremiumCurrencyButtonWidget_eventSetPrice_Parms
		{
			FText priceText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_priceText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_priceText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePremiumCurrencyButtonWidget_SetPrice_Statics::NewProp_priceText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCorePremiumCurrencyButtonWidget_SetPrice_Statics::NewProp_priceText = { "priceText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePremiumCurrencyButtonWidget_eventSetPrice_Parms, priceText), METADATA_PARAMS(Z_Construct_UFunction_UCorePremiumCurrencyButtonWidget_SetPrice_Statics::NewProp_priceText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePremiumCurrencyButtonWidget_SetPrice_Statics::NewProp_priceText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePremiumCurrencyButtonWidget_SetPrice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePremiumCurrencyButtonWidget_SetPrice_Statics::NewProp_priceText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePremiumCurrencyButtonWidget_SetPrice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePremiumCurrencyButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePremiumCurrencyButtonWidget_SetPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePremiumCurrencyButtonWidget, nullptr, "SetPrice", nullptr, nullptr, sizeof(CorePremiumCurrencyButtonWidget_eventSetPrice_Parms), Z_Construct_UFunction_UCorePremiumCurrencyButtonWidget_SetPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePremiumCurrencyButtonWidget_SetPrice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePremiumCurrencyButtonWidget_SetPrice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePremiumCurrencyButtonWidget_SetPrice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePremiumCurrencyButtonWidget_SetPrice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePremiumCurrencyButtonWidget_SetPrice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCorePremiumCurrencyButtonWidget_NoRegister()
	{
		return UCorePremiumCurrencyButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCorePremiumCurrencyButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriceTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PriceTextBlock;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCorePremiumCurrencyButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCorePremiumCurrencyButtonWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCorePremiumCurrencyButtonWidget_SetPrice, "SetPrice" }, // 1376875997
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePremiumCurrencyButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CorePremiumCurrencyButtonWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CorePremiumCurrencyButtonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePremiumCurrencyButtonWidget_Statics::NewProp_PriceTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePremiumCurrencyButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePremiumCurrencyButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePremiumCurrencyButtonWidget_Statics::NewProp_PriceTextBlock = { "PriceTextBlock", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePremiumCurrencyButtonWidget, PriceTextBlock), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePremiumCurrencyButtonWidget_Statics::NewProp_PriceTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePremiumCurrencyButtonWidget_Statics::NewProp_PriceTextBlock_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCorePremiumCurrencyButtonWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePremiumCurrencyButtonWidget_Statics::NewProp_PriceTextBlock,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCorePremiumCurrencyButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCorePremiumCurrencyButtonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCorePremiumCurrencyButtonWidget_Statics::ClassParams = {
		&UCorePremiumCurrencyButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCorePremiumCurrencyButtonWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCorePremiumCurrencyButtonWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCorePremiumCurrencyButtonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePremiumCurrencyButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCorePremiumCurrencyButtonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCorePremiumCurrencyButtonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCorePremiumCurrencyButtonWidget, 328363470);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCorePremiumCurrencyButtonWidget>()
	{
		return UCorePremiumCurrencyButtonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCorePremiumCurrencyButtonWidget(Z_Construct_UClass_UCorePremiumCurrencyButtonWidget, &UCorePremiumCurrencyButtonWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCorePremiumCurrencyButtonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCorePremiumCurrencyButtonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
