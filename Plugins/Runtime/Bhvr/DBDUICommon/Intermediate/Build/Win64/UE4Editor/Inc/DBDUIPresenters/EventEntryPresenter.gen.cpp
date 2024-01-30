// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/EventEntryPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventEntryPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UEventEntryPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UEventEntryPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UEventEntryEventSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UEventEntryDetailsSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UEventEntryCollectionSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UEventEntryStoreSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USubPresenter_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEventEntryViewData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEventEntryPresenter::execGoToStoreButtonClicked)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_selectedStoreTabItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoToStoreButtonClicked(Z_Param_selectedStoreTabItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventEntryPresenter::execOnBackAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventEntryPresenter::execOnMilestoneTrackerItemClicked)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMilestoneTrackerItemClicked(Z_Param_selectedIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventEntryPresenter::execOnSelectedTabChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSelectedTabChanged(Z_Param_key);
		P_NATIVE_END;
	}
	void UEventEntryPresenter::StaticRegisterNativesUEventEntryPresenter()
	{
		UClass* Class = UEventEntryPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GoToStoreButtonClicked", &UEventEntryPresenter::execGoToStoreButtonClicked },
			{ "OnBackAction", &UEventEntryPresenter::execOnBackAction },
			{ "OnMilestoneTrackerItemClicked", &UEventEntryPresenter::execOnMilestoneTrackerItemClicked },
			{ "OnSelectedTabChanged", &UEventEntryPresenter::execOnSelectedTabChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEventEntryPresenter_GoToStoreButtonClicked_Statics
	{
		struct EventEntryPresenter_eventGoToStoreButtonClicked_Parms
		{
			FName selectedStoreTabItemId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedStoreTabItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_selectedStoreTabItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryPresenter_GoToStoreButtonClicked_Statics::NewProp_selectedStoreTabItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEventEntryPresenter_GoToStoreButtonClicked_Statics::NewProp_selectedStoreTabItemId = { "selectedStoreTabItemId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryPresenter_eventGoToStoreButtonClicked_Parms, selectedStoreTabItemId), METADATA_PARAMS(Z_Construct_UFunction_UEventEntryPresenter_GoToStoreButtonClicked_Statics::NewProp_selectedStoreTabItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryPresenter_GoToStoreButtonClicked_Statics::NewProp_selectedStoreTabItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryPresenter_GoToStoreButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryPresenter_GoToStoreButtonClicked_Statics::NewProp_selectedStoreTabItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryPresenter_GoToStoreButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryPresenter_GoToStoreButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryPresenter, nullptr, "GoToStoreButtonClicked", nullptr, nullptr, sizeof(EventEntryPresenter_eventGoToStoreButtonClicked_Parms), Z_Construct_UFunction_UEventEntryPresenter_GoToStoreButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryPresenter_GoToStoreButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryPresenter_GoToStoreButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryPresenter_GoToStoreButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryPresenter_GoToStoreButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryPresenter_GoToStoreButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryPresenter_OnBackAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryPresenter_OnBackAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryPresenter_OnBackAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryPresenter, nullptr, "OnBackAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryPresenter_OnBackAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryPresenter_OnBackAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryPresenter_OnBackAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryPresenter_OnBackAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryPresenter_OnMilestoneTrackerItemClicked_Statics
	{
		struct EventEntryPresenter_eventOnMilestoneTrackerItemClicked_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryPresenter_OnMilestoneTrackerItemClicked_Statics::NewProp_selectedIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEventEntryPresenter_OnMilestoneTrackerItemClicked_Statics::NewProp_selectedIndex = { "selectedIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryPresenter_eventOnMilestoneTrackerItemClicked_Parms, selectedIndex), METADATA_PARAMS(Z_Construct_UFunction_UEventEntryPresenter_OnMilestoneTrackerItemClicked_Statics::NewProp_selectedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryPresenter_OnMilestoneTrackerItemClicked_Statics::NewProp_selectedIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryPresenter_OnMilestoneTrackerItemClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryPresenter_OnMilestoneTrackerItemClicked_Statics::NewProp_selectedIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryPresenter_OnMilestoneTrackerItemClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryPresenter_OnMilestoneTrackerItemClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryPresenter, nullptr, "OnMilestoneTrackerItemClicked", nullptr, nullptr, sizeof(EventEntryPresenter_eventOnMilestoneTrackerItemClicked_Parms), Z_Construct_UFunction_UEventEntryPresenter_OnMilestoneTrackerItemClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryPresenter_OnMilestoneTrackerItemClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryPresenter_OnMilestoneTrackerItemClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryPresenter_OnMilestoneTrackerItemClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryPresenter_OnMilestoneTrackerItemClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryPresenter_OnMilestoneTrackerItemClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryPresenter_OnSelectedTabChanged_Statics
	{
		struct EventEntryPresenter_eventOnSelectedTabChanged_Parms
		{
			int32 key;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryPresenter_OnSelectedTabChanged_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEventEntryPresenter_OnSelectedTabChanged_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryPresenter_eventOnSelectedTabChanged_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UEventEntryPresenter_OnSelectedTabChanged_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryPresenter_OnSelectedTabChanged_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryPresenter_OnSelectedTabChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryPresenter_OnSelectedTabChanged_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryPresenter_OnSelectedTabChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryPresenter_OnSelectedTabChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryPresenter, nullptr, "OnSelectedTabChanged", nullptr, nullptr, sizeof(EventEntryPresenter_eventOnSelectedTabChanged_Parms), Z_Construct_UFunction_UEventEntryPresenter_OnSelectedTabChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryPresenter_OnSelectedTabChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryPresenter_OnSelectedTabChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryPresenter_OnSelectedTabChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryPresenter_OnSelectedTabChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryPresenter_OnSelectedTabChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEventEntryPresenter_NoRegister()
	{
		return UEventEntryPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UEventEntryPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventEntryWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EventEntryWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__eventSubPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__eventSubPresenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__detailsSubPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__detailsSubPresenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__collectionSubPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__collectionSubPresenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__storeSubPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__storeSubPresenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activeSubPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__activeSubPresenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__viewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__viewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventEntryPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEventEntryPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEventEntryPresenter_GoToStoreButtonClicked, "GoToStoreButtonClicked" }, // 958330609
		{ &Z_Construct_UFunction_UEventEntryPresenter_OnBackAction, "OnBackAction" }, // 696418317
		{ &Z_Construct_UFunction_UEventEntryPresenter_OnMilestoneTrackerItemClicked, "OnMilestoneTrackerItemClicked" }, // 1956823722
		{ &Z_Construct_UFunction_UEventEntryPresenter_OnSelectedTabChanged, "OnSelectedTabChanged" }, // 1754637669
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EventEntryPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EventEntryPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp_EventEntryWidgetClass_MetaData[] = {
		{ "Category", "EventEntryPresenter" },
		{ "ModuleRelativePath", "Public/EventEntryPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp_EventEntryWidgetClass = { "EventEntryWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryPresenter, EventEntryWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp_EventEntryWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp_EventEntryWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__eventSubPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventEntryPresenter" },
		{ "ModuleRelativePath", "Public/EventEntryPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__eventSubPresenter = { "_eventSubPresenter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryPresenter, _eventSubPresenter), Z_Construct_UClass_UEventEntryEventSubPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__eventSubPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__eventSubPresenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__detailsSubPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventEntryPresenter" },
		{ "ModuleRelativePath", "Public/EventEntryPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__detailsSubPresenter = { "_detailsSubPresenter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryPresenter, _detailsSubPresenter), Z_Construct_UClass_UEventEntryDetailsSubPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__detailsSubPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__detailsSubPresenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__collectionSubPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventEntryPresenter" },
		{ "ModuleRelativePath", "Public/EventEntryPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__collectionSubPresenter = { "_collectionSubPresenter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryPresenter, _collectionSubPresenter), Z_Construct_UClass_UEventEntryCollectionSubPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__collectionSubPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__collectionSubPresenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__storeSubPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventEntryPresenter" },
		{ "ModuleRelativePath", "Public/EventEntryPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__storeSubPresenter = { "_storeSubPresenter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryPresenter, _storeSubPresenter), Z_Construct_UClass_UEventEntryStoreSubPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__storeSubPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__storeSubPresenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__activeSubPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventEntryPresenter" },
		{ "ModuleRelativePath", "Public/EventEntryPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__activeSubPresenter = { "_activeSubPresenter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryPresenter, _activeSubPresenter), Z_Construct_UClass_USubPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__activeSubPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__activeSubPresenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__viewData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventEntryPresenter" },
		{ "ModuleRelativePath", "Public/EventEntryPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__viewData = { "_viewData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryPresenter, _viewData), Z_Construct_UClass_UEventEntryViewData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__viewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEventEntryPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp_EventEntryWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__eventSubPresenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__detailsSubPresenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__collectionSubPresenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__storeSubPresenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__activeSubPresenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryPresenter_Statics::NewProp__viewData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventEntryPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventEntryPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventEntryPresenter_Statics::ClassParams = {
		&UEventEntryPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEventEntryPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryPresenter_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEventEntryPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventEntryPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventEntryPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventEntryPresenter, 2553977471);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UEventEntryPresenter>()
	{
		return UEventEntryPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventEntryPresenter(Z_Construct_UClass_UEventEntryPresenter, &UEventEntryPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UEventEntryPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventEntryPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
