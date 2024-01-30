// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ArchiveMenuViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveMenuViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveMenuViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveMenuViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveCompendiumViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveRiftViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveTomeViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EArchiveMenuState();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FTabWidgetData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveNodeViewData();
	DBDSHAREDTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveTomeSkinData();
// End Cross Module References
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execClearChallengeReminderData)
	{
		P_GET_ENUM(EPlayerRole,Z_Param_role);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearChallengeReminderData_Implementation(EPlayerRole(Z_Param_role));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execCloseSlotSelector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseSlotSelector_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execGetArchiveCompendiumInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IArchiveCompendiumViewInterface>*)Z_Param__Result=P_THIS->GetArchiveCompendiumInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execGetArchiveRiftInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IArchiveRiftViewInterface>*)Z_Param__Result=P_THIS->GetArchiveRiftInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execGetArchiveTomeInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IArchiveTomeViewInterface>*)Z_Param__Result=P_THIS->GetArchiveTomeInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execHideUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideUI_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execSetChallengeReminderData)
	{
		P_GET_STRUCT_REF(FArchiveChallengeReminderViewData,Z_Param_Out_data);
		P_GET_ENUM(EPlayerRole,Z_Param_role);
		P_GET_UBOOL(Z_Param_needsAnimation);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_animationOriginalPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChallengeReminderData_Implementation(Z_Param_Out_data,EPlayerRole(Z_Param_role),Z_Param_needsAnimation,Z_Param_Out_animationOriginalPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execSetChallengeReminderVisibility)
	{
		P_GET_UBOOL(Z_Param_isVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChallengeReminderVisibility_Implementation(Z_Param_isVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execSetControllerElementsEnabled)
	{
		P_GET_UBOOL(Z_Param_enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControllerElementsEnabled_Implementation(Z_Param_enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execSetEventLabel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_eventLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEventLabel_Implementation(Z_Param_eventLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execSetInfoButtonEnabled)
	{
		P_GET_UBOOL(Z_Param_isEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInfoButtonEnabled_Implementation(Z_Param_isEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execSetInfoButtonVisible)
	{
		P_GET_UBOOL(Z_Param_isVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInfoButtonVisible_Implementation(Z_Param_isVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execSetMenuState)
	{
		P_GET_ENUM(EArchiveMenuState,Z_Param_menuState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMenuState_Implementation(EArchiveMenuState(Z_Param_menuState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execSetQuestNodeHoverEffect)
	{
		P_GET_ENUM(EPlayerRole,Z_Param_role);
		P_GET_UBOOL(Z_Param_isHovered);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetQuestNodeHoverEffect_Implementation(EPlayerRole(Z_Param_role),Z_Param_isHovered);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execSetRemainingTime)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_remainingTime);
		P_GET_UBOOL(Z_Param_isMoreThanWarningThreshold);
		P_GET_ENUM(EArchiveMenuState,Z_Param_menuState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRemainingTime_Implementation(Z_Param_remainingTime,Z_Param_isMoreThanWarningThreshold,EArchiveMenuState(Z_Param_menuState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execSetRemainingTimeVisible)
	{
		P_GET_UBOOL(Z_Param_isVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRemainingTimeVisible_Implementation(Z_Param_isVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execSetReminderSlotsEnabled)
	{
		P_GET_UBOOL(Z_Param_enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReminderSlotsEnabled_Implementation(Z_Param_enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execSetSubtitle)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_subtitle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubtitle_Implementation(Z_Param_Out_subtitle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execSetSubtitleVisible)
	{
		P_GET_UBOOL(Z_Param_isVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubtitleVisible_Implementation(Z_Param_isVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execSetTabEnabled)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_key);
		P_GET_UBOOL(Z_Param_enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTabEnabled_Implementation(Z_Param_key,Z_Param_enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execSetTabsData)
	{
		P_GET_TARRAY_REF(FTabWidgetData,Z_Param_Out_tabsData);
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTabsData_Implementation(Z_Param_Out_tabsData,Z_Param_selectedKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execSetTabSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTabSelected_Implementation(Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execSetTabsInputsEnabled)
	{
		P_GET_UBOOL(Z_Param_enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTabsInputsEnabled_Implementation(Z_Param_enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execSetTitle)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_title);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTitle_Implementation(Z_Param_Out_title);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execShowSlotSelector)
	{
		P_GET_STRUCT_REF(FArchiveNodeViewData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowSlotSelector_Implementation(Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execShowUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowUI_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveMenuViewInterface::execUpdateBackgroundSkin)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_key);
		P_GET_STRUCT_REF(FArchiveTomeSkinData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBackgroundSkin_Implementation(Z_Param_key,Z_Param_Out_data);
		P_NATIVE_END;
	}
	void IArchiveMenuViewInterface::ClearChallengeReminderData(EPlayerRole role)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClearChallengeReminderData instead.");
	}
	void IArchiveMenuViewInterface::CloseSlotSelector()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CloseSlotSelector instead.");
	}
	TScriptInterface<IArchiveCompendiumViewInterface> IArchiveMenuViewInterface::GetArchiveCompendiumInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetArchiveCompendiumInterface instead.");
		ArchiveMenuViewInterface_eventGetArchiveCompendiumInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	TScriptInterface<IArchiveRiftViewInterface> IArchiveMenuViewInterface::GetArchiveRiftInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetArchiveRiftInterface instead.");
		ArchiveMenuViewInterface_eventGetArchiveRiftInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	TScriptInterface<IArchiveTomeViewInterface> IArchiveMenuViewInterface::GetArchiveTomeInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetArchiveTomeInterface instead.");
		ArchiveMenuViewInterface_eventGetArchiveTomeInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	void IArchiveMenuViewInterface::HideUI()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HideUI instead.");
	}
	void IArchiveMenuViewInterface::Init()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Init instead.");
	}
	void IArchiveMenuViewInterface::SetChallengeReminderData(FArchiveChallengeReminderViewData const& data, EPlayerRole role, bool needsAnimation, FVector2D const& animationOriginalPosition)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetChallengeReminderData instead.");
	}
	void IArchiveMenuViewInterface::SetChallengeReminderVisibility(bool isVisible)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetChallengeReminderVisibility instead.");
	}
	void IArchiveMenuViewInterface::SetControllerElementsEnabled(bool enabled)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetControllerElementsEnabled instead.");
	}
	void IArchiveMenuViewInterface::SetEventLabel(const FString& eventLabel)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetEventLabel instead.");
	}
	void IArchiveMenuViewInterface::SetInfoButtonEnabled(bool isEnabled)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetInfoButtonEnabled instead.");
	}
	void IArchiveMenuViewInterface::SetInfoButtonVisible(bool isVisible)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetInfoButtonVisible instead.");
	}
	void IArchiveMenuViewInterface::SetMenuState(EArchiveMenuState menuState)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetMenuState instead.");
	}
	void IArchiveMenuViewInterface::SetQuestNodeHoverEffect(EPlayerRole role, bool isHovered)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetQuestNodeHoverEffect instead.");
	}
	void IArchiveMenuViewInterface::SetRemainingTime(const FString& remainingTime, bool isMoreThanWarningThreshold, EArchiveMenuState menuState)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetRemainingTime instead.");
	}
	void IArchiveMenuViewInterface::SetRemainingTimeVisible(bool isVisible)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetRemainingTimeVisible instead.");
	}
	void IArchiveMenuViewInterface::SetReminderSlotsEnabled(bool enabled)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetReminderSlotsEnabled instead.");
	}
	void IArchiveMenuViewInterface::SetSubtitle(FText const& subtitle)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSubtitle instead.");
	}
	void IArchiveMenuViewInterface::SetSubtitleVisible(bool isVisible)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSubtitleVisible instead.");
	}
	void IArchiveMenuViewInterface::SetTabEnabled(int32 key, bool enabled)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetTabEnabled instead.");
	}
	void IArchiveMenuViewInterface::SetTabsData(TArray<FTabWidgetData> const& tabsData, int32 selectedKey)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetTabsData instead.");
	}
	void IArchiveMenuViewInterface::SetTabSelected(int32 key)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetTabSelected instead.");
	}
	void IArchiveMenuViewInterface::SetTabsInputsEnabled(bool enabled)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetTabsInputsEnabled instead.");
	}
	void IArchiveMenuViewInterface::SetTitle(FText const& title)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetTitle instead.");
	}
	void IArchiveMenuViewInterface::ShowSlotSelector(FArchiveNodeViewData const& data)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShowSlotSelector instead.");
	}
	void IArchiveMenuViewInterface::ShowUI()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShowUI instead.");
	}
	void IArchiveMenuViewInterface::UpdateBackgroundSkin(const int32 key, FArchiveTomeSkinData const& data)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateBackgroundSkin instead.");
	}
	void UArchiveMenuViewInterface::StaticRegisterNativesUArchiveMenuViewInterface()
	{
		UClass* Class = UArchiveMenuViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearChallengeReminderData", &IArchiveMenuViewInterface::execClearChallengeReminderData },
			{ "CloseSlotSelector", &IArchiveMenuViewInterface::execCloseSlotSelector },
			{ "GetArchiveCompendiumInterface", &IArchiveMenuViewInterface::execGetArchiveCompendiumInterface },
			{ "GetArchiveRiftInterface", &IArchiveMenuViewInterface::execGetArchiveRiftInterface },
			{ "GetArchiveTomeInterface", &IArchiveMenuViewInterface::execGetArchiveTomeInterface },
			{ "HideUI", &IArchiveMenuViewInterface::execHideUI },
			{ "Init", &IArchiveMenuViewInterface::execInit },
			{ "SetChallengeReminderData", &IArchiveMenuViewInterface::execSetChallengeReminderData },
			{ "SetChallengeReminderVisibility", &IArchiveMenuViewInterface::execSetChallengeReminderVisibility },
			{ "SetControllerElementsEnabled", &IArchiveMenuViewInterface::execSetControllerElementsEnabled },
			{ "SetEventLabel", &IArchiveMenuViewInterface::execSetEventLabel },
			{ "SetInfoButtonEnabled", &IArchiveMenuViewInterface::execSetInfoButtonEnabled },
			{ "SetInfoButtonVisible", &IArchiveMenuViewInterface::execSetInfoButtonVisible },
			{ "SetMenuState", &IArchiveMenuViewInterface::execSetMenuState },
			{ "SetQuestNodeHoverEffect", &IArchiveMenuViewInterface::execSetQuestNodeHoverEffect },
			{ "SetRemainingTime", &IArchiveMenuViewInterface::execSetRemainingTime },
			{ "SetRemainingTimeVisible", &IArchiveMenuViewInterface::execSetRemainingTimeVisible },
			{ "SetReminderSlotsEnabled", &IArchiveMenuViewInterface::execSetReminderSlotsEnabled },
			{ "SetSubtitle", &IArchiveMenuViewInterface::execSetSubtitle },
			{ "SetSubtitleVisible", &IArchiveMenuViewInterface::execSetSubtitleVisible },
			{ "SetTabEnabled", &IArchiveMenuViewInterface::execSetTabEnabled },
			{ "SetTabsData", &IArchiveMenuViewInterface::execSetTabsData },
			{ "SetTabSelected", &IArchiveMenuViewInterface::execSetTabSelected },
			{ "SetTabsInputsEnabled", &IArchiveMenuViewInterface::execSetTabsInputsEnabled },
			{ "SetTitle", &IArchiveMenuViewInterface::execSetTitle },
			{ "ShowSlotSelector", &IArchiveMenuViewInterface::execShowSlotSelector },
			{ "ShowUI", &IArchiveMenuViewInterface::execShowUI },
			{ "UpdateBackgroundSkin", &IArchiveMenuViewInterface::execUpdateBackgroundSkin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_ClearChallengeReminderData_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_role_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_role;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_ClearChallengeReminderData_Statics::NewProp_role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_ClearChallengeReminderData_Statics::NewProp_role = { "role", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveMenuViewInterface_eventClearChallengeReminderData_Parms, role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuViewInterface_ClearChallengeReminderData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_ClearChallengeReminderData_Statics::NewProp_role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_ClearChallengeReminderData_Statics::NewProp_role,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_ClearChallengeReminderData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_ClearChallengeReminderData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "ClearChallengeReminderData", nullptr, nullptr, sizeof(ArchiveMenuViewInterface_eventClearChallengeReminderData_Parms), Z_Construct_UFunction_UArchiveMenuViewInterface_ClearChallengeReminderData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_ClearChallengeReminderData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_ClearChallengeReminderData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_ClearChallengeReminderData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_ClearChallengeReminderData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_ClearChallengeReminderData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_CloseSlotSelector_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_CloseSlotSelector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_CloseSlotSelector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "CloseSlotSelector", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_CloseSlotSelector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_CloseSlotSelector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_CloseSlotSelector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_CloseSlotSelector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveCompendiumInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveCompendiumInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveMenuViewInterface_eventGetArchiveCompendiumInterface_Parms, ReturnValue), Z_Construct_UClass_UArchiveCompendiumViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveCompendiumInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveCompendiumInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveCompendiumInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveCompendiumInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "GetArchiveCompendiumInterface", nullptr, nullptr, sizeof(ArchiveMenuViewInterface_eventGetArchiveCompendiumInterface_Parms), Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveCompendiumInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveCompendiumInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveCompendiumInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveCompendiumInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveCompendiumInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveCompendiumInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveRiftInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveRiftInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveMenuViewInterface_eventGetArchiveRiftInterface_Parms, ReturnValue), Z_Construct_UClass_UArchiveRiftViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveRiftInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveRiftInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveRiftInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveRiftInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "GetArchiveRiftInterface", nullptr, nullptr, sizeof(ArchiveMenuViewInterface_eventGetArchiveRiftInterface_Parms), Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveRiftInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveRiftInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveRiftInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveRiftInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveRiftInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveRiftInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveTomeInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveTomeInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveMenuViewInterface_eventGetArchiveTomeInterface_Parms, ReturnValue), Z_Construct_UClass_UArchiveTomeViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveTomeInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveTomeInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveTomeInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveTomeInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "GetArchiveTomeInterface", nullptr, nullptr, sizeof(ArchiveMenuViewInterface_eventGetArchiveTomeInterface_Parms), Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveTomeInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveTomeInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveTomeInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveTomeInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveTomeInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveTomeInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_HideUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_HideUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_HideUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "HideUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_HideUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_HideUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_HideUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_HideUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_role_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_role;
		static void NewProp_needsAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_needsAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_animationOriginalPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_animationOriginalPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveMenuViewInterface_eventSetChallengeReminderData_Parms, data), Z_Construct_UScriptStruct_FArchiveChallengeReminderViewData, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics::NewProp_role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics::NewProp_role = { "role", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveMenuViewInterface_eventSetChallengeReminderData_Parms, role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics::NewProp_needsAnimation_SetBit(void* Obj)
	{
		((ArchiveMenuViewInterface_eventSetChallengeReminderData_Parms*)Obj)->needsAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics::NewProp_needsAnimation = { "needsAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveMenuViewInterface_eventSetChallengeReminderData_Parms), &Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics::NewProp_needsAnimation_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics::NewProp_animationOriginalPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics::NewProp_animationOriginalPosition = { "animationOriginalPosition", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveMenuViewInterface_eventSetChallengeReminderData_Parms, animationOriginalPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics::NewProp_animationOriginalPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics::NewProp_animationOriginalPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics::NewProp_role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics::NewProp_role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics::NewProp_needsAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics::NewProp_animationOriginalPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "SetChallengeReminderData", nullptr, nullptr, sizeof(ArchiveMenuViewInterface_eventSetChallengeReminderData_Parms), Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderVisibility_Statics
	{
		static void NewProp_isVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderVisibility_Statics::NewProp_isVisible_SetBit(void* Obj)
	{
		((ArchiveMenuViewInterface_eventSetChallengeReminderVisibility_Parms*)Obj)->isVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderVisibility_Statics::NewProp_isVisible = { "isVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveMenuViewInterface_eventSetChallengeReminderVisibility_Parms), &Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderVisibility_Statics::NewProp_isVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderVisibility_Statics::NewProp_isVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "SetChallengeReminderVisibility", nullptr, nullptr, sizeof(ArchiveMenuViewInterface_eventSetChallengeReminderVisibility_Parms), Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_SetControllerElementsEnabled_Statics
	{
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveMenuViewInterface_SetControllerElementsEnabled_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((ArchiveMenuViewInterface_eventSetControllerElementsEnabled_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetControllerElementsEnabled_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveMenuViewInterface_eventSetControllerElementsEnabled_Parms), &Z_Construct_UFunction_UArchiveMenuViewInterface_SetControllerElementsEnabled_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuViewInterface_SetControllerElementsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetControllerElementsEnabled_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_SetControllerElementsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetControllerElementsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "SetControllerElementsEnabled", nullptr, nullptr, sizeof(ArchiveMenuViewInterface_eventSetControllerElementsEnabled_Parms), Z_Construct_UFunction_UArchiveMenuViewInterface_SetControllerElementsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetControllerElementsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_SetControllerElementsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetControllerElementsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_SetControllerElementsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_SetControllerElementsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_SetEventLabel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eventLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_eventLabel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_SetEventLabel_Statics::NewProp_eventLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetEventLabel_Statics::NewProp_eventLabel = { "eventLabel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveMenuViewInterface_eventSetEventLabel_Parms, eventLabel), METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_SetEventLabel_Statics::NewProp_eventLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetEventLabel_Statics::NewProp_eventLabel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuViewInterface_SetEventLabel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetEventLabel_Statics::NewProp_eventLabel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_SetEventLabel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetEventLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "SetEventLabel", nullptr, nullptr, sizeof(ArchiveMenuViewInterface_eventSetEventLabel_Parms), Z_Construct_UFunction_UArchiveMenuViewInterface_SetEventLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetEventLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_SetEventLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetEventLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_SetEventLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_SetEventLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonEnabled_Statics
	{
		static void NewProp_isEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonEnabled_Statics::NewProp_isEnabled_SetBit(void* Obj)
	{
		((ArchiveMenuViewInterface_eventSetInfoButtonEnabled_Parms*)Obj)->isEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonEnabled_Statics::NewProp_isEnabled = { "isEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveMenuViewInterface_eventSetInfoButtonEnabled_Parms), &Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonEnabled_Statics::NewProp_isEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonEnabled_Statics::NewProp_isEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "SetInfoButtonEnabled", nullptr, nullptr, sizeof(ArchiveMenuViewInterface_eventSetInfoButtonEnabled_Parms), Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonVisible_Statics
	{
		static void NewProp_isVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonVisible_Statics::NewProp_isVisible_SetBit(void* Obj)
	{
		((ArchiveMenuViewInterface_eventSetInfoButtonVisible_Parms*)Obj)->isVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonVisible_Statics::NewProp_isVisible = { "isVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveMenuViewInterface_eventSetInfoButtonVisible_Parms), &Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonVisible_Statics::NewProp_isVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonVisible_Statics::NewProp_isVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "SetInfoButtonVisible", nullptr, nullptr, sizeof(ArchiveMenuViewInterface_eventSetInfoButtonVisible_Parms), Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_SetMenuState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_menuState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_menuState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetMenuState_Statics::NewProp_menuState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetMenuState_Statics::NewProp_menuState = { "menuState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveMenuViewInterface_eventSetMenuState_Parms, menuState), Z_Construct_UEnum_DBDSharedTypes_EArchiveMenuState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuViewInterface_SetMenuState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetMenuState_Statics::NewProp_menuState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetMenuState_Statics::NewProp_menuState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_SetMenuState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetMenuState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "SetMenuState", nullptr, nullptr, sizeof(ArchiveMenuViewInterface_eventSetMenuState_Parms), Z_Construct_UFunction_UArchiveMenuViewInterface_SetMenuState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetMenuState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_SetMenuState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetMenuState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_SetMenuState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_SetMenuState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_SetQuestNodeHoverEffect_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_role_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_role;
		static void NewProp_isHovered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isHovered;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetQuestNodeHoverEffect_Statics::NewProp_role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetQuestNodeHoverEffect_Statics::NewProp_role = { "role", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveMenuViewInterface_eventSetQuestNodeHoverEffect_Parms, role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UArchiveMenuViewInterface_SetQuestNodeHoverEffect_Statics::NewProp_isHovered_SetBit(void* Obj)
	{
		((ArchiveMenuViewInterface_eventSetQuestNodeHoverEffect_Parms*)Obj)->isHovered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetQuestNodeHoverEffect_Statics::NewProp_isHovered = { "isHovered", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveMenuViewInterface_eventSetQuestNodeHoverEffect_Parms), &Z_Construct_UFunction_UArchiveMenuViewInterface_SetQuestNodeHoverEffect_Statics::NewProp_isHovered_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuViewInterface_SetQuestNodeHoverEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetQuestNodeHoverEffect_Statics::NewProp_role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetQuestNodeHoverEffect_Statics::NewProp_role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetQuestNodeHoverEffect_Statics::NewProp_isHovered,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_SetQuestNodeHoverEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetQuestNodeHoverEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "SetQuestNodeHoverEffect", nullptr, nullptr, sizeof(ArchiveMenuViewInterface_eventSetQuestNodeHoverEffect_Parms), Z_Construct_UFunction_UArchiveMenuViewInterface_SetQuestNodeHoverEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetQuestNodeHoverEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_SetQuestNodeHoverEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetQuestNodeHoverEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_SetQuestNodeHoverEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_SetQuestNodeHoverEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_remainingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_remainingTime;
		static void NewProp_isMoreThanWarningThreshold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isMoreThanWarningThreshold;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_menuState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_menuState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTime_Statics::NewProp_remainingTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTime_Statics::NewProp_remainingTime = { "remainingTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveMenuViewInterface_eventSetRemainingTime_Parms, remainingTime), METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTime_Statics::NewProp_remainingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTime_Statics::NewProp_remainingTime_MetaData)) };
	void Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTime_Statics::NewProp_isMoreThanWarningThreshold_SetBit(void* Obj)
	{
		((ArchiveMenuViewInterface_eventSetRemainingTime_Parms*)Obj)->isMoreThanWarningThreshold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTime_Statics::NewProp_isMoreThanWarningThreshold = { "isMoreThanWarningThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveMenuViewInterface_eventSetRemainingTime_Parms), &Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTime_Statics::NewProp_isMoreThanWarningThreshold_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTime_Statics::NewProp_menuState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTime_Statics::NewProp_menuState = { "menuState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveMenuViewInterface_eventSetRemainingTime_Parms, menuState), Z_Construct_UEnum_DBDSharedTypes_EArchiveMenuState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTime_Statics::NewProp_remainingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTime_Statics::NewProp_isMoreThanWarningThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTime_Statics::NewProp_menuState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTime_Statics::NewProp_menuState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "SetRemainingTime", nullptr, nullptr, sizeof(ArchiveMenuViewInterface_eventSetRemainingTime_Parms), Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTimeVisible_Statics
	{
		static void NewProp_isVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTimeVisible_Statics::NewProp_isVisible_SetBit(void* Obj)
	{
		((ArchiveMenuViewInterface_eventSetRemainingTimeVisible_Parms*)Obj)->isVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTimeVisible_Statics::NewProp_isVisible = { "isVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveMenuViewInterface_eventSetRemainingTimeVisible_Parms), &Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTimeVisible_Statics::NewProp_isVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTimeVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTimeVisible_Statics::NewProp_isVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTimeVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTimeVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "SetRemainingTimeVisible", nullptr, nullptr, sizeof(ArchiveMenuViewInterface_eventSetRemainingTimeVisible_Parms), Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTimeVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTimeVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTimeVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTimeVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTimeVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTimeVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_SetReminderSlotsEnabled_Statics
	{
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveMenuViewInterface_SetReminderSlotsEnabled_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((ArchiveMenuViewInterface_eventSetReminderSlotsEnabled_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetReminderSlotsEnabled_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveMenuViewInterface_eventSetReminderSlotsEnabled_Parms), &Z_Construct_UFunction_UArchiveMenuViewInterface_SetReminderSlotsEnabled_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuViewInterface_SetReminderSlotsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetReminderSlotsEnabled_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_SetReminderSlotsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetReminderSlotsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "SetReminderSlotsEnabled", nullptr, nullptr, sizeof(ArchiveMenuViewInterface_eventSetReminderSlotsEnabled_Parms), Z_Construct_UFunction_UArchiveMenuViewInterface_SetReminderSlotsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetReminderSlotsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_SetReminderSlotsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetReminderSlotsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_SetReminderSlotsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_SetReminderSlotsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_subtitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_subtitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitle_Statics::NewProp_subtitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitle_Statics::NewProp_subtitle = { "subtitle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveMenuViewInterface_eventSetSubtitle_Parms, subtitle), METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitle_Statics::NewProp_subtitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitle_Statics::NewProp_subtitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitle_Statics::NewProp_subtitle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "SetSubtitle", nullptr, nullptr, sizeof(ArchiveMenuViewInterface_eventSetSubtitle_Parms), Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitleVisible_Statics
	{
		static void NewProp_isVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitleVisible_Statics::NewProp_isVisible_SetBit(void* Obj)
	{
		((ArchiveMenuViewInterface_eventSetSubtitleVisible_Parms*)Obj)->isVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitleVisible_Statics::NewProp_isVisible = { "isVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveMenuViewInterface_eventSetSubtitleVisible_Parms), &Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitleVisible_Statics::NewProp_isVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitleVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitleVisible_Statics::NewProp_isVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitleVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitleVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "SetSubtitleVisible", nullptr, nullptr, sizeof(ArchiveMenuViewInterface_eventSetSubtitleVisible_Parms), Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitleVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitleVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitleVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitleVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitleVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitleVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabEnabled_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_key;
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabEnabled_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveMenuViewInterface_eventSetTabEnabled_Parms, key), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabEnabled_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((ArchiveMenuViewInterface_eventSetTabEnabled_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabEnabled_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveMenuViewInterface_eventSetTabEnabled_Parms), &Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabEnabled_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabEnabled_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabEnabled_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "SetTabEnabled", nullptr, nullptr, sizeof(ArchiveMenuViewInterface_eventSetTabEnabled_Parms), Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsData_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tabsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tabsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_tabsData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_selectedKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsData_Statics::NewProp_tabsData_Inner = { "tabsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTabWidgetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsData_Statics::NewProp_tabsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsData_Statics::NewProp_tabsData = { "tabsData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveMenuViewInterface_eventSetTabsData_Parms, tabsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsData_Statics::NewProp_tabsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsData_Statics::NewProp_tabsData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsData_Statics::NewProp_selectedKey = { "selectedKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveMenuViewInterface_eventSetTabsData_Parms, selectedKey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsData_Statics::NewProp_tabsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsData_Statics::NewProp_tabsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsData_Statics::NewProp_selectedKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "SetTabsData", nullptr, nullptr, sizeof(ArchiveMenuViewInterface_eventSetTabsData_Parms), Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabSelected_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabSelected_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveMenuViewInterface_eventSetTabSelected_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabSelected_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "SetTabSelected", nullptr, nullptr, sizeof(ArchiveMenuViewInterface_eventSetTabSelected_Parms), Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsInputsEnabled_Statics
	{
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsInputsEnabled_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((ArchiveMenuViewInterface_eventSetTabsInputsEnabled_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsInputsEnabled_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveMenuViewInterface_eventSetTabsInputsEnabled_Parms), &Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsInputsEnabled_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsInputsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsInputsEnabled_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsInputsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsInputsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "SetTabsInputsEnabled", nullptr, nullptr, sizeof(ArchiveMenuViewInterface_eventSetTabsInputsEnabled_Parms), Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsInputsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsInputsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsInputsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsInputsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsInputsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsInputsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_SetTitle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_SetTitle_Statics::NewProp_title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetTitle_Statics::NewProp_title = { "title", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveMenuViewInterface_eventSetTitle_Parms, title), METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_SetTitle_Statics::NewProp_title_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetTitle_Statics::NewProp_title_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuViewInterface_SetTitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_SetTitle_Statics::NewProp_title,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_SetTitle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_SetTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "SetTitle", nullptr, nullptr, sizeof(ArchiveMenuViewInterface_eventSetTitle_Parms), Z_Construct_UFunction_UArchiveMenuViewInterface_SetTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_SetTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_SetTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_SetTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_SetTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_ShowSlotSelector_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_ShowSlotSelector_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_ShowSlotSelector_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveMenuViewInterface_eventShowSlotSelector_Parms, data), Z_Construct_UScriptStruct_FArchiveNodeViewData, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_ShowSlotSelector_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_ShowSlotSelector_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuViewInterface_ShowSlotSelector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_ShowSlotSelector_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_ShowSlotSelector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_ShowSlotSelector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "ShowSlotSelector", nullptr, nullptr, sizeof(ArchiveMenuViewInterface_eventShowSlotSelector_Parms), Z_Construct_UFunction_UArchiveMenuViewInterface_ShowSlotSelector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_ShowSlotSelector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_ShowSlotSelector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_ShowSlotSelector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_ShowSlotSelector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_ShowSlotSelector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_ShowUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_ShowUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_ShowUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "ShowUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_ShowUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_ShowUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_ShowUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_ShowUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveMenuViewInterface_UpdateBackgroundSkin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_key;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_UpdateBackgroundSkin_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_UpdateBackgroundSkin_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveMenuViewInterface_eventUpdateBackgroundSkin_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_UpdateBackgroundSkin_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_UpdateBackgroundSkin_Statics::NewProp_key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_UpdateBackgroundSkin_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveMenuViewInterface_UpdateBackgroundSkin_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveMenuViewInterface_eventUpdateBackgroundSkin_Parms, data), Z_Construct_UScriptStruct_FArchiveTomeSkinData, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_UpdateBackgroundSkin_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_UpdateBackgroundSkin_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveMenuViewInterface_UpdateBackgroundSkin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_UpdateBackgroundSkin_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveMenuViewInterface_UpdateBackgroundSkin_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveMenuViewInterface_UpdateBackgroundSkin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveMenuViewInterface_UpdateBackgroundSkin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveMenuViewInterface, nullptr, "UpdateBackgroundSkin", nullptr, nullptr, sizeof(ArchiveMenuViewInterface_eventUpdateBackgroundSkin_Parms), Z_Construct_UFunction_UArchiveMenuViewInterface_UpdateBackgroundSkin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_UpdateBackgroundSkin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveMenuViewInterface_UpdateBackgroundSkin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveMenuViewInterface_UpdateBackgroundSkin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveMenuViewInterface_UpdateBackgroundSkin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveMenuViewInterface_UpdateBackgroundSkin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArchiveMenuViewInterface_NoRegister()
	{
		return UArchiveMenuViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveMenuViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveMenuViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchiveMenuViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_ClearChallengeReminderData, "ClearChallengeReminderData" }, // 3253799711
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_CloseSlotSelector, "CloseSlotSelector" }, // 3908943379
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveCompendiumInterface, "GetArchiveCompendiumInterface" }, // 1516369230
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveRiftInterface, "GetArchiveRiftInterface" }, // 3458029082
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_GetArchiveTomeInterface, "GetArchiveTomeInterface" }, // 2911989922
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_HideUI, "HideUI" }, // 3003203016
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_Init, "Init" }, // 2312371151
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderData, "SetChallengeReminderData" }, // 3898297315
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_SetChallengeReminderVisibility, "SetChallengeReminderVisibility" }, // 3520173730
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_SetControllerElementsEnabled, "SetControllerElementsEnabled" }, // 4011789108
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_SetEventLabel, "SetEventLabel" }, // 2148383421
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonEnabled, "SetInfoButtonEnabled" }, // 2540141631
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_SetInfoButtonVisible, "SetInfoButtonVisible" }, // 1854565552
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_SetMenuState, "SetMenuState" }, // 1677543332
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_SetQuestNodeHoverEffect, "SetQuestNodeHoverEffect" }, // 1037830160
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTime, "SetRemainingTime" }, // 3924307811
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_SetRemainingTimeVisible, "SetRemainingTimeVisible" }, // 2509024164
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_SetReminderSlotsEnabled, "SetReminderSlotsEnabled" }, // 3824329026
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitle, "SetSubtitle" }, // 2782893727
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_SetSubtitleVisible, "SetSubtitleVisible" }, // 847528331
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabEnabled, "SetTabEnabled" }, // 1435504878
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsData, "SetTabsData" }, // 1995409052
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabSelected, "SetTabSelected" }, // 2388414783
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_SetTabsInputsEnabled, "SetTabsInputsEnabled" }, // 887878153
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_SetTitle, "SetTitle" }, // 747081348
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_ShowSlotSelector, "ShowSlotSelector" }, // 1762116002
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_ShowUI, "ShowUI" }, // 2734775651
		{ &Z_Construct_UFunction_UArchiveMenuViewInterface_UpdateBackgroundSkin, "UpdateBackgroundSkin" }, // 3949856187
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveMenuViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArchiveMenuViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveMenuViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArchiveMenuViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveMenuViewInterface_Statics::ClassParams = {
		&UArchiveMenuViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UArchiveMenuViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveMenuViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveMenuViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveMenuViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveMenuViewInterface, 1261765462);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UArchiveMenuViewInterface>()
	{
		return UArchiveMenuViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveMenuViewInterface(Z_Construct_UClass_UArchiveMenuViewInterface, &UArchiveMenuViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UArchiveMenuViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveMenuViewInterface);
	static FName NAME_UArchiveMenuViewInterface_ClearChallengeReminderData = FName(TEXT("ClearChallengeReminderData"));
	void IArchiveMenuViewInterface::Execute_ClearChallengeReminderData(UObject* O, EPlayerRole role)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		ArchiveMenuViewInterface_eventClearChallengeReminderData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_ClearChallengeReminderData);
		if (Func)
		{
			Parms.role=role;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			I->ClearChallengeReminderData_Implementation(role);
		}
	}
	static FName NAME_UArchiveMenuViewInterface_CloseSlotSelector = FName(TEXT("CloseSlotSelector"));
	void IArchiveMenuViewInterface::Execute_CloseSlotSelector(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_CloseSlotSelector);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			I->CloseSlotSelector_Implementation();
		}
	}
	static FName NAME_UArchiveMenuViewInterface_GetArchiveCompendiumInterface = FName(TEXT("GetArchiveCompendiumInterface"));
	TScriptInterface<IArchiveCompendiumViewInterface> IArchiveMenuViewInterface::Execute_GetArchiveCompendiumInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		ArchiveMenuViewInterface_eventGetArchiveCompendiumInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_GetArchiveCompendiumInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetArchiveCompendiumInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UArchiveMenuViewInterface_GetArchiveRiftInterface = FName(TEXT("GetArchiveRiftInterface"));
	TScriptInterface<IArchiveRiftViewInterface> IArchiveMenuViewInterface::Execute_GetArchiveRiftInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		ArchiveMenuViewInterface_eventGetArchiveRiftInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_GetArchiveRiftInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetArchiveRiftInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UArchiveMenuViewInterface_GetArchiveTomeInterface = FName(TEXT("GetArchiveTomeInterface"));
	TScriptInterface<IArchiveTomeViewInterface> IArchiveMenuViewInterface::Execute_GetArchiveTomeInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		ArchiveMenuViewInterface_eventGetArchiveTomeInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_GetArchiveTomeInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetArchiveTomeInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UArchiveMenuViewInterface_HideUI = FName(TEXT("HideUI"));
	void IArchiveMenuViewInterface::Execute_HideUI(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_HideUI);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			I->HideUI_Implementation();
		}
	}
	static FName NAME_UArchiveMenuViewInterface_Init = FName(TEXT("Init"));
	void IArchiveMenuViewInterface::Execute_Init(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_Init);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			I->Init_Implementation();
		}
	}
	static FName NAME_UArchiveMenuViewInterface_SetChallengeReminderData = FName(TEXT("SetChallengeReminderData"));
	void IArchiveMenuViewInterface::Execute_SetChallengeReminderData(UObject* O, FArchiveChallengeReminderViewData const& data, EPlayerRole role, bool needsAnimation, FVector2D const& animationOriginalPosition)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		ArchiveMenuViewInterface_eventSetChallengeReminderData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_SetChallengeReminderData);
		if (Func)
		{
			Parms.data=data;
			Parms.role=role;
			Parms.needsAnimation=needsAnimation;
			Parms.animationOriginalPosition=animationOriginalPosition;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			I->SetChallengeReminderData_Implementation(data,role,needsAnimation,animationOriginalPosition);
		}
	}
	static FName NAME_UArchiveMenuViewInterface_SetChallengeReminderVisibility = FName(TEXT("SetChallengeReminderVisibility"));
	void IArchiveMenuViewInterface::Execute_SetChallengeReminderVisibility(UObject* O, bool isVisible)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		ArchiveMenuViewInterface_eventSetChallengeReminderVisibility_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_SetChallengeReminderVisibility);
		if (Func)
		{
			Parms.isVisible=isVisible;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			I->SetChallengeReminderVisibility_Implementation(isVisible);
		}
	}
	static FName NAME_UArchiveMenuViewInterface_SetControllerElementsEnabled = FName(TEXT("SetControllerElementsEnabled"));
	void IArchiveMenuViewInterface::Execute_SetControllerElementsEnabled(UObject* O, bool enabled)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		ArchiveMenuViewInterface_eventSetControllerElementsEnabled_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_SetControllerElementsEnabled);
		if (Func)
		{
			Parms.enabled=enabled;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			I->SetControllerElementsEnabled_Implementation(enabled);
		}
	}
	static FName NAME_UArchiveMenuViewInterface_SetEventLabel = FName(TEXT("SetEventLabel"));
	void IArchiveMenuViewInterface::Execute_SetEventLabel(UObject* O, const FString& eventLabel)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		ArchiveMenuViewInterface_eventSetEventLabel_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_SetEventLabel);
		if (Func)
		{
			Parms.eventLabel=eventLabel;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			I->SetEventLabel_Implementation(eventLabel);
		}
	}
	static FName NAME_UArchiveMenuViewInterface_SetInfoButtonEnabled = FName(TEXT("SetInfoButtonEnabled"));
	void IArchiveMenuViewInterface::Execute_SetInfoButtonEnabled(UObject* O, bool isEnabled)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		ArchiveMenuViewInterface_eventSetInfoButtonEnabled_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_SetInfoButtonEnabled);
		if (Func)
		{
			Parms.isEnabled=isEnabled;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			I->SetInfoButtonEnabled_Implementation(isEnabled);
		}
	}
	static FName NAME_UArchiveMenuViewInterface_SetInfoButtonVisible = FName(TEXT("SetInfoButtonVisible"));
	void IArchiveMenuViewInterface::Execute_SetInfoButtonVisible(UObject* O, bool isVisible)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		ArchiveMenuViewInterface_eventSetInfoButtonVisible_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_SetInfoButtonVisible);
		if (Func)
		{
			Parms.isVisible=isVisible;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			I->SetInfoButtonVisible_Implementation(isVisible);
		}
	}
	static FName NAME_UArchiveMenuViewInterface_SetMenuState = FName(TEXT("SetMenuState"));
	void IArchiveMenuViewInterface::Execute_SetMenuState(UObject* O, EArchiveMenuState menuState)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		ArchiveMenuViewInterface_eventSetMenuState_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_SetMenuState);
		if (Func)
		{
			Parms.menuState=menuState;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			I->SetMenuState_Implementation(menuState);
		}
	}
	static FName NAME_UArchiveMenuViewInterface_SetQuestNodeHoverEffect = FName(TEXT("SetQuestNodeHoverEffect"));
	void IArchiveMenuViewInterface::Execute_SetQuestNodeHoverEffect(UObject* O, EPlayerRole role, bool isHovered)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		ArchiveMenuViewInterface_eventSetQuestNodeHoverEffect_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_SetQuestNodeHoverEffect);
		if (Func)
		{
			Parms.role=role;
			Parms.isHovered=isHovered;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			I->SetQuestNodeHoverEffect_Implementation(role,isHovered);
		}
	}
	static FName NAME_UArchiveMenuViewInterface_SetRemainingTime = FName(TEXT("SetRemainingTime"));
	void IArchiveMenuViewInterface::Execute_SetRemainingTime(UObject* O, const FString& remainingTime, bool isMoreThanWarningThreshold, EArchiveMenuState menuState)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		ArchiveMenuViewInterface_eventSetRemainingTime_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_SetRemainingTime);
		if (Func)
		{
			Parms.remainingTime=remainingTime;
			Parms.isMoreThanWarningThreshold=isMoreThanWarningThreshold;
			Parms.menuState=menuState;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			I->SetRemainingTime_Implementation(remainingTime,isMoreThanWarningThreshold,menuState);
		}
	}
	static FName NAME_UArchiveMenuViewInterface_SetRemainingTimeVisible = FName(TEXT("SetRemainingTimeVisible"));
	void IArchiveMenuViewInterface::Execute_SetRemainingTimeVisible(UObject* O, bool isVisible)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		ArchiveMenuViewInterface_eventSetRemainingTimeVisible_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_SetRemainingTimeVisible);
		if (Func)
		{
			Parms.isVisible=isVisible;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			I->SetRemainingTimeVisible_Implementation(isVisible);
		}
	}
	static FName NAME_UArchiveMenuViewInterface_SetReminderSlotsEnabled = FName(TEXT("SetReminderSlotsEnabled"));
	void IArchiveMenuViewInterface::Execute_SetReminderSlotsEnabled(UObject* O, bool enabled)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		ArchiveMenuViewInterface_eventSetReminderSlotsEnabled_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_SetReminderSlotsEnabled);
		if (Func)
		{
			Parms.enabled=enabled;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			I->SetReminderSlotsEnabled_Implementation(enabled);
		}
	}
	static FName NAME_UArchiveMenuViewInterface_SetSubtitle = FName(TEXT("SetSubtitle"));
	void IArchiveMenuViewInterface::Execute_SetSubtitle(UObject* O, FText const& subtitle)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		ArchiveMenuViewInterface_eventSetSubtitle_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_SetSubtitle);
		if (Func)
		{
			Parms.subtitle=subtitle;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			I->SetSubtitle_Implementation(subtitle);
		}
	}
	static FName NAME_UArchiveMenuViewInterface_SetSubtitleVisible = FName(TEXT("SetSubtitleVisible"));
	void IArchiveMenuViewInterface::Execute_SetSubtitleVisible(UObject* O, bool isVisible)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		ArchiveMenuViewInterface_eventSetSubtitleVisible_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_SetSubtitleVisible);
		if (Func)
		{
			Parms.isVisible=isVisible;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			I->SetSubtitleVisible_Implementation(isVisible);
		}
	}
	static FName NAME_UArchiveMenuViewInterface_SetTabEnabled = FName(TEXT("SetTabEnabled"));
	void IArchiveMenuViewInterface::Execute_SetTabEnabled(UObject* O, int32 key, bool enabled)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		ArchiveMenuViewInterface_eventSetTabEnabled_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_SetTabEnabled);
		if (Func)
		{
			Parms.key=key;
			Parms.enabled=enabled;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			I->SetTabEnabled_Implementation(key,enabled);
		}
	}
	static FName NAME_UArchiveMenuViewInterface_SetTabsData = FName(TEXT("SetTabsData"));
	void IArchiveMenuViewInterface::Execute_SetTabsData(UObject* O, TArray<FTabWidgetData> const& tabsData, int32 selectedKey)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		ArchiveMenuViewInterface_eventSetTabsData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_SetTabsData);
		if (Func)
		{
			Parms.tabsData=tabsData;
			Parms.selectedKey=selectedKey;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			I->SetTabsData_Implementation(tabsData,selectedKey);
		}
	}
	static FName NAME_UArchiveMenuViewInterface_SetTabSelected = FName(TEXT("SetTabSelected"));
	void IArchiveMenuViewInterface::Execute_SetTabSelected(UObject* O, int32 key)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		ArchiveMenuViewInterface_eventSetTabSelected_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_SetTabSelected);
		if (Func)
		{
			Parms.key=key;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			I->SetTabSelected_Implementation(key);
		}
	}
	static FName NAME_UArchiveMenuViewInterface_SetTabsInputsEnabled = FName(TEXT("SetTabsInputsEnabled"));
	void IArchiveMenuViewInterface::Execute_SetTabsInputsEnabled(UObject* O, bool enabled)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		ArchiveMenuViewInterface_eventSetTabsInputsEnabled_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_SetTabsInputsEnabled);
		if (Func)
		{
			Parms.enabled=enabled;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			I->SetTabsInputsEnabled_Implementation(enabled);
		}
	}
	static FName NAME_UArchiveMenuViewInterface_SetTitle = FName(TEXT("SetTitle"));
	void IArchiveMenuViewInterface::Execute_SetTitle(UObject* O, FText const& title)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		ArchiveMenuViewInterface_eventSetTitle_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_SetTitle);
		if (Func)
		{
			Parms.title=title;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			I->SetTitle_Implementation(title);
		}
	}
	static FName NAME_UArchiveMenuViewInterface_ShowSlotSelector = FName(TEXT("ShowSlotSelector"));
	void IArchiveMenuViewInterface::Execute_ShowSlotSelector(UObject* O, FArchiveNodeViewData const& data)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		ArchiveMenuViewInterface_eventShowSlotSelector_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_ShowSlotSelector);
		if (Func)
		{
			Parms.data=data;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			I->ShowSlotSelector_Implementation(data);
		}
	}
	static FName NAME_UArchiveMenuViewInterface_ShowUI = FName(TEXT("ShowUI"));
	void IArchiveMenuViewInterface::Execute_ShowUI(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_ShowUI);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			I->ShowUI_Implementation();
		}
	}
	static FName NAME_UArchiveMenuViewInterface_UpdateBackgroundSkin = FName(TEXT("UpdateBackgroundSkin"));
	void IArchiveMenuViewInterface::Execute_UpdateBackgroundSkin(UObject* O, const int32 key, FArchiveTomeSkinData const& data)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveMenuViewInterface::StaticClass()));
		ArchiveMenuViewInterface_eventUpdateBackgroundSkin_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveMenuViewInterface_UpdateBackgroundSkin);
		if (Func)
		{
			Parms.key=key;
			Parms.data=data;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveMenuViewInterface*)(O->GetNativeInterfaceAddress(UArchiveMenuViewInterface::StaticClass())))
		{
			I->UpdateBackgroundSkin_Implementation(key,data);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
