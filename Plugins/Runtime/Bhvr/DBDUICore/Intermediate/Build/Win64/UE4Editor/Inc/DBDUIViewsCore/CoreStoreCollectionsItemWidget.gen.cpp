// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreStoreCollectionsItemWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreStoreCollectionsItemWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCollectionsItemWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCollectionsItemWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCollectionViewData_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCustomizationItemWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePreConstructableList_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreStoreCollectionsItemWidget::execSetupView)
	{
		P_GET_OBJECT(UStoreCollectionViewData,Z_Param_collectionViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupView_Implementation(Z_Param_collectionViewData);
		P_NATIVE_END;
	}
	static FName NAME_UCoreStoreCollectionsItemWidget_SetExpanded = FName(TEXT("SetExpanded"));
	void UCoreStoreCollectionsItemWidget::SetExpanded(bool expanded)
	{
		CoreStoreCollectionsItemWidget_eventSetExpanded_Parms Parms;
		Parms.expanded=expanded ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreStoreCollectionsItemWidget_SetExpanded),&Parms);
	}
	static FName NAME_UCoreStoreCollectionsItemWidget_SetupView = FName(TEXT("SetupView"));
	void UCoreStoreCollectionsItemWidget::SetupView(UStoreCollectionViewData* collectionViewData)
	{
		CoreStoreCollectionsItemWidget_eventSetupView_Parms Parms;
		Parms.collectionViewData=collectionViewData;
		ProcessEvent(FindFunctionChecked(NAME_UCoreStoreCollectionsItemWidget_SetupView),&Parms);
	}
	static FName NAME_UCoreStoreCollectionsItemWidget_ToggleExpanded = FName(TEXT("ToggleExpanded"));
	void UCoreStoreCollectionsItemWidget::ToggleExpanded()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreStoreCollectionsItemWidget_ToggleExpanded),NULL);
	}
	void UCoreStoreCollectionsItemWidget::StaticRegisterNativesUCoreStoreCollectionsItemWidget()
	{
		UClass* Class = UCoreStoreCollectionsItemWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetupView", &UCoreStoreCollectionsItemWidget::execSetupView },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetExpanded_Statics
	{
		static void NewProp_expanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_expanded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetExpanded_Statics::NewProp_expanded_SetBit(void* Obj)
	{
		((CoreStoreCollectionsItemWidget_eventSetExpanded_Parms*)Obj)->expanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetExpanded_Statics::NewProp_expanded = { "expanded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreStoreCollectionsItemWidget_eventSetExpanded_Parms), &Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetExpanded_Statics::NewProp_expanded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetExpanded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetExpanded_Statics::NewProp_expanded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetExpanded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreCollectionsItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetExpanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreCollectionsItemWidget, nullptr, "SetExpanded", nullptr, nullptr, sizeof(CoreStoreCollectionsItemWidget_eventSetExpanded_Parms), Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetExpanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetExpanded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetExpanded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetExpanded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetExpanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetExpanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetupView_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collectionViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetupView_Statics::NewProp_collectionViewData = { "collectionViewData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreCollectionsItemWidget_eventSetupView_Parms, collectionViewData), Z_Construct_UClass_UStoreCollectionViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetupView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetupView_Statics::NewProp_collectionViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetupView_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreCollectionsItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetupView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreCollectionsItemWidget, nullptr, "SetupView", nullptr, nullptr, sizeof(CoreStoreCollectionsItemWidget_eventSetupView_Parms), Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetupView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetupView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetupView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetupView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetupView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetupView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_ToggleExpanded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_ToggleExpanded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreCollectionsItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_ToggleExpanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreCollectionsItemWidget, nullptr, "ToggleExpanded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_ToggleExpanded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_ToggleExpanded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_ToggleExpanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_ToggleExpanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreStoreCollectionsItemWidget_NoRegister()
	{
		return UCoreStoreCollectionsItemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimerText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CountText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoreCustomizationListBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StoreCustomizationListBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__storeCustomizationItemWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__storeCustomizationItemWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__preConstructedItemsCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__preConstructedItemsCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__layoutMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__layoutMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__itemList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetExpanded, "SetExpanded" }, // 2342458817
		{ &Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_SetupView, "SetupView" }, // 3801909971
		{ &Z_Construct_UFunction_UCoreStoreCollectionsItemWidget_ToggleExpanded, "ToggleExpanded" }, // 1482679178
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreStoreCollectionsItemWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCollectionsItemWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp_TimerText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreCollectionsItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCollectionsItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp_TimerText = { "TimerText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCollectionsItemWidget, TimerText), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp_TimerText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp_TimerText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp_CountText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreCollectionsItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCollectionsItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp_CountText = { "CountText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCollectionsItemWidget, CountText), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp_CountText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp_CountText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp_StoreCustomizationListBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreCollectionsItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCollectionsItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp_StoreCustomizationListBox = { "StoreCustomizationListBox", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCollectionsItemWidget, StoreCustomizationListBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp_StoreCustomizationListBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp_StoreCustomizationListBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp__storeCustomizationItemWidgetClass_MetaData[] = {
		{ "Category", "CoreStoreCollectionsItemWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreCollectionsItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp__storeCustomizationItemWidgetClass = { "_storeCustomizationItemWidgetClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCollectionsItemWidget, _storeCustomizationItemWidgetClass), Z_Construct_UClass_UCoreStoreCustomizationItemWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp__storeCustomizationItemWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp__storeCustomizationItemWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp__preConstructedItemsCount_MetaData[] = {
		{ "Category", "CoreStoreCollectionsItemWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreCollectionsItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp__preConstructedItemsCount = { "_preConstructedItemsCount", nullptr, (EPropertyFlags)0x0020080002000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCollectionsItemWidget, _preConstructedItemsCount), METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp__preConstructedItemsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp__preConstructedItemsCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp__layoutMask_MetaData[] = {
		{ "Category", "CoreStoreCollectionsItemWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreCollectionsItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp__layoutMask = { "_layoutMask", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCollectionsItemWidget, _layoutMask), METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp__layoutMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp__layoutMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp__itemList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreStoreCollectionsItemWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreCollectionsItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp__itemList = { "_itemList", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCollectionsItemWidget, _itemList), Z_Construct_UClass_UCorePreConstructableList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp__itemList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp__itemList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp_TimerText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp_CountText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp_StoreCustomizationListBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp__storeCustomizationItemWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp__preConstructedItemsCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp__layoutMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::NewProp__itemList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStoreCollectionsItemWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::ClassParams = {
		&UCoreStoreCollectionsItemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreStoreCollectionsItemWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreStoreCollectionsItemWidget, 1348636700);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreStoreCollectionsItemWidget>()
	{
		return UCoreStoreCollectionsItemWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreStoreCollectionsItemWidget(Z_Construct_UClass_UCoreStoreCollectionsItemWidget, &UCoreStoreCollectionsItemWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreStoreCollectionsItemWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStoreCollectionsItemWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
