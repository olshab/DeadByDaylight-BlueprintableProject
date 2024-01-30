// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/EventEntryEventTabWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventEntryEventTabWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UEventEntryEventTabWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UEventEntryEventTabWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContentWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEventTabViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDScrollBox_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_EventInfoTabArchivesButtonClickedDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEventInfoViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEventEntryEventTabWidget::execOnArchivesButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnArchivesButtonClicked();
		P_NATIVE_END;
	}
	static FName NAME_UEventEntryEventTabWidget_DisableInputs = FName(TEXT("DisableInputs"));
	void UEventEntryEventTabWidget::DisableInputs()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEventEntryEventTabWidget_DisableInputs),NULL);
	}
	static FName NAME_UEventEntryEventTabWidget_EnableInputs = FName(TEXT("EnableInputs"));
	void UEventEntryEventTabWidget::EnableInputs()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEventEntryEventTabWidget_EnableInputs),NULL);
	}
	void UEventEntryEventTabWidget::StaticRegisterNativesUEventEntryEventTabWidget()
	{
		UClass* Class = UEventEntryEventTabWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnArchivesButtonClicked", &UEventEntryEventTabWidget::execOnArchivesButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEventEntryEventTabWidget_DisableInputs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryEventTabWidget_DisableInputs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryEventTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryEventTabWidget_DisableInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryEventTabWidget, nullptr, "DisableInputs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryEventTabWidget_DisableInputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryEventTabWidget_DisableInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryEventTabWidget_DisableInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryEventTabWidget_DisableInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryEventTabWidget_EnableInputs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryEventTabWidget_EnableInputs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryEventTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryEventTabWidget_EnableInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryEventTabWidget, nullptr, "EnableInputs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryEventTabWidget_EnableInputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryEventTabWidget_EnableInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryEventTabWidget_EnableInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryEventTabWidget_EnableInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryEventTabWidget_OnArchivesButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryEventTabWidget_OnArchivesButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryEventTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryEventTabWidget_OnArchivesButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryEventTabWidget, nullptr, "OnArchivesButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryEventTabWidget_OnArchivesButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryEventTabWidget_OnArchivesButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryEventTabWidget_OnArchivesButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryEventTabWidget_OnArchivesButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEventEntryEventTabWidget_NoRegister()
	{
		return UEventEntryEventTabWidget::StaticClass();
	}
	struct Z_Construct_UClass_UEventEntryEventTabWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__viewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__viewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__skinData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__skinData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImageContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScrollBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MessageText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalInformationText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditionalInformationText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArchivesButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArchivesButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__scrollLabelText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__scrollLabelText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onArchivesButtonClicked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__onArchivesButtonClicked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__disableArchivesButton_MetaData[];
#endif
		static void NewProp__disableArchivesButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__disableArchivesButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventEntryEventTabWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreTabContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEventEntryEventTabWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEventEntryEventTabWidget_DisableInputs, "DisableInputs" }, // 1976778465
		{ &Z_Construct_UFunction_UEventEntryEventTabWidget_EnableInputs, "EnableInputs" }, // 3915929361
		{ &Z_Construct_UFunction_UEventEntryEventTabWidget_OnArchivesButtonClicked, "OnArchivesButtonClicked" }, // 2256947624
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryEventTabWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EventEntryEventTabWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EventEntryEventTabWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__viewData_MetaData[] = {
		{ "Category", "EventEntryEventTabWidget" },
		{ "ModuleRelativePath", "Public/EventEntryEventTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__viewData = { "_viewData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryEventTabWidget, _viewData), Z_Construct_UClass_UEventTabViewData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__viewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__skinData_MetaData[] = {
		{ "Category", "EventEntryEventTabWidget" },
		{ "ModuleRelativePath", "Public/EventEntryEventTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__skinData = { "_skinData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryEventTabWidget, _skinData), Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData, METADATA_PARAMS(Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__skinData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__skinData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp_ImageContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EventEntryEventTabWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EventEntryEventTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp_ImageContainer = { "ImageContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryEventTabWidget, ImageContainer), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp_ImageContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp_ImageContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp_ScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EventEntryEventTabWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EventEntryEventTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp_ScrollBox = { "ScrollBox", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryEventTabWidget, ScrollBox), Z_Construct_UClass_UDBDScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp_ScrollBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp_ScrollBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp_MessageText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EventEntryEventTabWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EventEntryEventTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp_MessageText = { "MessageText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryEventTabWidget, MessageText), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp_MessageText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp_MessageText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp_AdditionalInformationText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EventEntryEventTabWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EventEntryEventTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp_AdditionalInformationText = { "AdditionalInformationText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryEventTabWidget, AdditionalInformationText), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp_AdditionalInformationText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp_AdditionalInformationText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp_ArchivesButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EventEntryEventTabWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EventEntryEventTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp_ArchivesButton = { "ArchivesButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryEventTabWidget, ArchivesButton), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp_ArchivesButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp_ArchivesButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__scrollLabelText_MetaData[] = {
		{ "Category", "EventEntryEventTabWidget" },
		{ "ModuleRelativePath", "Public/EventEntryEventTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__scrollLabelText = { "_scrollLabelText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryEventTabWidget, _scrollLabelText), METADATA_PARAMS(Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__scrollLabelText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__scrollLabelText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__onArchivesButtonClicked_MetaData[] = {
		{ "Category", "EventEntryEventTabWidget" },
		{ "ModuleRelativePath", "Public/EventEntryEventTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__onArchivesButtonClicked = { "_onArchivesButtonClicked", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryEventTabWidget, _onArchivesButtonClicked), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_EventInfoTabArchivesButtonClickedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__onArchivesButtonClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__onArchivesButtonClicked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__disableArchivesButton_MetaData[] = {
		{ "Category", "EventEntryEventTabWidget" },
		{ "ModuleRelativePath", "Public/EventEntryEventTabWidget.h" },
	};
#endif
	void Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__disableArchivesButton_SetBit(void* Obj)
	{
		((UEventEntryEventTabWidget*)Obj)->_disableArchivesButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__disableArchivesButton = { "_disableArchivesButton", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEventEntryEventTabWidget), &Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__disableArchivesButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__disableArchivesButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__disableArchivesButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEventEntryEventTabWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__viewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__skinData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp_ImageContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp_ScrollBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp_MessageText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp_AdditionalInformationText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp_ArchivesButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__scrollLabelText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__onArchivesButtonClicked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryEventTabWidget_Statics::NewProp__disableArchivesButton,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UEventEntryEventTabWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEventInfoViewInterface_NoRegister, (int32)VTABLE_OFFSET(UEventEntryEventTabWidget, IEventInfoViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventEntryEventTabWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventEntryEventTabWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventEntryEventTabWidget_Statics::ClassParams = {
		&UEventEntryEventTabWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEventEntryEventTabWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryEventTabWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEventEntryEventTabWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryEventTabWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventEntryEventTabWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventEntryEventTabWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventEntryEventTabWidget, 1872387647);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UEventEntryEventTabWidget>()
	{
		return UEventEntryEventTabWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventEntryEventTabWidget(Z_Construct_UClass_UEventEntryEventTabWidget, &UEventEntryEventTabWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UEventEntryEventTabWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventEntryEventTabWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
