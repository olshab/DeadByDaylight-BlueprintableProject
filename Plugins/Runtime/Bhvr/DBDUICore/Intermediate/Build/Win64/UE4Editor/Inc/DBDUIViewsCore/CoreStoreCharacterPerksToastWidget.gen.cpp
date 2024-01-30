// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreStoreCharacterPerksToastWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreStoreCharacterPerksToastWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreKeyListenerButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UCharacterPerkViewData_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UMenuPowerViewData_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMenuPerkWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMenuPowerWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreStoreCharacterPerksToastWidget::execHideTooltip)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_unhoveredSlotWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideTooltip(Z_Param_unhoveredSlotWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreCharacterPerksToastWidget::execOnPlayerClick)
	{
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_pointerEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerClick(Z_Param_Out_pointerEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreCharacterPerksToastWidget::execSetCharacterData)
	{
		P_GET_TARRAY(UCharacterPerkViewData*,Z_Param_characterUniquePerksViewData);
		P_GET_ENUM(EPlayerRole,Z_Param_role);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCharacterData(Z_Param_characterUniquePerksViewData,EPlayerRole(Z_Param_role));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreCharacterPerksToastWidget::execSetKillerPowerData)
	{
		P_GET_OBJECT(UMenuPowerViewData,Z_Param_killerPowerViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetKillerPowerData(Z_Param_killerPowerViewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreCharacterPerksToastWidget::execSetPerkData)
	{
		P_GET_OBJECT(UCoreMenuPerkWidget,Z_Param_perkWidget);
		P_GET_OBJECT(UCharacterPerkViewData,Z_Param_perkViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPerkData(Z_Param_perkWidget,Z_Param_perkViewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStoreCharacterPerksToastWidget::execShowTooltip)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_hoveredSlotWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowTooltip(Z_Param_hoveredSlotWidget);
		P_NATIVE_END;
	}
	static FName NAME_UCoreStoreCharacterPerksToastWidget_CloseToast = FName(TEXT("CloseToast"));
	void UCoreStoreCharacterPerksToastWidget::CloseToast()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreStoreCharacterPerksToastWidget_CloseToast),NULL);
	}
	static FName NAME_UCoreStoreCharacterPerksToastWidget_Hide = FName(TEXT("Hide"));
	void UCoreStoreCharacterPerksToastWidget::Hide()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreStoreCharacterPerksToastWidget_Hide),NULL);
	}
	static FName NAME_UCoreStoreCharacterPerksToastWidget_OpenToast = FName(TEXT("OpenToast"));
	void UCoreStoreCharacterPerksToastWidget::OpenToast()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreStoreCharacterPerksToastWidget_OpenToast),NULL);
	}
	static FName NAME_UCoreStoreCharacterPerksToastWidget_SetCharacterRole = FName(TEXT("SetCharacterRole"));
	void UCoreStoreCharacterPerksToastWidget::SetCharacterRole(EPlayerRole role)
	{
		CoreStoreCharacterPerksToastWidget_eventSetCharacterRole_Parms Parms;
		Parms.role=role;
		ProcessEvent(FindFunctionChecked(NAME_UCoreStoreCharacterPerksToastWidget_SetCharacterRole),&Parms);
	}
	static FName NAME_UCoreStoreCharacterPerksToastWidget_Show = FName(TEXT("Show"));
	void UCoreStoreCharacterPerksToastWidget::Show()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreStoreCharacterPerksToastWidget_Show),NULL);
	}
	void UCoreStoreCharacterPerksToastWidget::StaticRegisterNativesUCoreStoreCharacterPerksToastWidget()
	{
		UClass* Class = UCoreStoreCharacterPerksToastWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideTooltip", &UCoreStoreCharacterPerksToastWidget::execHideTooltip },
			{ "OnPlayerClick", &UCoreStoreCharacterPerksToastWidget::execOnPlayerClick },
			{ "SetCharacterData", &UCoreStoreCharacterPerksToastWidget::execSetCharacterData },
			{ "SetKillerPowerData", &UCoreStoreCharacterPerksToastWidget::execSetKillerPowerData },
			{ "SetPerkData", &UCoreStoreCharacterPerksToastWidget::execSetPerkData },
			{ "ShowTooltip", &UCoreStoreCharacterPerksToastWidget::execShowTooltip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_CloseToast_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_CloseToast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreCharacterPerksToastWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_CloseToast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget, nullptr, "CloseToast", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_CloseToast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_CloseToast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_CloseToast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_CloseToast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_Hide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_Hide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreCharacterPerksToastWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_Hide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget, nullptr, "Hide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_Hide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_Hide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_Hide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_Hide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_HideTooltip_Statics
	{
		struct CoreStoreCharacterPerksToastWidget_eventHideTooltip_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_HideTooltip_Statics::NewProp_unhoveredSlotWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_HideTooltip_Statics::NewProp_unhoveredSlotWidget = { "unhoveredSlotWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreCharacterPerksToastWidget_eventHideTooltip_Parms, unhoveredSlotWidget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_HideTooltip_Statics::NewProp_unhoveredSlotWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_HideTooltip_Statics::NewProp_unhoveredSlotWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_HideTooltip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_HideTooltip_Statics::NewProp_unhoveredSlotWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_HideTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreCharacterPerksToastWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_HideTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget, nullptr, "HideTooltip", nullptr, nullptr, sizeof(CoreStoreCharacterPerksToastWidget_eventHideTooltip_Parms), Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_HideTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_HideTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_HideTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_HideTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_HideTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_HideTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_OnPlayerClick_Statics
	{
		struct CoreStoreCharacterPerksToastWidget_eventOnPlayerClick_Parms
		{
			FPointerEvent pointerEvent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pointerEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pointerEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_OnPlayerClick_Statics::NewProp_pointerEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_OnPlayerClick_Statics::NewProp_pointerEvent = { "pointerEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreCharacterPerksToastWidget_eventOnPlayerClick_Parms, pointerEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_OnPlayerClick_Statics::NewProp_pointerEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_OnPlayerClick_Statics::NewProp_pointerEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_OnPlayerClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_OnPlayerClick_Statics::NewProp_pointerEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_OnPlayerClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreCharacterPerksToastWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_OnPlayerClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget, nullptr, "OnPlayerClick", nullptr, nullptr, sizeof(CoreStoreCharacterPerksToastWidget_eventOnPlayerClick_Parms), Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_OnPlayerClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_OnPlayerClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_OnPlayerClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_OnPlayerClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_OnPlayerClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_OnPlayerClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_OpenToast_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_OpenToast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreCharacterPerksToastWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_OpenToast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget, nullptr, "OpenToast", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_OpenToast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_OpenToast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_OpenToast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_OpenToast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterData_Statics
	{
		struct CoreStoreCharacterPerksToastWidget_eventSetCharacterData_Parms
		{
			TArray<UCharacterPerkViewData*> characterUniquePerksViewData;
			EPlayerRole role;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_characterUniquePerksViewData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_characterUniquePerksViewData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_role_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_role;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterData_Statics::NewProp_characterUniquePerksViewData_Inner = { "characterUniquePerksViewData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCharacterPerkViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterData_Statics::NewProp_characterUniquePerksViewData = { "characterUniquePerksViewData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreCharacterPerksToastWidget_eventSetCharacterData_Parms, characterUniquePerksViewData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterData_Statics::NewProp_role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterData_Statics::NewProp_role = { "role", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreCharacterPerksToastWidget_eventSetCharacterData_Parms, role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterData_Statics::NewProp_characterUniquePerksViewData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterData_Statics::NewProp_characterUniquePerksViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterData_Statics::NewProp_role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterData_Statics::NewProp_role,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreCharacterPerksToastWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget, nullptr, "SetCharacterData", nullptr, nullptr, sizeof(CoreStoreCharacterPerksToastWidget_eventSetCharacterData_Parms), Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterRole_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_role_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_role;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterRole_Statics::NewProp_role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterRole_Statics::NewProp_role = { "role", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreCharacterPerksToastWidget_eventSetCharacterRole_Parms, role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterRole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterRole_Statics::NewProp_role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterRole_Statics::NewProp_role,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterRole_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreCharacterPerksToastWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget, nullptr, "SetCharacterRole", nullptr, nullptr, sizeof(CoreStoreCharacterPerksToastWidget_eventSetCharacterRole_Parms), Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterRole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetKillerPowerData_Statics
	{
		struct CoreStoreCharacterPerksToastWidget_eventSetKillerPowerData_Parms
		{
			const UMenuPowerViewData* killerPowerViewData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_killerPowerViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killerPowerViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetKillerPowerData_Statics::NewProp_killerPowerViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetKillerPowerData_Statics::NewProp_killerPowerViewData = { "killerPowerViewData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreCharacterPerksToastWidget_eventSetKillerPowerData_Parms, killerPowerViewData), Z_Construct_UClass_UMenuPowerViewData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetKillerPowerData_Statics::NewProp_killerPowerViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetKillerPowerData_Statics::NewProp_killerPowerViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetKillerPowerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetKillerPowerData_Statics::NewProp_killerPowerViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetKillerPowerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreCharacterPerksToastWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetKillerPowerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget, nullptr, "SetKillerPowerData", nullptr, nullptr, sizeof(CoreStoreCharacterPerksToastWidget_eventSetKillerPowerData_Parms), Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetKillerPowerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetKillerPowerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetKillerPowerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetKillerPowerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetKillerPowerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetKillerPowerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetPerkData_Statics
	{
		struct CoreStoreCharacterPerksToastWidget_eventSetPerkData_Parms
		{
			UCoreMenuPerkWidget* perkWidget;
			UCharacterPerkViewData* perkViewData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_perkWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_perkWidget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_perkViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetPerkData_Statics::NewProp_perkWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetPerkData_Statics::NewProp_perkWidget = { "perkWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreCharacterPerksToastWidget_eventSetPerkData_Parms, perkWidget), Z_Construct_UClass_UCoreMenuPerkWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetPerkData_Statics::NewProp_perkWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetPerkData_Statics::NewProp_perkWidget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetPerkData_Statics::NewProp_perkViewData = { "perkViewData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreCharacterPerksToastWidget_eventSetPerkData_Parms, perkViewData), Z_Construct_UClass_UCharacterPerkViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetPerkData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetPerkData_Statics::NewProp_perkWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetPerkData_Statics::NewProp_perkViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetPerkData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreCharacterPerksToastWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetPerkData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget, nullptr, "SetPerkData", nullptr, nullptr, sizeof(CoreStoreCharacterPerksToastWidget_eventSetPerkData_Parms), Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetPerkData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetPerkData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetPerkData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetPerkData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetPerkData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetPerkData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_Show_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_Show_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreCharacterPerksToastWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_Show_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget, nullptr, "Show", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_Show_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_Show_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_Show()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_Show_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_ShowTooltip_Statics
	{
		struct CoreStoreCharacterPerksToastWidget_eventShowTooltip_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_ShowTooltip_Statics::NewProp_hoveredSlotWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_ShowTooltip_Statics::NewProp_hoveredSlotWidget = { "hoveredSlotWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStoreCharacterPerksToastWidget_eventShowTooltip_Parms, hoveredSlotWidget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_ShowTooltip_Statics::NewProp_hoveredSlotWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_ShowTooltip_Statics::NewProp_hoveredSlotWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_ShowTooltip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_ShowTooltip_Statics::NewProp_hoveredSlotWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_ShowTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStoreCharacterPerksToastWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_ShowTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget, nullptr, "ShowTooltip", nullptr, nullptr, sizeof(CoreStoreCharacterPerksToastWidget_eventShowTooltip_Parms), Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_ShowTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_ShowTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_ShowTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_ShowTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_ShowTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_ShowTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_NoRegister()
	{
		return UCoreStoreCharacterPerksToastWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SafeArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SafeArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isOpen_MetaData[];
#endif
		static void NewProp_isOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoreKillerPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoreKillerPower;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreKeyListenerButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_CloseToast, "CloseToast" }, // 1458507148
		{ &Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_Hide, "Hide" }, // 369774019
		{ &Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_HideTooltip, "HideTooltip" }, // 1602263593
		{ &Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_OnPlayerClick, "OnPlayerClick" }, // 3704903903
		{ &Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_OpenToast, "OpenToast" }, // 888773196
		{ &Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterData, "SetCharacterData" }, // 1793406353
		{ &Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetCharacterRole, "SetCharacterRole" }, // 3432392901
		{ &Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetKillerPowerData, "SetKillerPowerData" }, // 2792041315
		{ &Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_SetPerkData, "SetPerkData" }, // 3991846258
		{ &Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_Show, "Show" }, // 242266803
		{ &Z_Construct_UFunction_UCoreStoreCharacterPerksToastWidget_ShowTooltip, "ShowTooltip" }, // 473190682
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreStoreCharacterPerksToastWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCharacterPerksToastWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_SafeArea_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreCharacterPerksToastWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCharacterPerksToastWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_SafeArea = { "SafeArea", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharacterPerksToastWidget, SafeArea), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_SafeArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_SafeArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_isOpen_MetaData[] = {
		{ "Category", "CoreStoreCharacterPerksToastWidget" },
		{ "ModuleRelativePath", "Public/CoreStoreCharacterPerksToastWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_isOpen_SetBit(void* Obj)
	{
		((UCoreStoreCharacterPerksToastWidget*)Obj)->isOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_isOpen = { "isOpen", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreStoreCharacterPerksToastWidget), &Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_isOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_isOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_isOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_CoreKillerPower_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreCharacterPerksToastWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCharacterPerksToastWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_CoreKillerPower = { "CoreKillerPower", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharacterPerksToastWidget, CoreKillerPower), Z_Construct_UClass_UCoreMenuPowerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_CoreKillerPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_CoreKillerPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_CorePerk_1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreCharacterPerksToastWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCharacterPerksToastWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_CorePerk_1 = { "CorePerk_1", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharacterPerksToastWidget, CorePerk_1), Z_Construct_UClass_UCoreMenuPerkWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_CorePerk_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_CorePerk_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_CorePerk_2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreCharacterPerksToastWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCharacterPerksToastWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_CorePerk_2 = { "CorePerk_2", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharacterPerksToastWidget, CorePerk_2), Z_Construct_UClass_UCoreMenuPerkWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_CorePerk_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_CorePerk_2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_CorePerk_3_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreStoreCharacterPerksToastWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStoreCharacterPerksToastWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_CorePerk_3 = { "CorePerk_3", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStoreCharacterPerksToastWidget, CorePerk_3), Z_Construct_UClass_UCoreMenuPerkWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_CorePerk_3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_CorePerk_3_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_SafeArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_isOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_CoreKillerPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_CorePerk_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_CorePerk_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::NewProp_CorePerk_3,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStoreCharacterPerksToastWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::ClassParams = {
		&UCoreStoreCharacterPerksToastWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreStoreCharacterPerksToastWidget, 3106497110);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreStoreCharacterPerksToastWidget>()
	{
		return UCoreStoreCharacterPerksToastWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreStoreCharacterPerksToastWidget(Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget, &UCoreStoreCharacterPerksToastWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreStoreCharacterPerksToastWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStoreCharacterPerksToastWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
