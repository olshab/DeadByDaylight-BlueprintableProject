// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ProfileMenuCustomizationViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfileMenuCustomizationViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UProfileMenuCustomizationViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UProfileMenuCustomizationViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECustomizationCategory();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemSorting();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData();
// End Cross Module References
	DEFINE_FUNCTION(IProfileMenuCustomizationViewInterface::execDeinit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Deinit_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IProfileMenuCustomizationViewInterface::execDeselectItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeselectItem_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IProfileMenuCustomizationViewInterface::execEnableInputs)
	{
		P_GET_UBOOL(Z_Param_enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableInputs_Implementation(Z_Param_enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IProfileMenuCustomizationViewInterface::execInit)
	{
		P_GET_ENUM(ECustomizationCategory,Z_Param_customizationCategory);
		P_GET_ENUM(EItemSorting,Z_Param_itemSortingType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init_Implementation(ECustomizationCategory(Z_Param_customizationCategory),EItemSorting(Z_Param_itemSortingType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IProfileMenuCustomizationViewInterface::execSetEquipButtonText)
	{
		P_GET_UBOOL(Z_Param_canEquip);
		P_GET_UBOOL(Z_Param_isEquipped);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEquipButtonText_Implementation(Z_Param_canEquip,Z_Param_isEquipped);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IProfileMenuCustomizationViewInterface::execSetItemsData)
	{
		P_GET_TARRAY_REF(UStoreCustomizationItemViewData*,Z_Param_Out_customizationRewardsData);
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItemsData_Implementation(Z_Param_Out_customizationRewardsData,Z_Param_selectedIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IProfileMenuCustomizationViewInterface::execSetPreviewAreaData)
	{
		P_GET_STRUCT_REF(FCustomizationItemPreviewAreaViewData,Z_Param_Out_viewData);
		P_GET_UBOOL(Z_Param_noCustomizationEquipped);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreviewAreaData_Implementation(Z_Param_Out_viewData,Z_Param_noCustomizationEquipped);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IProfileMenuCustomizationViewInterface::execSetSelectedItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectedItem_Implementation(Z_Param_selectedIndex);
		P_NATIVE_END;
	}
	void IProfileMenuCustomizationViewInterface::Deinit()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Deinit instead.");
	}
	void IProfileMenuCustomizationViewInterface::DeselectItem()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DeselectItem instead.");
	}
	void IProfileMenuCustomizationViewInterface::EnableInputs(bool enable)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EnableInputs instead.");
	}
	void IProfileMenuCustomizationViewInterface::Init(ECustomizationCategory customizationCategory, EItemSorting itemSortingType)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Init instead.");
	}
	void IProfileMenuCustomizationViewInterface::SetEquipButtonText(bool canEquip, bool isEquipped)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetEquipButtonText instead.");
	}
	void IProfileMenuCustomizationViewInterface::SetItemsData(TArray<UStoreCustomizationItemViewData*> const& customizationRewardsData, const int32 selectedIndex)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetItemsData instead.");
	}
	void IProfileMenuCustomizationViewInterface::SetPreviewAreaData(FCustomizationItemPreviewAreaViewData const& viewData, bool noCustomizationEquipped)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetPreviewAreaData instead.");
	}
	void IProfileMenuCustomizationViewInterface::SetSelectedItem(const int32 selectedIndex)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSelectedItem instead.");
	}
	void UProfileMenuCustomizationViewInterface::StaticRegisterNativesUProfileMenuCustomizationViewInterface()
	{
		UClass* Class = UProfileMenuCustomizationViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Deinit", &IProfileMenuCustomizationViewInterface::execDeinit },
			{ "DeselectItem", &IProfileMenuCustomizationViewInterface::execDeselectItem },
			{ "EnableInputs", &IProfileMenuCustomizationViewInterface::execEnableInputs },
			{ "Init", &IProfileMenuCustomizationViewInterface::execInit },
			{ "SetEquipButtonText", &IProfileMenuCustomizationViewInterface::execSetEquipButtonText },
			{ "SetItemsData", &IProfileMenuCustomizationViewInterface::execSetItemsData },
			{ "SetPreviewAreaData", &IProfileMenuCustomizationViewInterface::execSetPreviewAreaData },
			{ "SetSelectedItem", &IProfileMenuCustomizationViewInterface::execSetSelectedItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Deinit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Deinit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuCustomizationViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Deinit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuCustomizationViewInterface, nullptr, "Deinit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Deinit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Deinit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Deinit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Deinit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_DeselectItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_DeselectItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuCustomizationViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_DeselectItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuCustomizationViewInterface, nullptr, "DeselectItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_DeselectItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_DeselectItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_DeselectItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_DeselectItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_EnableInputs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enable_MetaData[];
#endif
		static void NewProp_enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_EnableInputs_Statics::NewProp_enable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_EnableInputs_Statics::NewProp_enable_SetBit(void* Obj)
	{
		((ProfileMenuCustomizationViewInterface_eventEnableInputs_Parms*)Obj)->enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_EnableInputs_Statics::NewProp_enable = { "enable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ProfileMenuCustomizationViewInterface_eventEnableInputs_Parms), &Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_EnableInputs_Statics::NewProp_enable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_EnableInputs_Statics::NewProp_enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_EnableInputs_Statics::NewProp_enable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_EnableInputs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_EnableInputs_Statics::NewProp_enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_EnableInputs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuCustomizationViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_EnableInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuCustomizationViewInterface, nullptr, "EnableInputs", nullptr, nullptr, sizeof(ProfileMenuCustomizationViewInterface_eventEnableInputs_Parms), Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_EnableInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_EnableInputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_EnableInputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_EnableInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_EnableInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_EnableInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Init_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_customizationCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_customizationCategory;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_itemSortingType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_itemSortingType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Init_Statics::NewProp_customizationCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Init_Statics::NewProp_customizationCategory = { "customizationCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProfileMenuCustomizationViewInterface_eventInit_Parms, customizationCategory), Z_Construct_UEnum_DBDSharedTypes_ECustomizationCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Init_Statics::NewProp_itemSortingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Init_Statics::NewProp_itemSortingType = { "itemSortingType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProfileMenuCustomizationViewInterface_eventInit_Parms, itemSortingType), Z_Construct_UEnum_DBDSharedTypes_EItemSorting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Init_Statics::NewProp_customizationCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Init_Statics::NewProp_customizationCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Init_Statics::NewProp_itemSortingType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Init_Statics::NewProp_itemSortingType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuCustomizationViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuCustomizationViewInterface, nullptr, "Init", nullptr, nullptr, sizeof(ProfileMenuCustomizationViewInterface_eventInit_Parms), Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetEquipButtonText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canEquip_MetaData[];
#endif
		static void NewProp_canEquip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canEquip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isEquipped_MetaData[];
#endif
		static void NewProp_isEquipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEquipped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetEquipButtonText_Statics::NewProp_canEquip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetEquipButtonText_Statics::NewProp_canEquip_SetBit(void* Obj)
	{
		((ProfileMenuCustomizationViewInterface_eventSetEquipButtonText_Parms*)Obj)->canEquip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetEquipButtonText_Statics::NewProp_canEquip = { "canEquip", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ProfileMenuCustomizationViewInterface_eventSetEquipButtonText_Parms), &Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetEquipButtonText_Statics::NewProp_canEquip_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetEquipButtonText_Statics::NewProp_canEquip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetEquipButtonText_Statics::NewProp_canEquip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetEquipButtonText_Statics::NewProp_isEquipped_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetEquipButtonText_Statics::NewProp_isEquipped_SetBit(void* Obj)
	{
		((ProfileMenuCustomizationViewInterface_eventSetEquipButtonText_Parms*)Obj)->isEquipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetEquipButtonText_Statics::NewProp_isEquipped = { "isEquipped", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ProfileMenuCustomizationViewInterface_eventSetEquipButtonText_Parms), &Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetEquipButtonText_Statics::NewProp_isEquipped_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetEquipButtonText_Statics::NewProp_isEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetEquipButtonText_Statics::NewProp_isEquipped_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetEquipButtonText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetEquipButtonText_Statics::NewProp_canEquip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetEquipButtonText_Statics::NewProp_isEquipped,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetEquipButtonText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuCustomizationViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetEquipButtonText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuCustomizationViewInterface, nullptr, "SetEquipButtonText", nullptr, nullptr, sizeof(ProfileMenuCustomizationViewInterface_eventSetEquipButtonText_Parms), Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetEquipButtonText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetEquipButtonText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetEquipButtonText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetEquipButtonText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetEquipButtonText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetEquipButtonText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetItemsData_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customizationRewardsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_customizationRewardsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_customizationRewardsData;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetItemsData_Statics::NewProp_customizationRewardsData_Inner = { "customizationRewardsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetItemsData_Statics::NewProp_customizationRewardsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetItemsData_Statics::NewProp_customizationRewardsData = { "customizationRewardsData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProfileMenuCustomizationViewInterface_eventSetItemsData_Parms, customizationRewardsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetItemsData_Statics::NewProp_customizationRewardsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetItemsData_Statics::NewProp_customizationRewardsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetItemsData_Statics::NewProp_selectedIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetItemsData_Statics::NewProp_selectedIndex = { "selectedIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProfileMenuCustomizationViewInterface_eventSetItemsData_Parms, selectedIndex), METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetItemsData_Statics::NewProp_selectedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetItemsData_Statics::NewProp_selectedIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetItemsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetItemsData_Statics::NewProp_customizationRewardsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetItemsData_Statics::NewProp_customizationRewardsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetItemsData_Statics::NewProp_selectedIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetItemsData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuCustomizationViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetItemsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuCustomizationViewInterface, nullptr, "SetItemsData", nullptr, nullptr, sizeof(ProfileMenuCustomizationViewInterface_eventSetItemsData_Parms), Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetItemsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetItemsData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetItemsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetItemsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetItemsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetItemsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetPreviewAreaData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_viewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_noCustomizationEquipped_MetaData[];
#endif
		static void NewProp_noCustomizationEquipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_noCustomizationEquipped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetPreviewAreaData_Statics::NewProp_viewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetPreviewAreaData_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProfileMenuCustomizationViewInterface_eventSetPreviewAreaData_Parms, viewData), Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetPreviewAreaData_Statics::NewProp_viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetPreviewAreaData_Statics::NewProp_viewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetPreviewAreaData_Statics::NewProp_noCustomizationEquipped_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetPreviewAreaData_Statics::NewProp_noCustomizationEquipped_SetBit(void* Obj)
	{
		((ProfileMenuCustomizationViewInterface_eventSetPreviewAreaData_Parms*)Obj)->noCustomizationEquipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetPreviewAreaData_Statics::NewProp_noCustomizationEquipped = { "noCustomizationEquipped", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ProfileMenuCustomizationViewInterface_eventSetPreviewAreaData_Parms), &Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetPreviewAreaData_Statics::NewProp_noCustomizationEquipped_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetPreviewAreaData_Statics::NewProp_noCustomizationEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetPreviewAreaData_Statics::NewProp_noCustomizationEquipped_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetPreviewAreaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetPreviewAreaData_Statics::NewProp_viewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetPreviewAreaData_Statics::NewProp_noCustomizationEquipped,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetPreviewAreaData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuCustomizationViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetPreviewAreaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuCustomizationViewInterface, nullptr, "SetPreviewAreaData", nullptr, nullptr, sizeof(ProfileMenuCustomizationViewInterface_eventSetPreviewAreaData_Parms), Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetPreviewAreaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetPreviewAreaData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetPreviewAreaData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetPreviewAreaData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetPreviewAreaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetPreviewAreaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetSelectedItem_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetSelectedItem_Statics::NewProp_selectedIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetSelectedItem_Statics::NewProp_selectedIndex = { "selectedIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProfileMenuCustomizationViewInterface_eventSetSelectedItem_Parms, selectedIndex), METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetSelectedItem_Statics::NewProp_selectedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetSelectedItem_Statics::NewProp_selectedIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetSelectedItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetSelectedItem_Statics::NewProp_selectedIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetSelectedItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuCustomizationViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetSelectedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuCustomizationViewInterface, nullptr, "SetSelectedItem", nullptr, nullptr, sizeof(ProfileMenuCustomizationViewInterface_eventSetSelectedItem_Parms), Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetSelectedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetSelectedItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetSelectedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetSelectedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetSelectedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetSelectedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProfileMenuCustomizationViewInterface_NoRegister()
	{
		return UProfileMenuCustomizationViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UProfileMenuCustomizationViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProfileMenuCustomizationViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProfileMenuCustomizationViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Deinit, "Deinit" }, // 3280491216
		{ &Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_DeselectItem, "DeselectItem" }, // 2333700801
		{ &Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_EnableInputs, "EnableInputs" }, // 1491169591
		{ &Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_Init, "Init" }, // 1623363965
		{ &Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetEquipButtonText, "SetEquipButtonText" }, // 1539966347
		{ &Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetItemsData, "SetItemsData" }, // 3785894704
		{ &Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetPreviewAreaData, "SetPreviewAreaData" }, // 478330136
		{ &Z_Construct_UFunction_UProfileMenuCustomizationViewInterface_SetSelectedItem, "SetSelectedItem" }, // 4082281341
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuCustomizationViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ProfileMenuCustomizationViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProfileMenuCustomizationViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IProfileMenuCustomizationViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProfileMenuCustomizationViewInterface_Statics::ClassParams = {
		&UProfileMenuCustomizationViewInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UProfileMenuCustomizationViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuCustomizationViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProfileMenuCustomizationViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProfileMenuCustomizationViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProfileMenuCustomizationViewInterface, 493521359);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UProfileMenuCustomizationViewInterface>()
	{
		return UProfileMenuCustomizationViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProfileMenuCustomizationViewInterface(Z_Construct_UClass_UProfileMenuCustomizationViewInterface, &UProfileMenuCustomizationViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UProfileMenuCustomizationViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProfileMenuCustomizationViewInterface);
	static FName NAME_UProfileMenuCustomizationViewInterface_Deinit = FName(TEXT("Deinit"));
	void IProfileMenuCustomizationViewInterface::Execute_Deinit(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProfileMenuCustomizationViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UProfileMenuCustomizationViewInterface_Deinit);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IProfileMenuCustomizationViewInterface*)(O->GetNativeInterfaceAddress(UProfileMenuCustomizationViewInterface::StaticClass())))
		{
			I->Deinit_Implementation();
		}
	}
	static FName NAME_UProfileMenuCustomizationViewInterface_DeselectItem = FName(TEXT("DeselectItem"));
	void IProfileMenuCustomizationViewInterface::Execute_DeselectItem(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProfileMenuCustomizationViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UProfileMenuCustomizationViewInterface_DeselectItem);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IProfileMenuCustomizationViewInterface*)(O->GetNativeInterfaceAddress(UProfileMenuCustomizationViewInterface::StaticClass())))
		{
			I->DeselectItem_Implementation();
		}
	}
	static FName NAME_UProfileMenuCustomizationViewInterface_EnableInputs = FName(TEXT("EnableInputs"));
	void IProfileMenuCustomizationViewInterface::Execute_EnableInputs(UObject* O, bool enable)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProfileMenuCustomizationViewInterface::StaticClass()));
		ProfileMenuCustomizationViewInterface_eventEnableInputs_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UProfileMenuCustomizationViewInterface_EnableInputs);
		if (Func)
		{
			Parms.enable=enable;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IProfileMenuCustomizationViewInterface*)(O->GetNativeInterfaceAddress(UProfileMenuCustomizationViewInterface::StaticClass())))
		{
			I->EnableInputs_Implementation(enable);
		}
	}
	static FName NAME_UProfileMenuCustomizationViewInterface_Init = FName(TEXT("Init"));
	void IProfileMenuCustomizationViewInterface::Execute_Init(UObject* O, ECustomizationCategory customizationCategory, EItemSorting itemSortingType)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProfileMenuCustomizationViewInterface::StaticClass()));
		ProfileMenuCustomizationViewInterface_eventInit_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UProfileMenuCustomizationViewInterface_Init);
		if (Func)
		{
			Parms.customizationCategory=customizationCategory;
			Parms.itemSortingType=itemSortingType;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IProfileMenuCustomizationViewInterface*)(O->GetNativeInterfaceAddress(UProfileMenuCustomizationViewInterface::StaticClass())))
		{
			I->Init_Implementation(customizationCategory,itemSortingType);
		}
	}
	static FName NAME_UProfileMenuCustomizationViewInterface_SetEquipButtonText = FName(TEXT("SetEquipButtonText"));
	void IProfileMenuCustomizationViewInterface::Execute_SetEquipButtonText(UObject* O, bool canEquip, bool isEquipped)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProfileMenuCustomizationViewInterface::StaticClass()));
		ProfileMenuCustomizationViewInterface_eventSetEquipButtonText_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UProfileMenuCustomizationViewInterface_SetEquipButtonText);
		if (Func)
		{
			Parms.canEquip=canEquip;
			Parms.isEquipped=isEquipped;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IProfileMenuCustomizationViewInterface*)(O->GetNativeInterfaceAddress(UProfileMenuCustomizationViewInterface::StaticClass())))
		{
			I->SetEquipButtonText_Implementation(canEquip,isEquipped);
		}
	}
	static FName NAME_UProfileMenuCustomizationViewInterface_SetItemsData = FName(TEXT("SetItemsData"));
	void IProfileMenuCustomizationViewInterface::Execute_SetItemsData(UObject* O, TArray<UStoreCustomizationItemViewData*> const& customizationRewardsData, const int32 selectedIndex)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProfileMenuCustomizationViewInterface::StaticClass()));
		ProfileMenuCustomizationViewInterface_eventSetItemsData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UProfileMenuCustomizationViewInterface_SetItemsData);
		if (Func)
		{
			Parms.customizationRewardsData=customizationRewardsData;
			Parms.selectedIndex=selectedIndex;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IProfileMenuCustomizationViewInterface*)(O->GetNativeInterfaceAddress(UProfileMenuCustomizationViewInterface::StaticClass())))
		{
			I->SetItemsData_Implementation(customizationRewardsData,selectedIndex);
		}
	}
	static FName NAME_UProfileMenuCustomizationViewInterface_SetPreviewAreaData = FName(TEXT("SetPreviewAreaData"));
	void IProfileMenuCustomizationViewInterface::Execute_SetPreviewAreaData(UObject* O, FCustomizationItemPreviewAreaViewData const& viewData, bool noCustomizationEquipped)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProfileMenuCustomizationViewInterface::StaticClass()));
		ProfileMenuCustomizationViewInterface_eventSetPreviewAreaData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UProfileMenuCustomizationViewInterface_SetPreviewAreaData);
		if (Func)
		{
			Parms.viewData=viewData;
			Parms.noCustomizationEquipped=noCustomizationEquipped;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IProfileMenuCustomizationViewInterface*)(O->GetNativeInterfaceAddress(UProfileMenuCustomizationViewInterface::StaticClass())))
		{
			I->SetPreviewAreaData_Implementation(viewData,noCustomizationEquipped);
		}
	}
	static FName NAME_UProfileMenuCustomizationViewInterface_SetSelectedItem = FName(TEXT("SetSelectedItem"));
	void IProfileMenuCustomizationViewInterface::Execute_SetSelectedItem(UObject* O, const int32 selectedIndex)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProfileMenuCustomizationViewInterface::StaticClass()));
		ProfileMenuCustomizationViewInterface_eventSetSelectedItem_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UProfileMenuCustomizationViewInterface_SetSelectedItem);
		if (Func)
		{
			Parms.selectedIndex=selectedIndex;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IProfileMenuCustomizationViewInterface*)(O->GetNativeInterfaceAddress(UProfileMenuCustomizationViewInterface::StaticClass())))
		{
			I->SetSelectedItem_Implementation(selectedIndex);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
