// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreArchiveVignetteEntryContainerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreArchiveVignetteEntryContainerWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContainerWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	UITWEEN_API UClass* Z_Construct_UClass_UUITweenInstance_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UITWEEN_API UEnum* Z_Construct_UEnum_UITween_EEasingType();
// End Cross Module References
	DEFINE_FUNCTION(UCoreArchiveVignetteEntryContainerWidget::execOnUnlockComplete)
	{
		P_GET_OBJECT(UUITweenInstance,Z_Param_tween);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnlockComplete(Z_Param_tween);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveVignetteEntryContainerWidget::execOnUnlockProgress)
	{
		P_GET_OBJECT(UUITweenInstance,Z_Param_tween);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnlockProgress(Z_Param_tween);
		P_NATIVE_END;
	}
	void UCoreArchiveVignetteEntryContainerWidget::StaticRegisterNativesUCoreArchiveVignetteEntryContainerWidget()
	{
		UClass* Class = UCoreArchiveVignetteEntryContainerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnUnlockComplete", &UCoreArchiveVignetteEntryContainerWidget::execOnUnlockComplete },
			{ "OnUnlockProgress", &UCoreArchiveVignetteEntryContainerWidget::execOnUnlockProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreArchiveVignetteEntryContainerWidget_OnUnlockComplete_Statics
	{
		struct CoreArchiveVignetteEntryContainerWidget_eventOnUnlockComplete_Parms
		{
			UUITweenInstance* tween;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tween;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveVignetteEntryContainerWidget_OnUnlockComplete_Statics::NewProp_tween = { "tween", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveVignetteEntryContainerWidget_eventOnUnlockComplete_Parms, tween), Z_Construct_UClass_UUITweenInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveVignetteEntryContainerWidget_OnUnlockComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveVignetteEntryContainerWidget_OnUnlockComplete_Statics::NewProp_tween,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteEntryContainerWidget_OnUnlockComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveVignetteEntryContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveVignetteEntryContainerWidget_OnUnlockComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget, nullptr, "OnUnlockComplete", nullptr, nullptr, sizeof(CoreArchiveVignetteEntryContainerWidget_eventOnUnlockComplete_Parms), Z_Construct_UFunction_UCoreArchiveVignetteEntryContainerWidget_OnUnlockComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteEntryContainerWidget_OnUnlockComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteEntryContainerWidget_OnUnlockComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteEntryContainerWidget_OnUnlockComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveVignetteEntryContainerWidget_OnUnlockComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveVignetteEntryContainerWidget_OnUnlockComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveVignetteEntryContainerWidget_OnUnlockProgress_Statics
	{
		struct CoreArchiveVignetteEntryContainerWidget_eventOnUnlockProgress_Parms
		{
			UUITweenInstance* tween;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tween;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveVignetteEntryContainerWidget_OnUnlockProgress_Statics::NewProp_tween = { "tween", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveVignetteEntryContainerWidget_eventOnUnlockProgress_Parms, tween), Z_Construct_UClass_UUITweenInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveVignetteEntryContainerWidget_OnUnlockProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveVignetteEntryContainerWidget_OnUnlockProgress_Statics::NewProp_tween,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteEntryContainerWidget_OnUnlockProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveVignetteEntryContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveVignetteEntryContainerWidget_OnUnlockProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget, nullptr, "OnUnlockProgress", nullptr, nullptr, sizeof(CoreArchiveVignetteEntryContainerWidget_eventOnUnlockProgress_Parms), Z_Construct_UFunction_UCoreArchiveVignetteEntryContainerWidget_OnUnlockProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteEntryContainerWidget_OnUnlockProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteEntryContainerWidget_OnUnlockProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteEntryContainerWidget_OnUnlockProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveVignetteEntryContainerWidget_OnUnlockProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveVignetteEntryContainerWidget_OnUnlockProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_NoRegister()
	{
		return UCoreArchiveVignetteEntryContainerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JournalProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JournalProgressBar;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AnimationEasing_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationEasing_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AnimationEasing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressAnimationDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProgressAnimationDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreTabContainerWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreArchiveVignetteEntryContainerWidget_OnUnlockComplete, "OnUnlockComplete" }, // 2909591087
		{ &Z_Construct_UFunction_UCoreArchiveVignetteEntryContainerWidget_OnUnlockProgress, "OnUnlockProgress" }, // 3726960699
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreArchiveVignetteEntryContainerWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveVignetteEntryContainerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::NewProp_JournalProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveVignetteEntryContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveVignetteEntryContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::NewProp_JournalProgressBar = { "JournalProgressBar", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveVignetteEntryContainerWidget, JournalProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::NewProp_JournalProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::NewProp_JournalProgressBar_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::NewProp_AnimationEasing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::NewProp_AnimationEasing_MetaData[] = {
		{ "Category", "CoreArchiveVignetteEntryContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveVignetteEntryContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::NewProp_AnimationEasing = { "AnimationEasing", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveVignetteEntryContainerWidget, AnimationEasing), Z_Construct_UEnum_UITween_EEasingType, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::NewProp_AnimationEasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::NewProp_AnimationEasing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::NewProp_ProgressAnimationDuration_MetaData[] = {
		{ "Category", "CoreArchiveVignetteEntryContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveVignetteEntryContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::NewProp_ProgressAnimationDuration = { "ProgressAnimationDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveVignetteEntryContainerWidget, ProgressAnimationDuration), METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::NewProp_ProgressAnimationDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::NewProp_ProgressAnimationDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::NewProp_JournalProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::NewProp_AnimationEasing_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::NewProp_AnimationEasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::NewProp_ProgressAnimationDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreArchiveVignetteEntryContainerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::ClassParams = {
		&UCoreArchiveVignetteEntryContainerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreArchiveVignetteEntryContainerWidget, 2245315978);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreArchiveVignetteEntryContainerWidget>()
	{
		return UCoreArchiveVignetteEntryContainerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreArchiveVignetteEntryContainerWidget(Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget, &UCoreArchiveVignetteEntryContainerWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreArchiveVignetteEntryContainerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreArchiveVignetteEntryContainerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
