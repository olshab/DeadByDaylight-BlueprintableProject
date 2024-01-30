// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreAuricCellsWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreAuricCellsWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreAuricCellsWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreAuricCellsWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_AuricCellsBackActionDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_AuricCellsBuyActionDelegate__DelegateSignature();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreAuricCellsContainerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UAuricCellsViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreAuricCellsWidget::execOnBuyAction)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_bundleId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBuyAction(Z_Param_bundleId);
		P_NATIVE_END;
	}
	void UCoreAuricCellsWidget::StaticRegisterNativesUCoreAuricCellsWidget()
	{
		UClass* Class = UCoreAuricCellsWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBuyAction", &UCoreAuricCellsWidget::execOnBuyAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreAuricCellsWidget_OnBuyAction_Statics
	{
		struct CoreAuricCellsWidget_eventOnBuyAction_Parms
		{
			FName bundleId;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_bundleId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCoreAuricCellsWidget_OnBuyAction_Statics::NewProp_bundleId = { "bundleId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuricCellsWidget_eventOnBuyAction_Parms, bundleId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAuricCellsWidget_OnBuyAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuricCellsWidget_OnBuyAction_Statics::NewProp_bundleId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuricCellsWidget_OnBuyAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreAuricCellsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAuricCellsWidget_OnBuyAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAuricCellsWidget, nullptr, "OnBuyAction", nullptr, nullptr, sizeof(CoreAuricCellsWidget_eventOnBuyAction_Parms), Z_Construct_UFunction_UCoreAuricCellsWidget_OnBuyAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuricCellsWidget_OnBuyAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuricCellsWidget_OnBuyAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuricCellsWidget_OnBuyAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAuricCellsWidget_OnBuyAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAuricCellsWidget_OnBuyAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreAuricCellsWidget_NoRegister()
	{
		return UCoreAuricCellsWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreAuricCellsWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__backActionDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__backActionDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__buyActionDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__buyActionDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackInputSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackInputSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Container;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleTextBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptyBundlesTitleTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmptyBundlesTitleTextBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptyBundlesDescriptionTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmptyBundlesDescriptionTextBlock;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreAuricCellsWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreAuricCellsWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreAuricCellsWidget_OnBuyAction, "OnBuyAction" }, // 258173364
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreAuricCellsWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp__backActionDelegate_MetaData[] = {
		{ "Category", "CoreAuricCellsWidget" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp__backActionDelegate = { "_backActionDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuricCellsWidget, _backActionDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_AuricCellsBackActionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp__backActionDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp__backActionDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp__buyActionDelegate_MetaData[] = {
		{ "Category", "CoreAuricCellsWidget" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp__buyActionDelegate = { "_buyActionDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuricCellsWidget, _buyActionDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_AuricCellsBuyActionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp__buyActionDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp__buyActionDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp_BackInputSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreAuricCellsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp_BackInputSwitcher = { "BackInputSwitcher", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuricCellsWidget, BackInputSwitcher), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp_BackInputSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp_BackInputSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp_Container_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreAuricCellsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuricCellsWidget, Container), Z_Construct_UClass_UCoreAuricCellsContainerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp_Container_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp_Container_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp_TitleTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreAuricCellsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp_TitleTextBlock = { "TitleTextBlock", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuricCellsWidget, TitleTextBlock), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp_TitleTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp_TitleTextBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp_EmptyBundlesTitleTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreAuricCellsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp_EmptyBundlesTitleTextBlock = { "EmptyBundlesTitleTextBlock", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuricCellsWidget, EmptyBundlesTitleTextBlock), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp_EmptyBundlesTitleTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp_EmptyBundlesTitleTextBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp_EmptyBundlesDescriptionTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreAuricCellsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp_EmptyBundlesDescriptionTextBlock = { "EmptyBundlesDescriptionTextBlock", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuricCellsWidget, EmptyBundlesDescriptionTextBlock), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp_EmptyBundlesDescriptionTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp_EmptyBundlesDescriptionTextBlock_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreAuricCellsWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp__backActionDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp__buyActionDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp_BackInputSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp_Container,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp_TitleTextBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp_EmptyBundlesTitleTextBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuricCellsWidget_Statics::NewProp_EmptyBundlesDescriptionTextBlock,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreAuricCellsWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAuricCellsViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreAuricCellsWidget, IAuricCellsViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreAuricCellsWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreAuricCellsWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreAuricCellsWidget_Statics::ClassParams = {
		&UCoreAuricCellsWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreAuricCellsWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreAuricCellsWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreAuricCellsWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreAuricCellsWidget, 891622641);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreAuricCellsWidget>()
	{
		return UCoreAuricCellsWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreAuricCellsWidget(Z_Construct_UClass_UCoreAuricCellsWidget, &UCoreAuricCellsWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreAuricCellsWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreAuricCellsWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
