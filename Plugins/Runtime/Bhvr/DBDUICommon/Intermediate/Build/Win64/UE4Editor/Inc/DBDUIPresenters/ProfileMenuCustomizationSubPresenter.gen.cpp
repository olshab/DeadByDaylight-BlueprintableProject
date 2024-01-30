// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/ProfileMenuCustomizationSubPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfileMenuCustomizationSubPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UProfileMenuCustomizationSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UProfileMenuCustomizationSubPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USubPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemSorting();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UProfileMenuCustomizationViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UProfileMenuCustomizationSubPresenter::execOnCustomizationSortingChanged)
	{
		P_GET_ENUM(EItemSorting,Z_Param_itemSorting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCustomizationSortingChanged(EItemSorting(Z_Param_itemSorting));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProfileMenuCustomizationSubPresenter::execOnEquipButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEquipButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProfileMenuCustomizationSubPresenter::execOnRewardGridItemClicked)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRewardGridItemClicked(Z_Param_selectedIndex);
		P_NATIVE_END;
	}
	void UProfileMenuCustomizationSubPresenter::StaticRegisterNativesUProfileMenuCustomizationSubPresenter()
	{
		UClass* Class = UProfileMenuCustomizationSubPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCustomizationSortingChanged", &UProfileMenuCustomizationSubPresenter::execOnCustomizationSortingChanged },
			{ "OnEquipButtonClicked", &UProfileMenuCustomizationSubPresenter::execOnEquipButtonClicked },
			{ "OnRewardGridItemClicked", &UProfileMenuCustomizationSubPresenter::execOnRewardGridItemClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnCustomizationSortingChanged_Statics
	{
		struct ProfileMenuCustomizationSubPresenter_eventOnCustomizationSortingChanged_Parms
		{
			EItemSorting itemSorting;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_itemSorting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemSorting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_itemSorting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnCustomizationSortingChanged_Statics::NewProp_itemSorting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnCustomizationSortingChanged_Statics::NewProp_itemSorting_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnCustomizationSortingChanged_Statics::NewProp_itemSorting = { "itemSorting", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProfileMenuCustomizationSubPresenter_eventOnCustomizationSortingChanged_Parms, itemSorting), Z_Construct_UEnum_DBDSharedTypes_EItemSorting, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnCustomizationSortingChanged_Statics::NewProp_itemSorting_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnCustomizationSortingChanged_Statics::NewProp_itemSorting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnCustomizationSortingChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnCustomizationSortingChanged_Statics::NewProp_itemSorting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnCustomizationSortingChanged_Statics::NewProp_itemSorting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnCustomizationSortingChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuCustomizationSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnCustomizationSortingChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuCustomizationSubPresenter, nullptr, "OnCustomizationSortingChanged", nullptr, nullptr, sizeof(ProfileMenuCustomizationSubPresenter_eventOnCustomizationSortingChanged_Parms), Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnCustomizationSortingChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnCustomizationSortingChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnCustomizationSortingChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnCustomizationSortingChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnCustomizationSortingChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnCustomizationSortingChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnEquipButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnEquipButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuCustomizationSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnEquipButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuCustomizationSubPresenter, nullptr, "OnEquipButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnEquipButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnEquipButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnEquipButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnEquipButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnRewardGridItemClicked_Statics
	{
		struct ProfileMenuCustomizationSubPresenter_eventOnRewardGridItemClicked_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnRewardGridItemClicked_Statics::NewProp_selectedIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnRewardGridItemClicked_Statics::NewProp_selectedIndex = { "selectedIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProfileMenuCustomizationSubPresenter_eventOnRewardGridItemClicked_Parms, selectedIndex), METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnRewardGridItemClicked_Statics::NewProp_selectedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnRewardGridItemClicked_Statics::NewProp_selectedIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnRewardGridItemClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnRewardGridItemClicked_Statics::NewProp_selectedIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnRewardGridItemClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuCustomizationSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnRewardGridItemClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuCustomizationSubPresenter, nullptr, "OnRewardGridItemClicked", nullptr, nullptr, sizeof(ProfileMenuCustomizationSubPresenter_eventOnRewardGridItemClicked_Parms), Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnRewardGridItemClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnRewardGridItemClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnRewardGridItemClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnRewardGridItemClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnRewardGridItemClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnRewardGridItemClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProfileMenuCustomizationSubPresenter_NoRegister()
	{
		return UProfileMenuCustomizationSubPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UProfileMenuCustomizationSubPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__profileMenuCustomizationWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__profileMenuCustomizationWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProfileMenuCustomizationSubPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProfileMenuCustomizationSubPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnCustomizationSortingChanged, "OnCustomizationSortingChanged" }, // 2901053035
		{ &Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnEquipButtonClicked, "OnEquipButtonClicked" }, // 473264211
		{ &Z_Construct_UFunction_UProfileMenuCustomizationSubPresenter_OnRewardGridItemClicked, "OnRewardGridItemClicked" }, // 1255077883
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuCustomizationSubPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ProfileMenuCustomizationSubPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ProfileMenuCustomizationSubPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuCustomizationSubPresenter_Statics::NewProp__profileMenuCustomizationWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfileMenuCustomizationSubPresenter" },
		{ "ModuleRelativePath", "Public/ProfileMenuCustomizationSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UProfileMenuCustomizationSubPresenter_Statics::NewProp__profileMenuCustomizationWidget = { "_profileMenuCustomizationWidget", nullptr, (EPropertyFlags)0x0044000000002005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProfileMenuCustomizationSubPresenter, _profileMenuCustomizationWidget), Z_Construct_UClass_UProfileMenuCustomizationViewInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProfileMenuCustomizationSubPresenter_Statics::NewProp__profileMenuCustomizationWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuCustomizationSubPresenter_Statics::NewProp__profileMenuCustomizationWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProfileMenuCustomizationSubPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProfileMenuCustomizationSubPresenter_Statics::NewProp__profileMenuCustomizationWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProfileMenuCustomizationSubPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProfileMenuCustomizationSubPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProfileMenuCustomizationSubPresenter_Statics::ClassParams = {
		&UProfileMenuCustomizationSubPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProfileMenuCustomizationSubPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuCustomizationSubPresenter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProfileMenuCustomizationSubPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuCustomizationSubPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProfileMenuCustomizationSubPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProfileMenuCustomizationSubPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProfileMenuCustomizationSubPresenter, 3459834182);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UProfileMenuCustomizationSubPresenter>()
	{
		return UProfileMenuCustomizationSubPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProfileMenuCustomizationSubPresenter(Z_Construct_UClass_UProfileMenuCustomizationSubPresenter, &UProfileMenuCustomizationSubPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UProfileMenuCustomizationSubPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProfileMenuCustomizationSubPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
