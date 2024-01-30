// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreTabContentWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreTabContentWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContentWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContentWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UITWEEN_API UEnum* Z_Construct_UEnum_UITween_EEasingType();
// End Cross Module References
	DEFINE_FUNCTION(UCoreTabContentWidget::execFadeInContent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeInContent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTabContentWidget::execFadeOutContent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeOutContent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTabContentWidget::execResetFade)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetFade();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTabContentWidget::execStopFadeInTweening)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_opacityValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopFadeInTweening(Z_Param_opacityValue);
		P_NATIVE_END;
	}
	void UCoreTabContentWidget::StaticRegisterNativesUCoreTabContentWidget()
	{
		UClass* Class = UCoreTabContentWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FadeInContent", &UCoreTabContentWidget::execFadeInContent },
			{ "FadeOutContent", &UCoreTabContentWidget::execFadeOutContent },
			{ "ResetFade", &UCoreTabContentWidget::execResetFade },
			{ "StopFadeInTweening", &UCoreTabContentWidget::execStopFadeInTweening },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreTabContentWidget_FadeInContent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabContentWidget_FadeInContent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTabContentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTabContentWidget_FadeInContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTabContentWidget, nullptr, "FadeInContent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabContentWidget_FadeInContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContentWidget_FadeInContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTabContentWidget_FadeInContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTabContentWidget_FadeInContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTabContentWidget_FadeOutContent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabContentWidget_FadeOutContent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTabContentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTabContentWidget_FadeOutContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTabContentWidget, nullptr, "FadeOutContent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabContentWidget_FadeOutContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContentWidget_FadeOutContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTabContentWidget_FadeOutContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTabContentWidget_FadeOutContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTabContentWidget_ResetFade_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabContentWidget_ResetFade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTabContentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTabContentWidget_ResetFade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTabContentWidget, nullptr, "ResetFade", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabContentWidget_ResetFade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContentWidget_ResetFade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTabContentWidget_ResetFade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTabContentWidget_ResetFade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTabContentWidget_StopFadeInTweening_Statics
	{
		struct CoreTabContentWidget_eventStopFadeInTweening_Parms
		{
			float opacityValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_opacityValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoreTabContentWidget_StopFadeInTweening_Statics::NewProp_opacityValue = { "opacityValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTabContentWidget_eventStopFadeInTweening_Parms, opacityValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTabContentWidget_StopFadeInTweening_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabContentWidget_StopFadeInTweening_Statics::NewProp_opacityValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabContentWidget_StopFadeInTweening_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTabContentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTabContentWidget_StopFadeInTweening_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTabContentWidget, nullptr, "StopFadeInTweening", nullptr, nullptr, sizeof(CoreTabContentWidget_eventStopFadeInTweening_Parms), Z_Construct_UFunction_UCoreTabContentWidget_StopFadeInTweening_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContentWidget_StopFadeInTweening_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabContentWidget_StopFadeInTweening_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContentWidget_StopFadeInTweening_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTabContentWidget_StopFadeInTweening()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTabContentWidget_StopFadeInTweening_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreTabContentWidget_NoRegister()
	{
		return UCoreTabContentWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreTabContentWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContentWidgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ContentWidgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__contentFadeInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__contentFadeInTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__contentFadeInEasing_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__contentFadeInEasing_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__contentFadeInEasing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__contentFadeOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__contentFadeOutTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__contentFadeOutEasing_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__contentFadeOutEasing_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__contentFadeOutEasing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreTabContentWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreTabContentWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreTabContentWidget_FadeInContent, "FadeInContent" }, // 1791280939
		{ &Z_Construct_UFunction_UCoreTabContentWidget_FadeOutContent, "FadeOutContent" }, // 2781583361
		{ &Z_Construct_UFunction_UCoreTabContentWidget_ResetFade, "ResetFade" }, // 3979411190
		{ &Z_Construct_UFunction_UCoreTabContentWidget_StopFadeInTweening, "StopFadeInTweening" }, // 3256139479
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabContentWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreTabContentWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreTabContentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp_ContentWidgets_Inner = { "ContentWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp_ContentWidgets_MetaData[] = {
		{ "Category", "CoreTabContentWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreTabContentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp_ContentWidgets = { "ContentWidgets", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTabContentWidget, ContentWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp_ContentWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp_ContentWidgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp__contentFadeInTime_MetaData[] = {
		{ "Category", "CoreTabContentWidget" },
		{ "ModuleRelativePath", "Public/CoreTabContentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp__contentFadeInTime = { "_contentFadeInTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTabContentWidget, _contentFadeInTime), METADATA_PARAMS(Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp__contentFadeInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp__contentFadeInTime_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp__contentFadeInEasing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp__contentFadeInEasing_MetaData[] = {
		{ "Category", "CoreTabContentWidget" },
		{ "ModuleRelativePath", "Public/CoreTabContentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp__contentFadeInEasing = { "_contentFadeInEasing", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTabContentWidget, _contentFadeInEasing), Z_Construct_UEnum_UITween_EEasingType, METADATA_PARAMS(Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp__contentFadeInEasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp__contentFadeInEasing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp__contentFadeOutTime_MetaData[] = {
		{ "Category", "CoreTabContentWidget" },
		{ "ModuleRelativePath", "Public/CoreTabContentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp__contentFadeOutTime = { "_contentFadeOutTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTabContentWidget, _contentFadeOutTime), METADATA_PARAMS(Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp__contentFadeOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp__contentFadeOutTime_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp__contentFadeOutEasing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp__contentFadeOutEasing_MetaData[] = {
		{ "Category", "CoreTabContentWidget" },
		{ "ModuleRelativePath", "Public/CoreTabContentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp__contentFadeOutEasing = { "_contentFadeOutEasing", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTabContentWidget, _contentFadeOutEasing), Z_Construct_UEnum_UITween_EEasingType, METADATA_PARAMS(Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp__contentFadeOutEasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp__contentFadeOutEasing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreTabContentWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp_ContentWidgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp_ContentWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp__contentFadeInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp__contentFadeInEasing_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp__contentFadeInEasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp__contentFadeOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp__contentFadeOutEasing_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabContentWidget_Statics::NewProp__contentFadeOutEasing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreTabContentWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreTabContentWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreTabContentWidget_Statics::ClassParams = {
		&UCoreTabContentWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreTabContentWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabContentWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreTabContentWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabContentWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreTabContentWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreTabContentWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreTabContentWidget, 3178637663);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreTabContentWidget>()
	{
		return UCoreTabContentWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreTabContentWidget(Z_Construct_UClass_UCoreTabContentWidget, &UCoreTabContentWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreTabContentWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreTabContentWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
