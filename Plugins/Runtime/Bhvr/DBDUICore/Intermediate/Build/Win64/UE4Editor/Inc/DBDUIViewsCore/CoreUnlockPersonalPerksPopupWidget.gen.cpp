// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreUnlockPersonalPerksPopupWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreUnlockPersonalPerksPopupWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreGenericPopupWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMenuPerkWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UUnlockPersonalPerksPopupViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreUnlockPersonalPerksPopupWidget::execHideMenuPerkTooltip)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_unhoveredSlotWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideMenuPerkTooltip(Z_Param_unhoveredSlotWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreUnlockPersonalPerksPopupWidget::execShowMenuPerkTooltip)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_hoveredSlotWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowMenuPerkTooltip(Z_Param_hoveredSlotWidget);
		P_NATIVE_END;
	}
	void UCoreUnlockPersonalPerksPopupWidget::StaticRegisterNativesUCoreUnlockPersonalPerksPopupWidget()
	{
		UClass* Class = UCoreUnlockPersonalPerksPopupWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideMenuPerkTooltip", &UCoreUnlockPersonalPerksPopupWidget::execHideMenuPerkTooltip },
			{ "ShowMenuPerkTooltip", &UCoreUnlockPersonalPerksPopupWidget::execShowMenuPerkTooltip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_HideMenuPerkTooltip_Statics
	{
		struct CoreUnlockPersonalPerksPopupWidget_eventHideMenuPerkTooltip_Parms
		{
			UCoreButtonWidget* unhoveredSlotWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_unhoveredSlotWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_unhoveredSlotWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_HideMenuPerkTooltip_Statics::NewProp_unhoveredSlotWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_HideMenuPerkTooltip_Statics::NewProp_unhoveredSlotWidget = { "unhoveredSlotWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUnlockPersonalPerksPopupWidget_eventHideMenuPerkTooltip_Parms, unhoveredSlotWidget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_HideMenuPerkTooltip_Statics::NewProp_unhoveredSlotWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_HideMenuPerkTooltip_Statics::NewProp_unhoveredSlotWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_HideMenuPerkTooltip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_HideMenuPerkTooltip_Statics::NewProp_unhoveredSlotWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_HideMenuPerkTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreUnlockPersonalPerksPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_HideMenuPerkTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget, nullptr, "HideMenuPerkTooltip", nullptr, nullptr, sizeof(CoreUnlockPersonalPerksPopupWidget_eventHideMenuPerkTooltip_Parms), Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_HideMenuPerkTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_HideMenuPerkTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_HideMenuPerkTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_HideMenuPerkTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_HideMenuPerkTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_HideMenuPerkTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_ShowMenuPerkTooltip_Statics
	{
		struct CoreUnlockPersonalPerksPopupWidget_eventShowMenuPerkTooltip_Parms
		{
			UCoreButtonWidget* hoveredSlotWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hoveredSlotWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hoveredSlotWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_ShowMenuPerkTooltip_Statics::NewProp_hoveredSlotWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_ShowMenuPerkTooltip_Statics::NewProp_hoveredSlotWidget = { "hoveredSlotWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUnlockPersonalPerksPopupWidget_eventShowMenuPerkTooltip_Parms, hoveredSlotWidget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_ShowMenuPerkTooltip_Statics::NewProp_hoveredSlotWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_ShowMenuPerkTooltip_Statics::NewProp_hoveredSlotWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_ShowMenuPerkTooltip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_ShowMenuPerkTooltip_Statics::NewProp_hoveredSlotWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_ShowMenuPerkTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreUnlockPersonalPerksPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_ShowMenuPerkTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget, nullptr, "ShowMenuPerkTooltip", nullptr, nullptr, sizeof(CoreUnlockPersonalPerksPopupWidget_eventShowMenuPerkTooltip_Parms), Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_ShowMenuPerkTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_ShowMenuPerkTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_ShowMenuPerkTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_ShowMenuPerkTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_ShowMenuPerkTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_ShowMenuPerkTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_NoRegister()
	{
		return UCoreUnlockPersonalPerksPopupWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__perkArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perkArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__perkArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPerk_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPerk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondPerk_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondPerk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPerk_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThirdPerk;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreGenericPopupWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_HideMenuPerkTooltip, "HideMenuPerkTooltip" }, // 3274634451
		{ &Z_Construct_UFunction_UCoreUnlockPersonalPerksPopupWidget_ShowMenuPerkTooltip, "ShowMenuPerkTooltip" }, // 716073382
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreUnlockPersonalPerksPopupWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreUnlockPersonalPerksPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::NewProp__perkArray_Inner = { "_perkArray", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreMenuPerkWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::NewProp__perkArray_MetaData[] = {
		{ "Category", "CoreUnlockPersonalPerksPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreUnlockPersonalPerksPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::NewProp__perkArray = { "_perkArray", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreUnlockPersonalPerksPopupWidget, _perkArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::NewProp__perkArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::NewProp__perkArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::NewProp_FirstPerk_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreUnlockPersonalPerksPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreUnlockPersonalPerksPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::NewProp_FirstPerk = { "FirstPerk", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreUnlockPersonalPerksPopupWidget, FirstPerk), Z_Construct_UClass_UCoreMenuPerkWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::NewProp_FirstPerk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::NewProp_FirstPerk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::NewProp_SecondPerk_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreUnlockPersonalPerksPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreUnlockPersonalPerksPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::NewProp_SecondPerk = { "SecondPerk", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreUnlockPersonalPerksPopupWidget, SecondPerk), Z_Construct_UClass_UCoreMenuPerkWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::NewProp_SecondPerk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::NewProp_SecondPerk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::NewProp_ThirdPerk_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreUnlockPersonalPerksPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreUnlockPersonalPerksPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::NewProp_ThirdPerk = { "ThirdPerk", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreUnlockPersonalPerksPopupWidget, ThirdPerk), Z_Construct_UClass_UCoreMenuPerkWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::NewProp_ThirdPerk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::NewProp_ThirdPerk_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::NewProp__perkArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::NewProp__perkArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::NewProp_FirstPerk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::NewProp_SecondPerk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::NewProp_ThirdPerk,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUnlockPersonalPerksPopupViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreUnlockPersonalPerksPopupWidget, IUnlockPersonalPerksPopupViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreUnlockPersonalPerksPopupWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::ClassParams = {
		&UCoreUnlockPersonalPerksPopupWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreUnlockPersonalPerksPopupWidget, 1336413331);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreUnlockPersonalPerksPopupWidget>()
	{
		return UCoreUnlockPersonalPerksPopupWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreUnlockPersonalPerksPopupWidget(Z_Construct_UClass_UCoreUnlockPersonalPerksPopupWidget, &UCoreUnlockPersonalPerksPopupWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreUnlockPersonalPerksPopupWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreUnlockPersonalPerksPopupWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
