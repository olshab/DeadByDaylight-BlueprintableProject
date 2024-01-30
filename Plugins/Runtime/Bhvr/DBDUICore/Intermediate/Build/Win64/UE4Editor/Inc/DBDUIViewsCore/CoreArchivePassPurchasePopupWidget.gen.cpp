// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreArchivePassPurchasePopupWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreArchivePassPurchasePopupWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchivePassPurchasePopupWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchivePassPurchasePopupWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreGenericPopupWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchivePassPurchasePopupViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreArchivePassPurchasePopupWidget::execGetTranslatedAvailabilityTitleText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetTranslatedAvailabilityTitleText();
		P_NATIVE_END;
	}
	void UCoreArchivePassPurchasePopupWidget::StaticRegisterNativesUCoreArchivePassPurchasePopupWidget()
	{
		UClass* Class = UCoreArchivePassPurchasePopupWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTranslatedAvailabilityTitleText", &UCoreArchivePassPurchasePopupWidget::execGetTranslatedAvailabilityTitleText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreArchivePassPurchasePopupWidget_GetTranslatedAvailabilityTitleText_Statics
	{
		struct CoreArchivePassPurchasePopupWidget_eventGetTranslatedAvailabilityTitleText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchivePassPurchasePopupWidget_GetTranslatedAvailabilityTitleText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchivePassPurchasePopupWidget_eventGetTranslatedAvailabilityTitleText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchivePassPurchasePopupWidget_GetTranslatedAvailabilityTitleText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchivePassPurchasePopupWidget_GetTranslatedAvailabilityTitleText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchivePassPurchasePopupWidget_GetTranslatedAvailabilityTitleText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchivePassPurchasePopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchivePassPurchasePopupWidget_GetTranslatedAvailabilityTitleText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchivePassPurchasePopupWidget, nullptr, "GetTranslatedAvailabilityTitleText", nullptr, nullptr, sizeof(CoreArchivePassPurchasePopupWidget_eventGetTranslatedAvailabilityTitleText_Parms), Z_Construct_UFunction_UCoreArchivePassPurchasePopupWidget_GetTranslatedAvailabilityTitleText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchivePassPurchasePopupWidget_GetTranslatedAvailabilityTitleText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchivePassPurchasePopupWidget_GetTranslatedAvailabilityTitleText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchivePassPurchasePopupWidget_GetTranslatedAvailabilityTitleText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchivePassPurchasePopupWidget_GetTranslatedAvailabilityTitleText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchivePassPurchasePopupWidget_GetTranslatedAvailabilityTitleText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreArchivePassPurchasePopupWidget_NoRegister()
	{
		return UCoreArchivePassPurchasePopupWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreArchivePassPurchasePopupWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreArchivePassPurchasePopupWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreGenericPopupWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreArchivePassPurchasePopupWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreArchivePassPurchasePopupWidget_GetTranslatedAvailabilityTitleText, "GetTranslatedAvailabilityTitleText" }, // 1972196161
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchivePassPurchasePopupWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreArchivePassPurchasePopupWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreArchivePassPurchasePopupWidget.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreArchivePassPurchasePopupWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UArchivePassPurchasePopupViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreArchivePassPurchasePopupWidget, IArchivePassPurchasePopupViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreArchivePassPurchasePopupWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreArchivePassPurchasePopupWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreArchivePassPurchasePopupWidget_Statics::ClassParams = {
		&UCoreArchivePassPurchasePopupWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreArchivePassPurchasePopupWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchivePassPurchasePopupWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreArchivePassPurchasePopupWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreArchivePassPurchasePopupWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreArchivePassPurchasePopupWidget, 4000964853);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreArchivePassPurchasePopupWidget>()
	{
		return UCoreArchivePassPurchasePopupWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreArchivePassPurchasePopupWidget(Z_Construct_UClass_UCoreArchivePassPurchasePopupWidget, &UCoreArchivePassPurchasePopupWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreArchivePassPurchasePopupWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreArchivePassPurchasePopupWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
