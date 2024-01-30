// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreOnboardingButtonHolderWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreOnboardingButtonHolderWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreOnboardingButtonHolderWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewsCore_OnTutorialButtonClickedDelegate__DelegateSignature();
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewsCore_OnTutorialButtonSetDataAnimationCompleteDelegate__DelegateSignature();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreOnboardingButtonHolderWidget::execGetStepId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStepId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreOnboardingButtonHolderWidget::execOnButtonSetDataAnimationCompleteDelegate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonSetDataAnimationCompleteDelegate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreOnboardingButtonHolderWidget::execOnClickedTutorialButton)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_ClickedTutorialButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickedTutorialButton(Z_Param_ClickedTutorialButton);
		P_NATIVE_END;
	}
	void UCoreOnboardingButtonHolderWidget::StaticRegisterNativesUCoreOnboardingButtonHolderWidget()
	{
		UClass* Class = UCoreOnboardingButtonHolderWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStepId", &UCoreOnboardingButtonHolderWidget::execGetStepId },
			{ "OnButtonSetDataAnimationCompleteDelegate", &UCoreOnboardingButtonHolderWidget::execOnButtonSetDataAnimationCompleteDelegate },
			{ "OnClickedTutorialButton", &UCoreOnboardingButtonHolderWidget::execOnClickedTutorialButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_GetStepId_Statics
	{
		struct CoreOnboardingButtonHolderWidget_eventGetStepId_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_GetStepId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreOnboardingButtonHolderWidget_eventGetStepId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_GetStepId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_GetStepId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_GetStepId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnboardingButtonHolderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_GetStepId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnboardingButtonHolderWidget, nullptr, "GetStepId", nullptr, nullptr, sizeof(CoreOnboardingButtonHolderWidget_eventGetStepId_Parms), Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_GetStepId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_GetStepId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_GetStepId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_GetStepId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_GetStepId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_GetStepId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_OnButtonSetDataAnimationCompleteDelegate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_OnButtonSetDataAnimationCompleteDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnboardingButtonHolderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_OnButtonSetDataAnimationCompleteDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnboardingButtonHolderWidget, nullptr, "OnButtonSetDataAnimationCompleteDelegate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_OnButtonSetDataAnimationCompleteDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_OnButtonSetDataAnimationCompleteDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_OnButtonSetDataAnimationCompleteDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_OnButtonSetDataAnimationCompleteDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_OnClickedTutorialButton_Statics
	{
		struct CoreOnboardingButtonHolderWidget_eventOnClickedTutorialButton_Parms
		{
			UCoreButtonWidget* ClickedTutorialButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedTutorialButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedTutorialButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_OnClickedTutorialButton_Statics::NewProp_ClickedTutorialButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_OnClickedTutorialButton_Statics::NewProp_ClickedTutorialButton = { "ClickedTutorialButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreOnboardingButtonHolderWidget_eventOnClickedTutorialButton_Parms, ClickedTutorialButton), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_OnClickedTutorialButton_Statics::NewProp_ClickedTutorialButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_OnClickedTutorialButton_Statics::NewProp_ClickedTutorialButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_OnClickedTutorialButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_OnClickedTutorialButton_Statics::NewProp_ClickedTutorialButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_OnClickedTutorialButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnboardingButtonHolderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_OnClickedTutorialButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnboardingButtonHolderWidget, nullptr, "OnClickedTutorialButton", nullptr, nullptr, sizeof(CoreOnboardingButtonHolderWidget_eventOnClickedTutorialButton_Parms), Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_OnClickedTutorialButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_OnClickedTutorialButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_OnClickedTutorialButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_OnClickedTutorialButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_OnClickedTutorialButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_OnClickedTutorialButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_NoRegister()
	{
		return UCoreOnboardingButtonHolderWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTutorialButtonClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTutorialButtonClickedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSetDataAnimationCompleteDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSetDataAnimationCompleteDelegate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TutorialButtons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialButtons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TutorialButtons;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_GetStepId, "GetStepId" }, // 4275118833
		{ &Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_OnButtonSetDataAnimationCompleteDelegate, "OnButtonSetDataAnimationCompleteDelegate" }, // 3727245168
		{ &Z_Construct_UFunction_UCoreOnboardingButtonHolderWidget_OnClickedTutorialButton, "OnClickedTutorialButton" }, // 4166934505
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreOnboardingButtonHolderWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreOnboardingButtonHolderWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::NewProp_OnTutorialButtonClickedDelegate_MetaData[] = {
		{ "Category", "CoreOnboardingButtonHolderWidget" },
		{ "ModuleRelativePath", "Public/CoreOnboardingButtonHolderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::NewProp_OnTutorialButtonClickedDelegate = { "OnTutorialButtonClickedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingButtonHolderWidget, OnTutorialButtonClickedDelegate), Z_Construct_UDelegateFunction_DBDUIViewsCore_OnTutorialButtonClickedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::NewProp_OnTutorialButtonClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::NewProp_OnTutorialButtonClickedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::NewProp_OnSetDataAnimationCompleteDelegate_MetaData[] = {
		{ "Category", "CoreOnboardingButtonHolderWidget" },
		{ "ModuleRelativePath", "Public/CoreOnboardingButtonHolderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::NewProp_OnSetDataAnimationCompleteDelegate = { "OnSetDataAnimationCompleteDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingButtonHolderWidget, OnSetDataAnimationCompleteDelegate), Z_Construct_UDelegateFunction_DBDUIViewsCore_OnTutorialButtonSetDataAnimationCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::NewProp_OnSetDataAnimationCompleteDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::NewProp_OnSetDataAnimationCompleteDelegate_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::NewProp_TutorialButtons_Inner = { "TutorialButtons", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::NewProp_TutorialButtons_MetaData[] = {
		{ "Category", "CoreOnboardingButtonHolderWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreOnboardingButtonHolderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::NewProp_TutorialButtons = { "TutorialButtons", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingButtonHolderWidget, TutorialButtons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::NewProp_TutorialButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::NewProp_TutorialButtons_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::NewProp_OnTutorialButtonClickedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::NewProp_OnSetDataAnimationCompleteDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::NewProp_TutorialButtons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::NewProp_TutorialButtons,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreOnboardingButtonHolderWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::ClassParams = {
		&UCoreOnboardingButtonHolderWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreOnboardingButtonHolderWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreOnboardingButtonHolderWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreOnboardingButtonHolderWidget, 1019529449);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreOnboardingButtonHolderWidget>()
	{
		return UCoreOnboardingButtonHolderWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreOnboardingButtonHolderWidget(Z_Construct_UClass_UCoreOnboardingButtonHolderWidget, &UCoreOnboardingButtonHolderWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreOnboardingButtonHolderWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreOnboardingButtonHolderWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
