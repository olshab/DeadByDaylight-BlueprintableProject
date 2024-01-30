// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/EventEntryViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventEntryViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEventEntryViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEventEntryViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEventCollectionViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEventDetailsViewInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEventInfoViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEventEntryViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FMilestoneTrackerViewData();
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EEventEntryTabState();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FTabWidgetData();
// End Cross Module References
	DEFINE_FUNCTION(IEventEntryViewInterface::execChangeSelectedTab)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeSelectedTab_Implementation(Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEventEntryViewInterface::execDeselectMilestoneTrackerItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeselectMilestoneTrackerItems_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEventEntryViewInterface::execGetCollectionSubPresenterInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IEventCollectionViewInterface>*)Z_Param__Result=P_THIS->GetCollectionSubPresenterInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEventEntryViewInterface::execGetDetailsSubPresenterInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IEventDetailsViewInterface>*)Z_Param__Result=P_THIS->GetDetailsSubPresenterInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEventEntryViewInterface::execGetEventSkinDataTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=P_THIS->GetEventSkinDataTable_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEventEntryViewInterface::execGetEventSubPresenterInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IEventInfoViewInterface>*)Z_Param__Result=P_THIS->GetEventSubPresenterInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEventEntryViewInterface::execGetRowDataFromEventSkinDataTable)
	{
		P_GET_STRUCT_REF(FEventEntryPopupSkinUIData,Z_Param_Out_skinData);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_eventFrameLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRowDataFromEventSkinDataTable_Implementation(Z_Param_Out_skinData,Z_Param_Out_eventFrameLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEventEntryViewInterface::execGetStoreSubPresenterInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IEventCollectionViewInterface>*)Z_Param__Result=P_THIS->GetStoreSubPresenterInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEventEntryViewInterface::execInitializeOverlay)
	{
		P_GET_OBJECT(UEventEntryViewData,Z_Param_viewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeOverlay_Implementation(Z_Param_viewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEventEntryViewInterface::execRequestOverlayClosure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestOverlayClosure_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEventEntryViewInterface::execSelectMilestoneTrackerItem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_itemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectMilestoneTrackerItem_Implementation(Z_Param_itemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEventEntryViewInterface::execSetMilestoneTrackerData)
	{
		P_GET_STRUCT_REF(FMilestoneTrackerViewData,Z_Param_Out_viewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMilestoneTrackerData_Implementation(Z_Param_Out_viewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEventEntryViewInterface::execSetOverlayState)
	{
		P_GET_ENUM_REF(EEventEntryTabState,Z_Param_Out_tabState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverlayState_Implementation((EEventEntryTabState&)(Z_Param_Out_tabState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEventEntryViewInterface::execSetTabsData)
	{
		P_GET_TARRAY_REF(FTabWidgetData,Z_Param_Out_tabsData);
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTabsData_Implementation(Z_Param_Out_tabsData,Z_Param_selectedKey);
		P_NATIVE_END;
	}
	void IEventEntryViewInterface::ChangeSelectedTab(const int32 key)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ChangeSelectedTab instead.");
	}
	void IEventEntryViewInterface::DeselectMilestoneTrackerItems()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DeselectMilestoneTrackerItems instead.");
	}
	TScriptInterface<IEventCollectionViewInterface> IEventEntryViewInterface::GetCollectionSubPresenterInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCollectionSubPresenterInterface instead.");
		EventEntryViewInterface_eventGetCollectionSubPresenterInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	TScriptInterface<IEventDetailsViewInterface> IEventEntryViewInterface::GetDetailsSubPresenterInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDetailsSubPresenterInterface instead.");
		EventEntryViewInterface_eventGetDetailsSubPresenterInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	UDataTable* IEventEntryViewInterface::GetEventSkinDataTable() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetEventSkinDataTable instead.");
		EventEntryViewInterface_eventGetEventSkinDataTable_Parms Parms;
		return Parms.ReturnValue;
	}
	TScriptInterface<IEventInfoViewInterface> IEventEntryViewInterface::GetEventSubPresenterInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetEventSubPresenterInterface instead.");
		EventEntryViewInterface_eventGetEventSubPresenterInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IEventEntryViewInterface::GetRowDataFromEventSkinDataTable(FEventEntryPopupSkinUIData& skinData, FText const& eventFrameLabel)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetRowDataFromEventSkinDataTable instead.");
		EventEntryViewInterface_eventGetRowDataFromEventSkinDataTable_Parms Parms;
		return Parms.ReturnValue;
	}
	TScriptInterface<IEventCollectionViewInterface> IEventEntryViewInterface::GetStoreSubPresenterInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetStoreSubPresenterInterface instead.");
		EventEntryViewInterface_eventGetStoreSubPresenterInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	void IEventEntryViewInterface::InitializeOverlay(UEventEntryViewData* viewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InitializeOverlay instead.");
	}
	void IEventEntryViewInterface::RequestOverlayClosure()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RequestOverlayClosure instead.");
	}
	void IEventEntryViewInterface::SelectMilestoneTrackerItem(FName itemId)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SelectMilestoneTrackerItem instead.");
	}
	void IEventEntryViewInterface::SetMilestoneTrackerData(FMilestoneTrackerViewData const& viewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetMilestoneTrackerData instead.");
	}
	void IEventEntryViewInterface::SetOverlayState(EEventEntryTabState const& tabState)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetOverlayState instead.");
	}
	void IEventEntryViewInterface::SetTabsData(TArray<FTabWidgetData> const& tabsData, const int32 selectedKey)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetTabsData instead.");
	}
	void UEventEntryViewInterface::StaticRegisterNativesUEventEntryViewInterface()
	{
		UClass* Class = UEventEntryViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeSelectedTab", &IEventEntryViewInterface::execChangeSelectedTab },
			{ "DeselectMilestoneTrackerItems", &IEventEntryViewInterface::execDeselectMilestoneTrackerItems },
			{ "GetCollectionSubPresenterInterface", &IEventEntryViewInterface::execGetCollectionSubPresenterInterface },
			{ "GetDetailsSubPresenterInterface", &IEventEntryViewInterface::execGetDetailsSubPresenterInterface },
			{ "GetEventSkinDataTable", &IEventEntryViewInterface::execGetEventSkinDataTable },
			{ "GetEventSubPresenterInterface", &IEventEntryViewInterface::execGetEventSubPresenterInterface },
			{ "GetRowDataFromEventSkinDataTable", &IEventEntryViewInterface::execGetRowDataFromEventSkinDataTable },
			{ "GetStoreSubPresenterInterface", &IEventEntryViewInterface::execGetStoreSubPresenterInterface },
			{ "InitializeOverlay", &IEventEntryViewInterface::execInitializeOverlay },
			{ "RequestOverlayClosure", &IEventEntryViewInterface::execRequestOverlayClosure },
			{ "SelectMilestoneTrackerItem", &IEventEntryViewInterface::execSelectMilestoneTrackerItem },
			{ "SetMilestoneTrackerData", &IEventEntryViewInterface::execSetMilestoneTrackerData },
			{ "SetOverlayState", &IEventEntryViewInterface::execSetOverlayState },
			{ "SetTabsData", &IEventEntryViewInterface::execSetTabsData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEventEntryViewInterface_ChangeSelectedTab_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryViewInterface_ChangeSelectedTab_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEventEntryViewInterface_ChangeSelectedTab_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryViewInterface_eventChangeSelectedTab_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UEventEntryViewInterface_ChangeSelectedTab_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_ChangeSelectedTab_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryViewInterface_ChangeSelectedTab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryViewInterface_ChangeSelectedTab_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryViewInterface_ChangeSelectedTab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryViewInterface_ChangeSelectedTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryViewInterface, nullptr, "ChangeSelectedTab", nullptr, nullptr, sizeof(EventEntryViewInterface_eventChangeSelectedTab_Parms), Z_Construct_UFunction_UEventEntryViewInterface_ChangeSelectedTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_ChangeSelectedTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryViewInterface_ChangeSelectedTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_ChangeSelectedTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryViewInterface_ChangeSelectedTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryViewInterface_ChangeSelectedTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryViewInterface_DeselectMilestoneTrackerItems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryViewInterface_DeselectMilestoneTrackerItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryViewInterface_DeselectMilestoneTrackerItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryViewInterface, nullptr, "DeselectMilestoneTrackerItems", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryViewInterface_DeselectMilestoneTrackerItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_DeselectMilestoneTrackerItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryViewInterface_DeselectMilestoneTrackerItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryViewInterface_DeselectMilestoneTrackerItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryViewInterface_GetCollectionSubPresenterInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UEventEntryViewInterface_GetCollectionSubPresenterInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryViewInterface_eventGetCollectionSubPresenterInterface_Parms, ReturnValue), Z_Construct_UClass_UEventCollectionViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryViewInterface_GetCollectionSubPresenterInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryViewInterface_GetCollectionSubPresenterInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryViewInterface_GetCollectionSubPresenterInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryViewInterface_GetCollectionSubPresenterInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryViewInterface, nullptr, "GetCollectionSubPresenterInterface", nullptr, nullptr, sizeof(EventEntryViewInterface_eventGetCollectionSubPresenterInterface_Parms), Z_Construct_UFunction_UEventEntryViewInterface_GetCollectionSubPresenterInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_GetCollectionSubPresenterInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryViewInterface_GetCollectionSubPresenterInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_GetCollectionSubPresenterInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryViewInterface_GetCollectionSubPresenterInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryViewInterface_GetCollectionSubPresenterInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryViewInterface_GetDetailsSubPresenterInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UEventEntryViewInterface_GetDetailsSubPresenterInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryViewInterface_eventGetDetailsSubPresenterInterface_Parms, ReturnValue), Z_Construct_UClass_UEventDetailsViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryViewInterface_GetDetailsSubPresenterInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryViewInterface_GetDetailsSubPresenterInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryViewInterface_GetDetailsSubPresenterInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryViewInterface_GetDetailsSubPresenterInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryViewInterface, nullptr, "GetDetailsSubPresenterInterface", nullptr, nullptr, sizeof(EventEntryViewInterface_eventGetDetailsSubPresenterInterface_Parms), Z_Construct_UFunction_UEventEntryViewInterface_GetDetailsSubPresenterInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_GetDetailsSubPresenterInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryViewInterface_GetDetailsSubPresenterInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_GetDetailsSubPresenterInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryViewInterface_GetDetailsSubPresenterInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryViewInterface_GetDetailsSubPresenterInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryViewInterface_GetEventSkinDataTable_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventEntryViewInterface_GetEventSkinDataTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryViewInterface_eventGetEventSkinDataTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryViewInterface_GetEventSkinDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryViewInterface_GetEventSkinDataTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryViewInterface_GetEventSkinDataTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryViewInterface_GetEventSkinDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryViewInterface, nullptr, "GetEventSkinDataTable", nullptr, nullptr, sizeof(EventEntryViewInterface_eventGetEventSkinDataTable_Parms), Z_Construct_UFunction_UEventEntryViewInterface_GetEventSkinDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_GetEventSkinDataTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryViewInterface_GetEventSkinDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_GetEventSkinDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryViewInterface_GetEventSkinDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryViewInterface_GetEventSkinDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryViewInterface_GetEventSubPresenterInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UEventEntryViewInterface_GetEventSubPresenterInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryViewInterface_eventGetEventSubPresenterInterface_Parms, ReturnValue), Z_Construct_UClass_UEventInfoViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryViewInterface_GetEventSubPresenterInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryViewInterface_GetEventSubPresenterInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryViewInterface_GetEventSubPresenterInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryViewInterface_GetEventSubPresenterInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryViewInterface, nullptr, "GetEventSubPresenterInterface", nullptr, nullptr, sizeof(EventEntryViewInterface_eventGetEventSubPresenterInterface_Parms), Z_Construct_UFunction_UEventEntryViewInterface_GetEventSubPresenterInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_GetEventSubPresenterInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryViewInterface_GetEventSubPresenterInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_GetEventSubPresenterInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryViewInterface_GetEventSubPresenterInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryViewInterface_GetEventSubPresenterInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryViewInterface_GetRowDataFromEventSkinDataTable_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_skinData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eventFrameLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_eventFrameLabel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEventEntryViewInterface_GetRowDataFromEventSkinDataTable_Statics::NewProp_skinData = { "skinData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryViewInterface_eventGetRowDataFromEventSkinDataTable_Parms, skinData), Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryViewInterface_GetRowDataFromEventSkinDataTable_Statics::NewProp_eventFrameLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEventEntryViewInterface_GetRowDataFromEventSkinDataTable_Statics::NewProp_eventFrameLabel = { "eventFrameLabel", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryViewInterface_eventGetRowDataFromEventSkinDataTable_Parms, eventFrameLabel), METADATA_PARAMS(Z_Construct_UFunction_UEventEntryViewInterface_GetRowDataFromEventSkinDataTable_Statics::NewProp_eventFrameLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_GetRowDataFromEventSkinDataTable_Statics::NewProp_eventFrameLabel_MetaData)) };
	void Z_Construct_UFunction_UEventEntryViewInterface_GetRowDataFromEventSkinDataTable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EventEntryViewInterface_eventGetRowDataFromEventSkinDataTable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEventEntryViewInterface_GetRowDataFromEventSkinDataTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EventEntryViewInterface_eventGetRowDataFromEventSkinDataTable_Parms), &Z_Construct_UFunction_UEventEntryViewInterface_GetRowDataFromEventSkinDataTable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryViewInterface_GetRowDataFromEventSkinDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryViewInterface_GetRowDataFromEventSkinDataTable_Statics::NewProp_skinData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryViewInterface_GetRowDataFromEventSkinDataTable_Statics::NewProp_eventFrameLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryViewInterface_GetRowDataFromEventSkinDataTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryViewInterface_GetRowDataFromEventSkinDataTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryViewInterface_GetRowDataFromEventSkinDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryViewInterface, nullptr, "GetRowDataFromEventSkinDataTable", nullptr, nullptr, sizeof(EventEntryViewInterface_eventGetRowDataFromEventSkinDataTable_Parms), Z_Construct_UFunction_UEventEntryViewInterface_GetRowDataFromEventSkinDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_GetRowDataFromEventSkinDataTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryViewInterface_GetRowDataFromEventSkinDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_GetRowDataFromEventSkinDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryViewInterface_GetRowDataFromEventSkinDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryViewInterface_GetRowDataFromEventSkinDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryViewInterface_GetStoreSubPresenterInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UEventEntryViewInterface_GetStoreSubPresenterInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryViewInterface_eventGetStoreSubPresenterInterface_Parms, ReturnValue), Z_Construct_UClass_UEventCollectionViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryViewInterface_GetStoreSubPresenterInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryViewInterface_GetStoreSubPresenterInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryViewInterface_GetStoreSubPresenterInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryViewInterface_GetStoreSubPresenterInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryViewInterface, nullptr, "GetStoreSubPresenterInterface", nullptr, nullptr, sizeof(EventEntryViewInterface_eventGetStoreSubPresenterInterface_Parms), Z_Construct_UFunction_UEventEntryViewInterface_GetStoreSubPresenterInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_GetStoreSubPresenterInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryViewInterface_GetStoreSubPresenterInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_GetStoreSubPresenterInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryViewInterface_GetStoreSubPresenterInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryViewInterface_GetStoreSubPresenterInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryViewInterface_InitializeOverlay_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_viewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventEntryViewInterface_InitializeOverlay_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryViewInterface_eventInitializeOverlay_Parms, viewData), Z_Construct_UClass_UEventEntryViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryViewInterface_InitializeOverlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryViewInterface_InitializeOverlay_Statics::NewProp_viewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryViewInterface_InitializeOverlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryViewInterface_InitializeOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryViewInterface, nullptr, "InitializeOverlay", nullptr, nullptr, sizeof(EventEntryViewInterface_eventInitializeOverlay_Parms), Z_Construct_UFunction_UEventEntryViewInterface_InitializeOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_InitializeOverlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryViewInterface_InitializeOverlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_InitializeOverlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryViewInterface_InitializeOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryViewInterface_InitializeOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryViewInterface_RequestOverlayClosure_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryViewInterface_RequestOverlayClosure_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryViewInterface_RequestOverlayClosure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryViewInterface, nullptr, "RequestOverlayClosure", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryViewInterface_RequestOverlayClosure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_RequestOverlayClosure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryViewInterface_RequestOverlayClosure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryViewInterface_RequestOverlayClosure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryViewInterface_SelectMilestoneTrackerItem_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_itemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEventEntryViewInterface_SelectMilestoneTrackerItem_Statics::NewProp_itemId = { "itemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryViewInterface_eventSelectMilestoneTrackerItem_Parms, itemId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryViewInterface_SelectMilestoneTrackerItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryViewInterface_SelectMilestoneTrackerItem_Statics::NewProp_itemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryViewInterface_SelectMilestoneTrackerItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryViewInterface_SelectMilestoneTrackerItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryViewInterface, nullptr, "SelectMilestoneTrackerItem", nullptr, nullptr, sizeof(EventEntryViewInterface_eventSelectMilestoneTrackerItem_Parms), Z_Construct_UFunction_UEventEntryViewInterface_SelectMilestoneTrackerItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_SelectMilestoneTrackerItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryViewInterface_SelectMilestoneTrackerItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_SelectMilestoneTrackerItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryViewInterface_SelectMilestoneTrackerItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryViewInterface_SelectMilestoneTrackerItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryViewInterface_SetMilestoneTrackerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_viewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryViewInterface_SetMilestoneTrackerData_Statics::NewProp_viewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEventEntryViewInterface_SetMilestoneTrackerData_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryViewInterface_eventSetMilestoneTrackerData_Parms, viewData), Z_Construct_UScriptStruct_FMilestoneTrackerViewData, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryViewInterface_SetMilestoneTrackerData_Statics::NewProp_viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_SetMilestoneTrackerData_Statics::NewProp_viewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryViewInterface_SetMilestoneTrackerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryViewInterface_SetMilestoneTrackerData_Statics::NewProp_viewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryViewInterface_SetMilestoneTrackerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryViewInterface_SetMilestoneTrackerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryViewInterface, nullptr, "SetMilestoneTrackerData", nullptr, nullptr, sizeof(EventEntryViewInterface_eventSetMilestoneTrackerData_Parms), Z_Construct_UFunction_UEventEntryViewInterface_SetMilestoneTrackerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_SetMilestoneTrackerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryViewInterface_SetMilestoneTrackerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_SetMilestoneTrackerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryViewInterface_SetMilestoneTrackerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryViewInterface_SetMilestoneTrackerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryViewInterface_SetOverlayState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tabState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tabState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tabState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEventEntryViewInterface_SetOverlayState_Statics::NewProp_tabState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryViewInterface_SetOverlayState_Statics::NewProp_tabState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEventEntryViewInterface_SetOverlayState_Statics::NewProp_tabState = { "tabState", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryViewInterface_eventSetOverlayState_Parms, tabState), Z_Construct_UEnum_DBDUIViewInterfaces_EEventEntryTabState, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryViewInterface_SetOverlayState_Statics::NewProp_tabState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_SetOverlayState_Statics::NewProp_tabState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryViewInterface_SetOverlayState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryViewInterface_SetOverlayState_Statics::NewProp_tabState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryViewInterface_SetOverlayState_Statics::NewProp_tabState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryViewInterface_SetOverlayState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryViewInterface_SetOverlayState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryViewInterface, nullptr, "SetOverlayState", nullptr, nullptr, sizeof(EventEntryViewInterface_eventSetOverlayState_Parms), Z_Construct_UFunction_UEventEntryViewInterface_SetOverlayState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_SetOverlayState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryViewInterface_SetOverlayState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_SetOverlayState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryViewInterface_SetOverlayState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryViewInterface_SetOverlayState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventEntryViewInterface_SetTabsData_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tabsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tabsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_tabsData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_selectedKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEventEntryViewInterface_SetTabsData_Statics::NewProp_tabsData_Inner = { "tabsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTabWidgetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryViewInterface_SetTabsData_Statics::NewProp_tabsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEventEntryViewInterface_SetTabsData_Statics::NewProp_tabsData = { "tabsData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryViewInterface_eventSetTabsData_Parms, tabsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryViewInterface_SetTabsData_Statics::NewProp_tabsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_SetTabsData_Statics::NewProp_tabsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryViewInterface_SetTabsData_Statics::NewProp_selectedKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEventEntryViewInterface_SetTabsData_Statics::NewProp_selectedKey = { "selectedKey", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventEntryViewInterface_eventSetTabsData_Parms, selectedKey), METADATA_PARAMS(Z_Construct_UFunction_UEventEntryViewInterface_SetTabsData_Statics::NewProp_selectedKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_SetTabsData_Statics::NewProp_selectedKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventEntryViewInterface_SetTabsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryViewInterface_SetTabsData_Statics::NewProp_tabsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryViewInterface_SetTabsData_Statics::NewProp_tabsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventEntryViewInterface_SetTabsData_Statics::NewProp_selectedKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventEntryViewInterface_SetTabsData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventEntryViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventEntryViewInterface_SetTabsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventEntryViewInterface, nullptr, "SetTabsData", nullptr, nullptr, sizeof(EventEntryViewInterface_eventSetTabsData_Parms), Z_Construct_UFunction_UEventEntryViewInterface_SetTabsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_SetTabsData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventEntryViewInterface_SetTabsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventEntryViewInterface_SetTabsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventEntryViewInterface_SetTabsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventEntryViewInterface_SetTabsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEventEntryViewInterface_NoRegister()
	{
		return UEventEntryViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEventEntryViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventEntryViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEventEntryViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEventEntryViewInterface_ChangeSelectedTab, "ChangeSelectedTab" }, // 2627013125
		{ &Z_Construct_UFunction_UEventEntryViewInterface_DeselectMilestoneTrackerItems, "DeselectMilestoneTrackerItems" }, // 3346245883
		{ &Z_Construct_UFunction_UEventEntryViewInterface_GetCollectionSubPresenterInterface, "GetCollectionSubPresenterInterface" }, // 2315005579
		{ &Z_Construct_UFunction_UEventEntryViewInterface_GetDetailsSubPresenterInterface, "GetDetailsSubPresenterInterface" }, // 1678196857
		{ &Z_Construct_UFunction_UEventEntryViewInterface_GetEventSkinDataTable, "GetEventSkinDataTable" }, // 1620425265
		{ &Z_Construct_UFunction_UEventEntryViewInterface_GetEventSubPresenterInterface, "GetEventSubPresenterInterface" }, // 1521216918
		{ &Z_Construct_UFunction_UEventEntryViewInterface_GetRowDataFromEventSkinDataTable, "GetRowDataFromEventSkinDataTable" }, // 4229522478
		{ &Z_Construct_UFunction_UEventEntryViewInterface_GetStoreSubPresenterInterface, "GetStoreSubPresenterInterface" }, // 3910696531
		{ &Z_Construct_UFunction_UEventEntryViewInterface_InitializeOverlay, "InitializeOverlay" }, // 428591338
		{ &Z_Construct_UFunction_UEventEntryViewInterface_RequestOverlayClosure, "RequestOverlayClosure" }, // 2071530896
		{ &Z_Construct_UFunction_UEventEntryViewInterface_SelectMilestoneTrackerItem, "SelectMilestoneTrackerItem" }, // 1909878145
		{ &Z_Construct_UFunction_UEventEntryViewInterface_SetMilestoneTrackerData, "SetMilestoneTrackerData" }, // 3324375232
		{ &Z_Construct_UFunction_UEventEntryViewInterface_SetOverlayState, "SetOverlayState" }, // 1236100646
		{ &Z_Construct_UFunction_UEventEntryViewInterface_SetTabsData, "SetTabsData" }, // 3470526645
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventEntryViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EventEntryViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventEntryViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEventEntryViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventEntryViewInterface_Statics::ClassParams = {
		&UEventEntryViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEventEntryViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventEntryViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventEntryViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventEntryViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventEntryViewInterface, 2691488633);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UEventEntryViewInterface>()
	{
		return UEventEntryViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventEntryViewInterface(Z_Construct_UClass_UEventEntryViewInterface, &UEventEntryViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UEventEntryViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventEntryViewInterface);
	static FName NAME_UEventEntryViewInterface_ChangeSelectedTab = FName(TEXT("ChangeSelectedTab"));
	void IEventEntryViewInterface::Execute_ChangeSelectedTab(UObject* O, const int32 key)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventEntryViewInterface::StaticClass()));
		EventEntryViewInterface_eventChangeSelectedTab_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEventEntryViewInterface_ChangeSelectedTab);
		if (Func)
		{
			Parms.key=key;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEventEntryViewInterface*)(O->GetNativeInterfaceAddress(UEventEntryViewInterface::StaticClass())))
		{
			I->ChangeSelectedTab_Implementation(key);
		}
	}
	static FName NAME_UEventEntryViewInterface_DeselectMilestoneTrackerItems = FName(TEXT("DeselectMilestoneTrackerItems"));
	void IEventEntryViewInterface::Execute_DeselectMilestoneTrackerItems(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventEntryViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UEventEntryViewInterface_DeselectMilestoneTrackerItems);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IEventEntryViewInterface*)(O->GetNativeInterfaceAddress(UEventEntryViewInterface::StaticClass())))
		{
			I->DeselectMilestoneTrackerItems_Implementation();
		}
	}
	static FName NAME_UEventEntryViewInterface_GetCollectionSubPresenterInterface = FName(TEXT("GetCollectionSubPresenterInterface"));
	TScriptInterface<IEventCollectionViewInterface> IEventEntryViewInterface::Execute_GetCollectionSubPresenterInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventEntryViewInterface::StaticClass()));
		EventEntryViewInterface_eventGetCollectionSubPresenterInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEventEntryViewInterface_GetCollectionSubPresenterInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IEventEntryViewInterface*)(O->GetNativeInterfaceAddress(UEventEntryViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetCollectionSubPresenterInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEventEntryViewInterface_GetDetailsSubPresenterInterface = FName(TEXT("GetDetailsSubPresenterInterface"));
	TScriptInterface<IEventDetailsViewInterface> IEventEntryViewInterface::Execute_GetDetailsSubPresenterInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventEntryViewInterface::StaticClass()));
		EventEntryViewInterface_eventGetDetailsSubPresenterInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEventEntryViewInterface_GetDetailsSubPresenterInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IEventEntryViewInterface*)(O->GetNativeInterfaceAddress(UEventEntryViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetDetailsSubPresenterInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEventEntryViewInterface_GetEventSkinDataTable = FName(TEXT("GetEventSkinDataTable"));
	UDataTable* IEventEntryViewInterface::Execute_GetEventSkinDataTable(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventEntryViewInterface::StaticClass()));
		EventEntryViewInterface_eventGetEventSkinDataTable_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEventEntryViewInterface_GetEventSkinDataTable);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IEventEntryViewInterface*)(O->GetNativeInterfaceAddress(UEventEntryViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetEventSkinDataTable_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEventEntryViewInterface_GetEventSubPresenterInterface = FName(TEXT("GetEventSubPresenterInterface"));
	TScriptInterface<IEventInfoViewInterface> IEventEntryViewInterface::Execute_GetEventSubPresenterInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventEntryViewInterface::StaticClass()));
		EventEntryViewInterface_eventGetEventSubPresenterInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEventEntryViewInterface_GetEventSubPresenterInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IEventEntryViewInterface*)(O->GetNativeInterfaceAddress(UEventEntryViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetEventSubPresenterInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEventEntryViewInterface_GetRowDataFromEventSkinDataTable = FName(TEXT("GetRowDataFromEventSkinDataTable"));
	bool IEventEntryViewInterface::Execute_GetRowDataFromEventSkinDataTable(UObject* O, FEventEntryPopupSkinUIData& skinData, FText const& eventFrameLabel)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventEntryViewInterface::StaticClass()));
		EventEntryViewInterface_eventGetRowDataFromEventSkinDataTable_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEventEntryViewInterface_GetRowDataFromEventSkinDataTable);
		if (Func)
		{
			Parms.skinData=skinData;
			Parms.eventFrameLabel=eventFrameLabel;
			O->ProcessEvent(Func, &Parms);
			skinData=Parms.skinData;
		}
		else if (auto I = (IEventEntryViewInterface*)(O->GetNativeInterfaceAddress(UEventEntryViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetRowDataFromEventSkinDataTable_Implementation(skinData,eventFrameLabel);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEventEntryViewInterface_GetStoreSubPresenterInterface = FName(TEXT("GetStoreSubPresenterInterface"));
	TScriptInterface<IEventCollectionViewInterface> IEventEntryViewInterface::Execute_GetStoreSubPresenterInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventEntryViewInterface::StaticClass()));
		EventEntryViewInterface_eventGetStoreSubPresenterInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEventEntryViewInterface_GetStoreSubPresenterInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IEventEntryViewInterface*)(O->GetNativeInterfaceAddress(UEventEntryViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetStoreSubPresenterInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEventEntryViewInterface_InitializeOverlay = FName(TEXT("InitializeOverlay"));
	void IEventEntryViewInterface::Execute_InitializeOverlay(UObject* O, UEventEntryViewData* viewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventEntryViewInterface::StaticClass()));
		EventEntryViewInterface_eventInitializeOverlay_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEventEntryViewInterface_InitializeOverlay);
		if (Func)
		{
			Parms.viewData=viewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEventEntryViewInterface*)(O->GetNativeInterfaceAddress(UEventEntryViewInterface::StaticClass())))
		{
			I->InitializeOverlay_Implementation(viewData);
		}
	}
	static FName NAME_UEventEntryViewInterface_RequestOverlayClosure = FName(TEXT("RequestOverlayClosure"));
	void IEventEntryViewInterface::Execute_RequestOverlayClosure(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventEntryViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UEventEntryViewInterface_RequestOverlayClosure);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IEventEntryViewInterface*)(O->GetNativeInterfaceAddress(UEventEntryViewInterface::StaticClass())))
		{
			I->RequestOverlayClosure_Implementation();
		}
	}
	static FName NAME_UEventEntryViewInterface_SelectMilestoneTrackerItem = FName(TEXT("SelectMilestoneTrackerItem"));
	void IEventEntryViewInterface::Execute_SelectMilestoneTrackerItem(UObject* O, FName itemId)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventEntryViewInterface::StaticClass()));
		EventEntryViewInterface_eventSelectMilestoneTrackerItem_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEventEntryViewInterface_SelectMilestoneTrackerItem);
		if (Func)
		{
			Parms.itemId=itemId;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEventEntryViewInterface*)(O->GetNativeInterfaceAddress(UEventEntryViewInterface::StaticClass())))
		{
			I->SelectMilestoneTrackerItem_Implementation(itemId);
		}
	}
	static FName NAME_UEventEntryViewInterface_SetMilestoneTrackerData = FName(TEXT("SetMilestoneTrackerData"));
	void IEventEntryViewInterface::Execute_SetMilestoneTrackerData(UObject* O, FMilestoneTrackerViewData const& viewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventEntryViewInterface::StaticClass()));
		EventEntryViewInterface_eventSetMilestoneTrackerData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEventEntryViewInterface_SetMilestoneTrackerData);
		if (Func)
		{
			Parms.viewData=viewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEventEntryViewInterface*)(O->GetNativeInterfaceAddress(UEventEntryViewInterface::StaticClass())))
		{
			I->SetMilestoneTrackerData_Implementation(viewData);
		}
	}
	static FName NAME_UEventEntryViewInterface_SetOverlayState = FName(TEXT("SetOverlayState"));
	void IEventEntryViewInterface::Execute_SetOverlayState(UObject* O, EEventEntryTabState const& tabState)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventEntryViewInterface::StaticClass()));
		EventEntryViewInterface_eventSetOverlayState_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEventEntryViewInterface_SetOverlayState);
		if (Func)
		{
			Parms.tabState=tabState;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEventEntryViewInterface*)(O->GetNativeInterfaceAddress(UEventEntryViewInterface::StaticClass())))
		{
			I->SetOverlayState_Implementation(tabState);
		}
	}
	static FName NAME_UEventEntryViewInterface_SetTabsData = FName(TEXT("SetTabsData"));
	void IEventEntryViewInterface::Execute_SetTabsData(UObject* O, TArray<FTabWidgetData> const& tabsData, const int32 selectedKey)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventEntryViewInterface::StaticClass()));
		EventEntryViewInterface_eventSetTabsData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEventEntryViewInterface_SetTabsData);
		if (Func)
		{
			Parms.tabsData=tabsData;
			Parms.selectedKey=selectedKey;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEventEntryViewInterface*)(O->GetNativeInterfaceAddress(UEventEntryViewInterface::StaticClass())))
		{
			I->SetTabsData_Implementation(tabsData,selectedKey);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
