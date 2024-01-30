// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/ArchiveCompendiumTooltipWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveCompendiumTooltipWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UArchiveCompendiumTooltipWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UArchiveCompendiumTooltipWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UTooltipWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCompendiumButtonData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UArchiveCompendiumTooltipWidget::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveCompendiumTooltipWidget::execSetTooltipData)
	{
		P_GET_STRUCT_REF(FCompendiumButtonData,Z_Param_Out_tooltipViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTooltipData(Z_Param_Out_tooltipViewData);
		P_NATIVE_END;
	}
	void UArchiveCompendiumTooltipWidget::StaticRegisterNativesUArchiveCompendiumTooltipWidget()
	{
		UClass* Class = UArchiveCompendiumTooltipWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Reset", &UArchiveCompendiumTooltipWidget::execReset },
			{ "SetTooltipData", &UArchiveCompendiumTooltipWidget::execSetTooltipData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchiveCompendiumTooltipWidget_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveCompendiumTooltipWidget_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveCompendiumTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveCompendiumTooltipWidget_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveCompendiumTooltipWidget, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveCompendiumTooltipWidget_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveCompendiumTooltipWidget_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveCompendiumTooltipWidget_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveCompendiumTooltipWidget_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveCompendiumTooltipWidget_SetTooltipData_Statics
	{
		struct ArchiveCompendiumTooltipWidget_eventSetTooltipData_Parms
		{
			FCompendiumButtonData tooltipViewData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tooltipViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveCompendiumTooltipWidget_SetTooltipData_Statics::NewProp_tooltipViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveCompendiumTooltipWidget_SetTooltipData_Statics::NewProp_tooltipViewData = { "tooltipViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveCompendiumTooltipWidget_eventSetTooltipData_Parms, tooltipViewData), Z_Construct_UScriptStruct_FCompendiumButtonData, METADATA_PARAMS(Z_Construct_UFunction_UArchiveCompendiumTooltipWidget_SetTooltipData_Statics::NewProp_tooltipViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveCompendiumTooltipWidget_SetTooltipData_Statics::NewProp_tooltipViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveCompendiumTooltipWidget_SetTooltipData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveCompendiumTooltipWidget_SetTooltipData_Statics::NewProp_tooltipViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveCompendiumTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveCompendiumTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveCompendiumTooltipWidget_SetTooltipData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveCompendiumTooltipWidget, nullptr, "SetTooltipData", nullptr, nullptr, sizeof(ArchiveCompendiumTooltipWidget_eventSetTooltipData_Parms), Z_Construct_UFunction_UArchiveCompendiumTooltipWidget_SetTooltipData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveCompendiumTooltipWidget_SetTooltipData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveCompendiumTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveCompendiumTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveCompendiumTooltipWidget_SetTooltipData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveCompendiumTooltipWidget_SetTooltipData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArchiveCompendiumTooltipWidget_NoRegister()
	{
		return UArchiveCompendiumTooltipWidget::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TomeTitleTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TomeTitleTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DescriptionTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoryLevelsSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StoryLevelsSelector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTooltipWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchiveCompendiumTooltipWidget_Reset, "Reset" }, // 3556164601
		{ &Z_Construct_UFunction_UArchiveCompendiumTooltipWidget_SetTooltipData, "SetTooltipData" }, // 2193831747
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ArchiveCompendiumTooltipWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArchiveCompendiumTooltipWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics::NewProp_TomeTitleTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ArchiveCompendiumTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArchiveCompendiumTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics::NewProp_TomeTitleTB = { "TomeTitleTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveCompendiumTooltipWidget, TomeTitleTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics::NewProp_TomeTitleTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics::NewProp_TomeTitleTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics::NewProp_DescriptionTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ArchiveCompendiumTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArchiveCompendiumTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics::NewProp_DescriptionTB = { "DescriptionTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveCompendiumTooltipWidget, DescriptionTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics::NewProp_DescriptionTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics::NewProp_DescriptionTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics::NewProp_StoryLevelsSelector_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ArchiveCompendiumTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArchiveCompendiumTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics::NewProp_StoryLevelsSelector = { "StoryLevelsSelector", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveCompendiumTooltipWidget, StoryLevelsSelector), Z_Construct_UClass_UCoreStoryLevelsSelectorWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics::NewProp_StoryLevelsSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics::NewProp_StoryLevelsSelector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics::NewProp_TomeTitleTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics::NewProp_DescriptionTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics::NewProp_StoryLevelsSelector,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchiveCompendiumTooltipWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics::ClassParams = {
		&UArchiveCompendiumTooltipWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveCompendiumTooltipWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveCompendiumTooltipWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveCompendiumTooltipWidget, 2273385108);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UArchiveCompendiumTooltipWidget>()
	{
		return UArchiveCompendiumTooltipWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveCompendiumTooltipWidget(Z_Construct_UClass_UArchiveCompendiumTooltipWidget, &UArchiveCompendiumTooltipWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UArchiveCompendiumTooltipWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveCompendiumTooltipWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
