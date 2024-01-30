// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/LoadoutTooltipWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadoutTooltipWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_ULoadoutTooltipWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_ULoadoutTooltipWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UTooltipWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FLoadoutTooltipData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULoadoutTooltipWidget::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadoutTooltipWidget::execSetTooltipData)
	{
		P_GET_STRUCT_REF(FLoadoutTooltipData,Z_Param_Out_tooltipViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTooltipData(Z_Param_Out_tooltipViewData);
		P_NATIVE_END;
	}
	static FName NAME_ULoadoutTooltipWidget_SetLoadoutTooltipLockedState = FName(TEXT("SetLoadoutTooltipLockedState"));
	void ULoadoutTooltipWidget::SetLoadoutTooltipLockedState()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULoadoutTooltipWidget_SetLoadoutTooltipLockedState),NULL);
	}
	static FName NAME_ULoadoutTooltipWidget_SetLoadoutTooltipPerkLevel = FName(TEXT("SetLoadoutTooltipPerkLevel"));
	void ULoadoutTooltipWidget::SetLoadoutTooltipPerkLevel(int32 level)
	{
		LoadoutTooltipWidget_eventSetLoadoutTooltipPerkLevel_Parms Parms;
		Parms.level=level;
		ProcessEvent(FindFunctionChecked(NAME_ULoadoutTooltipWidget_SetLoadoutTooltipPerkLevel),&Parms);
	}
	void ULoadoutTooltipWidget::StaticRegisterNativesULoadoutTooltipWidget()
	{
		UClass* Class = ULoadoutTooltipWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Reset", &ULoadoutTooltipWidget::execReset },
			{ "SetTooltipData", &ULoadoutTooltipWidget::execSetTooltipData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoadoutTooltipWidget_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutTooltipWidget_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutTooltipWidget_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutTooltipWidget, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutTooltipWidget_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutTooltipWidget_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutTooltipWidget_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutTooltipWidget_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutTooltipWidget_SetLoadoutTooltipLockedState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutTooltipWidget_SetLoadoutTooltipLockedState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutTooltipWidget_SetLoadoutTooltipLockedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutTooltipWidget, nullptr, "SetLoadoutTooltipLockedState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutTooltipWidget_SetLoadoutTooltipLockedState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutTooltipWidget_SetLoadoutTooltipLockedState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutTooltipWidget_SetLoadoutTooltipLockedState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutTooltipWidget_SetLoadoutTooltipLockedState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutTooltipWidget_SetLoadoutTooltipPerkLevel_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULoadoutTooltipWidget_SetLoadoutTooltipPerkLevel_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutTooltipWidget_eventSetLoadoutTooltipPerkLevel_Parms, level), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutTooltipWidget_SetLoadoutTooltipPerkLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutTooltipWidget_SetLoadoutTooltipPerkLevel_Statics::NewProp_level,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutTooltipWidget_SetLoadoutTooltipPerkLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutTooltipWidget_SetLoadoutTooltipPerkLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutTooltipWidget, nullptr, "SetLoadoutTooltipPerkLevel", nullptr, nullptr, sizeof(LoadoutTooltipWidget_eventSetLoadoutTooltipPerkLevel_Parms), Z_Construct_UFunction_ULoadoutTooltipWidget_SetLoadoutTooltipPerkLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutTooltipWidget_SetLoadoutTooltipPerkLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutTooltipWidget_SetLoadoutTooltipPerkLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutTooltipWidget_SetLoadoutTooltipPerkLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutTooltipWidget_SetLoadoutTooltipPerkLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutTooltipWidget_SetLoadoutTooltipPerkLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutTooltipWidget_SetTooltipData_Statics
	{
		struct LoadoutTooltipWidget_eventSetTooltipData_Parms
		{
			FLoadoutTooltipData tooltipViewData;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutTooltipWidget_SetTooltipData_Statics::NewProp_tooltipViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULoadoutTooltipWidget_SetTooltipData_Statics::NewProp_tooltipViewData = { "tooltipViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutTooltipWidget_eventSetTooltipData_Parms, tooltipViewData), Z_Construct_UScriptStruct_FLoadoutTooltipData, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutTooltipWidget_SetTooltipData_Statics::NewProp_tooltipViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutTooltipWidget_SetTooltipData_Statics::NewProp_tooltipViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutTooltipWidget_SetTooltipData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutTooltipWidget_SetTooltipData_Statics::NewProp_tooltipViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutTooltipWidget_SetTooltipData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutTooltipWidget, nullptr, "SetTooltipData", nullptr, nullptr, sizeof(LoadoutTooltipWidget_eventSetTooltipData_Parms), Z_Construct_UFunction_ULoadoutTooltipWidget_SetTooltipData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutTooltipWidget_SetTooltipData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutTooltipWidget_SetTooltipData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutTooltipWidget_SetTooltipData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULoadoutTooltipWidget_NoRegister()
	{
		return ULoadoutTooltipWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULoadoutTooltipWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TooltipTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TooltipTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolTipDescriptionRTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToolTipDescriptionRTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialEventTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpecialEventTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialEventDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpecialEventDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockInstructionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnlockInstructionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RarityTypeSubtitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RarityTypeSubtitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RarityBG_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RarityBG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Line_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Line_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolTipWarning_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToolTipWarning;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadoutTooltipWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTooltipWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoadoutTooltipWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadoutTooltipWidget_Reset, "Reset" }, // 2023312104
		{ &Z_Construct_UFunction_ULoadoutTooltipWidget_SetLoadoutTooltipLockedState, "SetLoadoutTooltipLockedState" }, // 3369117464
		{ &Z_Construct_UFunction_ULoadoutTooltipWidget_SetLoadoutTooltipPerkLevel, "SetLoadoutTooltipPerkLevel" }, // 2601340728
		{ &Z_Construct_UFunction_ULoadoutTooltipWidget_SetTooltipData, "SetTooltipData" }, // 2937464905
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutTooltipWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LoadoutTooltipWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LoadoutTooltipWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_TooltipTitle_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_TooltipTitle = { "TooltipTitle", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutTooltipWidget, TooltipTitle), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_TooltipTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_TooltipTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_ToolTipDescriptionRTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_ToolTipDescriptionRTB = { "ToolTipDescriptionRTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutTooltipWidget, ToolTipDescriptionRTB), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_ToolTipDescriptionRTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_ToolTipDescriptionRTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_SpecialEventTitle_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_SpecialEventTitle = { "SpecialEventTitle", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutTooltipWidget, SpecialEventTitle), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_SpecialEventTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_SpecialEventTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_SpecialEventDescription_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_SpecialEventDescription = { "SpecialEventDescription", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutTooltipWidget, SpecialEventDescription), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_SpecialEventDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_SpecialEventDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_UnlockInstructionText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_UnlockInstructionText = { "UnlockInstructionText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutTooltipWidget, UnlockInstructionText), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_UnlockInstructionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_UnlockInstructionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_RarityTypeSubtitle_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_RarityTypeSubtitle = { "RarityTypeSubtitle", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutTooltipWidget, RarityTypeSubtitle), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_RarityTypeSubtitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_RarityTypeSubtitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_RarityBG_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_RarityBG = { "RarityBG", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutTooltipWidget, RarityBG), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_RarityBG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_RarityBG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_Line_1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_Line_1 = { "Line_1", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutTooltipWidget, Line_1), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_Line_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_Line_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_LevelIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_LevelIcon = { "LevelIcon", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutTooltipWidget, LevelIcon), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_LevelIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_LevelIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_ToolTipWarning_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_ToolTipWarning = { "ToolTipWarning", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutTooltipWidget, ToolTipWarning), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_ToolTipWarning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_ToolTipWarning_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadoutTooltipWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_TooltipTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_ToolTipDescriptionRTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_SpecialEventTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_SpecialEventDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_UnlockInstructionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_RarityTypeSubtitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_RarityBG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_Line_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_LevelIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutTooltipWidget_Statics::NewProp_ToolTipWarning,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadoutTooltipWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadoutTooltipWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoadoutTooltipWidget_Statics::ClassParams = {
		&ULoadoutTooltipWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULoadoutTooltipWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutTooltipWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoadoutTooltipWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutTooltipWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadoutTooltipWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoadoutTooltipWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadoutTooltipWidget, 2662085725);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<ULoadoutTooltipWidget>()
	{
		return ULoadoutTooltipWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadoutTooltipWidget(Z_Construct_UClass_ULoadoutTooltipWidget, &ULoadoutTooltipWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("ULoadoutTooltipWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadoutTooltipWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
