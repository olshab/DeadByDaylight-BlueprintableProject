// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreHudDirectionalMiniGameWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreHudDirectionalMiniGameWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EDirectionalMiniGameType();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreHudDirectionalMiniGameItemWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UHudDirectionalMiniGameViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreHudDirectionalMiniGameWidget::execGetCurrentType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDirectionalMiniGameType*)Z_Param__Result=P_THIS->GetCurrentType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreHudDirectionalMiniGameWidget::execGetWidgets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UCoreHudDirectionalMiniGameItemWidget*>*)Z_Param__Result=P_THIS->GetWidgets();
		P_NATIVE_END;
	}
	static FName NAME_UCoreHudDirectionalMiniGameWidget_ShowVisual = FName(TEXT("ShowVisual"));
	void UCoreHudDirectionalMiniGameWidget::ShowVisual()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreHudDirectionalMiniGameWidget_ShowVisual),NULL);
	}
	void UCoreHudDirectionalMiniGameWidget::StaticRegisterNativesUCoreHudDirectionalMiniGameWidget()
	{
		UClass* Class = UCoreHudDirectionalMiniGameWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentType", &UCoreHudDirectionalMiniGameWidget::execGetCurrentType },
			{ "GetWidgets", &UCoreHudDirectionalMiniGameWidget::execGetWidgets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetCurrentType_Statics
	{
		struct CoreHudDirectionalMiniGameWidget_eventGetCurrentType_Parms
		{
			EDirectionalMiniGameType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetCurrentType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetCurrentType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreHudDirectionalMiniGameWidget_eventGetCurrentType_Parms, ReturnValue), Z_Construct_UEnum_DBDSharedTypes_EDirectionalMiniGameType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetCurrentType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetCurrentType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetCurrentType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetCurrentType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudDirectionalMiniGameWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetCurrentType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget, nullptr, "GetCurrentType", nullptr, nullptr, sizeof(CoreHudDirectionalMiniGameWidget_eventGetCurrentType_Parms), Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetCurrentType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetCurrentType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetCurrentType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetCurrentType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetCurrentType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetCurrentType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetWidgets_Statics
	{
		struct CoreHudDirectionalMiniGameWidget_eventGetWidgets_Parms
		{
			TArray<UCoreHudDirectionalMiniGameItemWidget*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetWidgets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreHudDirectionalMiniGameItemWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetWidgets_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetWidgets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreHudDirectionalMiniGameWidget_eventGetWidgets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetWidgets_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetWidgets_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetWidgets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetWidgets_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetWidgets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetWidgets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudDirectionalMiniGameWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget, nullptr, "GetWidgets", nullptr, nullptr, sizeof(CoreHudDirectionalMiniGameWidget_eventGetWidgets_Parms), Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetWidgets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetWidgets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_ShowVisual_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_ShowVisual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudDirectionalMiniGameWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_ShowVisual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget, nullptr, "ShowVisual", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_ShowVisual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_ShowVisual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_ShowVisual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_ShowVisual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_NoRegister()
	{
		return UCoreHudDirectionalMiniGameWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkullMerchantItemWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SkullMerchantItemWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WormholeItemWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WormholeItemWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Container;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__widgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__widgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__widgets;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__currentType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__currentType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseHudWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetCurrentType, "GetCurrentType" }, // 1272580156
		{ &Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_GetWidgets, "GetWidgets" }, // 6523131
		{ &Z_Construct_UFunction_UCoreHudDirectionalMiniGameWidget_ShowVisual, "ShowVisual" }, // 3067590363
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreHudDirectionalMiniGameWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreHudDirectionalMiniGameWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp_SkullMerchantItemWidgetClass_MetaData[] = {
		{ "Category", "CoreHudDirectionalMiniGameWidget" },
		{ "ModuleRelativePath", "Public/CoreHudDirectionalMiniGameWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp_SkullMerchantItemWidgetClass = { "SkullMerchantItemWidgetClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudDirectionalMiniGameWidget, SkullMerchantItemWidgetClass), Z_Construct_UClass_UCoreHudDirectionalMiniGameItemWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp_SkullMerchantItemWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp_SkullMerchantItemWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp_WormholeItemWidgetClass_MetaData[] = {
		{ "Category", "CoreHudDirectionalMiniGameWidget" },
		{ "ModuleRelativePath", "Public/CoreHudDirectionalMiniGameWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp_WormholeItemWidgetClass = { "WormholeItemWidgetClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudDirectionalMiniGameWidget, WormholeItemWidgetClass), Z_Construct_UClass_UCoreHudDirectionalMiniGameItemWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp_WormholeItemWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp_WormholeItemWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp_Container_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreHudDirectionalMiniGameWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreHudDirectionalMiniGameWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudDirectionalMiniGameWidget, Container), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp_Container_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp_Container_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp__widgets_Inner = { "_widgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreHudDirectionalMiniGameItemWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp__widgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreHudDirectionalMiniGameWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreHudDirectionalMiniGameWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp__widgets = { "_widgets", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudDirectionalMiniGameWidget, _widgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp__widgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp__widgets_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp__currentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp__currentType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreHudDirectionalMiniGameWidget" },
		{ "ModuleRelativePath", "Public/CoreHudDirectionalMiniGameWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp__currentType = { "_currentType", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudDirectionalMiniGameWidget, _currentType), Z_Construct_UEnum_DBDSharedTypes_EDirectionalMiniGameType, METADATA_PARAMS(Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp__currentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp__currentType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp_SkullMerchantItemWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp_WormholeItemWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp_Container,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp__widgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp__widgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp__currentType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::NewProp__currentType,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHudDirectionalMiniGameViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreHudDirectionalMiniGameWidget, IHudDirectionalMiniGameViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreHudDirectionalMiniGameWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::ClassParams = {
		&UCoreHudDirectionalMiniGameWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreHudDirectionalMiniGameWidget, 776571028);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreHudDirectionalMiniGameWidget>()
	{
		return UCoreHudDirectionalMiniGameWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreHudDirectionalMiniGameWidget(Z_Construct_UClass_UCoreHudDirectionalMiniGameWidget, &UCoreHudDirectionalMiniGameWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreHudDirectionalMiniGameWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreHudDirectionalMiniGameWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
