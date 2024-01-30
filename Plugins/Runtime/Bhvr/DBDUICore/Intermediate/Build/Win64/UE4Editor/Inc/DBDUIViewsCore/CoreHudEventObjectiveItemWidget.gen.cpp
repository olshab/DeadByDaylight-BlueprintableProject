// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreHudEventObjectiveItemWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreHudEventObjectiveItemWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreHudEventObjectiveItemWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EEventObjectiveItemState();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UHudEventObjectiveItemViewInterface_NoRegister();
// End Cross Module References
	void UCoreHudEventObjectiveItemWidget::StaticRegisterNativesUCoreHudEventObjectiveItemWidget()
	{
	}
	UClass* Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_NoRegister()
	{
		return UCoreHudEventObjectiveItemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__currentState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__currentState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__charges_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__charges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxCharges_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__maxCharges;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseHudWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreHudEventObjectiveItemWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreHudEventObjectiveItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::NewProp__currentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::NewProp__currentState_MetaData[] = {
		{ "Category", "CoreHudEventObjectiveItemWidget" },
		{ "ModuleRelativePath", "Public/CoreHudEventObjectiveItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::NewProp__currentState = { "_currentState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudEventObjectiveItemWidget, _currentState), Z_Construct_UEnum_DBDSharedTypes_EEventObjectiveItemState, METADATA_PARAMS(Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::NewProp__currentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::NewProp__currentState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::NewProp__charges_MetaData[] = {
		{ "Category", "CoreHudEventObjectiveItemWidget" },
		{ "ModuleRelativePath", "Public/CoreHudEventObjectiveItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::NewProp__charges = { "_charges", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudEventObjectiveItemWidget, _charges), METADATA_PARAMS(Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::NewProp__charges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::NewProp__charges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::NewProp__maxCharges_MetaData[] = {
		{ "Category", "CoreHudEventObjectiveItemWidget" },
		{ "ModuleRelativePath", "Public/CoreHudEventObjectiveItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::NewProp__maxCharges = { "_maxCharges", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudEventObjectiveItemWidget, _maxCharges), METADATA_PARAMS(Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::NewProp__maxCharges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::NewProp__maxCharges_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::NewProp__currentState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::NewProp__currentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::NewProp__charges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::NewProp__maxCharges,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHudEventObjectiveItemViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreHudEventObjectiveItemWidget, IHudEventObjectiveItemViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreHudEventObjectiveItemWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::ClassParams = {
		&UCoreHudEventObjectiveItemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreHudEventObjectiveItemWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreHudEventObjectiveItemWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreHudEventObjectiveItemWidget, 876718326);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreHudEventObjectiveItemWidget>()
	{
		return UCoreHudEventObjectiveItemWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreHudEventObjectiveItemWidget(Z_Construct_UClass_UCoreHudEventObjectiveItemWidget, &UCoreHudEventObjectiveItemWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreHudEventObjectiveItemWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreHudEventObjectiveItemWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
