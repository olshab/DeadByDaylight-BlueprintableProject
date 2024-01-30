// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreStoreBaseSubTabsWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreStoreBaseSubTabsWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreBaseSubTabsWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_StoreSubTabSelectedDelegate__DelegateSignature();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContainerWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreBaseSubTabsViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreStoreBaseSubTabsWidget::execGetSubTabContentForTab)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_subTabId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidget**)Z_Param__Result=P_THIS->GetSubTabContentForTab_Implementation(Z_Param_subTabId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreBaseSubTabsWidget::execOnSubTabSelected)
	{
		P_GET_OBJECT(UCoreSelectableButtonWidget,Z_Param_selectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSubTabSelected(Z_Param_selectedButton);
		P_NATIVE_END;
	}
	static FName NAME_UCoreStoreBaseSubTabsWidget_GetSubTabContentForTab = FName(TEXT("GetSubTabContentForTab"));
	UWidget* UCoreStoreBaseSubTabsWidget::GetSubTabContentForTab(int32 subTabId)
	{
		CoreStoreBaseSubTabsWidget_eventGetSubTabContentForTab_Parms Parms;
		Parms.subTabId=subTabId;
		ProcessEvent(FindFunctionChecked(NAME_UCoreStoreBaseSubTabsWidget_GetSubTabContentForTab),&Parms);
		return Parms.ReturnValue;
	}
	void UCoreStoreBaseSubTabsWidget::StaticRegisterNativesUCoreStoreBaseSubTabsWidget()
	{
		UClass* Class = UCoreStoreBaseSubTabsWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSubTabContentForTab", &UCoreStoreBaseSubTabsWidget::execGetSubTabContentForTab },
			{ "OnSubTabSelected", &UCoreStoreBaseSubTabsWidget::execOnSubTabSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_GetSubTabContentForTab_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_subTabId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_GetSubTabContentForTab_Statics::NewProp_subTabId = { "subTabId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreBaseSubTabsWidget_eventGetSubTabContentForTab_Parms, subTabId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_GetSubTabContentForTab_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_GetSubTabContentForTab_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreBaseSubTabsWidget_eventGetSubTabContentForTab_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_GetSubTabContentForTab_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_GetSubTabContentForTab_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_GetSubTabContentForTab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_GetSubTabContentForTab_Statics::NewProp_subTabId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_GetSubTabContentForTab_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_GetSubTabContentForTab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreBaseSubTabsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_GetSubTabContentForTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreBaseSubTabsWidget, nullptr, "GetSubTabContentForTab", nullptr, nullptr, sizeof(CoreStoreBaseSubTabsWidget_eventGetSubTabContentForTab_Parms), Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_GetSubTabContentForTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_GetSubTabContentForTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_GetSubTabContentForTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_GetSubTabContentForTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_GetSubTabContentForTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_GetSubTabContentForTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_OnSubTabSelected_Statics
	{
		struct CoreStoreBaseSubTabsWidget_eventOnSubTabSelected_Parms
		{
			UCoreSelectableButtonWidget* selectedButton;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_OnSubTabSelected_Statics::NewProp_selectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_OnSubTabSelected_Statics::NewProp_selectedButton = { "selectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreBaseSubTabsWidget_eventOnSubTabSelected_Parms, selectedButton), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_OnSubTabSelected_Statics::NewProp_selectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_OnSubTabSelected_Statics::NewProp_selectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_OnSubTabSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_OnSubTabSelected_Statics::NewProp_selectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_OnSubTabSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreBaseSubTabsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_OnSubTabSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreBaseSubTabsWidget, nullptr, "OnSubTabSelected", nullptr, nullptr, sizeof(CoreStoreBaseSubTabsWidget_eventOnSubTabSelected_Parms), Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_OnSubTabSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_OnSubTabSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_OnSubTabSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_OnSubTabSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_OnSubTabSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_OnSubTabSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_NoRegister()
	{
		return UCoreStoreBaseSubTabsWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__menuTabSelectedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__menuTabSelectedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubTabsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubTabsContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabContentSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TabContentSwitcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_GetSubTabContentForTab, "GetSubTabContentForTab" }, // 2112168364
		{ &Z_Construct_UFunction_UCoreStoreBaseSubTabsWidget_OnSubTabSelected, "OnSubTabSelected" }, // 997533666
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreStoreBaseSubTabsWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreBaseSubTabsWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::NewProp__menuTabSelectedDelegate_MetaData[] = {
		{ "Category", "CoreStoreBaseSubTabsWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreBaseSubTabsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::NewProp__menuTabSelectedDelegate = { "_menuTabSelectedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreBaseSubTabsWidget, _menuTabSelectedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_StoreSubTabSelectedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::NewProp__menuTabSelectedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::NewProp__menuTabSelectedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::NewProp_SubTabsContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreBaseSubTabsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreBaseSubTabsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::NewProp_SubTabsContainer = { "SubTabsContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreBaseSubTabsWidget, SubTabsContainer), Z_Construct_UClass_UCoreTabContainerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::NewProp_SubTabsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::NewProp_SubTabsContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::NewProp_TabContentSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreBaseSubTabsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreBaseSubTabsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::NewProp_TabContentSwitcher = { "TabContentSwitcher", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreBaseSubTabsWidget, TabContentSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::NewProp_TabContentSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::NewProp_TabContentSwitcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::NewProp__menuTabSelectedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::NewProp_SubTabsContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::NewProp_TabContentSwitcher,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStoreBaseSubTabsViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreStoreBaseSubTabsWidget, IStoreBaseSubTabsViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStoreBaseSubTabsWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::ClassParams = {
		&UCoreStoreBaseSubTabsWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreStoreBaseSubTabsWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreStoreBaseSubTabsWidget, 1202986349);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreStoreBaseSubTabsWidget>()
	{
		return UCoreStoreBaseSubTabsWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreStoreBaseSubTabsWidget(Z_Construct_UClass_UCoreStoreBaseSubTabsWidget, &UCoreStoreBaseSubTabsWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreStoreBaseSubTabsWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStoreBaseSubTabsWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
