// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreCustomizationRewardWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreCustomizationRewardWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreCustomizationRewardWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreCustomizationRewardWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreRewardWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationRewardViewData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemRarity();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePriceTagWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreCustomizationRewardWidget::execDisplayEventPointIcon)
	{
		P_GET_UBOOL(Z_Param_show);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayEventPointIcon(Z_Param_show);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreCustomizationRewardWidget::execSetCustomizationRewardData)
	{
		P_GET_STRUCT_REF(FCustomizationRewardViewData,Z_Param_Out_customizationRewardViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomizationRewardData_Implementation(Z_Param_Out_customizationRewardViewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreCustomizationRewardWidget::execSetRarity)
	{
		P_GET_ENUM(EItemRarity,Z_Param_rarity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRarity(EItemRarity(Z_Param_rarity));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreCustomizationRewardWidget::execSetVisibleCurrencies)
	{
		P_GET_TARRAY(ECurrencyType,Z_Param_visibleCurrencyTypes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleCurrencies(Z_Param_visibleCurrencyTypes);
		P_NATIVE_END;
	}
	static FName NAME_UCoreCustomizationRewardWidget_HideTimeTexts = FName(TEXT("HideTimeTexts"));
	void UCoreCustomizationRewardWidget::HideTimeTexts()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreCustomizationRewardWidget_HideTimeTexts),NULL);
	}
	static FName NAME_UCoreCustomizationRewardWidget_SetCustomizationRewardData = FName(TEXT("SetCustomizationRewardData"));
	void UCoreCustomizationRewardWidget::SetCustomizationRewardData(FCustomizationRewardViewData const& customizationRewardViewData)
	{
		CoreCustomizationRewardWidget_eventSetCustomizationRewardData_Parms Parms;
		Parms.customizationRewardViewData=customizationRewardViewData;
		ProcessEvent(FindFunctionChecked(NAME_UCoreCustomizationRewardWidget_SetCustomizationRewardData),&Parms);
	}
	static FName NAME_UCoreCustomizationRewardWidget_SetDiscountTimeText = FName(TEXT("SetDiscountTimeText"));
	void UCoreCustomizationRewardWidget::SetDiscountTimeText(const FString& discountTimeText)
	{
		CoreCustomizationRewardWidget_eventSetDiscountTimeText_Parms Parms;
		Parms.discountTimeText=discountTimeText;
		ProcessEvent(FindFunctionChecked(NAME_UCoreCustomizationRewardWidget_SetDiscountTimeText),&Parms);
	}
	static FName NAME_UCoreCustomizationRewardWidget_SetLimitedTimeText = FName(TEXT("SetLimitedTimeText"));
	void UCoreCustomizationRewardWidget::SetLimitedTimeText(const FString& limitedTimeText)
	{
		CoreCustomizationRewardWidget_eventSetLimitedTimeText_Parms Parms;
		Parms.limitedTimeText=limitedTimeText;
		ProcessEvent(FindFunctionChecked(NAME_UCoreCustomizationRewardWidget_SetLimitedTimeText),&Parms);
	}
	static FName NAME_UCoreCustomizationRewardWidget_SetMilestoneTrackerOwnedVisuals = FName(TEXT("SetMilestoneTrackerOwnedVisuals"));
	void UCoreCustomizationRewardWidget::SetMilestoneTrackerOwnedVisuals(bool isOwned, bool useAnimation)
	{
		CoreCustomizationRewardWidget_eventSetMilestoneTrackerOwnedVisuals_Parms Parms;
		Parms.isOwned=isOwned ? true : false;
		Parms.useAnimation=useAnimation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreCustomizationRewardWidget_SetMilestoneTrackerOwnedVisuals),&Parms);
	}
	static FName NAME_UCoreCustomizationRewardWidget_SetOwnedText = FName(TEXT("SetOwnedText"));
	void UCoreCustomizationRewardWidget::SetOwnedText(FText const& ownedText)
	{
		CoreCustomizationRewardWidget_eventSetOwnedText_Parms Parms;
		Parms.ownedText=ownedText;
		ProcessEvent(FindFunctionChecked(NAME_UCoreCustomizationRewardWidget_SetOwnedText),&Parms);
	}
	void UCoreCustomizationRewardWidget::StaticRegisterNativesUCoreCustomizationRewardWidget()
	{
		UClass* Class = UCoreCustomizationRewardWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayEventPointIcon", &UCoreCustomizationRewardWidget::execDisplayEventPointIcon },
			{ "SetCustomizationRewardData", &UCoreCustomizationRewardWidget::execSetCustomizationRewardData },
			{ "SetRarity", &UCoreCustomizationRewardWidget::execSetRarity },
			{ "SetVisibleCurrencies", &UCoreCustomizationRewardWidget::execSetVisibleCurrencies },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreCustomizationRewardWidget_DisplayEventPointIcon_Statics
	{
		struct CoreCustomizationRewardWidget_eventDisplayEventPointIcon_Parms
		{
			bool show;
		};
		static void NewProp_show_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_show;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreCustomizationRewardWidget_DisplayEventPointIcon_Statics::NewProp_show_SetBit(void* Obj)
	{
		((CoreCustomizationRewardWidget_eventDisplayEventPointIcon_Parms*)Obj)->show = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreCustomizationRewardWidget_DisplayEventPointIcon_Statics::NewProp_show = { "show", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreCustomizationRewardWidget_eventDisplayEventPointIcon_Parms), &Z_Construct_UFunction_UCoreCustomizationRewardWidget_DisplayEventPointIcon_Statics::NewProp_show_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreCustomizationRewardWidget_DisplayEventPointIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreCustomizationRewardWidget_DisplayEventPointIcon_Statics::NewProp_show,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCustomizationRewardWidget_DisplayEventPointIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreCustomizationRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreCustomizationRewardWidget_DisplayEventPointIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreCustomizationRewardWidget, nullptr, "DisplayEventPointIcon", nullptr, nullptr, sizeof(CoreCustomizationRewardWidget_eventDisplayEventPointIcon_Parms), Z_Construct_UFunction_UCoreCustomizationRewardWidget_DisplayEventPointIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCustomizationRewardWidget_DisplayEventPointIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreCustomizationRewardWidget_DisplayEventPointIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCustomizationRewardWidget_DisplayEventPointIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreCustomizationRewardWidget_DisplayEventPointIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreCustomizationRewardWidget_DisplayEventPointIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreCustomizationRewardWidget_HideTimeTexts_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCustomizationRewardWidget_HideTimeTexts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreCustomizationRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreCustomizationRewardWidget_HideTimeTexts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreCustomizationRewardWidget, nullptr, "HideTimeTexts", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreCustomizationRewardWidget_HideTimeTexts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCustomizationRewardWidget_HideTimeTexts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreCustomizationRewardWidget_HideTimeTexts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreCustomizationRewardWidget_HideTimeTexts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetCustomizationRewardData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_customizationRewardViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_customizationRewardViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetCustomizationRewardData_Statics::NewProp_customizationRewardViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetCustomizationRewardData_Statics::NewProp_customizationRewardViewData = { "customizationRewardViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreCustomizationRewardWidget_eventSetCustomizationRewardData_Parms, customizationRewardViewData), Z_Construct_UScriptStruct_FCustomizationRewardViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetCustomizationRewardData_Statics::NewProp_customizationRewardViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetCustomizationRewardData_Statics::NewProp_customizationRewardViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetCustomizationRewardData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetCustomizationRewardData_Statics::NewProp_customizationRewardViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetCustomizationRewardData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreCustomizationRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetCustomizationRewardData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreCustomizationRewardWidget, nullptr, "SetCustomizationRewardData", nullptr, nullptr, sizeof(CoreCustomizationRewardWidget_eventSetCustomizationRewardData_Parms), Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetCustomizationRewardData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetCustomizationRewardData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetCustomizationRewardData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetCustomizationRewardData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetCustomizationRewardData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetCustomizationRewardData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetDiscountTimeText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_discountTimeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_discountTimeText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetDiscountTimeText_Statics::NewProp_discountTimeText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetDiscountTimeText_Statics::NewProp_discountTimeText = { "discountTimeText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreCustomizationRewardWidget_eventSetDiscountTimeText_Parms, discountTimeText), METADATA_PARAMS(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetDiscountTimeText_Statics::NewProp_discountTimeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetDiscountTimeText_Statics::NewProp_discountTimeText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetDiscountTimeText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetDiscountTimeText_Statics::NewProp_discountTimeText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetDiscountTimeText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreCustomizationRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetDiscountTimeText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreCustomizationRewardWidget, nullptr, "SetDiscountTimeText", nullptr, nullptr, sizeof(CoreCustomizationRewardWidget_eventSetDiscountTimeText_Parms), Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetDiscountTimeText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetDiscountTimeText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetDiscountTimeText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetDiscountTimeText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetDiscountTimeText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetDiscountTimeText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetLimitedTimeText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_limitedTimeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_limitedTimeText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetLimitedTimeText_Statics::NewProp_limitedTimeText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetLimitedTimeText_Statics::NewProp_limitedTimeText = { "limitedTimeText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreCustomizationRewardWidget_eventSetLimitedTimeText_Parms, limitedTimeText), METADATA_PARAMS(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetLimitedTimeText_Statics::NewProp_limitedTimeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetLimitedTimeText_Statics::NewProp_limitedTimeText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetLimitedTimeText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetLimitedTimeText_Statics::NewProp_limitedTimeText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetLimitedTimeText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreCustomizationRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetLimitedTimeText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreCustomizationRewardWidget, nullptr, "SetLimitedTimeText", nullptr, nullptr, sizeof(CoreCustomizationRewardWidget_eventSetLimitedTimeText_Parms), Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetLimitedTimeText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetLimitedTimeText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetLimitedTimeText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetLimitedTimeText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetLimitedTimeText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetLimitedTimeText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetMilestoneTrackerOwnedVisuals_Statics
	{
		static void NewProp_isOwned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOwned;
		static void NewProp_useAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetMilestoneTrackerOwnedVisuals_Statics::NewProp_isOwned_SetBit(void* Obj)
	{
		((CoreCustomizationRewardWidget_eventSetMilestoneTrackerOwnedVisuals_Parms*)Obj)->isOwned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetMilestoneTrackerOwnedVisuals_Statics::NewProp_isOwned = { "isOwned", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreCustomizationRewardWidget_eventSetMilestoneTrackerOwnedVisuals_Parms), &Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetMilestoneTrackerOwnedVisuals_Statics::NewProp_isOwned_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetMilestoneTrackerOwnedVisuals_Statics::NewProp_useAnimation_SetBit(void* Obj)
	{
		((CoreCustomizationRewardWidget_eventSetMilestoneTrackerOwnedVisuals_Parms*)Obj)->useAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetMilestoneTrackerOwnedVisuals_Statics::NewProp_useAnimation = { "useAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreCustomizationRewardWidget_eventSetMilestoneTrackerOwnedVisuals_Parms), &Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetMilestoneTrackerOwnedVisuals_Statics::NewProp_useAnimation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetMilestoneTrackerOwnedVisuals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetMilestoneTrackerOwnedVisuals_Statics::NewProp_isOwned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetMilestoneTrackerOwnedVisuals_Statics::NewProp_useAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetMilestoneTrackerOwnedVisuals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreCustomizationRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetMilestoneTrackerOwnedVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreCustomizationRewardWidget, nullptr, "SetMilestoneTrackerOwnedVisuals", nullptr, nullptr, sizeof(CoreCustomizationRewardWidget_eventSetMilestoneTrackerOwnedVisuals_Parms), Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetMilestoneTrackerOwnedVisuals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetMilestoneTrackerOwnedVisuals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetMilestoneTrackerOwnedVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetMilestoneTrackerOwnedVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetMilestoneTrackerOwnedVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetMilestoneTrackerOwnedVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetOwnedText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ownedText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ownedText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetOwnedText_Statics::NewProp_ownedText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetOwnedText_Statics::NewProp_ownedText = { "ownedText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreCustomizationRewardWidget_eventSetOwnedText_Parms, ownedText), METADATA_PARAMS(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetOwnedText_Statics::NewProp_ownedText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetOwnedText_Statics::NewProp_ownedText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetOwnedText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetOwnedText_Statics::NewProp_ownedText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetOwnedText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreCustomizationRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetOwnedText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreCustomizationRewardWidget, nullptr, "SetOwnedText", nullptr, nullptr, sizeof(CoreCustomizationRewardWidget_eventSetOwnedText_Parms), Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetOwnedText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetOwnedText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetOwnedText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetOwnedText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetOwnedText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetOwnedText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetRarity_Statics
	{
		struct CoreCustomizationRewardWidget_eventSetRarity_Parms
		{
			EItemRarity rarity;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rarity_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_rarity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetRarity_Statics::NewProp_rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetRarity_Statics::NewProp_rarity = { "rarity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreCustomizationRewardWidget_eventSetRarity_Parms, rarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetRarity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetRarity_Statics::NewProp_rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetRarity_Statics::NewProp_rarity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetRarity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreCustomizationRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetRarity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreCustomizationRewardWidget, nullptr, "SetRarity", nullptr, nullptr, sizeof(CoreCustomizationRewardWidget_eventSetRarity_Parms), Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetRarity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetRarity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetRarity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetRarity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetRarity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetRarity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetVisibleCurrencies_Statics
	{
		struct CoreCustomizationRewardWidget_eventSetVisibleCurrencies_Parms
		{
			TArray<ECurrencyType> visibleCurrencyTypes;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_visibleCurrencyTypes_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_visibleCurrencyTypes_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_visibleCurrencyTypes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetVisibleCurrencies_Statics::NewProp_visibleCurrencyTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetVisibleCurrencies_Statics::NewProp_visibleCurrencyTypes_Inner = { "visibleCurrencyTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetVisibleCurrencies_Statics::NewProp_visibleCurrencyTypes = { "visibleCurrencyTypes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreCustomizationRewardWidget_eventSetVisibleCurrencies_Parms, visibleCurrencyTypes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetVisibleCurrencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetVisibleCurrencies_Statics::NewProp_visibleCurrencyTypes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetVisibleCurrencies_Statics::NewProp_visibleCurrencyTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetVisibleCurrencies_Statics::NewProp_visibleCurrencyTypes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetVisibleCurrencies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreCustomizationRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetVisibleCurrencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreCustomizationRewardWidget, nullptr, "SetVisibleCurrencies", nullptr, nullptr, sizeof(CoreCustomizationRewardWidget_eventSetVisibleCurrencies_Parms), Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetVisibleCurrencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetVisibleCurrencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetVisibleCurrencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetVisibleCurrencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetVisibleCurrencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetVisibleCurrencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreCustomizationRewardWidget_NoRegister()
	{
		return UCoreCustomizationRewardWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__priceTagPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__priceTagPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriceTagWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PriceTagWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RarityIMG_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RarityIMG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventPointsImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventPointsImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckmarkImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CheckmarkImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriceTagsVerticalBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PriceTagsVerticalBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreRewardWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreCustomizationRewardWidget_DisplayEventPointIcon, "DisplayEventPointIcon" }, // 862323785
		{ &Z_Construct_UFunction_UCoreCustomizationRewardWidget_HideTimeTexts, "HideTimeTexts" }, // 3521667377
		{ &Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetCustomizationRewardData, "SetCustomizationRewardData" }, // 1970738665
		{ &Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetDiscountTimeText, "SetDiscountTimeText" }, // 758657599
		{ &Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetLimitedTimeText, "SetLimitedTimeText" }, // 3150133933
		{ &Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetMilestoneTrackerOwnedVisuals, "SetMilestoneTrackerOwnedVisuals" }, // 2512927547
		{ &Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetOwnedText, "SetOwnedText" }, // 2431637853
		{ &Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetRarity, "SetRarity" }, // 2020186077
		{ &Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetVisibleCurrencies, "SetVisibleCurrencies" }, // 3090107136
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreCustomizationRewardWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreCustomizationRewardWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp__priceTagPadding_MetaData[] = {
		{ "Category", "CoreCustomizationRewardWidget" },
		{ "ModuleRelativePath", "Public/CoreCustomizationRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp__priceTagPadding = { "_priceTagPadding", nullptr, (EPropertyFlags)0x0020080002000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreCustomizationRewardWidget, _priceTagPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp__priceTagPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp__priceTagPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp_PriceTagWidgetClass_MetaData[] = {
		{ "Category", "CoreCustomizationRewardWidget" },
		{ "ModuleRelativePath", "Public/CoreCustomizationRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp_PriceTagWidgetClass = { "PriceTagWidgetClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreCustomizationRewardWidget, PriceTagWidgetClass), Z_Construct_UClass_UCorePriceTagWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp_PriceTagWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp_PriceTagWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp_RarityIMG_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreCustomizationRewardWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreCustomizationRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp_RarityIMG = { "RarityIMG", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreCustomizationRewardWidget, RarityIMG), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp_RarityIMG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp_RarityIMG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp_EventPointsImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreCustomizationRewardWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreCustomizationRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp_EventPointsImage = { "EventPointsImage", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreCustomizationRewardWidget, EventPointsImage), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp_EventPointsImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp_EventPointsImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp_CheckmarkImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreCustomizationRewardWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreCustomizationRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp_CheckmarkImage = { "CheckmarkImage", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreCustomizationRewardWidget, CheckmarkImage), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp_CheckmarkImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp_CheckmarkImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp_PriceTagsVerticalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreCustomizationRewardWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreCustomizationRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp_PriceTagsVerticalBox = { "PriceTagsVerticalBox", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreCustomizationRewardWidget, PriceTagsVerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp_PriceTagsVerticalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp_PriceTagsVerticalBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp__data_MetaData[] = {
		{ "Category", "CoreCustomizationRewardWidget" },
		{ "ModuleRelativePath", "Public/CoreCustomizationRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp__data = { "_data", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreCustomizationRewardWidget, _data), Z_Construct_UScriptStruct_FCustomizationRewardViewData, METADATA_PARAMS(Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp__data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp__data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp__priceTagPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp_PriceTagWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp_RarityIMG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp_EventPointsImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp_CheckmarkImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp_PriceTagsVerticalBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::NewProp__data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreCustomizationRewardWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::ClassParams = {
		&UCoreCustomizationRewardWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreCustomizationRewardWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreCustomizationRewardWidget, 457860219);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreCustomizationRewardWidget>()
	{
		return UCoreCustomizationRewardWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreCustomizationRewardWidget(Z_Construct_UClass_UCoreCustomizationRewardWidget, &UCoreCustomizationRewardWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreCustomizationRewardWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreCustomizationRewardWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
