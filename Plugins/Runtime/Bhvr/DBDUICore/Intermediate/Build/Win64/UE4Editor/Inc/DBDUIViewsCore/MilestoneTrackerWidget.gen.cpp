// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/MilestoneTrackerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMilestoneTrackerWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UMilestoneTrackerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UMilestoneTrackerWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FMilestoneTrackerViewData();
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UEventPointsWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UMilestoneTrackerTierItem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMilestoneTrackerWidget::execDeselectMilestoneRewards)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeselectMilestoneRewards();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMilestoneTrackerWidget::execOnRewardItemClicked)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_buttonTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRewardItemClicked(Z_Param_buttonTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMilestoneTrackerWidget::execSelectMilestoneTrackerItem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_itemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectMilestoneTrackerItem(Z_Param_itemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMilestoneTrackerWidget::execSetData)
	{
		P_GET_STRUCT_REF(FMilestoneTrackerViewData,Z_Param_Out_viewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_Out_viewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMilestoneTrackerWidget::execSetVisuals)
	{
		P_GET_STRUCT_REF(FMilestoneTrackerEventBasedSkinViewData,Z_Param_Out_viewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisuals(Z_Param_Out_viewData);
		P_NATIVE_END;
	}
	void UMilestoneTrackerWidget::StaticRegisterNativesUMilestoneTrackerWidget()
	{
		UClass* Class = UMilestoneTrackerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeselectMilestoneRewards", &UMilestoneTrackerWidget::execDeselectMilestoneRewards },
			{ "OnRewardItemClicked", &UMilestoneTrackerWidget::execOnRewardItemClicked },
			{ "SelectMilestoneTrackerItem", &UMilestoneTrackerWidget::execSelectMilestoneTrackerItem },
			{ "SetData", &UMilestoneTrackerWidget::execSetData },
			{ "SetVisuals", &UMilestoneTrackerWidget::execSetVisuals },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMilestoneTrackerWidget_DeselectMilestoneRewards_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMilestoneTrackerWidget_DeselectMilestoneRewards_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MilestoneTrackerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMilestoneTrackerWidget_DeselectMilestoneRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMilestoneTrackerWidget, nullptr, "DeselectMilestoneRewards", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMilestoneTrackerWidget_DeselectMilestoneRewards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMilestoneTrackerWidget_DeselectMilestoneRewards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMilestoneTrackerWidget_DeselectMilestoneRewards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMilestoneTrackerWidget_DeselectMilestoneRewards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMilestoneTrackerWidget_OnRewardItemClicked_Statics
	{
		struct MilestoneTrackerWidget_eventOnRewardItemClicked_Parms
		{
			UCoreButtonWidget* buttonTarget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_buttonTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMilestoneTrackerWidget_OnRewardItemClicked_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMilestoneTrackerWidget_OnRewardItemClicked_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MilestoneTrackerWidget_eventOnRewardItemClicked_Parms, buttonTarget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMilestoneTrackerWidget_OnRewardItemClicked_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMilestoneTrackerWidget_OnRewardItemClicked_Statics::NewProp_buttonTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMilestoneTrackerWidget_OnRewardItemClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMilestoneTrackerWidget_OnRewardItemClicked_Statics::NewProp_buttonTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMilestoneTrackerWidget_OnRewardItemClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MilestoneTrackerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMilestoneTrackerWidget_OnRewardItemClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMilestoneTrackerWidget, nullptr, "OnRewardItemClicked", nullptr, nullptr, sizeof(MilestoneTrackerWidget_eventOnRewardItemClicked_Parms), Z_Construct_UFunction_UMilestoneTrackerWidget_OnRewardItemClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMilestoneTrackerWidget_OnRewardItemClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMilestoneTrackerWidget_OnRewardItemClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMilestoneTrackerWidget_OnRewardItemClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMilestoneTrackerWidget_OnRewardItemClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMilestoneTrackerWidget_OnRewardItemClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMilestoneTrackerWidget_SelectMilestoneTrackerItem_Statics
	{
		struct MilestoneTrackerWidget_eventSelectMilestoneTrackerItem_Parms
		{
			FName itemId;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_itemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMilestoneTrackerWidget_SelectMilestoneTrackerItem_Statics::NewProp_itemId = { "itemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MilestoneTrackerWidget_eventSelectMilestoneTrackerItem_Parms, itemId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMilestoneTrackerWidget_SelectMilestoneTrackerItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMilestoneTrackerWidget_SelectMilestoneTrackerItem_Statics::NewProp_itemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMilestoneTrackerWidget_SelectMilestoneTrackerItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MilestoneTrackerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMilestoneTrackerWidget_SelectMilestoneTrackerItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMilestoneTrackerWidget, nullptr, "SelectMilestoneTrackerItem", nullptr, nullptr, sizeof(MilestoneTrackerWidget_eventSelectMilestoneTrackerItem_Parms), Z_Construct_UFunction_UMilestoneTrackerWidget_SelectMilestoneTrackerItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMilestoneTrackerWidget_SelectMilestoneTrackerItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMilestoneTrackerWidget_SelectMilestoneTrackerItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMilestoneTrackerWidget_SelectMilestoneTrackerItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMilestoneTrackerWidget_SelectMilestoneTrackerItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMilestoneTrackerWidget_SelectMilestoneTrackerItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMilestoneTrackerWidget_SetData_Statics
	{
		struct MilestoneTrackerWidget_eventSetData_Parms
		{
			FMilestoneTrackerViewData viewData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_viewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMilestoneTrackerWidget_SetData_Statics::NewProp_viewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMilestoneTrackerWidget_SetData_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MilestoneTrackerWidget_eventSetData_Parms, viewData), Z_Construct_UScriptStruct_FMilestoneTrackerViewData, METADATA_PARAMS(Z_Construct_UFunction_UMilestoneTrackerWidget_SetData_Statics::NewProp_viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMilestoneTrackerWidget_SetData_Statics::NewProp_viewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMilestoneTrackerWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMilestoneTrackerWidget_SetData_Statics::NewProp_viewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMilestoneTrackerWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MilestoneTrackerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMilestoneTrackerWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMilestoneTrackerWidget, nullptr, "SetData", nullptr, nullptr, sizeof(MilestoneTrackerWidget_eventSetData_Parms), Z_Construct_UFunction_UMilestoneTrackerWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMilestoneTrackerWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMilestoneTrackerWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMilestoneTrackerWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMilestoneTrackerWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMilestoneTrackerWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMilestoneTrackerWidget_SetVisuals_Statics
	{
		struct MilestoneTrackerWidget_eventSetVisuals_Parms
		{
			FMilestoneTrackerEventBasedSkinViewData viewData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_viewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMilestoneTrackerWidget_SetVisuals_Statics::NewProp_viewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMilestoneTrackerWidget_SetVisuals_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MilestoneTrackerWidget_eventSetVisuals_Parms, viewData), Z_Construct_UScriptStruct_FMilestoneTrackerEventBasedSkinViewData, METADATA_PARAMS(Z_Construct_UFunction_UMilestoneTrackerWidget_SetVisuals_Statics::NewProp_viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMilestoneTrackerWidget_SetVisuals_Statics::NewProp_viewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMilestoneTrackerWidget_SetVisuals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMilestoneTrackerWidget_SetVisuals_Statics::NewProp_viewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMilestoneTrackerWidget_SetVisuals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MilestoneTrackerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMilestoneTrackerWidget_SetVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMilestoneTrackerWidget, nullptr, "SetVisuals", nullptr, nullptr, sizeof(MilestoneTrackerWidget_eventSetVisuals_Parms), Z_Construct_UFunction_UMilestoneTrackerWidget_SetVisuals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMilestoneTrackerWidget_SetVisuals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMilestoneTrackerWidget_SetVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMilestoneTrackerWidget_SetVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMilestoneTrackerWidget_SetVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMilestoneTrackerWidget_SetVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMilestoneTrackerWidget_NoRegister()
	{
		return UMilestoneTrackerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMilestoneTrackerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MilestonePointsText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MilestonePointsText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserMilestonePointsWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserMilestonePointsWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardsGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardsGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Background;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__milestoneTrackerTierItemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__milestoneTrackerTierItemClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxTierItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__maxTierItems;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tierItemPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tierItemPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__tierItemPool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMilestoneTrackerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMilestoneTrackerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMilestoneTrackerWidget_DeselectMilestoneRewards, "DeselectMilestoneRewards" }, // 3432488590
		{ &Z_Construct_UFunction_UMilestoneTrackerWidget_OnRewardItemClicked, "OnRewardItemClicked" }, // 445171715
		{ &Z_Construct_UFunction_UMilestoneTrackerWidget_SelectMilestoneTrackerItem, "SelectMilestoneTrackerItem" }, // 1167778234
		{ &Z_Construct_UFunction_UMilestoneTrackerWidget_SetData, "SetData" }, // 531487621
		{ &Z_Construct_UFunction_UMilestoneTrackerWidget_SetVisuals, "SetVisuals" }, // 2424240036
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMilestoneTrackerWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MilestoneTrackerWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MilestoneTrackerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp_Title_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MilestoneTrackerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MilestoneTrackerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMilestoneTrackerWidget, Title), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp_MilestonePointsText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MilestoneTrackerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MilestoneTrackerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp_MilestonePointsText = { "MilestonePointsText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMilestoneTrackerWidget, MilestonePointsText), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp_MilestonePointsText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp_MilestonePointsText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp_UserMilestonePointsWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MilestoneTrackerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MilestoneTrackerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp_UserMilestonePointsWidget = { "UserMilestonePointsWidget", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMilestoneTrackerWidget, UserMilestonePointsWidget), Z_Construct_UClass_UEventPointsWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp_UserMilestonePointsWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp_UserMilestonePointsWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp_RewardsGrid_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MilestoneTrackerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MilestoneTrackerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp_RewardsGrid = { "RewardsGrid", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMilestoneTrackerWidget, RewardsGrid), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp_RewardsGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp_RewardsGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp_Background_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MilestoneTrackerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MilestoneTrackerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMilestoneTrackerWidget, Background), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp_Background_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp_Background_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp__milestoneTrackerTierItemClass_MetaData[] = {
		{ "Category", "MilestoneTrackerWidget" },
		{ "ModuleRelativePath", "Public/MilestoneTrackerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp__milestoneTrackerTierItemClass = { "_milestoneTrackerTierItemClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMilestoneTrackerWidget, _milestoneTrackerTierItemClass), Z_Construct_UClass_UMilestoneTrackerTierItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp__milestoneTrackerTierItemClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp__milestoneTrackerTierItemClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp__maxTierItems_MetaData[] = {
		{ "Category", "MilestoneTrackerWidget" },
		{ "ModuleRelativePath", "Public/MilestoneTrackerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp__maxTierItems = { "_maxTierItems", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMilestoneTrackerWidget, _maxTierItems), METADATA_PARAMS(Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp__maxTierItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp__maxTierItems_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp__tierItemPool_Inner = { "_tierItemPool", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMilestoneTrackerTierItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp__tierItemPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MilestoneTrackerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MilestoneTrackerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp__tierItemPool = { "_tierItemPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMilestoneTrackerWidget, _tierItemPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp__tierItemPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp__tierItemPool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMilestoneTrackerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp_MilestonePointsText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp_UserMilestonePointsWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp_RewardsGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp_Background,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp__milestoneTrackerTierItemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp__maxTierItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp__tierItemPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMilestoneTrackerWidget_Statics::NewProp__tierItemPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMilestoneTrackerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMilestoneTrackerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMilestoneTrackerWidget_Statics::ClassParams = {
		&UMilestoneTrackerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMilestoneTrackerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMilestoneTrackerWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMilestoneTrackerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMilestoneTrackerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMilestoneTrackerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMilestoneTrackerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMilestoneTrackerWidget, 3355699662);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UMilestoneTrackerWidget>()
	{
		return UMilestoneTrackerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMilestoneTrackerWidget(Z_Construct_UClass_UMilestoneTrackerWidget, &UMilestoneTrackerWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UMilestoneTrackerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMilestoneTrackerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
