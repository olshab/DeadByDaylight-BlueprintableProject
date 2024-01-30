// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/LoadoutMenuPopupViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadoutMenuPopupViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_ULoadoutMenuPopupViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_ULoadoutMenuPopupViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_ULoadoutMenuPopupViewData_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ELoadoutSlot();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FTabWidgetData();
// End Cross Module References
	DEFINE_FUNCTION(ILoadoutMenuPopupViewInterface::execSetIsPerkSurfacingExperimentActive)
	{
		P_GET_UBOOL(Z_Param_isPerkSurfacingExperimentActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsPerkSurfacingExperimentActive_Implementation(Z_Param_isPerkSurfacingExperimentActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ILoadoutMenuPopupViewInterface::execSetLoadoutMenuInventoryData)
	{
		P_GET_TARRAY_REF(ULoadoutMenuPopupViewData*,Z_Param_Out_loadoutMenuSlotButtonData);
		P_GET_ENUM(ELoadoutSlot,Z_Param_slotSelected);
		P_GET_UBOOL(Z_Param_isNextSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoadoutMenuInventoryData_Implementation(Z_Param_Out_loadoutMenuSlotButtonData,ELoadoutSlot(Z_Param_slotSelected),Z_Param_isNextSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ILoadoutMenuPopupViewInterface::execSetLoadoutMenuSlotData)
	{
		P_GET_TARRAY_REF(ULoadoutMenuPopupViewData*,Z_Param_Out_loadoutMenuSlotButtonData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoadoutMenuSlotData_Implementation(Z_Param_Out_loadoutMenuSlotButtonData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ILoadoutMenuPopupViewInterface::execSetSelectableCharacters)
	{
		P_GET_TARRAY_REF(FTabWidgetData,Z_Param_Out_selectableCharacters);
		P_GET_STRUCT(FTabWidgetData,Z_Param_selectedCharacterData);
		P_GET_PROPERTY(FIntProperty,Z_Param_botIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectableCharacters_Implementation(Z_Param_Out_selectableCharacters,Z_Param_selectedCharacterData,Z_Param_botIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ILoadoutMenuPopupViewInterface::execSetSelectedInventoryItem)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_selectedIndex);
		P_GET_UBOOL(Z_Param_isUnequip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectedInventoryItem_Implementation(Z_Param_Out_selectedIndex,Z_Param_isUnequip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ILoadoutMenuPopupViewInterface::execUpdatePresetData)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_presetData);
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePresetData_Implementation(Z_Param_Out_presetData,Z_Param_selectedPreset);
		P_NATIVE_END;
	}
	void ILoadoutMenuPopupViewInterface::SetIsPerkSurfacingExperimentActive(bool isPerkSurfacingExperimentActive)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetIsPerkSurfacingExperimentActive instead.");
	}
	void ILoadoutMenuPopupViewInterface::SetLoadoutMenuInventoryData(TArray<ULoadoutMenuPopupViewData*> const& loadoutMenuSlotButtonData, const ELoadoutSlot slotSelected, bool isNextSlot)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetLoadoutMenuInventoryData instead.");
	}
	void ILoadoutMenuPopupViewInterface::SetLoadoutMenuSlotData(TArray<ULoadoutMenuPopupViewData*> const& loadoutMenuSlotButtonData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetLoadoutMenuSlotData instead.");
	}
	void ILoadoutMenuPopupViewInterface::SetSelectableCharacters(TArray<FTabWidgetData> const& selectableCharacters, const FTabWidgetData selectedCharacterData, const int32 botIndex)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSelectableCharacters instead.");
	}
	void ILoadoutMenuPopupViewInterface::SetSelectedInventoryItem(TArray<int32> const& selectedIndex, bool isUnequip)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSelectedInventoryItem instead.");
	}
	void ILoadoutMenuPopupViewInterface::UpdatePresetData(TArray<int32> const& presetData, const int32 selectedPreset)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdatePresetData instead.");
	}
	void ULoadoutMenuPopupViewInterface::StaticRegisterNativesULoadoutMenuPopupViewInterface()
	{
		UClass* Class = ULoadoutMenuPopupViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetIsPerkSurfacingExperimentActive", &ILoadoutMenuPopupViewInterface::execSetIsPerkSurfacingExperimentActive },
			{ "SetLoadoutMenuInventoryData", &ILoadoutMenuPopupViewInterface::execSetLoadoutMenuInventoryData },
			{ "SetLoadoutMenuSlotData", &ILoadoutMenuPopupViewInterface::execSetLoadoutMenuSlotData },
			{ "SetSelectableCharacters", &ILoadoutMenuPopupViewInterface::execSetSelectableCharacters },
			{ "SetSelectedInventoryItem", &ILoadoutMenuPopupViewInterface::execSetSelectedInventoryItem },
			{ "UpdatePresetData", &ILoadoutMenuPopupViewInterface::execUpdatePresetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetIsPerkSurfacingExperimentActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isPerkSurfacingExperimentActive_MetaData[];
#endif
		static void NewProp_isPerkSurfacingExperimentActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPerkSurfacingExperimentActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetIsPerkSurfacingExperimentActive_Statics::NewProp_isPerkSurfacingExperimentActive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetIsPerkSurfacingExperimentActive_Statics::NewProp_isPerkSurfacingExperimentActive_SetBit(void* Obj)
	{
		((LoadoutMenuPopupViewInterface_eventSetIsPerkSurfacingExperimentActive_Parms*)Obj)->isPerkSurfacingExperimentActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetIsPerkSurfacingExperimentActive_Statics::NewProp_isPerkSurfacingExperimentActive = { "isPerkSurfacingExperimentActive", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LoadoutMenuPopupViewInterface_eventSetIsPerkSurfacingExperimentActive_Parms), &Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetIsPerkSurfacingExperimentActive_Statics::NewProp_isPerkSurfacingExperimentActive_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetIsPerkSurfacingExperimentActive_Statics::NewProp_isPerkSurfacingExperimentActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetIsPerkSurfacingExperimentActive_Statics::NewProp_isPerkSurfacingExperimentActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetIsPerkSurfacingExperimentActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetIsPerkSurfacingExperimentActive_Statics::NewProp_isPerkSurfacingExperimentActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetIsPerkSurfacingExperimentActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetIsPerkSurfacingExperimentActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupViewInterface, nullptr, "SetIsPerkSurfacingExperimentActive", nullptr, nullptr, sizeof(LoadoutMenuPopupViewInterface_eventSetIsPerkSurfacingExperimentActive_Parms), Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetIsPerkSurfacingExperimentActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetIsPerkSurfacingExperimentActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetIsPerkSurfacingExperimentActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetIsPerkSurfacingExperimentActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetIsPerkSurfacingExperimentActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetIsPerkSurfacingExperimentActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_loadoutMenuSlotButtonData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_loadoutMenuSlotButtonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_loadoutMenuSlotButtonData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slotSelected_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_slotSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slotSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isNextSlot_MetaData[];
#endif
		static void NewProp_isNextSlot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isNextSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::NewProp_loadoutMenuSlotButtonData_Inner = { "loadoutMenuSlotButtonData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULoadoutMenuPopupViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::NewProp_loadoutMenuSlotButtonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::NewProp_loadoutMenuSlotButtonData = { "loadoutMenuSlotButtonData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupViewInterface_eventSetLoadoutMenuInventoryData_Parms, loadoutMenuSlotButtonData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::NewProp_loadoutMenuSlotButtonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::NewProp_loadoutMenuSlotButtonData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::NewProp_slotSelected_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::NewProp_slotSelected_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::NewProp_slotSelected = { "slotSelected", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupViewInterface_eventSetLoadoutMenuInventoryData_Parms, slotSelected), Z_Construct_UEnum_DBDSharedTypes_ELoadoutSlot, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::NewProp_slotSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::NewProp_slotSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::NewProp_isNextSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::NewProp_isNextSlot_SetBit(void* Obj)
	{
		((LoadoutMenuPopupViewInterface_eventSetLoadoutMenuInventoryData_Parms*)Obj)->isNextSlot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::NewProp_isNextSlot = { "isNextSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LoadoutMenuPopupViewInterface_eventSetLoadoutMenuInventoryData_Parms), &Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::NewProp_isNextSlot_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::NewProp_isNextSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::NewProp_isNextSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::NewProp_loadoutMenuSlotButtonData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::NewProp_loadoutMenuSlotButtonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::NewProp_slotSelected_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::NewProp_slotSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::NewProp_isNextSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupViewInterface, nullptr, "SetLoadoutMenuInventoryData", nullptr, nullptr, sizeof(LoadoutMenuPopupViewInterface_eventSetLoadoutMenuInventoryData_Parms), Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuSlotData_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_loadoutMenuSlotButtonData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_loadoutMenuSlotButtonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_loadoutMenuSlotButtonData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuSlotData_Statics::NewProp_loadoutMenuSlotButtonData_Inner = { "loadoutMenuSlotButtonData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULoadoutMenuPopupViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuSlotData_Statics::NewProp_loadoutMenuSlotButtonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuSlotData_Statics::NewProp_loadoutMenuSlotButtonData = { "loadoutMenuSlotButtonData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupViewInterface_eventSetLoadoutMenuSlotData_Parms, loadoutMenuSlotButtonData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuSlotData_Statics::NewProp_loadoutMenuSlotButtonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuSlotData_Statics::NewProp_loadoutMenuSlotButtonData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuSlotData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuSlotData_Statics::NewProp_loadoutMenuSlotButtonData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuSlotData_Statics::NewProp_loadoutMenuSlotButtonData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuSlotData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuSlotData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupViewInterface, nullptr, "SetLoadoutMenuSlotData", nullptr, nullptr, sizeof(LoadoutMenuPopupViewInterface_eventSetLoadoutMenuSlotData_Parms), Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuSlotData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuSlotData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuSlotData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuSlotData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuSlotData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuSlotData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_selectableCharacters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectableCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_selectableCharacters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedCharacterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_selectedCharacterData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_botIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_botIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Statics::NewProp_selectableCharacters_Inner = { "selectableCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTabWidgetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Statics::NewProp_selectableCharacters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Statics::NewProp_selectableCharacters = { "selectableCharacters", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupViewInterface_eventSetSelectableCharacters_Parms, selectableCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Statics::NewProp_selectableCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Statics::NewProp_selectableCharacters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Statics::NewProp_selectedCharacterData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Statics::NewProp_selectedCharacterData = { "selectedCharacterData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupViewInterface_eventSetSelectableCharacters_Parms, selectedCharacterData), Z_Construct_UScriptStruct_FTabWidgetData, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Statics::NewProp_selectedCharacterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Statics::NewProp_selectedCharacterData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Statics::NewProp_botIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Statics::NewProp_botIndex = { "botIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupViewInterface_eventSetSelectableCharacters_Parms, botIndex), METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Statics::NewProp_botIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Statics::NewProp_botIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Statics::NewProp_selectableCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Statics::NewProp_selectableCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Statics::NewProp_selectedCharacterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Statics::NewProp_botIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupViewInterface, nullptr, "SetSelectableCharacters", nullptr, nullptr, sizeof(LoadoutMenuPopupViewInterface_eventSetSelectableCharacters_Parms), Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_selectedIndex_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_selectedIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isUnequip_MetaData[];
#endif
		static void NewProp_isUnequip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isUnequip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem_Statics::NewProp_selectedIndex_Inner = { "selectedIndex", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem_Statics::NewProp_selectedIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem_Statics::NewProp_selectedIndex = { "selectedIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupViewInterface_eventSetSelectedInventoryItem_Parms, selectedIndex), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem_Statics::NewProp_selectedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem_Statics::NewProp_selectedIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem_Statics::NewProp_isUnequip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem_Statics::NewProp_isUnequip_SetBit(void* Obj)
	{
		((LoadoutMenuPopupViewInterface_eventSetSelectedInventoryItem_Parms*)Obj)->isUnequip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem_Statics::NewProp_isUnequip = { "isUnequip", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LoadoutMenuPopupViewInterface_eventSetSelectedInventoryItem_Parms), &Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem_Statics::NewProp_isUnequip_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem_Statics::NewProp_isUnequip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem_Statics::NewProp_isUnequip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem_Statics::NewProp_selectedIndex_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem_Statics::NewProp_selectedIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem_Statics::NewProp_isUnequip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupViewInterface, nullptr, "SetSelectedInventoryItem", nullptr, nullptr, sizeof(LoadoutMenuPopupViewInterface_eventSetSelectedInventoryItem_Parms), Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_UpdatePresetData_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_presetData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_presetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_presetData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedPreset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_selectedPreset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_UpdatePresetData_Statics::NewProp_presetData_Inner = { "presetData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_UpdatePresetData_Statics::NewProp_presetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_UpdatePresetData_Statics::NewProp_presetData = { "presetData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupViewInterface_eventUpdatePresetData_Parms, presetData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_UpdatePresetData_Statics::NewProp_presetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_UpdatePresetData_Statics::NewProp_presetData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_UpdatePresetData_Statics::NewProp_selectedPreset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_UpdatePresetData_Statics::NewProp_selectedPreset = { "selectedPreset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadoutMenuPopupViewInterface_eventUpdatePresetData_Parms, selectedPreset), METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_UpdatePresetData_Statics::NewProp_selectedPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_UpdatePresetData_Statics::NewProp_selectedPreset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_UpdatePresetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_UpdatePresetData_Statics::NewProp_presetData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_UpdatePresetData_Statics::NewProp_presetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_UpdatePresetData_Statics::NewProp_selectedPreset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_UpdatePresetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_UpdatePresetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadoutMenuPopupViewInterface, nullptr, "UpdatePresetData", nullptr, nullptr, sizeof(LoadoutMenuPopupViewInterface_eventUpdatePresetData_Parms), Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_UpdatePresetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_UpdatePresetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_UpdatePresetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_UpdatePresetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_UpdatePresetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_UpdatePresetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULoadoutMenuPopupViewInterface_NoRegister()
	{
		return ULoadoutMenuPopupViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULoadoutMenuPopupViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadoutMenuPopupViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoadoutMenuPopupViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetIsPerkSurfacingExperimentActive, "SetIsPerkSurfacingExperimentActive" }, // 1419882168
		{ &Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData, "SetLoadoutMenuInventoryData" }, // 2860082982
		{ &Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetLoadoutMenuSlotData, "SetLoadoutMenuSlotData" }, // 150448152
		{ &Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectableCharacters, "SetSelectableCharacters" }, // 1494609179
		{ &Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem, "SetSelectedInventoryItem" }, // 1845972479
		{ &Z_Construct_UFunction_ULoadoutMenuPopupViewInterface_UpdatePresetData, "UpdatePresetData" }, // 2083409461
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadoutMenuPopupViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILoadoutMenuPopupViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoadoutMenuPopupViewInterface_Statics::ClassParams = {
		&ULoadoutMenuPopupViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadoutMenuPopupViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoadoutMenuPopupViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadoutMenuPopupViewInterface, 1181924973);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<ULoadoutMenuPopupViewInterface>()
	{
		return ULoadoutMenuPopupViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadoutMenuPopupViewInterface(Z_Construct_UClass_ULoadoutMenuPopupViewInterface, &ULoadoutMenuPopupViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("ULoadoutMenuPopupViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadoutMenuPopupViewInterface);
	static FName NAME_ULoadoutMenuPopupViewInterface_SetIsPerkSurfacingExperimentActive = FName(TEXT("SetIsPerkSurfacingExperimentActive"));
	void ILoadoutMenuPopupViewInterface::Execute_SetIsPerkSurfacingExperimentActive(UObject* O, bool isPerkSurfacingExperimentActive)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULoadoutMenuPopupViewInterface::StaticClass()));
		LoadoutMenuPopupViewInterface_eventSetIsPerkSurfacingExperimentActive_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULoadoutMenuPopupViewInterface_SetIsPerkSurfacingExperimentActive);
		if (Func)
		{
			Parms.isPerkSurfacingExperimentActive=isPerkSurfacingExperimentActive;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ILoadoutMenuPopupViewInterface*)(O->GetNativeInterfaceAddress(ULoadoutMenuPopupViewInterface::StaticClass())))
		{
			I->SetIsPerkSurfacingExperimentActive_Implementation(isPerkSurfacingExperimentActive);
		}
	}
	static FName NAME_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData = FName(TEXT("SetLoadoutMenuInventoryData"));
	void ILoadoutMenuPopupViewInterface::Execute_SetLoadoutMenuInventoryData(UObject* O, TArray<ULoadoutMenuPopupViewData*> const& loadoutMenuSlotButtonData, const ELoadoutSlot slotSelected, bool isNextSlot)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULoadoutMenuPopupViewInterface::StaticClass()));
		LoadoutMenuPopupViewInterface_eventSetLoadoutMenuInventoryData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData);
		if (Func)
		{
			Parms.loadoutMenuSlotButtonData=loadoutMenuSlotButtonData;
			Parms.slotSelected=slotSelected;
			Parms.isNextSlot=isNextSlot;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ILoadoutMenuPopupViewInterface*)(O->GetNativeInterfaceAddress(ULoadoutMenuPopupViewInterface::StaticClass())))
		{
			I->SetLoadoutMenuInventoryData_Implementation(loadoutMenuSlotButtonData,slotSelected,isNextSlot);
		}
	}
	static FName NAME_ULoadoutMenuPopupViewInterface_SetLoadoutMenuSlotData = FName(TEXT("SetLoadoutMenuSlotData"));
	void ILoadoutMenuPopupViewInterface::Execute_SetLoadoutMenuSlotData(UObject* O, TArray<ULoadoutMenuPopupViewData*> const& loadoutMenuSlotButtonData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULoadoutMenuPopupViewInterface::StaticClass()));
		LoadoutMenuPopupViewInterface_eventSetLoadoutMenuSlotData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULoadoutMenuPopupViewInterface_SetLoadoutMenuSlotData);
		if (Func)
		{
			Parms.loadoutMenuSlotButtonData=loadoutMenuSlotButtonData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ILoadoutMenuPopupViewInterface*)(O->GetNativeInterfaceAddress(ULoadoutMenuPopupViewInterface::StaticClass())))
		{
			I->SetLoadoutMenuSlotData_Implementation(loadoutMenuSlotButtonData);
		}
	}
	static FName NAME_ULoadoutMenuPopupViewInterface_SetSelectableCharacters = FName(TEXT("SetSelectableCharacters"));
	void ILoadoutMenuPopupViewInterface::Execute_SetSelectableCharacters(UObject* O, TArray<FTabWidgetData> const& selectableCharacters, const FTabWidgetData selectedCharacterData, const int32 botIndex)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULoadoutMenuPopupViewInterface::StaticClass()));
		LoadoutMenuPopupViewInterface_eventSetSelectableCharacters_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULoadoutMenuPopupViewInterface_SetSelectableCharacters);
		if (Func)
		{
			Parms.selectableCharacters=selectableCharacters;
			Parms.selectedCharacterData=selectedCharacterData;
			Parms.botIndex=botIndex;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ILoadoutMenuPopupViewInterface*)(O->GetNativeInterfaceAddress(ULoadoutMenuPopupViewInterface::StaticClass())))
		{
			I->SetSelectableCharacters_Implementation(selectableCharacters,selectedCharacterData,botIndex);
		}
	}
	static FName NAME_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem = FName(TEXT("SetSelectedInventoryItem"));
	void ILoadoutMenuPopupViewInterface::Execute_SetSelectedInventoryItem(UObject* O, TArray<int32> const& selectedIndex, bool isUnequip)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULoadoutMenuPopupViewInterface::StaticClass()));
		LoadoutMenuPopupViewInterface_eventSetSelectedInventoryItem_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem);
		if (Func)
		{
			Parms.selectedIndex=selectedIndex;
			Parms.isUnequip=isUnequip;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ILoadoutMenuPopupViewInterface*)(O->GetNativeInterfaceAddress(ULoadoutMenuPopupViewInterface::StaticClass())))
		{
			I->SetSelectedInventoryItem_Implementation(selectedIndex,isUnequip);
		}
	}
	static FName NAME_ULoadoutMenuPopupViewInterface_UpdatePresetData = FName(TEXT("UpdatePresetData"));
	void ILoadoutMenuPopupViewInterface::Execute_UpdatePresetData(UObject* O, TArray<int32> const& presetData, const int32 selectedPreset)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULoadoutMenuPopupViewInterface::StaticClass()));
		LoadoutMenuPopupViewInterface_eventUpdatePresetData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULoadoutMenuPopupViewInterface_UpdatePresetData);
		if (Func)
		{
			Parms.presetData=presetData;
			Parms.selectedPreset=selectedPreset;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ILoadoutMenuPopupViewInterface*)(O->GetNativeInterfaceAddress(ULoadoutMenuPopupViewInterface::StaticClass())))
		{
			I->UpdatePresetData_Implementation(presetData,selectedPreset);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
