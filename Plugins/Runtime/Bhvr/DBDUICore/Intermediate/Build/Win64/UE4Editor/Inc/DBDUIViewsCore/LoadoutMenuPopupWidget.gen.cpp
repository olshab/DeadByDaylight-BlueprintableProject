// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/LoadoutMenuPopupWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadoutMenuPopupWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_ULoadoutMenuPopupWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_ULoadoutMenuPopupWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreGenericPopupWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FTabWidgetData();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMenuLoadoutPartWidget_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemAvailability();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDDropDownListWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDDropDownListButton_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMenuPowerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMenuItemWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMenuAddonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMenuOfferingWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMenuPerkWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePresetWidgetContainer_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UGridPanel_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePaginationContainerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_OnPaginationAnimationCompleted__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_OnLoadoutMenuSlotClick__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_LoadoutMenuSlotIsSelected__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_OnLoadoutMenuInventorySlotClick__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_OnLoadoutMenuPresetSlotClick__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_OnSelectedCharacterChanged__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_ETooltipHorizontalAlignment();
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UMenuLoadoutPartViewData_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ELoadoutSlot();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_ULoadoutMenuPopupViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_ULoadoutMenuPopupViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULoadoutMenuPopupWidget::execHideMenuLoadoutPartsTooltip)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_unhoveredSlotWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideMenuLoadoutPartsTooltip(Z_Param_unhoveredSlotWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadoutMenuPopupWidget::execOnDropDownListSelectedOptionChanged)
	{
		P_GET_STRUCT(FTabWidgetData,Z_Param_buttonData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDropDownListSelectedOptionChanged(Z_Param_buttonData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadoutMenuPopupWidget::execOnDropdownSelected)
	{
		P_GET_ENUM(ESlateVisibility,Z_Param_InVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDropdownSelected(ESlateVisibility(Z_Param_InVisibility));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadoutMenuPopupWidget::execOnLoadoutMenuAddonSlotClicked)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_menuAddonWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadoutMenuAddonSlotClicked(Z_Param_menuAddonWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadoutMenuPopupWidget::execOnLoadoutMenuInventorySlotClicked)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_menuPerkWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadoutMenuInventorySlotClicked(Z_Param_menuPerkWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadoutMenuPopupWidget::execOnLoadoutMenuItemSlotClicked)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_menuItemWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadoutMenuItemSlotClicked(Z_Param_menuItemWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadoutMenuPopupWidget::execOnLoadoutMenuLeftArrowClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadoutMenuLeftArrowClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadoutMenuPopupWidget::execOnLoadoutMenuOfferingSlotClicked)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_menuOfferingWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadoutMenuOfferingSlotClicked(Z_Param_menuOfferingWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadoutMenuPopupWidget::execOnLoadoutMenuPerkSlotClicked)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_menuPerkWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadoutMenuPerkSlotClicked(Z_Param_menuPerkWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadoutMenuPopupWidget::execOnLoadoutMenuPowerSlotClicked)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_menuPowerWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadoutMenuPowerSlotClicked(Z_Param_menuPowerWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadoutMenuPopupWidget::execOnLoadoutMenuPresetClicked)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedPresetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadoutMenuPresetClicked(Z_Param_selectedPresetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadoutMenuPopupWidget::execOnLoadoutMenuRightArrowClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadoutMenuRightArrowClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadoutMenuPopupWidget::execOnPaginationSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_currentPage);
		P_GET_UBOOL(Z_Param_isUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPaginationSelected(Z_Param_currentPage,Z_Param_isUpdate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadoutMenuPopupWidget::execShowMenuLoadoutPartsTooltip)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_hoveredSlotWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowMenuLoadoutPartsTooltip(Z_Param_hoveredSlotWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadoutMenuPopupWidget::execUpdateInventoryItemData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateInventoryItemData();
		P_NATIVE_END;
	}
	static FName NAME_ULoadoutMenuPopupWidget_PlayPaginationInAnimation = FName(TEXT("PlayPaginationInAnimation"));
	void ULoadoutMenuPopupWidget::PlayPaginationInAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULoadoutMenuPopupWidget_PlayPaginationInAnimation),NULL);
	}
	static FName NAME_ULoadoutMenuPopupWidget_PlayPaginationOutAnimation = FName(TEXT("PlayPaginationOutAnimation"));
	void ULoadoutMenuPopupWidget::PlayPaginationOutAnimation(bool isNextPage)
	{
		LoadoutMenuPopupWidget_eventPlayPaginationOutAnimation_Parms Parms;
		Parms.isNextPage=isNextPage ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ULoadoutMenuPopupWidget_PlayPaginationOutAnimation),&Parms);
	}
	static FName NAME_ULoadoutMenuPopupWidget_SetInventoryItemEnabled = FName(TEXT("SetInventoryItemEnabled"));
	void ULoadoutMenuPopupWidget::SetInventoryItemEnabled(UCoreMenuLoadoutPartWidget* widget, const EItemAvailability availability)
	{
		LoadoutMenuPopupWidget_eventSetInventoryItemEnabled_Parms Parms;
		Parms.widget=widget;
		Parms.availability=availability;
		ProcessEvent(FindFunctionChecked(NAME_ULoadoutMenuPopupWidget_SetInventoryItemEnabled),&Parms);
	}
	void ULoadoutMenuPopupWidget::StaticRegisterNativesULoadoutMenuPopupWidget()
	{
		UClass* Class = ULoadoutMenuPopupWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideMenuLoadoutPartsTooltip", &ULoadoutMenuPopupWidget::execHideMenuLoadoutPartsTooltip },
			{ "OnDropDownListSelectedOptionChanged", &ULoadoutMenuPopupWidget::execOnDropDownListSelectedOptionChanged },
			{ "OnDropdownSelected", &ULoadoutMenuPopupWidget::execOnDropdownSelected },
			{ "OnLoadoutMenuAddonSlotClicked", &ULoadoutMenuPopupWidget::execOnLoadoutMenuAddonSlotClicked },
			{ "OnLoadoutMenuInventorySlotClicked", &ULoadoutMenuPopupWidget::execOnLoadoutMenuInventorySlotClicked },
			{ "OnLoadoutMenuItemSlotClicked", &ULoadoutMenuPopupWidget::execOnLoadoutMenuItemSlotClicked },
			{ "OnLoadoutMenuLeftArrowClicked", &ULoadoutMenuPopupWidget::execOnLoadoutMenuLeftArrowClicked },
			{ "OnLoadoutMenuOfferingSlotClicked", &ULoadoutMenuPopupWidget::execOnLoadoutMenuOfferingSlotClicked },
			{ "OnLoadoutMenuPerkSlotClicked", &ULoadoutMenuPopupWidget::execOnLoadoutMenuPerkSlotClicked },
			{ "OnLoadoutMenuPowerSlotClicked", &ULoadoutMenuPopupWidget::execOnLoadoutMenuPowerSlotClicked },
			{ "OnLoadoutMenuPresetClicked", &ULoadoutMenuPopupWidget::execOnLoadoutMenuPresetClicked },
			{ "OnLoadoutMenuRightArrowClicked", &ULoadoutMenuPopupWidget::execOnLoadoutMenuRightArrowClicked },
			{ "OnPaginationSelected", &ULoadoutMenuPopupWidget::execOnPaginationSelected },
			{ "ShowMenuLoadoutPartsTooltip", &ULoadoutMenuPopupWidget::execShowMenuLoadoutPartsTooltip },
			{ "UpdateInventoryItemData", &ULoadoutMenuPopupWidget::execUpdateInventoryItemData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupWidget_HideMenuLoadoutPartsTooltip_Statics
	{
		struct LoadoutMenuPopupWidget_eventHideMenuLoadoutPartsTooltip_Parms
		{
			UCoreButtonWidget* unhoveredSlotWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_unhoveredSlotWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_unhoveredSlotWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_HideMenuLoadoutPartsTooltip_Statics::NewProp_unhoveredSlotWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_HideMenuLoadoutPartsTooltip_Statics::NewProp_unhoveredSlotWidget = { "unhoveredSlotWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupWidget_eventHideMenuLoadoutPartsTooltip_Parms, unhoveredSlotWidget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_HideMenuLoadoutPartsTooltip_Statics::NewProp_unhoveredSlotWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_HideMenuLoadoutPartsTooltip_Statics::NewProp_unhoveredSlotWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutMenuPopupWidget_HideMenuLoadoutPartsTooltip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupWidget_HideMenuLoadoutPartsTooltip_Statics::NewProp_unhoveredSlotWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_HideMenuLoadoutPartsTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_HideMenuLoadoutPartsTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupWidget, nullptr, "HideMenuLoadoutPartsTooltip", nullptr, nullptr, sizeof(LoadoutMenuPopupWidget_eventHideMenuLoadoutPartsTooltip_Parms), Z_Construct_UFunction_ULoadoutMenuPopupWidget_HideMenuLoadoutPartsTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_HideMenuLoadoutPartsTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_HideMenuLoadoutPartsTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_HideMenuLoadoutPartsTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupWidget_HideMenuLoadoutPartsTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupWidget_HideMenuLoadoutPartsTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropDownListSelectedOptionChanged_Statics
	{
		struct LoadoutMenuPopupWidget_eventOnDropDownListSelectedOptionChanged_Parms
		{
			FTabWidgetData buttonData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_buttonData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropDownListSelectedOptionChanged_Statics::NewProp_buttonData = { "buttonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupWidget_eventOnDropDownListSelectedOptionChanged_Parms, buttonData), Z_Construct_UScriptStruct_FTabWidgetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropDownListSelectedOptionChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropDownListSelectedOptionChanged_Statics::NewProp_buttonData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropDownListSelectedOptionChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropDownListSelectedOptionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupWidget, nullptr, "OnDropDownListSelectedOptionChanged", nullptr, nullptr, sizeof(LoadoutMenuPopupWidget_eventOnDropDownListSelectedOptionChanged_Parms), Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropDownListSelectedOptionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropDownListSelectedOptionChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropDownListSelectedOptionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropDownListSelectedOptionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropDownListSelectedOptionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropDownListSelectedOptionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropdownSelected_Statics
	{
		struct LoadoutMenuPopupWidget_eventOnDropdownSelected_Parms
		{
			ESlateVisibility InVisibility;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InVisibility_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InVisibility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropdownSelected_Statics::NewProp_InVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropdownSelected_Statics::NewProp_InVisibility = { "InVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupWidget_eventOnDropdownSelected_Parms, InVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropdownSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropdownSelected_Statics::NewProp_InVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropdownSelected_Statics::NewProp_InVisibility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropdownSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropdownSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupWidget, nullptr, "OnDropdownSelected", nullptr, nullptr, sizeof(LoadoutMenuPopupWidget_eventOnDropdownSelected_Parms), Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropdownSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropdownSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropdownSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropdownSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropdownSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropdownSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuAddonSlotClicked_Statics
	{
		struct LoadoutMenuPopupWidget_eventOnLoadoutMenuAddonSlotClicked_Parms
		{
			UCoreButtonWidget* menuAddonWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_menuAddonWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_menuAddonWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuAddonSlotClicked_Statics::NewProp_menuAddonWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuAddonSlotClicked_Statics::NewProp_menuAddonWidget = { "menuAddonWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupWidget_eventOnLoadoutMenuAddonSlotClicked_Parms, menuAddonWidget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuAddonSlotClicked_Statics::NewProp_menuAddonWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuAddonSlotClicked_Statics::NewProp_menuAddonWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuAddonSlotClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuAddonSlotClicked_Statics::NewProp_menuAddonWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuAddonSlotClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuAddonSlotClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupWidget, nullptr, "OnLoadoutMenuAddonSlotClicked", nullptr, nullptr, sizeof(LoadoutMenuPopupWidget_eventOnLoadoutMenuAddonSlotClicked_Parms), Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuAddonSlotClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuAddonSlotClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuAddonSlotClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuAddonSlotClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuAddonSlotClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuAddonSlotClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuInventorySlotClicked_Statics
	{
		struct LoadoutMenuPopupWidget_eventOnLoadoutMenuInventorySlotClicked_Parms
		{
			UCoreButtonWidget* menuPerkWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_menuPerkWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_menuPerkWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuInventorySlotClicked_Statics::NewProp_menuPerkWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuInventorySlotClicked_Statics::NewProp_menuPerkWidget = { "menuPerkWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupWidget_eventOnLoadoutMenuInventorySlotClicked_Parms, menuPerkWidget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuInventorySlotClicked_Statics::NewProp_menuPerkWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuInventorySlotClicked_Statics::NewProp_menuPerkWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuInventorySlotClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuInventorySlotClicked_Statics::NewProp_menuPerkWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuInventorySlotClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuInventorySlotClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupWidget, nullptr, "OnLoadoutMenuInventorySlotClicked", nullptr, nullptr, sizeof(LoadoutMenuPopupWidget_eventOnLoadoutMenuInventorySlotClicked_Parms), Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuInventorySlotClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuInventorySlotClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuInventorySlotClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuInventorySlotClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuInventorySlotClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuInventorySlotClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuItemSlotClicked_Statics
	{
		struct LoadoutMenuPopupWidget_eventOnLoadoutMenuItemSlotClicked_Parms
		{
			UCoreButtonWidget* menuItemWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_menuItemWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_menuItemWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuItemSlotClicked_Statics::NewProp_menuItemWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuItemSlotClicked_Statics::NewProp_menuItemWidget = { "menuItemWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupWidget_eventOnLoadoutMenuItemSlotClicked_Parms, menuItemWidget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuItemSlotClicked_Statics::NewProp_menuItemWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuItemSlotClicked_Statics::NewProp_menuItemWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuItemSlotClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuItemSlotClicked_Statics::NewProp_menuItemWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuItemSlotClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuItemSlotClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupWidget, nullptr, "OnLoadoutMenuItemSlotClicked", nullptr, nullptr, sizeof(LoadoutMenuPopupWidget_eventOnLoadoutMenuItemSlotClicked_Parms), Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuItemSlotClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuItemSlotClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuItemSlotClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuItemSlotClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuItemSlotClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuItemSlotClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuLeftArrowClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuLeftArrowClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuLeftArrowClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupWidget, nullptr, "OnLoadoutMenuLeftArrowClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuLeftArrowClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuLeftArrowClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuLeftArrowClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuLeftArrowClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuOfferingSlotClicked_Statics
	{
		struct LoadoutMenuPopupWidget_eventOnLoadoutMenuOfferingSlotClicked_Parms
		{
			UCoreButtonWidget* menuOfferingWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_menuOfferingWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_menuOfferingWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuOfferingSlotClicked_Statics::NewProp_menuOfferingWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuOfferingSlotClicked_Statics::NewProp_menuOfferingWidget = { "menuOfferingWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupWidget_eventOnLoadoutMenuOfferingSlotClicked_Parms, menuOfferingWidget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuOfferingSlotClicked_Statics::NewProp_menuOfferingWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuOfferingSlotClicked_Statics::NewProp_menuOfferingWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuOfferingSlotClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuOfferingSlotClicked_Statics::NewProp_menuOfferingWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuOfferingSlotClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuOfferingSlotClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupWidget, nullptr, "OnLoadoutMenuOfferingSlotClicked", nullptr, nullptr, sizeof(LoadoutMenuPopupWidget_eventOnLoadoutMenuOfferingSlotClicked_Parms), Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuOfferingSlotClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuOfferingSlotClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuOfferingSlotClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuOfferingSlotClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuOfferingSlotClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuOfferingSlotClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPerkSlotClicked_Statics
	{
		struct LoadoutMenuPopupWidget_eventOnLoadoutMenuPerkSlotClicked_Parms
		{
			UCoreButtonWidget* menuPerkWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_menuPerkWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_menuPerkWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPerkSlotClicked_Statics::NewProp_menuPerkWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPerkSlotClicked_Statics::NewProp_menuPerkWidget = { "menuPerkWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupWidget_eventOnLoadoutMenuPerkSlotClicked_Parms, menuPerkWidget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPerkSlotClicked_Statics::NewProp_menuPerkWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPerkSlotClicked_Statics::NewProp_menuPerkWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPerkSlotClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPerkSlotClicked_Statics::NewProp_menuPerkWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPerkSlotClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPerkSlotClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupWidget, nullptr, "OnLoadoutMenuPerkSlotClicked", nullptr, nullptr, sizeof(LoadoutMenuPopupWidget_eventOnLoadoutMenuPerkSlotClicked_Parms), Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPerkSlotClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPerkSlotClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPerkSlotClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPerkSlotClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPerkSlotClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPerkSlotClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPowerSlotClicked_Statics
	{
		struct LoadoutMenuPopupWidget_eventOnLoadoutMenuPowerSlotClicked_Parms
		{
			UCoreButtonWidget* menuPowerWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_menuPowerWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_menuPowerWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPowerSlotClicked_Statics::NewProp_menuPowerWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPowerSlotClicked_Statics::NewProp_menuPowerWidget = { "menuPowerWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupWidget_eventOnLoadoutMenuPowerSlotClicked_Parms, menuPowerWidget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPowerSlotClicked_Statics::NewProp_menuPowerWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPowerSlotClicked_Statics::NewProp_menuPowerWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPowerSlotClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPowerSlotClicked_Statics::NewProp_menuPowerWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPowerSlotClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPowerSlotClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupWidget, nullptr, "OnLoadoutMenuPowerSlotClicked", nullptr, nullptr, sizeof(LoadoutMenuPopupWidget_eventOnLoadoutMenuPowerSlotClicked_Parms), Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPowerSlotClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPowerSlotClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPowerSlotClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPowerSlotClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPowerSlotClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPowerSlotClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPresetClicked_Statics
	{
		struct LoadoutMenuPopupWidget_eventOnLoadoutMenuPresetClicked_Parms
		{
			int32 selectedPresetId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedPresetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_selectedPresetId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPresetClicked_Statics::NewProp_selectedPresetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPresetClicked_Statics::NewProp_selectedPresetId = { "selectedPresetId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupWidget_eventOnLoadoutMenuPresetClicked_Parms, selectedPresetId), METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPresetClicked_Statics::NewProp_selectedPresetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPresetClicked_Statics::NewProp_selectedPresetId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPresetClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPresetClicked_Statics::NewProp_selectedPresetId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPresetClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPresetClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupWidget, nullptr, "OnLoadoutMenuPresetClicked", nullptr, nullptr, sizeof(LoadoutMenuPopupWidget_eventOnLoadoutMenuPresetClicked_Parms), Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPresetClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPresetClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPresetClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPresetClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPresetClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPresetClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuRightArrowClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuRightArrowClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuRightArrowClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupWidget, nullptr, "OnLoadoutMenuRightArrowClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuRightArrowClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuRightArrowClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuRightArrowClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuRightArrowClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnPaginationSelected_Statics
	{
		struct LoadoutMenuPopupWidget_eventOnPaginationSelected_Parms
		{
			int32 currentPage;
			bool isUpdate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentPage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currentPage;
		static void NewProp_isUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnPaginationSelected_Statics::NewProp_currentPage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnPaginationSelected_Statics::NewProp_currentPage = { "currentPage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupWidget_eventOnPaginationSelected_Parms, currentPage), METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnPaginationSelected_Statics::NewProp_currentPage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnPaginationSelected_Statics::NewProp_currentPage_MetaData)) };
	void Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnPaginationSelected_Statics::NewProp_isUpdate_SetBit(void* Obj)
	{
		((LoadoutMenuPopupWidget_eventOnPaginationSelected_Parms*)Obj)->isUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnPaginationSelected_Statics::NewProp_isUpdate = { "isUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LoadoutMenuPopupWidget_eventOnPaginationSelected_Parms), &Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnPaginationSelected_Statics::NewProp_isUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnPaginationSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnPaginationSelected_Statics::NewProp_currentPage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnPaginationSelected_Statics::NewProp_isUpdate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnPaginationSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnPaginationSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupWidget, nullptr, "OnPaginationSelected", nullptr, nullptr, sizeof(LoadoutMenuPopupWidget_eventOnPaginationSelected_Parms), Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnPaginationSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnPaginationSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnPaginationSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnPaginationSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnPaginationSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnPaginationSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupWidget_PlayPaginationInAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_PlayPaginationInAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_PlayPaginationInAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupWidget, nullptr, "PlayPaginationInAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_PlayPaginationInAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_PlayPaginationInAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupWidget_PlayPaginationInAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupWidget_PlayPaginationInAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupWidget_PlayPaginationOutAnimation_Statics
	{
		static void NewProp_isNextPage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isNextPage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULoadoutMenuPopupWidget_PlayPaginationOutAnimation_Statics::NewProp_isNextPage_SetBit(void* Obj)
	{
		((LoadoutMenuPopupWidget_eventPlayPaginationOutAnimation_Parms*)Obj)->isNextPage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_PlayPaginationOutAnimation_Statics::NewProp_isNextPage = { "isNextPage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LoadoutMenuPopupWidget_eventPlayPaginationOutAnimation_Parms), &Z_Construct_UFunction_ULoadoutMenuPopupWidget_PlayPaginationOutAnimation_Statics::NewProp_isNextPage_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutMenuPopupWidget_PlayPaginationOutAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupWidget_PlayPaginationOutAnimation_Statics::NewProp_isNextPage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_PlayPaginationOutAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_PlayPaginationOutAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupWidget, nullptr, "PlayPaginationOutAnimation", nullptr, nullptr, sizeof(LoadoutMenuPopupWidget_eventPlayPaginationOutAnimation_Parms), Z_Construct_UFunction_ULoadoutMenuPopupWidget_PlayPaginationOutAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_PlayPaginationOutAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_PlayPaginationOutAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_PlayPaginationOutAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupWidget_PlayPaginationOutAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupWidget_PlayPaginationOutAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupWidget_SetInventoryItemEnabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_widget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_availability_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_availability_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_availability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_SetInventoryItemEnabled_Statics::NewProp_widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_SetInventoryItemEnabled_Statics::NewProp_widget = { "widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupWidget_eventSetInventoryItemEnabled_Parms, widget), Z_Construct_UClass_UCoreMenuLoadoutPartWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_SetInventoryItemEnabled_Statics::NewProp_widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_SetInventoryItemEnabled_Statics::NewProp_widget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_SetInventoryItemEnabled_Statics::NewProp_availability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_SetInventoryItemEnabled_Statics::NewProp_availability_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_SetInventoryItemEnabled_Statics::NewProp_availability = { "availability", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupWidget_eventSetInventoryItemEnabled_Parms, availability), Z_Construct_UEnum_DBDSharedTypes_EItemAvailability, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_SetInventoryItemEnabled_Statics::NewProp_availability_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_SetInventoryItemEnabled_Statics::NewProp_availability_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutMenuPopupWidget_SetInventoryItemEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupWidget_SetInventoryItemEnabled_Statics::NewProp_widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupWidget_SetInventoryItemEnabled_Statics::NewProp_availability_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupWidget_SetInventoryItemEnabled_Statics::NewProp_availability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_SetInventoryItemEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_SetInventoryItemEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupWidget, nullptr, "SetInventoryItemEnabled", nullptr, nullptr, sizeof(LoadoutMenuPopupWidget_eventSetInventoryItemEnabled_Parms), Z_Construct_UFunction_ULoadoutMenuPopupWidget_SetInventoryItemEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_SetInventoryItemEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_SetInventoryItemEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_SetInventoryItemEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupWidget_SetInventoryItemEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupWidget_SetInventoryItemEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupWidget_ShowMenuLoadoutPartsTooltip_Statics
	{
		struct LoadoutMenuPopupWidget_eventShowMenuLoadoutPartsTooltip_Parms
		{
			UCoreButtonWidget* hoveredSlotWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hoveredSlotWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hoveredSlotWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_ShowMenuLoadoutPartsTooltip_Statics::NewProp_hoveredSlotWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_ShowMenuLoadoutPartsTooltip_Statics::NewProp_hoveredSlotWidget = { "hoveredSlotWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupWidget_eventShowMenuLoadoutPartsTooltip_Parms, hoveredSlotWidget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_ShowMenuLoadoutPartsTooltip_Statics::NewProp_hoveredSlotWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_ShowMenuLoadoutPartsTooltip_Statics::NewProp_hoveredSlotWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutMenuPopupWidget_ShowMenuLoadoutPartsTooltip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupWidget_ShowMenuLoadoutPartsTooltip_Statics::NewProp_hoveredSlotWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_ShowMenuLoadoutPartsTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_ShowMenuLoadoutPartsTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupWidget, nullptr, "ShowMenuLoadoutPartsTooltip", nullptr, nullptr, sizeof(LoadoutMenuPopupWidget_eventShowMenuLoadoutPartsTooltip_Parms), Z_Construct_UFunction_ULoadoutMenuPopupWidget_ShowMenuLoadoutPartsTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_ShowMenuLoadoutPartsTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_ShowMenuLoadoutPartsTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_ShowMenuLoadoutPartsTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupWidget_ShowMenuLoadoutPartsTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupWidget_ShowMenuLoadoutPartsTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupWidget_UpdateInventoryItemData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupWidget_UpdateInventoryItemData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupWidget_UpdateInventoryItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupWidget, nullptr, "UpdateInventoryItemData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupWidget_UpdateInventoryItemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupWidget_UpdateInventoryItemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupWidget_UpdateInventoryItemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupWidget_UpdateInventoryItemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULoadoutMenuPopupWidget_NoRegister()
	{
		return ULoadoutMenuPopupWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutMenuPowerItemRTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadoutMenuPowerItemRTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutMenuAddonRTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadoutMenuAddonRTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutMenuOfferingRTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadoutMenuOfferingRTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutMenuPerkRTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadoutMenuPerkRTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotRoleIndexText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BotRoleIndexText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutMenuInventoryRTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadoutMenuInventoryRTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutMenuSubtitleRTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadoutMenuSubtitleRTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutMenuPresetRTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadoutMenuPresetRTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropDownListWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DropDownListWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropDownListTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DropDownListTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoreMenuPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoreMenuPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoreMenuItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoreMenuItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoreAddon_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoreAddon_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoreAddon_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoreAddon_2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoreOffering_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoreOffering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CorePerk_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CorePerk_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CorePerk_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CorePerk_2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CorePerk_3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CorePerk_3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CorePerk_4_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CorePerk_4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresetContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PresetContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryGridContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryGridContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaginationGridContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PaginationGridContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftArrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftArrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightArrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightArrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlusSignImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlusSignImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkBarImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LinkBarImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddonLinkBarImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AddonLinkBarImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onPaginationAnimationCompletedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__onPaginationAnimationCompletedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onLoadoutMenuSlotClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__onLoadoutMenuSlotClickedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onLoadoutMenuSlotSelectedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__onLoadoutMenuSlotSelectedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onLoadoutMenuInventorySlotClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__onLoadoutMenuInventorySlotClickedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onLoadoutMenuPresetSlotClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__onLoadoutMenuPresetSlotClickedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onSelectedCharacterChangedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__onSelectedCharacterChangedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__loadoutPowerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__loadoutPowerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__loadoutItemWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__loadoutItemWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__loadoutAddonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__loadoutAddonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__loadoutOfferingClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__loadoutOfferingClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__loadoutPerkClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__loadoutPerkClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__paginationWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__paginationWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inventoryPerRow_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__inventoryPerRow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inventoryPerColumn_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__inventoryPerColumn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cellsPerRow_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__cellsPerRow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inventoryItemPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__inventoryItemPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inventoryPerkPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__inventoryPerkPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inventoryOfferingPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__inventoryOfferingPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inventoryPerkExtraNudge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__inventoryPerkExtraNudge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inventoryOfferingExtraNudge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__inventoryOfferingExtraNudge;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HorizontalAlignment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VerticalAlignment;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__inventoryItemWidgetList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inventoryItemWidgetList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__inventoryItemWidgetList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__perkSlotWidget_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perkSlotWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__perkSlotWidget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__addonSlotWidget_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__addonSlotWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__addonSlotWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__menuLoadoutPartViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__menuLoadoutPartViewData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__loadoutSelectedSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__loadoutSelectedSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__loadoutSelectedSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numberOfPaginationItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__numberOfPaginationItem;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__perkData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perkData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__perkData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__addonLoadoutData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__addonLoadoutData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__addonLoadoutData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__inventoryViewData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inventoryViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__inventoryViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreGenericPopupWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadoutMenuPopupWidget_HideMenuLoadoutPartsTooltip, "HideMenuLoadoutPartsTooltip" }, // 806142724
		{ &Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropDownListSelectedOptionChanged, "OnDropDownListSelectedOptionChanged" }, // 2391879979
		{ &Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnDropdownSelected, "OnDropdownSelected" }, // 4108560037
		{ &Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuAddonSlotClicked, "OnLoadoutMenuAddonSlotClicked" }, // 4251834380
		{ &Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuInventorySlotClicked, "OnLoadoutMenuInventorySlotClicked" }, // 2393941588
		{ &Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuItemSlotClicked, "OnLoadoutMenuItemSlotClicked" }, // 2943310367
		{ &Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuLeftArrowClicked, "OnLoadoutMenuLeftArrowClicked" }, // 3995350823
		{ &Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuOfferingSlotClicked, "OnLoadoutMenuOfferingSlotClicked" }, // 3713627656
		{ &Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPerkSlotClicked, "OnLoadoutMenuPerkSlotClicked" }, // 1119519281
		{ &Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPowerSlotClicked, "OnLoadoutMenuPowerSlotClicked" }, // 3221007471
		{ &Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuPresetClicked, "OnLoadoutMenuPresetClicked" }, // 1075988484
		{ &Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnLoadoutMenuRightArrowClicked, "OnLoadoutMenuRightArrowClicked" }, // 3137529694
		{ &Z_Construct_UFunction_ULoadoutMenuPopupWidget_OnPaginationSelected, "OnPaginationSelected" }, // 1483860360
		{ &Z_Construct_UFunction_ULoadoutMenuPopupWidget_PlayPaginationInAnimation, "PlayPaginationInAnimation" }, // 897911503
		{ &Z_Construct_UFunction_ULoadoutMenuPopupWidget_PlayPaginationOutAnimation, "PlayPaginationOutAnimation" }, // 2982841797
		{ &Z_Construct_UFunction_ULoadoutMenuPopupWidget_SetInventoryItemEnabled, "SetInventoryItemEnabled" }, // 2147575342
		{ &Z_Construct_UFunction_ULoadoutMenuPopupWidget_ShowMenuLoadoutPartsTooltip, "ShowMenuLoadoutPartsTooltip" }, // 344882079
		{ &Z_Construct_UFunction_ULoadoutMenuPopupWidget_UpdateInventoryItemData, "UpdateInventoryItemData" }, // 2269737464
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LoadoutMenuPopupWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuPowerItemRTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuPowerItemRTB = { "LoadoutMenuPowerItemRTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, LoadoutMenuPowerItemRTB), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuPowerItemRTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuPowerItemRTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuAddonRTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuAddonRTB = { "LoadoutMenuAddonRTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, LoadoutMenuAddonRTB), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuAddonRTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuAddonRTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuOfferingRTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuOfferingRTB = { "LoadoutMenuOfferingRTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, LoadoutMenuOfferingRTB), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuOfferingRTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuOfferingRTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuPerkRTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuPerkRTB = { "LoadoutMenuPerkRTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, LoadoutMenuPerkRTB), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuPerkRTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuPerkRTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_BotRoleIndexText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_BotRoleIndexText = { "BotRoleIndexText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, BotRoleIndexText), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_BotRoleIndexText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_BotRoleIndexText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuInventoryRTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuInventoryRTB = { "LoadoutMenuInventoryRTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, LoadoutMenuInventoryRTB), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuInventoryRTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuInventoryRTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuSubtitleRTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuSubtitleRTB = { "LoadoutMenuSubtitleRTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, LoadoutMenuSubtitleRTB), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuSubtitleRTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuSubtitleRTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuPresetRTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuPresetRTB = { "LoadoutMenuPresetRTB", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, LoadoutMenuPresetRTB), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuPresetRTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuPresetRTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_DropDownListWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_DropDownListWidget = { "DropDownListWidget", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, DropDownListWidget), Z_Construct_UClass_UDBDDropDownListWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_DropDownListWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_DropDownListWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_DropDownListTrigger_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_DropDownListTrigger = { "DropDownListTrigger", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, DropDownListTrigger), Z_Construct_UClass_UDBDDropDownListButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_DropDownListTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_DropDownListTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CoreMenuPower_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CoreMenuPower = { "CoreMenuPower", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, CoreMenuPower), Z_Construct_UClass_UCoreMenuPowerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CoreMenuPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CoreMenuPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CoreMenuItem_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CoreMenuItem = { "CoreMenuItem", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, CoreMenuItem), Z_Construct_UClass_UCoreMenuItemWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CoreMenuItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CoreMenuItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CoreAddon_1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CoreAddon_1 = { "CoreAddon_1", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, CoreAddon_1), Z_Construct_UClass_UCoreMenuAddonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CoreAddon_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CoreAddon_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CoreAddon_2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CoreAddon_2 = { "CoreAddon_2", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, CoreAddon_2), Z_Construct_UClass_UCoreMenuAddonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CoreAddon_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CoreAddon_2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CoreOffering_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CoreOffering = { "CoreOffering", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, CoreOffering), Z_Construct_UClass_UCoreMenuOfferingWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CoreOffering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CoreOffering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CorePerk_1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CorePerk_1 = { "CorePerk_1", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, CorePerk_1), Z_Construct_UClass_UCoreMenuPerkWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CorePerk_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CorePerk_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CorePerk_2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CorePerk_2 = { "CorePerk_2", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, CorePerk_2), Z_Construct_UClass_UCoreMenuPerkWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CorePerk_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CorePerk_2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CorePerk_3_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CorePerk_3 = { "CorePerk_3", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, CorePerk_3), Z_Construct_UClass_UCoreMenuPerkWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CorePerk_3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CorePerk_3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CorePerk_4_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CorePerk_4 = { "CorePerk_4", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, CorePerk_4), Z_Construct_UClass_UCoreMenuPerkWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CorePerk_4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CorePerk_4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_PresetContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_PresetContainer = { "PresetContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, PresetContainer), Z_Construct_UClass_UCorePresetWidgetContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_PresetContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_PresetContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_InventoryGridContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_InventoryGridContainer = { "InventoryGridContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, InventoryGridContainer), Z_Construct_UClass_UGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_InventoryGridContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_InventoryGridContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_PaginationGridContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_PaginationGridContainer = { "PaginationGridContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, PaginationGridContainer), Z_Construct_UClass_UCorePaginationContainerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_PaginationGridContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_PaginationGridContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LeftArrow_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LeftArrow = { "LeftArrow", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, LeftArrow), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LeftArrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LeftArrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_RightArrow_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_RightArrow = { "RightArrow", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, RightArrow), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_RightArrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_RightArrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_PlusSignImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_PlusSignImage = { "PlusSignImage", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, PlusSignImage), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_PlusSignImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_PlusSignImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LinkBarImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LinkBarImage = { "LinkBarImage", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, LinkBarImage), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LinkBarImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LinkBarImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_AddonLinkBarImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_AddonLinkBarImage = { "AddonLinkBarImage", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, AddonLinkBarImage), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_AddonLinkBarImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_AddonLinkBarImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onPaginationAnimationCompletedDelegate_MetaData[] = {
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onPaginationAnimationCompletedDelegate = { "_onPaginationAnimationCompletedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _onPaginationAnimationCompletedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_OnPaginationAnimationCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onPaginationAnimationCompletedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onPaginationAnimationCompletedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onLoadoutMenuSlotClickedDelegate_MetaData[] = {
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onLoadoutMenuSlotClickedDelegate = { "_onLoadoutMenuSlotClickedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _onLoadoutMenuSlotClickedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_OnLoadoutMenuSlotClick__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onLoadoutMenuSlotClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onLoadoutMenuSlotClickedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onLoadoutMenuSlotSelectedDelegate_MetaData[] = {
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onLoadoutMenuSlotSelectedDelegate = { "_onLoadoutMenuSlotSelectedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _onLoadoutMenuSlotSelectedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_LoadoutMenuSlotIsSelected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onLoadoutMenuSlotSelectedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onLoadoutMenuSlotSelectedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onLoadoutMenuInventorySlotClickedDelegate_MetaData[] = {
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onLoadoutMenuInventorySlotClickedDelegate = { "_onLoadoutMenuInventorySlotClickedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _onLoadoutMenuInventorySlotClickedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_OnLoadoutMenuInventorySlotClick__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onLoadoutMenuInventorySlotClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onLoadoutMenuInventorySlotClickedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onLoadoutMenuPresetSlotClickedDelegate_MetaData[] = {
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onLoadoutMenuPresetSlotClickedDelegate = { "_onLoadoutMenuPresetSlotClickedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _onLoadoutMenuPresetSlotClickedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_OnLoadoutMenuPresetSlotClick__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onLoadoutMenuPresetSlotClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onLoadoutMenuPresetSlotClickedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onSelectedCharacterChangedDelegate_MetaData[] = {
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onSelectedCharacterChangedDelegate = { "_onSelectedCharacterChangedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _onSelectedCharacterChangedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_OnSelectedCharacterChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onSelectedCharacterChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onSelectedCharacterChangedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutPowerClass_MetaData[] = {
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutPowerClass = { "_loadoutPowerClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _loadoutPowerClass), Z_Construct_UClass_UCoreMenuPowerWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutPowerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutPowerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutItemWidgetClass_MetaData[] = {
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutItemWidgetClass = { "_loadoutItemWidgetClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _loadoutItemWidgetClass), Z_Construct_UClass_UCoreMenuItemWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutItemWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutItemWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutAddonClass_MetaData[] = {
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutAddonClass = { "_loadoutAddonClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _loadoutAddonClass), Z_Construct_UClass_UCoreMenuAddonWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutAddonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutAddonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutOfferingClass_MetaData[] = {
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutOfferingClass = { "_loadoutOfferingClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _loadoutOfferingClass), Z_Construct_UClass_UCoreMenuOfferingWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutOfferingClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutOfferingClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutPerkClass_MetaData[] = {
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutPerkClass = { "_loadoutPerkClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _loadoutPerkClass), Z_Construct_UClass_UCoreMenuPerkWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutPerkClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutPerkClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__paginationWidgetClass_MetaData[] = {
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__paginationWidgetClass = { "_paginationWidgetClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _paginationWidgetClass), Z_Construct_UClass_UCorePaginationContainerWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__paginationWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__paginationWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryPerRow_MetaData[] = {
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryPerRow = { "_inventoryPerRow", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _inventoryPerRow), METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryPerRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryPerRow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryPerColumn_MetaData[] = {
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryPerColumn = { "_inventoryPerColumn", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _inventoryPerColumn), METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryPerColumn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryPerColumn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__cellsPerRow_MetaData[] = {
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__cellsPerRow = { "_cellsPerRow", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _cellsPerRow), METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__cellsPerRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__cellsPerRow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryItemPadding_MetaData[] = {
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryItemPadding = { "_inventoryItemPadding", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _inventoryItemPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryItemPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryItemPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryPerkPadding_MetaData[] = {
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryPerkPadding = { "_inventoryPerkPadding", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _inventoryPerkPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryPerkPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryPerkPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryOfferingPadding_MetaData[] = {
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryOfferingPadding = { "_inventoryOfferingPadding", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _inventoryOfferingPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryOfferingPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryOfferingPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryPerkExtraNudge_MetaData[] = {
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryPerkExtraNudge = { "_inventoryPerkExtraNudge", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _inventoryPerkExtraNudge), METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryPerkExtraNudge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryPerkExtraNudge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryOfferingExtraNudge_MetaData[] = {
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryOfferingExtraNudge = { "_inventoryOfferingExtraNudge", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _inventoryOfferingExtraNudge), METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryOfferingExtraNudge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryOfferingExtraNudge_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_HorizontalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, HorizontalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_HorizontalAlignment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_VerticalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, VerticalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_VerticalAlignment_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryItemWidgetList_Inner = { "_inventoryItemWidgetList", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreMenuLoadoutPartWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryItemWidgetList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryItemWidgetList = { "_inventoryItemWidgetList", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _inventoryItemWidgetList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryItemWidgetList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryItemWidgetList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__perkSlotWidget_Inner = { "_perkSlotWidget", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreMenuPerkWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__perkSlotWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__perkSlotWidget = { "_perkSlotWidget", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _perkSlotWidget), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__perkSlotWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__perkSlotWidget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__addonSlotWidget_Inner = { "_addonSlotWidget", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreMenuAddonWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__addonSlotWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__addonSlotWidget = { "_addonSlotWidget", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _addonSlotWidget), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__addonSlotWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__addonSlotWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__menuLoadoutPartViewData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__menuLoadoutPartViewData = { "_menuLoadoutPartViewData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _menuLoadoutPartViewData), Z_Construct_UClass_UMenuLoadoutPartViewData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__menuLoadoutPartViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__menuLoadoutPartViewData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutSelectedSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutSelectedSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutSelectedSlot = { "_loadoutSelectedSlot", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _loadoutSelectedSlot), Z_Construct_UEnum_DBDSharedTypes_ELoadoutSlot, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutSelectedSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutSelectedSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__numberOfPaginationItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__numberOfPaginationItem = { "_numberOfPaginationItem", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _numberOfPaginationItem), METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__numberOfPaginationItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__numberOfPaginationItem_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__perkData_Inner = { "_perkData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULoadoutMenuPopupViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__perkData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__perkData = { "_perkData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _perkData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__perkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__perkData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__addonLoadoutData_Inner = { "_addonLoadoutData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULoadoutMenuPopupViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__addonLoadoutData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__addonLoadoutData = { "_addonLoadoutData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _addonLoadoutData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__addonLoadoutData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__addonLoadoutData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryViewData_Inner = { "_inventoryViewData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULoadoutMenuPopupViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryViewData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadoutMenuPopupWidget" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryViewData = { "_inventoryViewData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupWidget, _inventoryViewData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuPowerItemRTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuAddonRTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuOfferingRTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuPerkRTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_BotRoleIndexText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuInventoryRTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuSubtitleRTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LoadoutMenuPresetRTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_DropDownListWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_DropDownListTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CoreMenuPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CoreMenuItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CoreAddon_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CoreAddon_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CoreOffering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CorePerk_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CorePerk_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CorePerk_3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_CorePerk_4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_PresetContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_InventoryGridContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_PaginationGridContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LeftArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_RightArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_PlusSignImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_LinkBarImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_AddonLinkBarImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onPaginationAnimationCompletedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onLoadoutMenuSlotClickedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onLoadoutMenuSlotSelectedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onLoadoutMenuInventorySlotClickedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onLoadoutMenuPresetSlotClickedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__onSelectedCharacterChangedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutPowerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutItemWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutAddonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutOfferingClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutPerkClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__paginationWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryPerRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryPerColumn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__cellsPerRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryItemPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryPerkPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryOfferingPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryPerkExtraNudge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryOfferingExtraNudge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_HorizontalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_HorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_VerticalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp_VerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryItemWidgetList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryItemWidgetList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__perkSlotWidget_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__perkSlotWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__addonSlotWidget_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__addonSlotWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__menuLoadoutPartViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutSelectedSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__loadoutSelectedSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__numberOfPaginationItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__perkData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__perkData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__addonLoadoutData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__addonLoadoutData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryViewData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::NewProp__inventoryViewData,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULoadoutMenuPopupViewInterface_NoRegister, (int32)VTABLE_OFFSET(ULoadoutMenuPopupWidget, ILoadoutMenuPopupViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadoutMenuPopupWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::ClassParams = {
		&ULoadoutMenuPopupWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadoutMenuPopupWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoadoutMenuPopupWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadoutMenuPopupWidget, 1631841312);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<ULoadoutMenuPopupWidget>()
	{
		return ULoadoutMenuPopupWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadoutMenuPopupWidget(Z_Construct_UClass_ULoadoutMenuPopupWidget, &ULoadoutMenuPopupWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("ULoadoutMenuPopupWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadoutMenuPopupWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
