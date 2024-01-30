// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/LoadoutMenuPopupPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadoutMenuPopupPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_ULoadoutMenuPopupPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_ULoadoutMenuPopupPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UGenericPopupPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ELoadoutSlot();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySlotData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_ULoadoutMenuPopupViewData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULoadoutMenuPopupPresenter::execOnLoadoutMenuInventorySlotClick)
	{
		P_GET_ENUM(ELoadoutSlot,Z_Param_itemIndex);
		P_GET_PROPERTY(FNameProperty,Z_Param_itemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadoutMenuInventorySlotClick(ELoadoutSlot(Z_Param_itemIndex),Z_Param_itemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadoutMenuPopupPresenter::execOnLoadoutMenuPresetClicked)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_presetId);
		P_GET_ENUM(ELoadoutSlot,Z_Param_slotSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadoutMenuPresetClicked(Z_Param_presetId,ELoadoutSlot(Z_Param_slotSelected));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadoutMenuPopupPresenter::execOnLoadoutMenuPresetSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_presetId);
		P_GET_ENUM(ELoadoutSlot,Z_Param_slotSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadoutMenuPresetSelected(Z_Param_presetId,ELoadoutSlot(Z_Param_slotSelected));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadoutMenuPopupPresenter::execOnLoadoutMenuSlotIsSelected)
	{
		P_GET_ENUM(ELoadoutSlot,Z_Param_slotSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadoutMenuSlotIsSelected(ELoadoutSlot(Z_Param_slotSelected));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadoutMenuPopupPresenter::execOnSelectedCharacterChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedCharacterIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSelectedCharacterChanged(Z_Param_selectedCharacterIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadoutMenuPopupPresenter::execSetLoadoutPopupViewData)
	{
		P_GET_STRUCT_REF(FInventorySlotData,Z_Param_Out_slotData);
		P_GET_ENUM(EPlayerRole,Z_Param_playerRole);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULoadoutMenuPopupViewData**)Z_Param__Result=P_THIS->SetLoadoutPopupViewData(Z_Param_Out_slotData,EPlayerRole(Z_Param_playerRole));
		P_NATIVE_END;
	}
	void ULoadoutMenuPopupPresenter::StaticRegisterNativesULoadoutMenuPopupPresenter()
	{
		UClass* Class = ULoadoutMenuPopupPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLoadoutMenuInventorySlotClick", &ULoadoutMenuPopupPresenter::execOnLoadoutMenuInventorySlotClick },
			{ "OnLoadoutMenuPresetClicked", &ULoadoutMenuPopupPresenter::execOnLoadoutMenuPresetClicked },
			{ "OnLoadoutMenuPresetSelected", &ULoadoutMenuPopupPresenter::execOnLoadoutMenuPresetSelected },
			{ "OnLoadoutMenuSlotIsSelected", &ULoadoutMenuPopupPresenter::execOnLoadoutMenuSlotIsSelected },
			{ "OnSelectedCharacterChanged", &ULoadoutMenuPopupPresenter::execOnSelectedCharacterChanged },
			{ "SetLoadoutPopupViewData", &ULoadoutMenuPopupPresenter::execSetLoadoutPopupViewData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuInventorySlotClick_Statics
	{
		struct LoadoutMenuPopupPresenter_eventOnLoadoutMenuInventorySlotClick_Parms
		{
			ELoadoutSlot itemIndex;
			FName itemId;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_itemIndex_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_itemIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_itemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuInventorySlotClick_Statics::NewProp_itemIndex_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuInventorySlotClick_Statics::NewProp_itemIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuInventorySlotClick_Statics::NewProp_itemIndex = { "itemIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupPresenter_eventOnLoadoutMenuInventorySlotClick_Parms, itemIndex), Z_Construct_UEnum_DBDSharedTypes_ELoadoutSlot, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuInventorySlotClick_Statics::NewProp_itemIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuInventorySlotClick_Statics::NewProp_itemIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuInventorySlotClick_Statics::NewProp_itemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuInventorySlotClick_Statics::NewProp_itemId = { "itemId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupPresenter_eventOnLoadoutMenuInventorySlotClick_Parms, itemId), METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuInventorySlotClick_Statics::NewProp_itemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuInventorySlotClick_Statics::NewProp_itemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuInventorySlotClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuInventorySlotClick_Statics::NewProp_itemIndex_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuInventorySlotClick_Statics::NewProp_itemIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuInventorySlotClick_Statics::NewProp_itemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuInventorySlotClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuInventorySlotClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupPresenter, nullptr, "OnLoadoutMenuInventorySlotClick", nullptr, nullptr, sizeof(LoadoutMenuPopupPresenter_eventOnLoadoutMenuInventorySlotClick_Parms), Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuInventorySlotClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuInventorySlotClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuInventorySlotClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuInventorySlotClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuInventorySlotClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuInventorySlotClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetClicked_Statics
	{
		struct LoadoutMenuPopupPresenter_eventOnLoadoutMenuPresetClicked_Parms
		{
			int32 presetId;
			ELoadoutSlot slotSelected;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_presetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_presetId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slotSelected_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_slotSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slotSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetClicked_Statics::NewProp_presetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetClicked_Statics::NewProp_presetId = { "presetId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupPresenter_eventOnLoadoutMenuPresetClicked_Parms, presetId), METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetClicked_Statics::NewProp_presetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetClicked_Statics::NewProp_presetId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetClicked_Statics::NewProp_slotSelected_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetClicked_Statics::NewProp_slotSelected_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetClicked_Statics::NewProp_slotSelected = { "slotSelected", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupPresenter_eventOnLoadoutMenuPresetClicked_Parms, slotSelected), Z_Construct_UEnum_DBDSharedTypes_ELoadoutSlot, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetClicked_Statics::NewProp_slotSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetClicked_Statics::NewProp_slotSelected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetClicked_Statics::NewProp_presetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetClicked_Statics::NewProp_slotSelected_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetClicked_Statics::NewProp_slotSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupPresenter, nullptr, "OnLoadoutMenuPresetClicked", nullptr, nullptr, sizeof(LoadoutMenuPopupPresenter_eventOnLoadoutMenuPresetClicked_Parms), Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetSelected_Statics
	{
		struct LoadoutMenuPopupPresenter_eventOnLoadoutMenuPresetSelected_Parms
		{
			int32 presetId;
			ELoadoutSlot slotSelected;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_presetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_presetId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slotSelected_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_slotSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slotSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetSelected_Statics::NewProp_presetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetSelected_Statics::NewProp_presetId = { "presetId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupPresenter_eventOnLoadoutMenuPresetSelected_Parms, presetId), METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetSelected_Statics::NewProp_presetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetSelected_Statics::NewProp_presetId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetSelected_Statics::NewProp_slotSelected_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetSelected_Statics::NewProp_slotSelected_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetSelected_Statics::NewProp_slotSelected = { "slotSelected", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupPresenter_eventOnLoadoutMenuPresetSelected_Parms, slotSelected), Z_Construct_UEnum_DBDSharedTypes_ELoadoutSlot, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetSelected_Statics::NewProp_slotSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetSelected_Statics::NewProp_slotSelected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetSelected_Statics::NewProp_presetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetSelected_Statics::NewProp_slotSelected_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetSelected_Statics::NewProp_slotSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupPresenter, nullptr, "OnLoadoutMenuPresetSelected", nullptr, nullptr, sizeof(LoadoutMenuPopupPresenter_eventOnLoadoutMenuPresetSelected_Parms), Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuSlotIsSelected_Statics
	{
		struct LoadoutMenuPopupPresenter_eventOnLoadoutMenuSlotIsSelected_Parms
		{
			ELoadoutSlot slotSelected;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slotSelected_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slotSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuSlotIsSelected_Statics::NewProp_slotSelected_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuSlotIsSelected_Statics::NewProp_slotSelected = { "slotSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupPresenter_eventOnLoadoutMenuSlotIsSelected_Parms, slotSelected), Z_Construct_UEnum_DBDSharedTypes_ELoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuSlotIsSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuSlotIsSelected_Statics::NewProp_slotSelected_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuSlotIsSelected_Statics::NewProp_slotSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuSlotIsSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuSlotIsSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupPresenter, nullptr, "OnLoadoutMenuSlotIsSelected", nullptr, nullptr, sizeof(LoadoutMenuPopupPresenter_eventOnLoadoutMenuSlotIsSelected_Parms), Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuSlotIsSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuSlotIsSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuSlotIsSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuSlotIsSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuSlotIsSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuSlotIsSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnSelectedCharacterChanged_Statics
	{
		struct LoadoutMenuPopupPresenter_eventOnSelectedCharacterChanged_Parms
		{
			int32 selectedCharacterIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_selectedCharacterIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnSelectedCharacterChanged_Statics::NewProp_selectedCharacterIndex = { "selectedCharacterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupPresenter_eventOnSelectedCharacterChanged_Parms, selectedCharacterIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnSelectedCharacterChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnSelectedCharacterChanged_Statics::NewProp_selectedCharacterIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnSelectedCharacterChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnSelectedCharacterChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupPresenter, nullptr, "OnSelectedCharacterChanged", nullptr, nullptr, sizeof(LoadoutMenuPopupPresenter_eventOnSelectedCharacterChanged_Parms), Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnSelectedCharacterChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnSelectedCharacterChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnSelectedCharacterChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnSelectedCharacterChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnSelectedCharacterChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnSelectedCharacterChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData_Statics
	{
		struct LoadoutMenuPopupPresenter_eventSetLoadoutPopupViewData_Parms
		{
			FInventorySlotData slotData;
			EPlayerRole playerRole;
			ULoadoutMenuPopupViewData* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_slotData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_slotData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_playerRole_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_playerRole;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData_Statics::NewProp_slotData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData_Statics::NewProp_slotData = { "slotData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupPresenter_eventSetLoadoutPopupViewData_Parms, slotData), Z_Construct_UScriptStruct_FInventorySlotData, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData_Statics::NewProp_slotData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData_Statics::NewProp_slotData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData_Statics::NewProp_playerRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData_Statics::NewProp_playerRole_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData_Statics::NewProp_playerRole = { "playerRole", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupPresenter_eventSetLoadoutPopupViewData_Parms, playerRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData_Statics::NewProp_playerRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData_Statics::NewProp_playerRole_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupPresenter_eventSetLoadoutPopupViewData_Parms, ReturnValue), Z_Construct_UClass_ULoadoutMenuPopupViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData_Statics::NewProp_slotData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData_Statics::NewProp_playerRole_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData_Statics::NewProp_playerRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupPresenter, nullptr, "SetLoadoutPopupViewData", nullptr, nullptr, sizeof(LoadoutMenuPopupPresenter_eventSetLoadoutPopupViewData_Parms), Z_Construct_UFunction_ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULoadoutMenuPopupPresenter_NoRegister()
	{
		return ULoadoutMenuPopupPresenter::StaticClass();
	}
	struct Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__loadoutPopupSlotData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__loadoutPopupSlotData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__loadoutPopupSlotData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__loadoutPopupInventoryData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__loadoutPopupInventoryData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__loadoutPopupInventoryData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuInventorySlotClick, "OnLoadoutMenuInventorySlotClick" }, // 580831571
		{ &Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetClicked, "OnLoadoutMenuPresetClicked" }, // 830686328
		{ &Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetSelected, "OnLoadoutMenuPresetSelected" }, // 873108260
		{ &Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnLoadoutMenuSlotIsSelected, "OnLoadoutMenuSlotIsSelected" }, // 1074106317
		{ &Z_Construct_UFunction_ULoadoutMenuPopupPresenter_OnSelectedCharacterChanged, "OnSelectedCharacterChanged" }, // 467278235
		{ &Z_Construct_UFunction_ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData, "SetLoadoutPopupViewData" }, // 834480382
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LoadoutMenuPopupPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics::NewProp__loadoutPopupSlotData_Inner = { "_loadoutPopupSlotData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULoadoutMenuPopupViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics::NewProp__loadoutPopupSlotData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadoutMenuPopupPresenter" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics::NewProp__loadoutPopupSlotData = { "_loadoutPopupSlotData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupPresenter, _loadoutPopupSlotData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics::NewProp__loadoutPopupSlotData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics::NewProp__loadoutPopupSlotData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics::NewProp__loadoutPopupInventoryData_Inner = { "_loadoutPopupInventoryData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULoadoutMenuPopupViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics::NewProp__loadoutPopupInventoryData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadoutMenuPopupPresenter" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics::NewProp__loadoutPopupInventoryData = { "_loadoutPopupInventoryData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupPresenter, _loadoutPopupInventoryData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics::NewProp__loadoutPopupInventoryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics::NewProp__loadoutPopupInventoryData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics::NewProp__loadoutPopupSlotData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics::NewProp__loadoutPopupSlotData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics::NewProp__loadoutPopupInventoryData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics::NewProp__loadoutPopupInventoryData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadoutMenuPopupPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics::ClassParams = {
		&ULoadoutMenuPopupPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadoutMenuPopupPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadoutMenuPopupPresenter, 2272298);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<ULoadoutMenuPopupPresenter>()
	{
		return ULoadoutMenuPopupPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadoutMenuPopupPresenter(Z_Construct_UClass_ULoadoutMenuPopupPresenter, &ULoadoutMenuPopupPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("ULoadoutMenuPopupPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadoutMenuPopupPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
