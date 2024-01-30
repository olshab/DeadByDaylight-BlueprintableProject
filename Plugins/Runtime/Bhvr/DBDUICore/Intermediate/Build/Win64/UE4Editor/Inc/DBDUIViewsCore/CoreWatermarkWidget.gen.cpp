// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreWatermarkWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreWatermarkWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreWatermarkWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreWatermarkWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UWatermarkViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreWatermarkWidget::execUpdateWatermarkText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWatermarkText();
		P_NATIVE_END;
	}
	void UCoreWatermarkWidget::StaticRegisterNativesUCoreWatermarkWidget()
	{
		UClass* Class = UCoreWatermarkWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateWatermarkText", &UCoreWatermarkWidget::execUpdateWatermarkText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreWatermarkWidget_UpdateWatermarkText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreWatermarkWidget_UpdateWatermarkText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreWatermarkWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreWatermarkWidget_UpdateWatermarkText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreWatermarkWidget, nullptr, "UpdateWatermarkText", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreWatermarkWidget_UpdateWatermarkText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreWatermarkWidget_UpdateWatermarkText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreWatermarkWidget_UpdateWatermarkText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreWatermarkWidget_UpdateWatermarkText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreWatermarkWidget_NoRegister()
	{
		return UCoreWatermarkWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreWatermarkWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__watermarkDBDTextBlocks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__watermarkDBDTextBlocks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__watermarkDBDTextBlocks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreWatermarkWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreWatermarkWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreWatermarkWidget_UpdateWatermarkText, "UpdateWatermarkText" }, // 977992360
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreWatermarkWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreWatermarkWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreWatermarkWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreWatermarkWidget_Statics::NewProp__watermarkDBDTextBlocks_Inner = { "_watermarkDBDTextBlocks", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreWatermarkWidget_Statics::NewProp__watermarkDBDTextBlocks_MetaData[] = {
		{ "Category", "CoreWatermarkWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreWatermarkWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreWatermarkWidget_Statics::NewProp__watermarkDBDTextBlocks = { "_watermarkDBDTextBlocks", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreWatermarkWidget, _watermarkDBDTextBlocks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreWatermarkWidget_Statics::NewProp__watermarkDBDTextBlocks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreWatermarkWidget_Statics::NewProp__watermarkDBDTextBlocks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreWatermarkWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreWatermarkWidget_Statics::NewProp__watermarkDBDTextBlocks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreWatermarkWidget_Statics::NewProp__watermarkDBDTextBlocks,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreWatermarkWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UWatermarkViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreWatermarkWidget, IWatermarkViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreWatermarkWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreWatermarkWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreWatermarkWidget_Statics::ClassParams = {
		&UCoreWatermarkWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreWatermarkWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreWatermarkWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreWatermarkWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreWatermarkWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreWatermarkWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreWatermarkWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreWatermarkWidget, 236567690);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreWatermarkWidget>()
	{
		return UCoreWatermarkWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreWatermarkWidget(Z_Construct_UClass_UCoreWatermarkWidget, &UCoreWatermarkWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreWatermarkWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreWatermarkWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
