// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreArchiveTomeWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreArchiveTomeWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveTomeWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveTomeWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContentWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveQuestEditorWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContainerWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveTomeMenuTabSelectedDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveTomeEditorSwitchCompleteDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveTomeViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreArchiveTomeWidget::execOnMenuTabSelected)
	{
		P_GET_OBJECT(UCoreSelectableButtonWidget,Z_Param_selectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMenuTabSelected(Z_Param_selectedButton);
		P_NATIVE_END;
	}
	void UCoreArchiveTomeWidget::StaticRegisterNativesUCoreArchiveTomeWidget()
	{
		UClass* Class = UCoreArchiveTomeWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMenuTabSelected", &UCoreArchiveTomeWidget::execOnMenuTabSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreArchiveTomeWidget_OnMenuTabSelected_Statics
	{
		struct CoreArchiveTomeWidget_eventOnMenuTabSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveTomeWidget_OnMenuTabSelected_Statics::NewProp_selectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveTomeWidget_OnMenuTabSelected_Statics::NewProp_selectedButton = { "selectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveTomeWidget_eventOnMenuTabSelected_Parms, selectedButton), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveTomeWidget_OnMenuTabSelected_Statics::NewProp_selectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveTomeWidget_OnMenuTabSelected_Statics::NewProp_selectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveTomeWidget_OnMenuTabSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveTomeWidget_OnMenuTabSelected_Statics::NewProp_selectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveTomeWidget_OnMenuTabSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveTomeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveTomeWidget_OnMenuTabSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveTomeWidget, nullptr, "OnMenuTabSelected", nullptr, nullptr, sizeof(CoreArchiveTomeWidget_eventOnMenuTabSelected_Parms), Z_Construct_UFunction_UCoreArchiveTomeWidget_OnMenuTabSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveTomeWidget_OnMenuTabSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveTomeWidget_OnMenuTabSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveTomeWidget_OnMenuTabSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveTomeWidget_OnMenuTabSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveTomeWidget_OnMenuTabSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreArchiveTomeWidget_NoRegister()
	{
		return UCoreArchiveTomeWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreArchiveTomeWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__archiveQuestEditorWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__archiveQuestEditorWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__archiveQuestEditorWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__archiveQuestEditorWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArchiveTomeSideNav_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArchiveTomeSideNav;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuTabSelectedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_MenuTabSelectedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__editorSwitchCompleteDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__editorSwitchCompleteDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreTabContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreArchiveTomeWidget_OnMenuTabSelected, "OnMenuTabSelected" }, // 2055627730
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreArchiveTomeWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveTomeWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp__archiveQuestEditorWidgetClass_MetaData[] = {
		{ "Category", "CoreArchiveTomeWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveTomeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp__archiveQuestEditorWidgetClass = { "_archiveQuestEditorWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveTomeWidget, _archiveQuestEditorWidgetClass), Z_Construct_UClass_UCoreArchiveQuestEditorWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp__archiveQuestEditorWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp__archiveQuestEditorWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp__archiveQuestEditorWidget_MetaData[] = {
		{ "Category", "CoreArchiveTomeWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveTomeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp__archiveQuestEditorWidget = { "_archiveQuestEditorWidget", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveTomeWidget, _archiveQuestEditorWidget), Z_Construct_UClass_UCoreArchiveQuestEditorWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp__archiveQuestEditorWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp__archiveQuestEditorWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp_ArchiveTomeSideNav_MetaData[] = {
		{ "Category", "CoreArchiveTomeWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveTomeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp_ArchiveTomeSideNav = { "ArchiveTomeSideNav", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveTomeWidget, ArchiveTomeSideNav), Z_Construct_UClass_UCoreTabContainerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp_ArchiveTomeSideNav_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp_ArchiveTomeSideNav_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp_EditorSwitcher_MetaData[] = {
		{ "Category", "CoreArchiveTomeWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveTomeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp_EditorSwitcher = { "EditorSwitcher", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveTomeWidget, EditorSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp_EditorSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp_EditorSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp_MenuTabSelectedDelegate_MetaData[] = {
		{ "Category", "CoreArchiveTomeWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveTomeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp_MenuTabSelectedDelegate = { "MenuTabSelectedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveTomeWidget, MenuTabSelectedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveTomeMenuTabSelectedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp_MenuTabSelectedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp_MenuTabSelectedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp__editorSwitchCompleteDelegate_MetaData[] = {
		{ "Category", "CoreArchiveTomeWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveTomeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp__editorSwitchCompleteDelegate = { "_editorSwitchCompleteDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveTomeWidget, _editorSwitchCompleteDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ArchiveTomeEditorSwitchCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp__editorSwitchCompleteDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp__editorSwitchCompleteDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp__archiveQuestEditorWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp__archiveQuestEditorWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp_ArchiveTomeSideNav,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp_EditorSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp_MenuTabSelectedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::NewProp__editorSwitchCompleteDelegate,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UArchiveTomeViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreArchiveTomeWidget, IArchiveTomeViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreArchiveTomeWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::ClassParams = {
		&UCoreArchiveTomeWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreArchiveTomeWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreArchiveTomeWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreArchiveTomeWidget, 2040788860);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreArchiveTomeWidget>()
	{
		return UCoreArchiveTomeWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreArchiveTomeWidget(Z_Construct_UClass_UCoreArchiveTomeWidget, &UCoreArchiveTomeWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreArchiveTomeWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreArchiveTomeWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
