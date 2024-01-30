// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/ProfileMenuCustomizationWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfileMenuCustomizationWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UProfileMenuCustomizationWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UProfileMenuCustomizationWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContentWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemSorting();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSortButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCustomizationItemGridContainer_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreImagePreviewAreaWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECustomizationCategory();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UProfileMenuCustomizationViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UProfileMenuCustomizationWidget::execOnCustomizationGridItemClicked)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCustomizationGridItemClicked(Z_Param_selectedIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProfileMenuCustomizationWidget::execOnCustomizationSortingChanged)
	{
		P_GET_ENUM(EItemSorting,Z_Param_itemSorting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCustomizationSortingChanged(EItemSorting(Z_Param_itemSorting));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProfileMenuCustomizationWidget::execOnEquipButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEquipButtonClicked();
		P_NATIVE_END;
	}
	void UProfileMenuCustomizationWidget::StaticRegisterNativesUProfileMenuCustomizationWidget()
	{
		UClass* Class = UProfileMenuCustomizationWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCustomizationGridItemClicked", &UProfileMenuCustomizationWidget::execOnCustomizationGridItemClicked },
			{ "OnCustomizationSortingChanged", &UProfileMenuCustomizationWidget::execOnCustomizationSortingChanged },
			{ "OnEquipButtonClicked", &UProfileMenuCustomizationWidget::execOnEquipButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationGridItemClicked_Statics
	{
		struct ProfileMenuCustomizationWidget_eventOnCustomizationGridItemClicked_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationGridItemClicked_Statics::NewProp_selectedIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationGridItemClicked_Statics::NewProp_selectedIndex = { "selectedIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProfileMenuCustomizationWidget_eventOnCustomizationGridItemClicked_Parms, selectedIndex), METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationGridItemClicked_Statics::NewProp_selectedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationGridItemClicked_Statics::NewProp_selectedIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationGridItemClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationGridItemClicked_Statics::NewProp_selectedIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationGridItemClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuCustomizationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationGridItemClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuCustomizationWidget, nullptr, "OnCustomizationGridItemClicked", nullptr, nullptr, sizeof(ProfileMenuCustomizationWidget_eventOnCustomizationGridItemClicked_Parms), Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationGridItemClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationGridItemClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationGridItemClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationGridItemClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationGridItemClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationGridItemClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationSortingChanged_Statics
	{
		struct ProfileMenuCustomizationWidget_eventOnCustomizationSortingChanged_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationSortingChanged_Statics::NewProp_itemSorting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationSortingChanged_Statics::NewProp_itemSorting_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationSortingChanged_Statics::NewProp_itemSorting = { "itemSorting", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProfileMenuCustomizationWidget_eventOnCustomizationSortingChanged_Parms, itemSorting), Z_Construct_UEnum_DBDSharedTypes_EItemSorting, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationSortingChanged_Statics::NewProp_itemSorting_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationSortingChanged_Statics::NewProp_itemSorting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationSortingChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationSortingChanged_Statics::NewProp_itemSorting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationSortingChanged_Statics::NewProp_itemSorting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationSortingChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuCustomizationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationSortingChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuCustomizationWidget, nullptr, "OnCustomizationSortingChanged", nullptr, nullptr, sizeof(ProfileMenuCustomizationWidget_eventOnCustomizationSortingChanged_Parms), Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationSortingChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationSortingChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationSortingChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationSortingChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationSortingChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationSortingChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnEquipButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnEquipButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuCustomizationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnEquipButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuCustomizationWidget, nullptr, "OnEquipButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnEquipButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnEquipButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnEquipButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnEquipButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProfileMenuCustomizationWidget_NoRegister()
	{
		return UProfileMenuCustomizationWidget::StaticClass();
	}
	struct Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SortButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizationGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomizationGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipInputSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquipInputSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__noBannerSelectedText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__noBannerSelectedText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__noBadgeSelectedText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__noBadgeSelectedText;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__customizationCategory_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customizationCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__customizationCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreTabContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationGridItemClicked, "OnCustomizationGridItemClicked" }, // 873048568
		{ &Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnCustomizationSortingChanged, "OnCustomizationSortingChanged" }, // 1616891852
		{ &Z_Construct_UFunction_UProfileMenuCustomizationWidget_OnEquipButtonClicked, "OnEquipButtonClicked" }, // 3751890300
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ProfileMenuCustomizationWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ProfileMenuCustomizationWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp_SortButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ProfileMenuCustomizationWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProfileMenuCustomizationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp_SortButton = { "SortButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProfileMenuCustomizationWidget, SortButton), Z_Construct_UClass_UCoreSortButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp_SortButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp_SortButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp_CustomizationGrid_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ProfileMenuCustomizationWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProfileMenuCustomizationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp_CustomizationGrid = { "CustomizationGrid", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProfileMenuCustomizationWidget, CustomizationGrid), Z_Construct_UClass_UCustomizationItemGridContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp_CustomizationGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp_CustomizationGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp_PreviewArea_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ProfileMenuCustomizationWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProfileMenuCustomizationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp_PreviewArea = { "PreviewArea", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProfileMenuCustomizationWidget, PreviewArea), Z_Construct_UClass_UCoreImagePreviewAreaWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp_PreviewArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp_PreviewArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp_EquipInputSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ProfileMenuCustomizationWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProfileMenuCustomizationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp_EquipInputSwitcher = { "EquipInputSwitcher", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProfileMenuCustomizationWidget, EquipInputSwitcher), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp_EquipInputSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp_EquipInputSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp__noBannerSelectedText_MetaData[] = {
		{ "Category", "ProfileMenuCustomizationWidget" },
		{ "ModuleRelativePath", "Public/ProfileMenuCustomizationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp__noBannerSelectedText = { "_noBannerSelectedText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProfileMenuCustomizationWidget, _noBannerSelectedText), METADATA_PARAMS(Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp__noBannerSelectedText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp__noBannerSelectedText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp__noBadgeSelectedText_MetaData[] = {
		{ "Category", "ProfileMenuCustomizationWidget" },
		{ "ModuleRelativePath", "Public/ProfileMenuCustomizationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp__noBadgeSelectedText = { "_noBadgeSelectedText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProfileMenuCustomizationWidget, _noBadgeSelectedText), METADATA_PARAMS(Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp__noBadgeSelectedText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp__noBadgeSelectedText_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp__customizationCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp__customizationCategory_MetaData[] = {
		{ "Category", "ProfileMenuCustomizationWidget" },
		{ "ModuleRelativePath", "Public/ProfileMenuCustomizationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp__customizationCategory = { "_customizationCategory", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProfileMenuCustomizationWidget, _customizationCategory), Z_Construct_UEnum_DBDSharedTypes_ECustomizationCategory, METADATA_PARAMS(Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp__customizationCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp__customizationCategory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp_SortButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp_CustomizationGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp_PreviewArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp_EquipInputSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp__noBannerSelectedText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp__noBadgeSelectedText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp__customizationCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::NewProp__customizationCategory,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UProfileMenuCustomizationViewInterface_NoRegister, (int32)VTABLE_OFFSET(UProfileMenuCustomizationWidget, IProfileMenuCustomizationViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProfileMenuCustomizationWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::ClassParams = {
		&UProfileMenuCustomizationWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProfileMenuCustomizationWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProfileMenuCustomizationWidget, 2051698949);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UProfileMenuCustomizationWidget>()
	{
		return UProfileMenuCustomizationWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProfileMenuCustomizationWidget(Z_Construct_UClass_UProfileMenuCustomizationWidget, &UProfileMenuCustomizationWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UProfileMenuCustomizationWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProfileMenuCustomizationWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
