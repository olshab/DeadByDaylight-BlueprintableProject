// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/EventEntryDetailsTabContentWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventEntryDetailsTabContentWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UEventEntryDetailsTabContentWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UEventEntryDetailsTabContentWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDSHAREDTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventDetailsTabContentData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
// End Cross Module References
	static FName NAME_UEventEntryDetailsTabContentWidget_SetData = FName(TEXT("SetData"));
	void UEventEntryDetailsTabContentWidget::SetData(FSpecialEventDetailsTabContentData const& contentData, FEventEntryPopupSkinUIData const& skinData)
	{
		EventEntryDetailsTabContentWidget_eventSetData_Parms Parms;
		Parms.contentData=contentData;
		Parms.skinData=skinData;
		ProcessEvent(FindFunctionChecked(NAME_UEventEntryDetailsTabContentWidget_SetData),&Parms);
	}
	void UEventEntryDetailsTabContentWidget::StaticRegisterNativesUEventEntryDetailsTabContentWidget()
	{
	}
	struct Z_Construct_UFunction_UEventEntryDetailsTabContentWidget_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_contentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_contentData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skinData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_skinData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryDetailsTabContentWidget_SetData_Statics::NewProp_contentData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEventEntryDetailsTabContentWidget_SetData_Statics::NewProp_contentData = { "contentData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryDetailsTabContentWidget_eventSetData_Parms, contentData), Z_Construct_UScriptStruct_FSpecialEventDetailsTabContentData, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryDetailsTabContentWidget_SetData_Statics::NewProp_contentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryDetailsTabContentWidget_SetData_Statics::NewProp_contentData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryDetailsTabContentWidget_SetData_Statics::NewProp_skinData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEventEntryDetailsTabContentWidget_SetData_Statics::NewProp_skinData = { "skinData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryDetailsTabContentWidget_eventSetData_Parms, skinData), Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryDetailsTabContentWidget_SetData_Statics::NewProp_skinData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryDetailsTabContentWidget_SetData_Statics::NewProp_skinData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryDetailsTabContentWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryDetailsTabContentWidget_SetData_Statics::NewProp_contentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryDetailsTabContentWidget_SetData_Statics::NewProp_skinData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryDetailsTabContentWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryDetailsTabContentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryDetailsTabContentWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryDetailsTabContentWidget, nullptr, "SetData", nullptr, nullptr, sizeof(EventEntryDetailsTabContentWidget_eventSetData_Parms), Z_Construct_UFunction_UEventEntryDetailsTabContentWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryDetailsTabContentWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryDetailsTabContentWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryDetailsTabContentWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryDetailsTabContentWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryDetailsTabContentWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEventEntryDetailsTabContentWidget_NoRegister()
	{
		return UEventEntryDetailsTabContentWidget::StaticClass();
	}
	struct Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DescriptionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__scrollLabelText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__scrollLabelText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEventEntryDetailsTabContentWidget_SetData, "SetData" }, // 1838059740
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EventEntryDetailsTabContentWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EventEntryDetailsTabContentWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics::NewProp_TitleText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EventEntryDetailsTabContentWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EventEntryDetailsTabContentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryDetailsTabContentWidget, TitleText), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics::NewProp_TitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics::NewProp_TitleText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics::NewProp_DescriptionText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EventEntryDetailsTabContentWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EventEntryDetailsTabContentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics::NewProp_DescriptionText = { "DescriptionText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryDetailsTabContentWidget, DescriptionText), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics::NewProp_DescriptionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics::NewProp_DescriptionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics::NewProp__scrollLabelText_MetaData[] = {
		{ "Category", "EventEntryDetailsTabContentWidget" },
		{ "ModuleRelativePath", "Public/EventEntryDetailsTabContentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics::NewProp__scrollLabelText = { "_scrollLabelText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryDetailsTabContentWidget, _scrollLabelText), METADATA_PARAMS(Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics::NewProp__scrollLabelText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics::NewProp__scrollLabelText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics::NewProp_TitleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics::NewProp_DescriptionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics::NewProp__scrollLabelText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventEntryDetailsTabContentWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics::ClassParams = {
		&UEventEntryDetailsTabContentWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventEntryDetailsTabContentWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventEntryDetailsTabContentWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventEntryDetailsTabContentWidget, 3096679579);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UEventEntryDetailsTabContentWidget>()
	{
		return UEventEntryDetailsTabContentWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventEntryDetailsTabContentWidget(Z_Construct_UClass_UEventEntryDetailsTabContentWidget, &UEventEntryDetailsTabContentWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UEventEntryDetailsTabContentWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventEntryDetailsTabContentWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
