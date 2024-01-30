// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreArchiveSlotSelectorWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreArchiveSlotSelectorWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveSlotSelectorWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UArchiveNodeTooltipWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreArchiveSlotSelectorWidget::execOnBothSelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBothSelection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveSlotSelectorWidget::execOnCancelSelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCancelSelection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveSlotSelectorWidget::execOnKillerSelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKillerSelection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveSlotSelectorWidget::execOnSurvivorSelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSurvivorSelection();
		P_NATIVE_END;
	}
	void UCoreArchiveSlotSelectorWidget::StaticRegisterNativesUCoreArchiveSlotSelectorWidget()
	{
		UClass* Class = UCoreArchiveSlotSelectorWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBothSelection", &UCoreArchiveSlotSelectorWidget::execOnBothSelection },
			{ "OnCancelSelection", &UCoreArchiveSlotSelectorWidget::execOnCancelSelection },
			{ "OnKillerSelection", &UCoreArchiveSlotSelectorWidget::execOnKillerSelection },
			{ "OnSurvivorSelection", &UCoreArchiveSlotSelectorWidget::execOnSurvivorSelection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnBothSelection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnBothSelection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveSlotSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnBothSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveSlotSelectorWidget, nullptr, "OnBothSelection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnBothSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnBothSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnBothSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnBothSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnCancelSelection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnCancelSelection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveSlotSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnCancelSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveSlotSelectorWidget, nullptr, "OnCancelSelection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnCancelSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnCancelSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnCancelSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnCancelSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnKillerSelection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnKillerSelection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveSlotSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnKillerSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveSlotSelectorWidget, nullptr, "OnKillerSelection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnKillerSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnKillerSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnKillerSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnKillerSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnSurvivorSelection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnSurvivorSelection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveSlotSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnSurvivorSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveSlotSelectorWidget, nullptr, "OnSurvivorSelection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnSurvivorSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnSurvivorSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnSurvivorSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnSurvivorSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_NoRegister()
	{
		return UCoreArchiveSlotSelectorWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeTooltip_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeTooltip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorSlotPromptWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SurvivorSlotPromptWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BothSlotPromptWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BothSlotPromptWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerSlotPromptWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillerSlotPromptWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelPromptWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CancelPromptWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnBothSelection, "OnBothSelection" }, // 3860522271
		{ &Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnCancelSelection, "OnCancelSelection" }, // 3762914547
		{ &Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnKillerSelection, "OnKillerSelection" }, // 2451937371
		{ &Z_Construct_UFunction_UCoreArchiveSlotSelectorWidget_OnSurvivorSelection, "OnSurvivorSelection" }, // 2511504839
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreArchiveSlotSelectorWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveSlotSelectorWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::NewProp_NodeTooltip_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveSlotSelectorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveSlotSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::NewProp_NodeTooltip = { "NodeTooltip", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveSlotSelectorWidget, NodeTooltip), Z_Construct_UClass_UArchiveNodeTooltipWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::NewProp_NodeTooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::NewProp_NodeTooltip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::NewProp_SurvivorSlotPromptWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveSlotSelectorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveSlotSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::NewProp_SurvivorSlotPromptWidget = { "SurvivorSlotPromptWidget", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveSlotSelectorWidget, SurvivorSlotPromptWidget), Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::NewProp_SurvivorSlotPromptWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::NewProp_SurvivorSlotPromptWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::NewProp_BothSlotPromptWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveSlotSelectorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveSlotSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::NewProp_BothSlotPromptWidget = { "BothSlotPromptWidget", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveSlotSelectorWidget, BothSlotPromptWidget), Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::NewProp_BothSlotPromptWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::NewProp_BothSlotPromptWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::NewProp_KillerSlotPromptWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveSlotSelectorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveSlotSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::NewProp_KillerSlotPromptWidget = { "KillerSlotPromptWidget", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveSlotSelectorWidget, KillerSlotPromptWidget), Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::NewProp_KillerSlotPromptWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::NewProp_KillerSlotPromptWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::NewProp_CancelPromptWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveSlotSelectorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveSlotSelectorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::NewProp_CancelPromptWidget = { "CancelPromptWidget", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveSlotSelectorWidget, CancelPromptWidget), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::NewProp_CancelPromptWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::NewProp_CancelPromptWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::NewProp_NodeTooltip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::NewProp_SurvivorSlotPromptWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::NewProp_BothSlotPromptWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::NewProp_KillerSlotPromptWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::NewProp_CancelPromptWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreArchiveSlotSelectorWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::ClassParams = {
		&UCoreArchiveSlotSelectorWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreArchiveSlotSelectorWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreArchiveSlotSelectorWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreArchiveSlotSelectorWidget, 418395738);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreArchiveSlotSelectorWidget>()
	{
		return UCoreArchiveSlotSelectorWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreArchiveSlotSelectorWidget(Z_Construct_UClass_UCoreArchiveSlotSelectorWidget, &UCoreArchiveSlotSelectorWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreArchiveSlotSelectorWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreArchiveSlotSelectorWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
