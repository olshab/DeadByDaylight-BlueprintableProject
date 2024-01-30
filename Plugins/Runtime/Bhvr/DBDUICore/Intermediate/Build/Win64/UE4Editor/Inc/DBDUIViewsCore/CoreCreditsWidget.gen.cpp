// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreCreditsWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreCreditsWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreCreditsWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreCreditsWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	UITWEEN_API UClass* Z_Construct_UClass_UUITweenInstance_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_CreditsBackActionDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UCreditsViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreCreditsWidget::execOnScrollEnd)
	{
		P_GET_OBJECT(UUITweenInstance,Z_Param_tween);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnScrollEnd(Z_Param_tween);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreCreditsWidget::execScrollText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScrollText();
		P_NATIVE_END;
	}
	void UCoreCreditsWidget::StaticRegisterNativesUCoreCreditsWidget()
	{
		UClass* Class = UCoreCreditsWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnScrollEnd", &UCoreCreditsWidget::execOnScrollEnd },
			{ "ScrollText", &UCoreCreditsWidget::execScrollText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreCreditsWidget_OnScrollEnd_Statics
	{
		struct CoreCreditsWidget_eventOnScrollEnd_Parms
		{
			UUITweenInstance* tween;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tween;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreCreditsWidget_OnScrollEnd_Statics::NewProp_tween = { "tween", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreCreditsWidget_eventOnScrollEnd_Parms, tween), Z_Construct_UClass_UUITweenInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreCreditsWidget_OnScrollEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreCreditsWidget_OnScrollEnd_Statics::NewProp_tween,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCreditsWidget_OnScrollEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreCreditsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreCreditsWidget_OnScrollEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreCreditsWidget, nullptr, "OnScrollEnd", nullptr, nullptr, sizeof(CoreCreditsWidget_eventOnScrollEnd_Parms), Z_Construct_UFunction_UCoreCreditsWidget_OnScrollEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCreditsWidget_OnScrollEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreCreditsWidget_OnScrollEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCreditsWidget_OnScrollEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreCreditsWidget_OnScrollEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreCreditsWidget_OnScrollEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreCreditsWidget_ScrollText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCreditsWidget_ScrollText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreCreditsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreCreditsWidget_ScrollText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreCreditsWidget, nullptr, "ScrollText", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreCreditsWidget_ScrollText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCreditsWidget_ScrollText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreCreditsWidget_ScrollText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreCreditsWidget_ScrollText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreCreditsWidget_NoRegister()
	{
		return UCoreCreditsWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreCreditsWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScrollSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackInputSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackInputSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreditsTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CreditsTextBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__backActionDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__backActionDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tween_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tween;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreCreditsWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreCreditsWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreCreditsWidget_OnScrollEnd, "OnScrollEnd" }, // 1361845873
		{ &Z_Construct_UFunction_UCoreCreditsWidget_ScrollText, "ScrollText" }, // 2170453266
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreCreditsWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreCreditsWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreCreditsWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreCreditsWidget_Statics::NewProp_ScrollSpeed_MetaData[] = {
		{ "Category", "CoreCreditsWidget" },
		{ "ModuleRelativePath", "Public/CoreCreditsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreCreditsWidget_Statics::NewProp_ScrollSpeed = { "ScrollSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreCreditsWidget, ScrollSpeed), METADATA_PARAMS(Z_Construct_UClass_UCoreCreditsWidget_Statics::NewProp_ScrollSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCreditsWidget_Statics::NewProp_ScrollSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreCreditsWidget_Statics::NewProp_BackInputSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreCreditsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreCreditsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreCreditsWidget_Statics::NewProp_BackInputSwitcher = { "BackInputSwitcher", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreCreditsWidget, BackInputSwitcher), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreCreditsWidget_Statics::NewProp_BackInputSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCreditsWidget_Statics::NewProp_BackInputSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreCreditsWidget_Statics::NewProp_CreditsTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreCreditsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreCreditsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreCreditsWidget_Statics::NewProp_CreditsTextBlock = { "CreditsTextBlock", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreCreditsWidget, CreditsTextBlock), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreCreditsWidget_Statics::NewProp_CreditsTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCreditsWidget_Statics::NewProp_CreditsTextBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreCreditsWidget_Statics::NewProp__backActionDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreCreditsWidget" },
		{ "ModuleRelativePath", "Public/CoreCreditsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreCreditsWidget_Statics::NewProp__backActionDelegate = { "_backActionDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreCreditsWidget, _backActionDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_CreditsBackActionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreCreditsWidget_Statics::NewProp__backActionDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCreditsWidget_Statics::NewProp__backActionDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreCreditsWidget_Statics::NewProp__tween_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreCreditsWidget" },
		{ "ModuleRelativePath", "Public/CoreCreditsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreCreditsWidget_Statics::NewProp__tween = { "_tween", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreCreditsWidget, _tween), Z_Construct_UClass_UUITweenInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreCreditsWidget_Statics::NewProp__tween_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCreditsWidget_Statics::NewProp__tween_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreCreditsWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreCreditsWidget_Statics::NewProp_ScrollSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreCreditsWidget_Statics::NewProp_BackInputSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreCreditsWidget_Statics::NewProp_CreditsTextBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreCreditsWidget_Statics::NewProp__backActionDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreCreditsWidget_Statics::NewProp__tween,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreCreditsWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCreditsViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreCreditsWidget, ICreditsViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreCreditsWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreCreditsWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreCreditsWidget_Statics::ClassParams = {
		&UCoreCreditsWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreCreditsWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCreditsWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreCreditsWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCreditsWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreCreditsWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreCreditsWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreCreditsWidget, 2213749008);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreCreditsWidget>()
	{
		return UCoreCreditsWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreCreditsWidget(Z_Construct_UClass_UCoreCreditsWidget, &UCoreCreditsWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreCreditsWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreCreditsWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
