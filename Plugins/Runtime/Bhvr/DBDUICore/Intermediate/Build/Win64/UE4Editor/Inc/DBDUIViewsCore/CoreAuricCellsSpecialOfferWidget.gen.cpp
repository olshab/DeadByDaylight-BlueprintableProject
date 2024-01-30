// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreAuricCellsSpecialOfferWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreAuricCellsSpecialOfferWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreAuricCellsBundleWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_AuricCellsSpecialOtherOptionsActionDelegate__DelegateSignature();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreKeyListenerButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreAuricCellsSpecialOfferWidget::execOnOtherOptionsClick)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_selectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOtherOptionsClick(Z_Param_selectedButton);
		P_NATIVE_END;
	}
	void UCoreAuricCellsSpecialOfferWidget::StaticRegisterNativesUCoreAuricCellsSpecialOfferWidget()
	{
		UClass* Class = UCoreAuricCellsSpecialOfferWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOtherOptionsClick", &UCoreAuricCellsSpecialOfferWidget::execOnOtherOptionsClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreAuricCellsSpecialOfferWidget_OnOtherOptionsClick_Statics
	{
		struct CoreAuricCellsSpecialOfferWidget_eventOnOtherOptionsClick_Parms
		{
			UCoreButtonWidget* selectedButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_selectedButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuricCellsSpecialOfferWidget_OnOtherOptionsClick_Statics::NewProp_selectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreAuricCellsSpecialOfferWidget_OnOtherOptionsClick_Statics::NewProp_selectedButton = { "selectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuricCellsSpecialOfferWidget_eventOnOtherOptionsClick_Parms, selectedButton), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuricCellsSpecialOfferWidget_OnOtherOptionsClick_Statics::NewProp_selectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuricCellsSpecialOfferWidget_OnOtherOptionsClick_Statics::NewProp_selectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAuricCellsSpecialOfferWidget_OnOtherOptionsClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuricCellsSpecialOfferWidget_OnOtherOptionsClick_Statics::NewProp_selectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuricCellsSpecialOfferWidget_OnOtherOptionsClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreAuricCellsSpecialOfferWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAuricCellsSpecialOfferWidget_OnOtherOptionsClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget, nullptr, "OnOtherOptionsClick", nullptr, nullptr, sizeof(CoreAuricCellsSpecialOfferWidget_eventOnOtherOptionsClick_Parms), Z_Construct_UFunction_UCoreAuricCellsSpecialOfferWidget_OnOtherOptionsClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuricCellsSpecialOfferWidget_OnOtherOptionsClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuricCellsSpecialOfferWidget_OnOtherOptionsClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuricCellsSpecialOfferWidget_OnOtherOptionsClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAuricCellsSpecialOfferWidget_OnOtherOptionsClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAuricCellsSpecialOfferWidget_OnOtherOptionsClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_NoRegister()
	{
		return UCoreAuricCellsSpecialOfferWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__otherOptionsActionDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__otherOptionsActionDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherOptionsButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherOptionsButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeLeftTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimeLeftTextBlock;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreAuricCellsBundleWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreAuricCellsSpecialOfferWidget_OnOtherOptionsClick, "OnOtherOptionsClick" }, // 1615220799
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreAuricCellsSpecialOfferWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsSpecialOfferWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics::NewProp__otherOptionsActionDelegate_MetaData[] = {
		{ "Category", "CoreAuricCellsSpecialOfferWidget" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsSpecialOfferWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics::NewProp__otherOptionsActionDelegate = { "_otherOptionsActionDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuricCellsSpecialOfferWidget, _otherOptionsActionDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_AuricCellsSpecialOtherOptionsActionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics::NewProp__otherOptionsActionDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics::NewProp__otherOptionsActionDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics::NewProp_OtherOptionsButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreAuricCellsSpecialOfferWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsSpecialOfferWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics::NewProp_OtherOptionsButton = { "OtherOptionsButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuricCellsSpecialOfferWidget, OtherOptionsButton), Z_Construct_UClass_UCoreKeyListenerButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics::NewProp_OtherOptionsButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics::NewProp_OtherOptionsButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics::NewProp_TimeLeftTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreAuricCellsSpecialOfferWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsSpecialOfferWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics::NewProp_TimeLeftTextBlock = { "TimeLeftTextBlock", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuricCellsSpecialOfferWidget, TimeLeftTextBlock), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics::NewProp_TimeLeftTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics::NewProp_TimeLeftTextBlock_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics::NewProp__otherOptionsActionDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics::NewProp_OtherOptionsButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics::NewProp_TimeLeftTextBlock,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreAuricCellsSpecialOfferWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics::ClassParams = {
		&UCoreAuricCellsSpecialOfferWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreAuricCellsSpecialOfferWidget, 52833355);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreAuricCellsSpecialOfferWidget>()
	{
		return UCoreAuricCellsSpecialOfferWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreAuricCellsSpecialOfferWidget(Z_Construct_UClass_UCoreAuricCellsSpecialOfferWidget, &UCoreAuricCellsSpecialOfferWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreAuricCellsSpecialOfferWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreAuricCellsSpecialOfferWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
