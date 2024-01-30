// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/EventEntryRewardsSubPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventEntryRewardsSubPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UEventEntryRewardsSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UEventEntryRewardsSubPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USubPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEventCollectionViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UEventEntryPresenter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEventEntryRewardsSubPresenter::execOnInstructionButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInstructionButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventEntryRewardsSubPresenter::execOnPreviewAreaItemClicked)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPreviewAreaItemClicked(Z_Param_selectedIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventEntryRewardsSubPresenter::execOnRewardGridItemClicked)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRewardGridItemClicked(Z_Param_selectedIndex);
		P_NATIVE_END;
	}
	void UEventEntryRewardsSubPresenter::StaticRegisterNativesUEventEntryRewardsSubPresenter()
	{
		UClass* Class = UEventEntryRewardsSubPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInstructionButtonClicked", &UEventEntryRewardsSubPresenter::execOnInstructionButtonClicked },
			{ "OnPreviewAreaItemClicked", &UEventEntryRewardsSubPresenter::execOnPreviewAreaItemClicked },
			{ "OnRewardGridItemClicked", &UEventEntryRewardsSubPresenter::execOnRewardGridItemClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnInstructionButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnInstructionButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryRewardsSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnInstructionButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryRewardsSubPresenter, nullptr, "OnInstructionButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnInstructionButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnInstructionButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnInstructionButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnInstructionButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnPreviewAreaItemClicked_Statics
	{
		struct EventEntryRewardsSubPresenter_eventOnPreviewAreaItemClicked_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnPreviewAreaItemClicked_Statics::NewProp_selectedIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnPreviewAreaItemClicked_Statics::NewProp_selectedIndex = { "selectedIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryRewardsSubPresenter_eventOnPreviewAreaItemClicked_Parms, selectedIndex), METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnPreviewAreaItemClicked_Statics::NewProp_selectedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnPreviewAreaItemClicked_Statics::NewProp_selectedIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnPreviewAreaItemClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnPreviewAreaItemClicked_Statics::NewProp_selectedIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnPreviewAreaItemClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryRewardsSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnPreviewAreaItemClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryRewardsSubPresenter, nullptr, "OnPreviewAreaItemClicked", nullptr, nullptr, sizeof(EventEntryRewardsSubPresenter_eventOnPreviewAreaItemClicked_Parms), Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnPreviewAreaItemClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnPreviewAreaItemClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnPreviewAreaItemClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnPreviewAreaItemClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnPreviewAreaItemClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnPreviewAreaItemClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnRewardGridItemClicked_Statics
	{
		struct EventEntryRewardsSubPresenter_eventOnRewardGridItemClicked_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnRewardGridItemClicked_Statics::NewProp_selectedIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnRewardGridItemClicked_Statics::NewProp_selectedIndex = { "selectedIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryRewardsSubPresenter_eventOnRewardGridItemClicked_Parms, selectedIndex), METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnRewardGridItemClicked_Statics::NewProp_selectedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnRewardGridItemClicked_Statics::NewProp_selectedIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnRewardGridItemClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnRewardGridItemClicked_Statics::NewProp_selectedIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnRewardGridItemClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryRewardsSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnRewardGridItemClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryRewardsSubPresenter, nullptr, "OnRewardGridItemClicked", nullptr, nullptr, sizeof(EventEntryRewardsSubPresenter_eventOnRewardGridItemClicked_Parms), Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnRewardGridItemClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnRewardGridItemClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnRewardGridItemClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnRewardGridItemClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnRewardGridItemClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnRewardGridItemClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEventEntryRewardsSubPresenter_NoRegister()
	{
		return UEventEntryRewardsSubPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tabWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__tabWidget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__rewardsGridData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rewardsGridData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__rewardsGridData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__previewAreaRewardsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__previewAreaRewardsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__previewAreaRewardsData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__parentPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__parentPresenter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnInstructionButtonClicked, "OnInstructionButtonClicked" }, // 869921119
		{ &Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnPreviewAreaItemClicked, "OnPreviewAreaItemClicked" }, // 2389568278
		{ &Z_Construct_UFunction_UEventEntryRewardsSubPresenter_OnRewardGridItemClicked, "OnRewardGridItemClicked" }, // 1502422087
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EventEntryRewardsSubPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EventEntryRewardsSubPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::NewProp__tabWidget_MetaData[] = {
		{ "Category", "EventEntryRewardsSubPresenter" },
		{ "ModuleRelativePath", "Public/EventEntryRewardsSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::NewProp__tabWidget = { "_tabWidget", nullptr, (EPropertyFlags)0x0024080000002005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryRewardsSubPresenter, _tabWidget), Z_Construct_UClass_UEventCollectionViewInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::NewProp__tabWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::NewProp__tabWidget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::NewProp__rewardsGridData_Inner = { "_rewardsGridData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::NewProp__rewardsGridData_MetaData[] = {
		{ "Category", "EventEntryRewardsSubPresenter" },
		{ "ModuleRelativePath", "Public/EventEntryRewardsSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::NewProp__rewardsGridData = { "_rewardsGridData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryRewardsSubPresenter, _rewardsGridData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::NewProp__rewardsGridData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::NewProp__rewardsGridData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::NewProp__previewAreaRewardsData_Inner = { "_previewAreaRewardsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::NewProp__previewAreaRewardsData_MetaData[] = {
		{ "Category", "EventEntryRewardsSubPresenter" },
		{ "ModuleRelativePath", "Public/EventEntryRewardsSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::NewProp__previewAreaRewardsData = { "_previewAreaRewardsData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryRewardsSubPresenter, _previewAreaRewardsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::NewProp__previewAreaRewardsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::NewProp__previewAreaRewardsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::NewProp__parentPresenter_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EventEntryRewardsSubPresenter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EventEntryRewardsSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::NewProp__parentPresenter = { "_parentPresenter", nullptr, (EPropertyFlags)0x002008000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventEntryRewardsSubPresenter, _parentPresenter), Z_Construct_UClass_UEventEntryPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::NewProp__parentPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::NewProp__parentPresenter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::NewProp__tabWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::NewProp__rewardsGridData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::NewProp__rewardsGridData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::NewProp__previewAreaRewardsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::NewProp__previewAreaRewardsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::NewProp__parentPresenter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventEntryRewardsSubPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::ClassParams = {
		&UEventEntryRewardsSubPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventEntryRewardsSubPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventEntryRewardsSubPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventEntryRewardsSubPresenter, 3531453122);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UEventEntryRewardsSubPresenter>()
	{
		return UEventEntryRewardsSubPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventEntryRewardsSubPresenter(Z_Construct_UClass_UEventEntryRewardsSubPresenter, &UEventEntryRewardsSubPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UEventEntryRewardsSubPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventEntryRewardsSubPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
