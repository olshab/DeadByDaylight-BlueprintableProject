// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ArchiveTomeViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveTomeViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveTomeViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveTomeViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FEditorInterfaces();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveJournalViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveLevelProgressionViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveQuestMapViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EArchiveTomeMenuState();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FTabWidgetData();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IArchiveTomeViewInterface::execGetArchiveEditorInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEditorInterfaces*)Z_Param__Result=P_THIS->GetArchiveEditorInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveTomeViewInterface::execGetArchiveJournalInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IArchiveJournalViewInterface>*)Z_Param__Result=P_THIS->GetArchiveJournalInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveTomeViewInterface::execGetArchiveLevelProgressionInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IArchiveLevelProgressionViewInterface>*)Z_Param__Result=P_THIS->GetArchiveLevelProgressionInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveTomeViewInterface::execGetArchiveQuestMapInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IArchiveQuestMapViewInterface>*)Z_Param__Result=P_THIS->GetArchiveQuestMapInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveTomeViewInterface::execGetMenuState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EArchiveTomeMenuState*)Z_Param__Result=P_THIS->GetMenuState_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveTomeViewInterface::execSetMenuState)
	{
		P_GET_ENUM(EArchiveTomeMenuState,Z_Param_menuState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMenuState_Implementation(EArchiveTomeMenuState(Z_Param_menuState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveTomeViewInterface::execSetNotificationVisibility)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_key);
		P_GET_UBOOL(Z_Param_hasNotification);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNotificationVisibility_Implementation(Z_Param_key,Z_Param_hasNotification);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveTomeViewInterface::execSetSideNavTabsData)
	{
		P_GET_TARRAY_REF(FTabWidgetData,Z_Param_Out_tabsData);
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSideNavTabsData_Implementation(Z_Param_Out_tabsData,Z_Param_selectedKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveTomeViewInterface::execSetSideNavTabsEnabled)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_key);
		P_GET_UBOOL(Z_Param_isEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSideNavTabsEnabled_Implementation(Z_Param_key,Z_Param_isEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveTomeViewInterface::execSetSideNavTabsVisibility)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_key);
		P_GET_UBOOL(Z_Param_isVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSideNavTabsVisibility_Implementation(Z_Param_key,Z_Param_isVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveTomeViewInterface::execSetUiTakeoverActive)
	{
		P_GET_UBOOL(Z_Param_isActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUiTakeoverActive_Implementation(Z_Param_isActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveTomeViewInterface::execToggleEditor)
	{
		P_GET_UBOOL(Z_Param_isEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleEditor_Implementation(Z_Param_isEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IArchiveTomeViewInterface::execUpdateBackgroundSkin)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_key);
		P_GET_OBJECT(UMaterialInterface,Z_Param_skinMaterail);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBackgroundSkin_Implementation(Z_Param_key,Z_Param_skinMaterail);
		P_NATIVE_END;
	}
	FEditorInterfaces IArchiveTomeViewInterface::GetArchiveEditorInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetArchiveEditorInterface instead.");
		ArchiveTomeViewInterface_eventGetArchiveEditorInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	TScriptInterface<IArchiveJournalViewInterface> IArchiveTomeViewInterface::GetArchiveJournalInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetArchiveJournalInterface instead.");
		ArchiveTomeViewInterface_eventGetArchiveJournalInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	TScriptInterface<IArchiveLevelProgressionViewInterface> IArchiveTomeViewInterface::GetArchiveLevelProgressionInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetArchiveLevelProgressionInterface instead.");
		ArchiveTomeViewInterface_eventGetArchiveLevelProgressionInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	TScriptInterface<IArchiveQuestMapViewInterface> IArchiveTomeViewInterface::GetArchiveQuestMapInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetArchiveQuestMapInterface instead.");
		ArchiveTomeViewInterface_eventGetArchiveQuestMapInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	EArchiveTomeMenuState IArchiveTomeViewInterface::GetMenuState() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetMenuState instead.");
		ArchiveTomeViewInterface_eventGetMenuState_Parms Parms;
		return Parms.ReturnValue;
	}
	void IArchiveTomeViewInterface::SetMenuState(EArchiveTomeMenuState menuState)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetMenuState instead.");
	}
	void IArchiveTomeViewInterface::SetNotificationVisibility(int32 key, bool hasNotification)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetNotificationVisibility instead.");
	}
	void IArchiveTomeViewInterface::SetSideNavTabsData(TArray<FTabWidgetData> const& tabsData, int32 selectedKey)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSideNavTabsData instead.");
	}
	void IArchiveTomeViewInterface::SetSideNavTabsEnabled(int32 key, bool isEnabled)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSideNavTabsEnabled instead.");
	}
	void IArchiveTomeViewInterface::SetSideNavTabsVisibility(int32 key, bool isVisible)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSideNavTabsVisibility instead.");
	}
	void IArchiveTomeViewInterface::SetUiTakeoverActive(bool isActive)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetUiTakeoverActive instead.");
	}
	void IArchiveTomeViewInterface::ToggleEditor(bool isEnabled)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ToggleEditor instead.");
	}
	void IArchiveTomeViewInterface::UpdateBackgroundSkin(int32 key, UMaterialInterface* skinMaterail)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateBackgroundSkin instead.");
	}
	void UArchiveTomeViewInterface::StaticRegisterNativesUArchiveTomeViewInterface()
	{
		UClass* Class = UArchiveTomeViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetArchiveEditorInterface", &IArchiveTomeViewInterface::execGetArchiveEditorInterface },
			{ "GetArchiveJournalInterface", &IArchiveTomeViewInterface::execGetArchiveJournalInterface },
			{ "GetArchiveLevelProgressionInterface", &IArchiveTomeViewInterface::execGetArchiveLevelProgressionInterface },
			{ "GetArchiveQuestMapInterface", &IArchiveTomeViewInterface::execGetArchiveQuestMapInterface },
			{ "GetMenuState", &IArchiveTomeViewInterface::execGetMenuState },
			{ "SetMenuState", &IArchiveTomeViewInterface::execSetMenuState },
			{ "SetNotificationVisibility", &IArchiveTomeViewInterface::execSetNotificationVisibility },
			{ "SetSideNavTabsData", &IArchiveTomeViewInterface::execSetSideNavTabsData },
			{ "SetSideNavTabsEnabled", &IArchiveTomeViewInterface::execSetSideNavTabsEnabled },
			{ "SetSideNavTabsVisibility", &IArchiveTomeViewInterface::execSetSideNavTabsVisibility },
			{ "SetUiTakeoverActive", &IArchiveTomeViewInterface::execSetUiTakeoverActive },
			{ "ToggleEditor", &IArchiveTomeViewInterface::execToggleEditor },
			{ "UpdateBackgroundSkin", &IArchiveTomeViewInterface::execUpdateBackgroundSkin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveEditorInterface_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveEditorInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveTomeViewInterface_eventGetArchiveEditorInterface_Parms, ReturnValue), Z_Construct_UScriptStruct_FEditorInterfaces, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveEditorInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveEditorInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveEditorInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveTomeViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveEditorInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveTomeViewInterface, nullptr, "GetArchiveEditorInterface", nullptr, nullptr, sizeof(ArchiveTomeViewInterface_eventGetArchiveEditorInterface_Parms), Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveEditorInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveEditorInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveEditorInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveEditorInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveEditorInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveEditorInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveJournalInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveJournalInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveTomeViewInterface_eventGetArchiveJournalInterface_Parms, ReturnValue), Z_Construct_UClass_UArchiveJournalViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveJournalInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveJournalInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveJournalInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveTomeViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveJournalInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveTomeViewInterface, nullptr, "GetArchiveJournalInterface", nullptr, nullptr, sizeof(ArchiveTomeViewInterface_eventGetArchiveJournalInterface_Parms), Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveJournalInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveJournalInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveJournalInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveJournalInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveJournalInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveJournalInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveLevelProgressionInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveLevelProgressionInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveTomeViewInterface_eventGetArchiveLevelProgressionInterface_Parms, ReturnValue), Z_Construct_UClass_UArchiveLevelProgressionViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveLevelProgressionInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveLevelProgressionInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveLevelProgressionInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveTomeViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveLevelProgressionInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveTomeViewInterface, nullptr, "GetArchiveLevelProgressionInterface", nullptr, nullptr, sizeof(ArchiveTomeViewInterface_eventGetArchiveLevelProgressionInterface_Parms), Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveLevelProgressionInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveLevelProgressionInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveLevelProgressionInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveLevelProgressionInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveLevelProgressionInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveLevelProgressionInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveQuestMapInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveQuestMapInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveTomeViewInterface_eventGetArchiveQuestMapInterface_Parms, ReturnValue), Z_Construct_UClass_UArchiveQuestMapViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveQuestMapInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveQuestMapInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveQuestMapInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveTomeViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveQuestMapInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveTomeViewInterface, nullptr, "GetArchiveQuestMapInterface", nullptr, nullptr, sizeof(ArchiveTomeViewInterface_eventGetArchiveQuestMapInterface_Parms), Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveQuestMapInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveQuestMapInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveQuestMapInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveQuestMapInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveQuestMapInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveQuestMapInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveTomeViewInterface_GetMenuState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArchiveTomeViewInterface_GetMenuState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArchiveTomeViewInterface_GetMenuState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveTomeViewInterface_eventGetMenuState_Parms, ReturnValue), Z_Construct_UEnum_DBDUIViewInterfaces_EArchiveTomeMenuState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveTomeViewInterface_GetMenuState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveTomeViewInterface_GetMenuState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveTomeViewInterface_GetMenuState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveTomeViewInterface_GetMenuState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveTomeViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveTomeViewInterface_GetMenuState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveTomeViewInterface, nullptr, "GetMenuState", nullptr, nullptr, sizeof(ArchiveTomeViewInterface_eventGetMenuState_Parms), Z_Construct_UFunction_UArchiveTomeViewInterface_GetMenuState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_GetMenuState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveTomeViewInterface_GetMenuState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_GetMenuState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveTomeViewInterface_GetMenuState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveTomeViewInterface_GetMenuState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveTomeViewInterface_SetMenuState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_menuState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_menuState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArchiveTomeViewInterface_SetMenuState_Statics::NewProp_menuState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArchiveTomeViewInterface_SetMenuState_Statics::NewProp_menuState = { "menuState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveTomeViewInterface_eventSetMenuState_Parms, menuState), Z_Construct_UEnum_DBDUIViewInterfaces_EArchiveTomeMenuState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveTomeViewInterface_SetMenuState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveTomeViewInterface_SetMenuState_Statics::NewProp_menuState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveTomeViewInterface_SetMenuState_Statics::NewProp_menuState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveTomeViewInterface_SetMenuState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveTomeViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveTomeViewInterface_SetMenuState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveTomeViewInterface, nullptr, "SetMenuState", nullptr, nullptr, sizeof(ArchiveTomeViewInterface_eventSetMenuState_Parms), Z_Construct_UFunction_UArchiveTomeViewInterface_SetMenuState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_SetMenuState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveTomeViewInterface_SetMenuState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_SetMenuState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveTomeViewInterface_SetMenuState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveTomeViewInterface_SetMenuState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveTomeViewInterface_SetNotificationVisibility_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_key;
		static void NewProp_hasNotification_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasNotification;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveTomeViewInterface_SetNotificationVisibility_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveTomeViewInterface_eventSetNotificationVisibility_Parms, key), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UArchiveTomeViewInterface_SetNotificationVisibility_Statics::NewProp_hasNotification_SetBit(void* Obj)
	{
		((ArchiveTomeViewInterface_eventSetNotificationVisibility_Parms*)Obj)->hasNotification = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveTomeViewInterface_SetNotificationVisibility_Statics::NewProp_hasNotification = { "hasNotification", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveTomeViewInterface_eventSetNotificationVisibility_Parms), &Z_Construct_UFunction_UArchiveTomeViewInterface_SetNotificationVisibility_Statics::NewProp_hasNotification_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveTomeViewInterface_SetNotificationVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveTomeViewInterface_SetNotificationVisibility_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveTomeViewInterface_SetNotificationVisibility_Statics::NewProp_hasNotification,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveTomeViewInterface_SetNotificationVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveTomeViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveTomeViewInterface_SetNotificationVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveTomeViewInterface, nullptr, "SetNotificationVisibility", nullptr, nullptr, sizeof(ArchiveTomeViewInterface_eventSetNotificationVisibility_Parms), Z_Construct_UFunction_UArchiveTomeViewInterface_SetNotificationVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_SetNotificationVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveTomeViewInterface_SetNotificationVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_SetNotificationVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveTomeViewInterface_SetNotificationVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveTomeViewInterface_SetNotificationVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsData_Statics
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsData_Statics::NewProp_tabsData_Inner = { "tabsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTabWidgetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsData_Statics::NewProp_tabsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsData_Statics::NewProp_tabsData = { "tabsData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveTomeViewInterface_eventSetSideNavTabsData_Parms, tabsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsData_Statics::NewProp_tabsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsData_Statics::NewProp_tabsData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsData_Statics::NewProp_selectedKey = { "selectedKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveTomeViewInterface_eventSetSideNavTabsData_Parms, selectedKey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsData_Statics::NewProp_tabsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsData_Statics::NewProp_tabsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsData_Statics::NewProp_selectedKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveTomeViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveTomeViewInterface, nullptr, "SetSideNavTabsData", nullptr, nullptr, sizeof(ArchiveTomeViewInterface_eventSetSideNavTabsData_Parms), Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsEnabled_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_key;
		static void NewProp_isEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsEnabled_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveTomeViewInterface_eventSetSideNavTabsEnabled_Parms, key), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsEnabled_Statics::NewProp_isEnabled_SetBit(void* Obj)
	{
		((ArchiveTomeViewInterface_eventSetSideNavTabsEnabled_Parms*)Obj)->isEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsEnabled_Statics::NewProp_isEnabled = { "isEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveTomeViewInterface_eventSetSideNavTabsEnabled_Parms), &Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsEnabled_Statics::NewProp_isEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsEnabled_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsEnabled_Statics::NewProp_isEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveTomeViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveTomeViewInterface, nullptr, "SetSideNavTabsEnabled", nullptr, nullptr, sizeof(ArchiveTomeViewInterface_eventSetSideNavTabsEnabled_Parms), Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsVisibility_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_key;
		static void NewProp_isVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsVisibility_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveTomeViewInterface_eventSetSideNavTabsVisibility_Parms, key), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsVisibility_Statics::NewProp_isVisible_SetBit(void* Obj)
	{
		((ArchiveTomeViewInterface_eventSetSideNavTabsVisibility_Parms*)Obj)->isVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsVisibility_Statics::NewProp_isVisible = { "isVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveTomeViewInterface_eventSetSideNavTabsVisibility_Parms), &Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsVisibility_Statics::NewProp_isVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsVisibility_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsVisibility_Statics::NewProp_isVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveTomeViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveTomeViewInterface, nullptr, "SetSideNavTabsVisibility", nullptr, nullptr, sizeof(ArchiveTomeViewInterface_eventSetSideNavTabsVisibility_Parms), Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveTomeViewInterface_SetUiTakeoverActive_Statics
	{
		static void NewProp_isActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveTomeViewInterface_SetUiTakeoverActive_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((ArchiveTomeViewInterface_eventSetUiTakeoverActive_Parms*)Obj)->isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveTomeViewInterface_SetUiTakeoverActive_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveTomeViewInterface_eventSetUiTakeoverActive_Parms), &Z_Construct_UFunction_UArchiveTomeViewInterface_SetUiTakeoverActive_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveTomeViewInterface_SetUiTakeoverActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveTomeViewInterface_SetUiTakeoverActive_Statics::NewProp_isActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveTomeViewInterface_SetUiTakeoverActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveTomeViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveTomeViewInterface_SetUiTakeoverActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveTomeViewInterface, nullptr, "SetUiTakeoverActive", nullptr, nullptr, sizeof(ArchiveTomeViewInterface_eventSetUiTakeoverActive_Parms), Z_Construct_UFunction_UArchiveTomeViewInterface_SetUiTakeoverActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_SetUiTakeoverActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveTomeViewInterface_SetUiTakeoverActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_SetUiTakeoverActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveTomeViewInterface_SetUiTakeoverActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveTomeViewInterface_SetUiTakeoverActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveTomeViewInterface_ToggleEditor_Statics
	{
		static void NewProp_isEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveTomeViewInterface_ToggleEditor_Statics::NewProp_isEnabled_SetBit(void* Obj)
	{
		((ArchiveTomeViewInterface_eventToggleEditor_Parms*)Obj)->isEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveTomeViewInterface_ToggleEditor_Statics::NewProp_isEnabled = { "isEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveTomeViewInterface_eventToggleEditor_Parms), &Z_Construct_UFunction_UArchiveTomeViewInterface_ToggleEditor_Statics::NewProp_isEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveTomeViewInterface_ToggleEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveTomeViewInterface_ToggleEditor_Statics::NewProp_isEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveTomeViewInterface_ToggleEditor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveTomeViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveTomeViewInterface_ToggleEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveTomeViewInterface, nullptr, "ToggleEditor", nullptr, nullptr, sizeof(ArchiveTomeViewInterface_eventToggleEditor_Parms), Z_Construct_UFunction_UArchiveTomeViewInterface_ToggleEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_ToggleEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveTomeViewInterface_ToggleEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_ToggleEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveTomeViewInterface_ToggleEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveTomeViewInterface_ToggleEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveTomeViewInterface_UpdateBackgroundSkin_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skinMaterail;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveTomeViewInterface_UpdateBackgroundSkin_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveTomeViewInterface_eventUpdateBackgroundSkin_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchiveTomeViewInterface_UpdateBackgroundSkin_Statics::NewProp_skinMaterail = { "skinMaterail", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveTomeViewInterface_eventUpdateBackgroundSkin_Parms, skinMaterail), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveTomeViewInterface_UpdateBackgroundSkin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveTomeViewInterface_UpdateBackgroundSkin_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveTomeViewInterface_UpdateBackgroundSkin_Statics::NewProp_skinMaterail,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveTomeViewInterface_UpdateBackgroundSkin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveTomeViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveTomeViewInterface_UpdateBackgroundSkin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveTomeViewInterface, nullptr, "UpdateBackgroundSkin", nullptr, nullptr, sizeof(ArchiveTomeViewInterface_eventUpdateBackgroundSkin_Parms), Z_Construct_UFunction_UArchiveTomeViewInterface_UpdateBackgroundSkin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_UpdateBackgroundSkin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveTomeViewInterface_UpdateBackgroundSkin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveTomeViewInterface_UpdateBackgroundSkin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveTomeViewInterface_UpdateBackgroundSkin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveTomeViewInterface_UpdateBackgroundSkin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArchiveTomeViewInterface_NoRegister()
	{
		return UArchiveTomeViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveTomeViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveTomeViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchiveTomeViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveEditorInterface, "GetArchiveEditorInterface" }, // 686258892
		{ &Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveJournalInterface, "GetArchiveJournalInterface" }, // 4151299026
		{ &Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveLevelProgressionInterface, "GetArchiveLevelProgressionInterface" }, // 1287296546
		{ &Z_Construct_UFunction_UArchiveTomeViewInterface_GetArchiveQuestMapInterface, "GetArchiveQuestMapInterface" }, // 1832569859
		{ &Z_Construct_UFunction_UArchiveTomeViewInterface_GetMenuState, "GetMenuState" }, // 365722355
		{ &Z_Construct_UFunction_UArchiveTomeViewInterface_SetMenuState, "SetMenuState" }, // 3466392754
		{ &Z_Construct_UFunction_UArchiveTomeViewInterface_SetNotificationVisibility, "SetNotificationVisibility" }, // 179343367
		{ &Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsData, "SetSideNavTabsData" }, // 574115197
		{ &Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsEnabled, "SetSideNavTabsEnabled" }, // 1691471142
		{ &Z_Construct_UFunction_UArchiveTomeViewInterface_SetSideNavTabsVisibility, "SetSideNavTabsVisibility" }, // 2264161489
		{ &Z_Construct_UFunction_UArchiveTomeViewInterface_SetUiTakeoverActive, "SetUiTakeoverActive" }, // 1966323866
		{ &Z_Construct_UFunction_UArchiveTomeViewInterface_ToggleEditor, "ToggleEditor" }, // 97410649
		{ &Z_Construct_UFunction_UArchiveTomeViewInterface_UpdateBackgroundSkin, "UpdateBackgroundSkin" }, // 1239498643
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveTomeViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArchiveTomeViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveTomeViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArchiveTomeViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveTomeViewInterface_Statics::ClassParams = {
		&UArchiveTomeViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UArchiveTomeViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveTomeViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveTomeViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveTomeViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveTomeViewInterface, 3883619987);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UArchiveTomeViewInterface>()
	{
		return UArchiveTomeViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveTomeViewInterface(Z_Construct_UClass_UArchiveTomeViewInterface, &UArchiveTomeViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UArchiveTomeViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveTomeViewInterface);
	static FName NAME_UArchiveTomeViewInterface_GetArchiveEditorInterface = FName(TEXT("GetArchiveEditorInterface"));
	FEditorInterfaces IArchiveTomeViewInterface::Execute_GetArchiveEditorInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveTomeViewInterface::StaticClass()));
		ArchiveTomeViewInterface_eventGetArchiveEditorInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveTomeViewInterface_GetArchiveEditorInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IArchiveTomeViewInterface*)(O->GetNativeInterfaceAddress(UArchiveTomeViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetArchiveEditorInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UArchiveTomeViewInterface_GetArchiveJournalInterface = FName(TEXT("GetArchiveJournalInterface"));
	TScriptInterface<IArchiveJournalViewInterface> IArchiveTomeViewInterface::Execute_GetArchiveJournalInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveTomeViewInterface::StaticClass()));
		ArchiveTomeViewInterface_eventGetArchiveJournalInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveTomeViewInterface_GetArchiveJournalInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IArchiveTomeViewInterface*)(O->GetNativeInterfaceAddress(UArchiveTomeViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetArchiveJournalInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UArchiveTomeViewInterface_GetArchiveLevelProgressionInterface = FName(TEXT("GetArchiveLevelProgressionInterface"));
	TScriptInterface<IArchiveLevelProgressionViewInterface> IArchiveTomeViewInterface::Execute_GetArchiveLevelProgressionInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveTomeViewInterface::StaticClass()));
		ArchiveTomeViewInterface_eventGetArchiveLevelProgressionInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveTomeViewInterface_GetArchiveLevelProgressionInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IArchiveTomeViewInterface*)(O->GetNativeInterfaceAddress(UArchiveTomeViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetArchiveLevelProgressionInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UArchiveTomeViewInterface_GetArchiveQuestMapInterface = FName(TEXT("GetArchiveQuestMapInterface"));
	TScriptInterface<IArchiveQuestMapViewInterface> IArchiveTomeViewInterface::Execute_GetArchiveQuestMapInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveTomeViewInterface::StaticClass()));
		ArchiveTomeViewInterface_eventGetArchiveQuestMapInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveTomeViewInterface_GetArchiveQuestMapInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IArchiveTomeViewInterface*)(O->GetNativeInterfaceAddress(UArchiveTomeViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetArchiveQuestMapInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UArchiveTomeViewInterface_GetMenuState = FName(TEXT("GetMenuState"));
	EArchiveTomeMenuState IArchiveTomeViewInterface::Execute_GetMenuState(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveTomeViewInterface::StaticClass()));
		ArchiveTomeViewInterface_eventGetMenuState_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveTomeViewInterface_GetMenuState);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IArchiveTomeViewInterface*)(O->GetNativeInterfaceAddress(UArchiveTomeViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetMenuState_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UArchiveTomeViewInterface_SetMenuState = FName(TEXT("SetMenuState"));
	void IArchiveTomeViewInterface::Execute_SetMenuState(UObject* O, EArchiveTomeMenuState menuState)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveTomeViewInterface::StaticClass()));
		ArchiveTomeViewInterface_eventSetMenuState_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveTomeViewInterface_SetMenuState);
		if (Func)
		{
			Parms.menuState=menuState;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveTomeViewInterface*)(O->GetNativeInterfaceAddress(UArchiveTomeViewInterface::StaticClass())))
		{
			I->SetMenuState_Implementation(menuState);
		}
	}
	static FName NAME_UArchiveTomeViewInterface_SetNotificationVisibility = FName(TEXT("SetNotificationVisibility"));
	void IArchiveTomeViewInterface::Execute_SetNotificationVisibility(UObject* O, int32 key, bool hasNotification)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveTomeViewInterface::StaticClass()));
		ArchiveTomeViewInterface_eventSetNotificationVisibility_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveTomeViewInterface_SetNotificationVisibility);
		if (Func)
		{
			Parms.key=key;
			Parms.hasNotification=hasNotification;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveTomeViewInterface*)(O->GetNativeInterfaceAddress(UArchiveTomeViewInterface::StaticClass())))
		{
			I->SetNotificationVisibility_Implementation(key,hasNotification);
		}
	}
	static FName NAME_UArchiveTomeViewInterface_SetSideNavTabsData = FName(TEXT("SetSideNavTabsData"));
	void IArchiveTomeViewInterface::Execute_SetSideNavTabsData(UObject* O, TArray<FTabWidgetData> const& tabsData, int32 selectedKey)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveTomeViewInterface::StaticClass()));
		ArchiveTomeViewInterface_eventSetSideNavTabsData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveTomeViewInterface_SetSideNavTabsData);
		if (Func)
		{
			Parms.tabsData=tabsData;
			Parms.selectedKey=selectedKey;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveTomeViewInterface*)(O->GetNativeInterfaceAddress(UArchiveTomeViewInterface::StaticClass())))
		{
			I->SetSideNavTabsData_Implementation(tabsData,selectedKey);
		}
	}
	static FName NAME_UArchiveTomeViewInterface_SetSideNavTabsEnabled = FName(TEXT("SetSideNavTabsEnabled"));
	void IArchiveTomeViewInterface::Execute_SetSideNavTabsEnabled(UObject* O, int32 key, bool isEnabled)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveTomeViewInterface::StaticClass()));
		ArchiveTomeViewInterface_eventSetSideNavTabsEnabled_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveTomeViewInterface_SetSideNavTabsEnabled);
		if (Func)
		{
			Parms.key=key;
			Parms.isEnabled=isEnabled;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveTomeViewInterface*)(O->GetNativeInterfaceAddress(UArchiveTomeViewInterface::StaticClass())))
		{
			I->SetSideNavTabsEnabled_Implementation(key,isEnabled);
		}
	}
	static FName NAME_UArchiveTomeViewInterface_SetSideNavTabsVisibility = FName(TEXT("SetSideNavTabsVisibility"));
	void IArchiveTomeViewInterface::Execute_SetSideNavTabsVisibility(UObject* O, int32 key, bool isVisible)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveTomeViewInterface::StaticClass()));
		ArchiveTomeViewInterface_eventSetSideNavTabsVisibility_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveTomeViewInterface_SetSideNavTabsVisibility);
		if (Func)
		{
			Parms.key=key;
			Parms.isVisible=isVisible;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveTomeViewInterface*)(O->GetNativeInterfaceAddress(UArchiveTomeViewInterface::StaticClass())))
		{
			I->SetSideNavTabsVisibility_Implementation(key,isVisible);
		}
	}
	static FName NAME_UArchiveTomeViewInterface_SetUiTakeoverActive = FName(TEXT("SetUiTakeoverActive"));
	void IArchiveTomeViewInterface::Execute_SetUiTakeoverActive(UObject* O, bool isActive)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveTomeViewInterface::StaticClass()));
		ArchiveTomeViewInterface_eventSetUiTakeoverActive_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveTomeViewInterface_SetUiTakeoverActive);
		if (Func)
		{
			Parms.isActive=isActive;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveTomeViewInterface*)(O->GetNativeInterfaceAddress(UArchiveTomeViewInterface::StaticClass())))
		{
			I->SetUiTakeoverActive_Implementation(isActive);
		}
	}
	static FName NAME_UArchiveTomeViewInterface_ToggleEditor = FName(TEXT("ToggleEditor"));
	void IArchiveTomeViewInterface::Execute_ToggleEditor(UObject* O, bool isEnabled)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveTomeViewInterface::StaticClass()));
		ArchiveTomeViewInterface_eventToggleEditor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveTomeViewInterface_ToggleEditor);
		if (Func)
		{
			Parms.isEnabled=isEnabled;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveTomeViewInterface*)(O->GetNativeInterfaceAddress(UArchiveTomeViewInterface::StaticClass())))
		{
			I->ToggleEditor_Implementation(isEnabled);
		}
	}
	static FName NAME_UArchiveTomeViewInterface_UpdateBackgroundSkin = FName(TEXT("UpdateBackgroundSkin"));
	void IArchiveTomeViewInterface::Execute_UpdateBackgroundSkin(UObject* O, int32 key, UMaterialInterface* skinMaterail)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UArchiveTomeViewInterface::StaticClass()));
		ArchiveTomeViewInterface_eventUpdateBackgroundSkin_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UArchiveTomeViewInterface_UpdateBackgroundSkin);
		if (Func)
		{
			Parms.key=key;
			Parms.skinMaterail=skinMaterail;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IArchiveTomeViewInterface*)(O->GetNativeInterfaceAddress(UArchiveTomeViewInterface::StaticClass())))
		{
			I->UpdateBackgroundSkin_Implementation(key,skinMaterail);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
