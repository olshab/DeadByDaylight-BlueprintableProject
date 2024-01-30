// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreArchiveLevelProgressionWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreArchiveLevelProgressionWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveLevelProgressionWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_TomeLevelSelectedDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_TomeLevelAnimationDoneDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_TomeLevelRewardAnimationDoneDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_TomeLevelUnlockedAnimationDoneDelegate__DelegateSignature();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveLevelProgressionViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreArchiveLevelProgressionWidget::execOnStoryLevelSelected)
	{
		P_GET_OBJECT(UCoreSelectableButtonWidget,Z_Param_selectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStoryLevelSelected(Z_Param_selectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveLevelProgressionWidget::execOnTomeLevelUnlockedAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTomeLevelUnlockedAnimation();
		P_NATIVE_END;
	}
	void UCoreArchiveLevelProgressionWidget::StaticRegisterNativesUCoreArchiveLevelProgressionWidget()
	{
		UClass* Class = UCoreArchiveLevelProgressionWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnStoryLevelSelected", &UCoreArchiveLevelProgressionWidget::execOnStoryLevelSelected },
			{ "OnTomeLevelUnlockedAnimation", &UCoreArchiveLevelProgressionWidget::execOnTomeLevelUnlockedAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreArchiveLevelProgressionWidget_OnStoryLevelSelected_Statics
	{
		struct CoreArchiveLevelProgressionWidget_eventOnStoryLevelSelected_Parms
		{
			UCoreSelectableButtonWidget* selectedButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_selectedButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveLevelProgressionWidget_OnStoryLevelSelected_Statics::NewProp_selectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveLevelProgressionWidget_OnStoryLevelSelected_Statics::NewProp_selectedButton = { "selectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveLevelProgressionWidget_eventOnStoryLevelSelected_Parms, selectedButton), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveLevelProgressionWidget_OnStoryLevelSelected_Statics::NewProp_selectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveLevelProgressionWidget_OnStoryLevelSelected_Statics::NewProp_selectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveLevelProgressionWidget_OnStoryLevelSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveLevelProgressionWidget_OnStoryLevelSelected_Statics::NewProp_selectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveLevelProgressionWidget_OnStoryLevelSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveLevelProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveLevelProgressionWidget_OnStoryLevelSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveLevelProgressionWidget, nullptr, "OnStoryLevelSelected", nullptr, nullptr, sizeof(CoreArchiveLevelProgressionWidget_eventOnStoryLevelSelected_Parms), Z_Construct_UFunction_UCoreArchiveLevelProgressionWidget_OnStoryLevelSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveLevelProgressionWidget_OnStoryLevelSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveLevelProgressionWidget_OnStoryLevelSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveLevelProgressionWidget_OnStoryLevelSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveLevelProgressionWidget_OnStoryLevelSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveLevelProgressionWidget_OnStoryLevelSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveLevelProgressionWidget_OnTomeLevelUnlockedAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveLevelProgressionWidget_OnTomeLevelUnlockedAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveLevelProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveLevelProgressionWidget_OnTomeLevelUnlockedAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveLevelProgressionWidget, nullptr, "OnTomeLevelUnlockedAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveLevelProgressionWidget_OnTomeLevelUnlockedAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveLevelProgressionWidget_OnTomeLevelUnlockedAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveLevelProgressionWidget_OnTomeLevelUnlockedAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveLevelProgressionWidget_OnTomeLevelUnlockedAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_NoRegister()
	{
		return UCoreArchiveLevelProgressionWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__levelSelectedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__levelSelectedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__levelAnimationDoneDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__levelAnimationDoneDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__levelRewardAnimationDoneDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__levelRewardAnimationDoneDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__levelUnlockedAnimationDoneDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__levelUnlockedAnimationDoneDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoryLevelsSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StoryLevelsSelector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelNumberTF_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelNumberTF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelCompletionTF_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelCompletionTF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SideContent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreArchiveLevelProgressionWidget_OnStoryLevelSelected, "OnStoryLevelSelected" }, // 2345831082
		{ &Z_Construct_UFunction_UCoreArchiveLevelProgressionWidget_OnTomeLevelUnlockedAnimation, "OnTomeLevelUnlockedAnimation" }, // 2474313112
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreArchiveLevelProgressionWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveLevelProgressionWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp__levelSelectedDelegate_MetaData[] = {
		{ "Category", "CoreArchiveLevelProgressionWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveLevelProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp__levelSelectedDelegate = { "_levelSelectedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveLevelProgressionWidget, _levelSelectedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_TomeLevelSelectedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp__levelSelectedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp__levelSelectedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp__levelAnimationDoneDelegate_MetaData[] = {
		{ "Category", "CoreArchiveLevelProgressionWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveLevelProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp__levelAnimationDoneDelegate = { "_levelAnimationDoneDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveLevelProgressionWidget, _levelAnimationDoneDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_TomeLevelAnimationDoneDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp__levelAnimationDoneDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp__levelAnimationDoneDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp__levelRewardAnimationDoneDelegate_MetaData[] = {
		{ "Category", "CoreArchiveLevelProgressionWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveLevelProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp__levelRewardAnimationDoneDelegate = { "_levelRewardAnimationDoneDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveLevelProgressionWidget, _levelRewardAnimationDoneDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_TomeLevelRewardAnimationDoneDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp__levelRewardAnimationDoneDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp__levelRewardAnimationDoneDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp__levelUnlockedAnimationDoneDelegate_MetaData[] = {
		{ "Category", "CoreArchiveLevelProgressionWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveLevelProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp__levelUnlockedAnimationDoneDelegate = { "_levelUnlockedAnimationDoneDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveLevelProgressionWidget, _levelUnlockedAnimationDoneDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_TomeLevelUnlockedAnimationDoneDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp__levelUnlockedAnimationDoneDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp__levelUnlockedAnimationDoneDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp_StoryLevelsSelector_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveLevelProgressionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveLevelProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp_StoryLevelsSelector = { "StoryLevelsSelector", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveLevelProgressionWidget, StoryLevelsSelector), Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp_StoryLevelsSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp_StoryLevelsSelector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp_LevelNumberTF_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveLevelProgressionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveLevelProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp_LevelNumberTF = { "LevelNumberTF", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveLevelProgressionWidget, LevelNumberTF), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp_LevelNumberTF_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp_LevelNumberTF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp_LevelCompletionTF_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveLevelProgressionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveLevelProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp_LevelCompletionTF = { "LevelCompletionTF", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveLevelProgressionWidget, LevelCompletionTF), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp_LevelCompletionTF_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp_LevelCompletionTF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp_SideContent_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveLevelProgressionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveLevelProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp_SideContent = { "SideContent", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveLevelProgressionWidget, SideContent), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp_SideContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp_SideContent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp__levelSelectedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp__levelAnimationDoneDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp__levelRewardAnimationDoneDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp__levelUnlockedAnimationDoneDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp_StoryLevelsSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp_LevelNumberTF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp_LevelCompletionTF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::NewProp_SideContent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UArchiveLevelProgressionViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreArchiveLevelProgressionWidget, IArchiveLevelProgressionViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreArchiveLevelProgressionWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::ClassParams = {
		&UCoreArchiveLevelProgressionWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreArchiveLevelProgressionWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreArchiveLevelProgressionWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreArchiveLevelProgressionWidget, 4250739198);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreArchiveLevelProgressionWidget>()
	{
		return UCoreArchiveLevelProgressionWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreArchiveLevelProgressionWidget(Z_Construct_UClass_UCoreArchiveLevelProgressionWidget, &UCoreArchiveLevelProgressionWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreArchiveLevelProgressionWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreArchiveLevelProgressionWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
