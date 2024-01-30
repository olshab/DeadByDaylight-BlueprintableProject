// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreStoreSpecialPacksListWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreStoreSpecialPacksListWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreSpecialPacksListWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreSpecialPacksPackItemWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePreConstructableList_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreSpecialPacksListViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreStoreSpecialPacksListWidget::execOnItemBuyActionClicked)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_packId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnItemBuyActionClicked(Z_Param_packId);
		P_NATIVE_END;
	}
	void UCoreStoreSpecialPacksListWidget::StaticRegisterNativesUCoreStoreSpecialPacksListWidget()
	{
		UClass* Class = UCoreStoreSpecialPacksListWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnItemBuyActionClicked", &UCoreStoreSpecialPacksListWidget::execOnItemBuyActionClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreStoreSpecialPacksListWidget_OnItemBuyActionClicked_Statics
	{
		struct CoreStoreSpecialPacksListWidget_eventOnItemBuyActionClicked_Parms
		{
			FString packId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_packId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_packId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreSpecialPacksListWidget_OnItemBuyActionClicked_Statics::NewProp_packId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreStoreSpecialPacksListWidget_OnItemBuyActionClicked_Statics::NewProp_packId = { "packId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreSpecialPacksListWidget_eventOnItemBuyActionClicked_Parms, packId), METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreSpecialPacksListWidget_OnItemBuyActionClicked_Statics::NewProp_packId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreSpecialPacksListWidget_OnItemBuyActionClicked_Statics::NewProp_packId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreSpecialPacksListWidget_OnItemBuyActionClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreSpecialPacksListWidget_OnItemBuyActionClicked_Statics::NewProp_packId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreSpecialPacksListWidget_OnItemBuyActionClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreSpecialPacksListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreSpecialPacksListWidget_OnItemBuyActionClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreSpecialPacksListWidget, nullptr, "OnItemBuyActionClicked", nullptr, nullptr, sizeof(CoreStoreSpecialPacksListWidget_eventOnItemBuyActionClicked_Parms), Z_Construct_UFunction_UCoreStoreSpecialPacksListWidget_OnItemBuyActionClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreSpecialPacksListWidget_OnItemBuyActionClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreSpecialPacksListWidget_OnItemBuyActionClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreSpecialPacksListWidget_OnItemBuyActionClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreSpecialPacksListWidget_OnItemBuyActionClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreSpecialPacksListWidget_OnItemBuyActionClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_NoRegister()
	{
		return UCoreStoreSpecialPacksListWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__preConstructedItemsCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__preConstructedItemsCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__itemWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Content;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__itemList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreStoreSpecialPacksListWidget_OnItemBuyActionClicked, "OnItemBuyActionClicked" }, // 1732477242
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreStoreSpecialPacksListWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreSpecialPacksListWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::NewProp__preConstructedItemsCount_MetaData[] = {
		{ "Category", "CoreStoreSpecialPacksListWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreSpecialPacksListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::NewProp__preConstructedItemsCount = { "_preConstructedItemsCount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreSpecialPacksListWidget, _preConstructedItemsCount), METADATA_PARAMS(Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::NewProp__preConstructedItemsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::NewProp__preConstructedItemsCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::NewProp__itemWidgetClass_MetaData[] = {
		{ "Category", "CoreStoreSpecialPacksListWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreSpecialPacksListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::NewProp__itemWidgetClass = { "_itemWidgetClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreSpecialPacksListWidget, _itemWidgetClass), Z_Construct_UClass_UCoreStoreSpecialPacksPackItemWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::NewProp__itemWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::NewProp__itemWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::NewProp_Content_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreSpecialPacksListWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreSpecialPacksListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreSpecialPacksListWidget, Content), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::NewProp__itemList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreStoreSpecialPacksListWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreSpecialPacksListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::NewProp__itemList = { "_itemList", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreSpecialPacksListWidget, _itemList), Z_Construct_UClass_UCorePreConstructableList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::NewProp__itemList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::NewProp__itemList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::NewProp__preConstructedItemsCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::NewProp__itemWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::NewProp_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::NewProp__itemList,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStoreSpecialPacksListViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreStoreSpecialPacksListWidget, IStoreSpecialPacksListViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStoreSpecialPacksListWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::ClassParams = {
		&UCoreStoreSpecialPacksListWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreStoreSpecialPacksListWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreStoreSpecialPacksListWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreStoreSpecialPacksListWidget, 3765232476);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreStoreSpecialPacksListWidget>()
	{
		return UCoreStoreSpecialPacksListWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreStoreSpecialPacksListWidget(Z_Construct_UClass_UCoreStoreSpecialPacksListWidget, &UCoreStoreSpecialPacksListWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreStoreSpecialPacksListWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStoreSpecialPacksListWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
