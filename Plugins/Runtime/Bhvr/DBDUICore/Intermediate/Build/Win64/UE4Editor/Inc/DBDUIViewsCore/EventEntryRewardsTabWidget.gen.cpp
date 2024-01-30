// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/EventEntryRewardsTabWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventEntryRewardsTabWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UEventEntryRewardsTabWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UEventEntryRewardsTabWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContentWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UEventEntryRewardsDisplayWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_OnCustomizationItemClickedDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEventCollectionViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEventEntryRewardsTabWidget::execOnPreviewAreaItemClicked)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPreviewAreaItemClicked(Z_Param_selectedIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventEntryRewardsTabWidget::execOnRewardGridItemClicked)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRewardGridItemClicked(Z_Param_selectedIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventEntryRewardsTabWidget::execSetScrollPrompt)
	{
		P_GET_OBJECT(UCoreKeyListenerInputPromptWidget,Z_Param_displayPrompt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScrollPrompt(Z_Param_displayPrompt);
		P_NATIVE_END;
	}
	void UEventEntryRewardsTabWidget::StaticRegisterNativesUEventEntryRewardsTabWidget()
	{
		UClass* Class = UEventEntryRewardsTabWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPreviewAreaItemClicked", &UEventEntryRewardsTabWidget::execOnPreviewAreaItemClicked },
			{ "OnRewardGridItemClicked", &UEventEntryRewardsTabWidget::execOnRewardGridItemClicked },
			{ "SetScrollPrompt", &UEventEntryRewardsTabWidget::execSetScrollPrompt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnPreviewAreaItemClicked_Statics
	{
		struct EventEntryRewardsTabWidget_eventOnPreviewAreaItemClicked_Parms
		{
			int32 selectedIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_selectedIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnPreviewAreaItemClicked_Statics::NewProp_selectedIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnPreviewAreaItemClicked_Statics::NewProp_selectedIndex = { "selectedIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryRewardsTabWidget_eventOnPreviewAreaItemClicked_Parms, selectedIndex), METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnPreviewAreaItemClicked_Statics::NewProp_selectedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnPreviewAreaItemClicked_Statics::NewProp_selectedIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnPreviewAreaItemClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnPreviewAreaItemClicked_Statics::NewProp_selectedIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnPreviewAreaItemClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryRewardsTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnPreviewAreaItemClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryRewardsTabWidget, nullptr, "OnPreviewAreaItemClicked", nullptr, nullptr, sizeof(EventEntryRewardsTabWidget_eventOnPreviewAreaItemClicked_Parms), Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnPreviewAreaItemClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnPreviewAreaItemClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnPreviewAreaItemClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnPreviewAreaItemClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnPreviewAreaItemClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnPreviewAreaItemClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnRewardGridItemClicked_Statics
	{
		struct EventEntryRewardsTabWidget_eventOnRewardGridItemClicked_Parms
		{
			int32 selectedIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_selectedIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnRewardGridItemClicked_Statics::NewProp_selectedIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnRewardGridItemClicked_Statics::NewProp_selectedIndex = { "selectedIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryRewardsTabWidget_eventOnRewardGridItemClicked_Parms, selectedIndex), METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnRewardGridItemClicked_Statics::NewProp_selectedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnRewardGridItemClicked_Statics::NewProp_selectedIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnRewardGridItemClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnRewardGridItemClicked_Statics::NewProp_selectedIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnRewardGridItemClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryRewardsTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnRewardGridItemClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryRewardsTabWidget, nullptr, "OnRewardGridItemClicked", nullptr, nullptr, sizeof(EventEntryRewardsTabWidget_eventOnRewardGridItemClicked_Parms), Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnRewardGridItemClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnRewardGridItemClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnRewardGridItemClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnRewardGridItemClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnRewardGridItemClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnRewardGridItemClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryRewardsTabWidget_SetScrollPrompt_Statics
	{
		struct EventEntryRewardsTabWidget_eventSetScrollPrompt_Parms
		{
			UCoreKeyListenerInputPromptWidget* displayPrompt;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_displayPrompt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_displayPrompt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsTabWidget_SetScrollPrompt_Statics::NewProp_displayPrompt_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventEntryRewardsTabWidget_SetScrollPrompt_Statics::NewProp_displayPrompt = { "displayPrompt", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryRewardsTabWidget_eventSetScrollPrompt_Parms, displayPrompt), Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsTabWidget_SetScrollPrompt_Statics::NewProp_displayPrompt_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsTabWidget_SetScrollPrompt_Statics::NewProp_displayPrompt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryRewardsTabWidget_SetScrollPrompt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryRewardsTabWidget_SetScrollPrompt_Statics::NewProp_displayPrompt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsTabWidget_SetScrollPrompt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryRewardsTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryRewardsTabWidget_SetScrollPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryRewardsTabWidget, nullptr, "SetScrollPrompt", nullptr, nullptr, sizeof(EventEntryRewardsTabWidget_eventSetScrollPrompt_Parms), Z_Construct_UFunction_UEventEntryRewardsTabWidget_SetScrollPrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsTabWidget_SetScrollPrompt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsTabWidget_SetScrollPrompt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsTabWidget_SetScrollPrompt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryRewardsTabWidget_SetScrollPrompt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryRewardsTabWidget_SetScrollPrompt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEventEntryRewardsTabWidget_NoRegister()
	{
		return UEventEntryRewardsTabWidget::StaticClass();
	}
	struct Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__skinData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__skinData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventEntryRewardsDisplayWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventEntryRewardsDisplayWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onRewardGridItemClicked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__onRewardGridItemClicked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onPreviewAreaItemClicked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__onPreviewAreaItemClicked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreTabContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnPreviewAreaItemClicked, "OnPreviewAreaItemClicked" }, // 513001267
		{ &Z_Construct_UFunction_UEventEntryRewardsTabWidget_OnRewardGridItemClicked, "OnRewardGridItemClicked" }, // 147179997
		{ &Z_Construct_UFunction_UEventEntryRewardsTabWidget_SetScrollPrompt, "SetScrollPrompt" }, // 3595805535
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EventEntryRewardsTabWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EventEntryRewardsTabWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::NewProp__skinData_MetaData[] = {
		{ "Category", "EventEntryRewardsTabWidget" },
		{ "ModuleRelativePath", "Public/EventEntryRewardsTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::NewProp__skinData = { "_skinData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryRewardsTabWidget, _skinData), Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData, METADATA_PARAMS(Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::NewProp__skinData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::NewProp__skinData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::NewProp_EventEntryRewardsDisplayWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EventEntryRewardsTabWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EventEntryRewardsTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::NewProp_EventEntryRewardsDisplayWidget = { "EventEntryRewardsDisplayWidget", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryRewardsTabWidget, EventEntryRewardsDisplayWidget), Z_Construct_UClass_UEventEntryRewardsDisplayWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::NewProp_EventEntryRewardsDisplayWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::NewProp_EventEntryRewardsDisplayWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::NewProp__onRewardGridItemClicked_MetaData[] = {
		{ "Category", "EventEntryRewardsTabWidget" },
		{ "ModuleRelativePath", "Public/EventEntryRewardsTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::NewProp__onRewardGridItemClicked = { "_onRewardGridItemClicked", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryRewardsTabWidget, _onRewardGridItemClicked), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_OnCustomizationItemClickedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::NewProp__onRewardGridItemClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::NewProp__onRewardGridItemClicked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::NewProp__onPreviewAreaItemClicked_MetaData[] = {
		{ "Category", "EventEntryRewardsTabWidget" },
		{ "ModuleRelativePath", "Public/EventEntryRewardsTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::NewProp__onPreviewAreaItemClicked = { "_onPreviewAreaItemClicked", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryRewardsTabWidget, _onPreviewAreaItemClicked), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_OnCustomizationItemClickedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::NewProp__onPreviewAreaItemClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::NewProp__onPreviewAreaItemClicked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::NewProp__skinData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::NewProp_EventEntryRewardsDisplayWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::NewProp__onRewardGridItemClicked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::NewProp__onPreviewAreaItemClicked,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEventCollectionViewInterface_NoRegister, (int32)VTABLE_OFFSET(UEventEntryRewardsTabWidget, IEventCollectionViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventEntryRewardsTabWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::ClassParams = {
		&UEventEntryRewardsTabWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventEntryRewardsTabWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventEntryRewardsTabWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventEntryRewardsTabWidget, 3390893704);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UEventEntryRewardsTabWidget>()
	{
		return UEventEntryRewardsTabWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventEntryRewardsTabWidget(Z_Construct_UClass_UEventEntryRewardsTabWidget, &UEventEntryRewardsTabWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UEventEntryRewardsTabWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventEntryRewardsTabWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
