// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreAuricCellsContainerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreAuricCellsContainerWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreAuricCellsContainerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreAuricCellsContainerWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FAuricCellsBundleViewData();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_AuricCellsBuyActionDelegate__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreAuricCellsBundleWidget_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreAuricCellsContainerWidget::execOnBuyAction)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_bundleId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBuyAction(Z_Param_bundleId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAuricCellsContainerWidget::execSetData)
	{
		P_GET_TARRAY_REF(FAuricCellsBundleViewData,Z_Param_Out_bundlesData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_Out_bundlesData);
		P_NATIVE_END;
	}
	void UCoreAuricCellsContainerWidget::StaticRegisterNativesUCoreAuricCellsContainerWidget()
	{
		UClass* Class = UCoreAuricCellsContainerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBuyAction", &UCoreAuricCellsContainerWidget::execOnBuyAction },
			{ "SetData", &UCoreAuricCellsContainerWidget::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreAuricCellsContainerWidget_OnBuyAction_Statics
	{
		struct CoreAuricCellsContainerWidget_eventOnBuyAction_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCoreAuricCellsContainerWidget_OnBuyAction_Statics::NewProp_bundleId = { "bundleId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuricCellsContainerWidget_eventOnBuyAction_Parms, bundleId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAuricCellsContainerWidget_OnBuyAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuricCellsContainerWidget_OnBuyAction_Statics::NewProp_bundleId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuricCellsContainerWidget_OnBuyAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreAuricCellsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAuricCellsContainerWidget_OnBuyAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAuricCellsContainerWidget, nullptr, "OnBuyAction", nullptr, nullptr, sizeof(CoreAuricCellsContainerWidget_eventOnBuyAction_Parms), Z_Construct_UFunction_UCoreAuricCellsContainerWidget_OnBuyAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuricCellsContainerWidget_OnBuyAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuricCellsContainerWidget_OnBuyAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuricCellsContainerWidget_OnBuyAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAuricCellsContainerWidget_OnBuyAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAuricCellsContainerWidget_OnBuyAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAuricCellsContainerWidget_SetData_Statics
	{
		struct CoreAuricCellsContainerWidget_eventSetData_Parms
		{
			TArray<FAuricCellsBundleViewData> bundlesData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bundlesData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bundlesData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bundlesData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAuricCellsContainerWidget_SetData_Statics::NewProp_bundlesData_Inner = { "bundlesData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAuricCellsBundleViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuricCellsContainerWidget_SetData_Statics::NewProp_bundlesData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoreAuricCellsContainerWidget_SetData_Statics::NewProp_bundlesData = { "bundlesData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuricCellsContainerWidget_eventSetData_Parms, bundlesData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuricCellsContainerWidget_SetData_Statics::NewProp_bundlesData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuricCellsContainerWidget_SetData_Statics::NewProp_bundlesData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAuricCellsContainerWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuricCellsContainerWidget_SetData_Statics::NewProp_bundlesData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuricCellsContainerWidget_SetData_Statics::NewProp_bundlesData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuricCellsContainerWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreAuricCellsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAuricCellsContainerWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAuricCellsContainerWidget, nullptr, "SetData", nullptr, nullptr, sizeof(CoreAuricCellsContainerWidget_eventSetData_Parms), Z_Construct_UFunction_UCoreAuricCellsContainerWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuricCellsContainerWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuricCellsContainerWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuricCellsContainerWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAuricCellsContainerWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAuricCellsContainerWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreAuricCellsContainerWidget_NoRegister()
	{
		return UCoreAuricCellsContainerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__buyActionDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__buyActionDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tileWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__tileWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tilePadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tilePadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Container;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__tiles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreAuricCellsContainerWidget_OnBuyAction, "OnBuyAction" }, // 1058873698
		{ &Z_Construct_UFunction_UCoreAuricCellsContainerWidget_SetData, "SetData" }, // 1772884680
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreAuricCellsContainerWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsContainerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp__buyActionDelegate_MetaData[] = {
		{ "Category", "CoreAuricCellsContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp__buyActionDelegate = { "_buyActionDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuricCellsContainerWidget, _buyActionDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_AuricCellsBuyActionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp__buyActionDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp__buyActionDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp__tileWidgetClass_MetaData[] = {
		{ "Category", "CoreAuricCellsContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp__tileWidgetClass = { "_tileWidgetClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuricCellsContainerWidget, _tileWidgetClass), Z_Construct_UClass_UCoreAuricCellsBundleWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp__tileWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp__tileWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp__tilePadding_MetaData[] = {
		{ "Category", "CoreAuricCellsContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp__tilePadding = { "_tilePadding", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuricCellsContainerWidget, _tilePadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp__tilePadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp__tilePadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp_Container_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreAuricCellsContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuricCellsContainerWidget, Container), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp_Container_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp_Container_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp__tiles_Inner = { "_tiles", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreAuricCellsBundleWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp__tiles_MetaData[] = {
		{ "Category", "CoreAuricCellsContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreAuricCellsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp__tiles = { "_tiles", nullptr, (EPropertyFlags)0x002008800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuricCellsContainerWidget, _tiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp__tiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp__tiles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp__buyActionDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp__tileWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp__tilePadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp_Container,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp__tiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::NewProp__tiles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreAuricCellsContainerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::ClassParams = {
		&UCoreAuricCellsContainerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreAuricCellsContainerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreAuricCellsContainerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreAuricCellsContainerWidget, 140287846);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreAuricCellsContainerWidget>()
	{
		return UCoreAuricCellsContainerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreAuricCellsContainerWidget(Z_Construct_UClass_UCoreAuricCellsContainerWidget, &UCoreAuricCellsContainerWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreAuricCellsContainerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreAuricCellsContainerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
