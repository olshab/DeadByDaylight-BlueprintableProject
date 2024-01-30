// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/ArchiveNodeTooltipWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveNodeTooltipWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UArchiveNodeTooltipWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UArchiveNodeTooltipWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UTooltipWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EArchiveNodeType();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveNodeViewData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveObjectiveWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreCurrencyForTooltipsWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UArchiveNodeTooltipWidget::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveNodeTooltipWidget::execSetTooltipData)
	{
		P_GET_STRUCT_REF(FArchiveNodeViewData,Z_Param_Out_nodeViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTooltipData(Z_Param_Out_nodeViewData);
		P_NATIVE_END;
	}
	static FName NAME_UArchiveNodeTooltipWidget_SetNodeType = FName(TEXT("SetNodeType"));
	void UArchiveNodeTooltipWidget::SetNodeType(EArchiveNodeType type)
	{
		ArchiveNodeTooltipWidget_eventSetNodeType_Parms Parms;
		Parms.type=type;
		ProcessEvent(FindFunctionChecked(NAME_UArchiveNodeTooltipWidget_SetNodeType),&Parms);
	}
	void UArchiveNodeTooltipWidget::StaticRegisterNativesUArchiveNodeTooltipWidget()
	{
		UClass* Class = UArchiveNodeTooltipWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Reset", &UArchiveNodeTooltipWidget::execReset },
			{ "SetTooltipData", &UArchiveNodeTooltipWidget::execSetTooltipData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchiveNodeTooltipWidget_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveNodeTooltipWidget_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveNodeTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveNodeTooltipWidget_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveNodeTooltipWidget, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveNodeTooltipWidget_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveNodeTooltipWidget_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveNodeTooltipWidget_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveNodeTooltipWidget_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetNodeType_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetNodeType_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetNodeType_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveNodeTooltipWidget_eventSetNodeType_Parms, type), Z_Construct_UEnum_DBDSharedTypes_EArchiveNodeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetNodeType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetNodeType_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetNodeType_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetNodeType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveNodeTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetNodeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveNodeTooltipWidget, nullptr, "SetNodeType", nullptr, nullptr, sizeof(ArchiveNodeTooltipWidget_eventSetNodeType_Parms), Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetNodeType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetNodeType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetNodeType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetNodeType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetNodeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetNodeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetTooltipData_Statics
	{
		struct ArchiveNodeTooltipWidget_eventSetTooltipData_Parms
		{
			FArchiveNodeViewData nodeViewData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nodeViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_nodeViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetTooltipData_Statics::NewProp_nodeViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetTooltipData_Statics::NewProp_nodeViewData = { "nodeViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveNodeTooltipWidget_eventSetTooltipData_Parms, nodeViewData), Z_Construct_UScriptStruct_FArchiveNodeViewData, METADATA_PARAMS(Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetTooltipData_Statics::NewProp_nodeViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetTooltipData_Statics::NewProp_nodeViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetTooltipData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetTooltipData_Statics::NewProp_nodeViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveNodeTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetTooltipData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveNodeTooltipWidget, nullptr, "SetTooltipData", nullptr, nullptr, sizeof(ArchiveNodeTooltipWidget_eventSetTooltipData_Parms), Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetTooltipData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetTooltipData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetTooltipData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetTooltipData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArchiveNodeTooltipWidget_NoRegister()
	{
		return UArchiveNodeTooltipWidget::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundIMG_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackgroundIMG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RarityIMG_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RarityIMG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeTitleTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeTitleTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitleTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubtitleTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeDescriptionRTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeDescriptionRTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectiveWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RewardWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArchiveObjectivesContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArchiveObjectivesContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardsContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VignetteRTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VignetteRTB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTooltipWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchiveNodeTooltipWidget_Reset, "Reset" }, // 2710138017
		{ &Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetNodeType, "SetNodeType" }, // 2716081328
		{ &Z_Construct_UFunction_UArchiveNodeTooltipWidget_SetTooltipData, "SetTooltipData" }, // 151451291
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ArchiveNodeTooltipWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArchiveNodeTooltipWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_BackgroundIMG_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ArchiveNodeTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArchiveNodeTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_BackgroundIMG = { "BackgroundIMG", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveNodeTooltipWidget, BackgroundIMG), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_BackgroundIMG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_BackgroundIMG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_RarityIMG_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ArchiveNodeTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArchiveNodeTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_RarityIMG = { "RarityIMG", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveNodeTooltipWidget, RarityIMG), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_RarityIMG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_RarityIMG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_NodeTitleTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ArchiveNodeTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArchiveNodeTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_NodeTitleTB = { "NodeTitleTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveNodeTooltipWidget, NodeTitleTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_NodeTitleTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_NodeTitleTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_SubtitleTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ArchiveNodeTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArchiveNodeTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_SubtitleTB = { "SubtitleTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveNodeTooltipWidget, SubtitleTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_SubtitleTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_SubtitleTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_NodeDescriptionRTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ArchiveNodeTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArchiveNodeTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_NodeDescriptionRTB = { "NodeDescriptionRTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveNodeTooltipWidget, NodeDescriptionRTB), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_NodeDescriptionRTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_NodeDescriptionRTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_ObjectiveWidgetClass_MetaData[] = {
		{ "Category", "ArchiveNodeTooltipWidget" },
		{ "ModuleRelativePath", "Public/ArchiveNodeTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_ObjectiveWidgetClass = { "ObjectiveWidgetClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveNodeTooltipWidget, ObjectiveWidgetClass), Z_Construct_UClass_UCoreArchiveObjectiveWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_ObjectiveWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_ObjectiveWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_RewardWidgetClass_MetaData[] = {
		{ "Category", "ArchiveNodeTooltipWidget" },
		{ "ModuleRelativePath", "Public/ArchiveNodeTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_RewardWidgetClass = { "RewardWidgetClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveNodeTooltipWidget, RewardWidgetClass), Z_Construct_UClass_UCoreCurrencyForTooltipsWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_RewardWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_RewardWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_ArchiveObjectivesContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ArchiveNodeTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArchiveNodeTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_ArchiveObjectivesContainer = { "ArchiveObjectivesContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveNodeTooltipWidget, ArchiveObjectivesContainer), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_ArchiveObjectivesContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_ArchiveObjectivesContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_RewardsContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ArchiveNodeTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArchiveNodeTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_RewardsContainer = { "RewardsContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveNodeTooltipWidget, RewardsContainer), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_RewardsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_RewardsContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_VignetteRTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ArchiveNodeTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArchiveNodeTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_VignetteRTB = { "VignetteRTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveNodeTooltipWidget, VignetteRTB), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_VignetteRTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_VignetteRTB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_BackgroundIMG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_RarityIMG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_NodeTitleTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_SubtitleTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_NodeDescriptionRTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_ObjectiveWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_RewardWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_ArchiveObjectivesContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_RewardsContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::NewProp_VignetteRTB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchiveNodeTooltipWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::ClassParams = {
		&UArchiveNodeTooltipWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveNodeTooltipWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveNodeTooltipWidget, 2771337425);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UArchiveNodeTooltipWidget>()
	{
		return UArchiveNodeTooltipWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveNodeTooltipWidget(Z_Construct_UClass_UArchiveNodeTooltipWidget, &UArchiveNodeTooltipWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UArchiveNodeTooltipWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveNodeTooltipWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
