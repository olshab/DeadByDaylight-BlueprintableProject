// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/MilestoneTrackerTierItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMilestoneTrackerTierItem() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UMilestoneTrackerTierItem_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UMilestoneTrackerTierItem();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData();
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EMilestoneTrackerItemState();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCustomizationItemWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UEventPointsWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMilestoneTrackerTierItem::execClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMilestoneTrackerTierItem::execOnBackgroundImageLoadingCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackgroundImageLoadingCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMilestoneTrackerTierItem::execOnBackgroundImageLoadingStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackgroundImageLoadingStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMilestoneTrackerTierItem::execSetData)
	{
		P_GET_STRUCT_REF(FMilestoneTrackerItemViewData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMilestoneTrackerTierItem::execUpdateBackground)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UMaterialInstance>,Z_Param_background);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBackground(Z_Param_background);
		P_NATIVE_END;
	}
	static FName NAME_UMilestoneTrackerTierItem_SetVisualState = FName(TEXT("SetVisualState"));
	void UMilestoneTrackerTierItem::SetVisualState(const EMilestoneTrackerItemState state)
	{
		MilestoneTrackerTierItem_eventSetVisualState_Parms Parms;
		Parms.state=state;
		ProcessEvent(FindFunctionChecked(NAME_UMilestoneTrackerTierItem_SetVisualState),&Parms);
	}
	void UMilestoneTrackerTierItem::StaticRegisterNativesUMilestoneTrackerTierItem()
	{
		UClass* Class = UMilestoneTrackerTierItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear", &UMilestoneTrackerTierItem::execClear },
			{ "OnBackgroundImageLoadingCompleted", &UMilestoneTrackerTierItem::execOnBackgroundImageLoadingCompleted },
			{ "OnBackgroundImageLoadingStarted", &UMilestoneTrackerTierItem::execOnBackgroundImageLoadingStarted },
			{ "SetData", &UMilestoneTrackerTierItem::execSetData },
			{ "UpdateBackground", &UMilestoneTrackerTierItem::execUpdateBackground },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMilestoneTrackerTierItem_Clear_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMilestoneTrackerTierItem_Clear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MilestoneTrackerTierItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMilestoneTrackerTierItem_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMilestoneTrackerTierItem, nullptr, "Clear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMilestoneTrackerTierItem_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMilestoneTrackerTierItem_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMilestoneTrackerTierItem_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMilestoneTrackerTierItem_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMilestoneTrackerTierItem_OnBackgroundImageLoadingCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMilestoneTrackerTierItem_OnBackgroundImageLoadingCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MilestoneTrackerTierItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMilestoneTrackerTierItem_OnBackgroundImageLoadingCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMilestoneTrackerTierItem, nullptr, "OnBackgroundImageLoadingCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMilestoneTrackerTierItem_OnBackgroundImageLoadingCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMilestoneTrackerTierItem_OnBackgroundImageLoadingCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMilestoneTrackerTierItem_OnBackgroundImageLoadingCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMilestoneTrackerTierItem_OnBackgroundImageLoadingCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMilestoneTrackerTierItem_OnBackgroundImageLoadingStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMilestoneTrackerTierItem_OnBackgroundImageLoadingStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MilestoneTrackerTierItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMilestoneTrackerTierItem_OnBackgroundImageLoadingStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMilestoneTrackerTierItem, nullptr, "OnBackgroundImageLoadingStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMilestoneTrackerTierItem_OnBackgroundImageLoadingStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMilestoneTrackerTierItem_OnBackgroundImageLoadingStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMilestoneTrackerTierItem_OnBackgroundImageLoadingStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMilestoneTrackerTierItem_OnBackgroundImageLoadingStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMilestoneTrackerTierItem_SetData_Statics
	{
		struct MilestoneTrackerTierItem_eventSetData_Parms
		{
			FMilestoneTrackerItemViewData data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMilestoneTrackerTierItem_SetData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMilestoneTrackerTierItem_SetData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MilestoneTrackerTierItem_eventSetData_Parms, data), Z_Construct_UScriptStruct_FMilestoneTrackerItemViewData, METADATA_PARAMS(Z_Construct_UFunction_UMilestoneTrackerTierItem_SetData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMilestoneTrackerTierItem_SetData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMilestoneTrackerTierItem_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMilestoneTrackerTierItem_SetData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMilestoneTrackerTierItem_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MilestoneTrackerTierItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMilestoneTrackerTierItem_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMilestoneTrackerTierItem, nullptr, "SetData", nullptr, nullptr, sizeof(MilestoneTrackerTierItem_eventSetData_Parms), Z_Construct_UFunction_UMilestoneTrackerTierItem_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMilestoneTrackerTierItem_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMilestoneTrackerTierItem_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMilestoneTrackerTierItem_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMilestoneTrackerTierItem_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMilestoneTrackerTierItem_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMilestoneTrackerTierItem_SetVisualState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_state_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMilestoneTrackerTierItem_SetVisualState_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMilestoneTrackerTierItem_SetVisualState_Statics::NewProp_state_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMilestoneTrackerTierItem_SetVisualState_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MilestoneTrackerTierItem_eventSetVisualState_Parms, state), Z_Construct_UEnum_DBDUIViewInterfaces_EMilestoneTrackerItemState, METADATA_PARAMS(Z_Construct_UFunction_UMilestoneTrackerTierItem_SetVisualState_Statics::NewProp_state_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMilestoneTrackerTierItem_SetVisualState_Statics::NewProp_state_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMilestoneTrackerTierItem_SetVisualState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMilestoneTrackerTierItem_SetVisualState_Statics::NewProp_state_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMilestoneTrackerTierItem_SetVisualState_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMilestoneTrackerTierItem_SetVisualState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MilestoneTrackerTierItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMilestoneTrackerTierItem_SetVisualState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMilestoneTrackerTierItem, nullptr, "SetVisualState", nullptr, nullptr, sizeof(MilestoneTrackerTierItem_eventSetVisualState_Parms), Z_Construct_UFunction_UMilestoneTrackerTierItem_SetVisualState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMilestoneTrackerTierItem_SetVisualState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMilestoneTrackerTierItem_SetVisualState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMilestoneTrackerTierItem_SetVisualState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMilestoneTrackerTierItem_SetVisualState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMilestoneTrackerTierItem_SetVisualState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMilestoneTrackerTierItem_UpdateBackground_Statics
	{
		struct MilestoneTrackerTierItem_eventUpdateBackground_Parms
		{
			TSoftObjectPtr<UMaterialInstance> background;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_background_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_background;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMilestoneTrackerTierItem_UpdateBackground_Statics::NewProp_background_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UMilestoneTrackerTierItem_UpdateBackground_Statics::NewProp_background = { "background", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MilestoneTrackerTierItem_eventUpdateBackground_Parms, background), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMilestoneTrackerTierItem_UpdateBackground_Statics::NewProp_background_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMilestoneTrackerTierItem_UpdateBackground_Statics::NewProp_background_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMilestoneTrackerTierItem_UpdateBackground_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMilestoneTrackerTierItem_UpdateBackground_Statics::NewProp_background,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMilestoneTrackerTierItem_UpdateBackground_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MilestoneTrackerTierItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMilestoneTrackerTierItem_UpdateBackground_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMilestoneTrackerTierItem, nullptr, "UpdateBackground", nullptr, nullptr, sizeof(MilestoneTrackerTierItem_eventUpdateBackground_Parms), Z_Construct_UFunction_UMilestoneTrackerTierItem_UpdateBackground_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMilestoneTrackerTierItem_UpdateBackground_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMilestoneTrackerTierItem_UpdateBackground_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMilestoneTrackerTierItem_UpdateBackground_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMilestoneTrackerTierItem_UpdateBackground()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMilestoneTrackerTierItem_UpdateBackground_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMilestoneTrackerTierItem_NoRegister()
	{
		return UMilestoneTrackerTierItem::StaticClass();
	}
	struct Z_Construct_UClass_UMilestoneTrackerTierItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reward_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Reward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventPointsWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventPointsWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackgroundImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMilestoneTrackerTierItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMilestoneTrackerTierItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMilestoneTrackerTierItem_Clear, "Clear" }, // 3573861857
		{ &Z_Construct_UFunction_UMilestoneTrackerTierItem_OnBackgroundImageLoadingCompleted, "OnBackgroundImageLoadingCompleted" }, // 4050301080
		{ &Z_Construct_UFunction_UMilestoneTrackerTierItem_OnBackgroundImageLoadingStarted, "OnBackgroundImageLoadingStarted" }, // 2751716490
		{ &Z_Construct_UFunction_UMilestoneTrackerTierItem_SetData, "SetData" }, // 2528007510
		{ &Z_Construct_UFunction_UMilestoneTrackerTierItem_SetVisualState, "SetVisualState" }, // 2699969159
		{ &Z_Construct_UFunction_UMilestoneTrackerTierItem_UpdateBackground, "UpdateBackground" }, // 4021785064
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMilestoneTrackerTierItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MilestoneTrackerTierItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MilestoneTrackerTierItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMilestoneTrackerTierItem_Statics::NewProp_Reward_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MilestoneTrackerTierItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MilestoneTrackerTierItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMilestoneTrackerTierItem_Statics::NewProp_Reward = { "Reward", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMilestoneTrackerTierItem, Reward), Z_Construct_UClass_UCoreStoreCustomizationItemWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMilestoneTrackerTierItem_Statics::NewProp_Reward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMilestoneTrackerTierItem_Statics::NewProp_Reward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMilestoneTrackerTierItem_Statics::NewProp_EventPointsWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MilestoneTrackerTierItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MilestoneTrackerTierItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMilestoneTrackerTierItem_Statics::NewProp_EventPointsWidget = { "EventPointsWidget", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMilestoneTrackerTierItem, EventPointsWidget), Z_Construct_UClass_UEventPointsWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMilestoneTrackerTierItem_Statics::NewProp_EventPointsWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMilestoneTrackerTierItem_Statics::NewProp_EventPointsWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMilestoneTrackerTierItem_Statics::NewProp_BackgroundImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MilestoneTrackerTierItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MilestoneTrackerTierItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMilestoneTrackerTierItem_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMilestoneTrackerTierItem, BackgroundImage), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMilestoneTrackerTierItem_Statics::NewProp_BackgroundImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMilestoneTrackerTierItem_Statics::NewProp_BackgroundImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMilestoneTrackerTierItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMilestoneTrackerTierItem_Statics::NewProp_Reward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMilestoneTrackerTierItem_Statics::NewProp_EventPointsWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMilestoneTrackerTierItem_Statics::NewProp_BackgroundImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMilestoneTrackerTierItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMilestoneTrackerTierItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMilestoneTrackerTierItem_Statics::ClassParams = {
		&UMilestoneTrackerTierItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMilestoneTrackerTierItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMilestoneTrackerTierItem_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMilestoneTrackerTierItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMilestoneTrackerTierItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMilestoneTrackerTierItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMilestoneTrackerTierItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMilestoneTrackerTierItem, 751104181);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UMilestoneTrackerTierItem>()
	{
		return UMilestoneTrackerTierItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMilestoneTrackerTierItem(Z_Construct_UClass_UMilestoneTrackerTierItem, &UMilestoneTrackerTierItem::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UMilestoneTrackerTierItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMilestoneTrackerTierItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
