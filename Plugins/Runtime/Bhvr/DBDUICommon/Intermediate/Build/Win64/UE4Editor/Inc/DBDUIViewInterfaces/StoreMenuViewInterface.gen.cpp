// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/StoreMenuViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreMenuViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreMenuViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreMenuViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCharactersViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCollectionsViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreFeaturedViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreSpecialPacksViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreSpecialsViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EStoreMenuState();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FTabWidgetData();
// End Cross Module References
	DEFINE_FUNCTION(IStoreMenuViewInterface::execGetStoreCharactersInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IStoreCharactersViewInterface>*)Z_Param__Result=P_THIS->GetStoreCharactersInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStoreMenuViewInterface::execGetStoreCollectionsInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IStoreCollectionsViewInterface>*)Z_Param__Result=P_THIS->GetStoreCollectionsInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStoreMenuViewInterface::execGetStoreFeaturedInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IStoreFeaturedViewInterface>*)Z_Param__Result=P_THIS->GetStoreFeaturedInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStoreMenuViewInterface::execGetStoreSpecialPacksInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IStoreSpecialPacksViewInterface>*)Z_Param__Result=P_THIS->GetStoreSpecialPacksInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStoreMenuViewInterface::execGetStoreSpecialsInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IStoreSpecialsViewInterface>*)Z_Param__Result=P_THIS->GetStoreSpecialsInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStoreMenuViewInterface::execSetMenuState)
	{
		P_GET_ENUM(EStoreMenuState,Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMenuState_Implementation(EStoreMenuState(Z_Param_state));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStoreMenuViewInterface::execSetTabEnabled)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_key);
		P_GET_UBOOL(Z_Param_enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTabEnabled_Implementation(Z_Param_key,Z_Param_enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStoreMenuViewInterface::execSetTabsData)
	{
		P_GET_TARRAY_REF(FTabWidgetData,Z_Param_Out_tabsData);
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTabsData_Implementation(Z_Param_Out_tabsData,Z_Param_selectedKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStoreMenuViewInterface::execSetTabSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTabSelected_Implementation(Z_Param_key);
		P_NATIVE_END;
	}
	TScriptInterface<IStoreCharactersViewInterface> IStoreMenuViewInterface::GetStoreCharactersInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetStoreCharactersInterface instead.");
		StoreMenuViewInterface_eventGetStoreCharactersInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	TScriptInterface<IStoreCollectionsViewInterface> IStoreMenuViewInterface::GetStoreCollectionsInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetStoreCollectionsInterface instead.");
		StoreMenuViewInterface_eventGetStoreCollectionsInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	TScriptInterface<IStoreFeaturedViewInterface> IStoreMenuViewInterface::GetStoreFeaturedInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetStoreFeaturedInterface instead.");
		StoreMenuViewInterface_eventGetStoreFeaturedInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	TScriptInterface<IStoreSpecialPacksViewInterface> IStoreMenuViewInterface::GetStoreSpecialPacksInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetStoreSpecialPacksInterface instead.");
		StoreMenuViewInterface_eventGetStoreSpecialPacksInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	TScriptInterface<IStoreSpecialsViewInterface> IStoreMenuViewInterface::GetStoreSpecialsInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetStoreSpecialsInterface instead.");
		StoreMenuViewInterface_eventGetStoreSpecialsInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	void IStoreMenuViewInterface::SetMenuState(EStoreMenuState state)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetMenuState instead.");
	}
	void IStoreMenuViewInterface::SetTabEnabled(int32 key, bool enabled)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetTabEnabled instead.");
	}
	void IStoreMenuViewInterface::SetTabsData(TArray<FTabWidgetData> const& tabsData, int32 selectedKey)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetTabsData instead.");
	}
	void IStoreMenuViewInterface::SetTabSelected(int32 key)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetTabSelected instead.");
	}
	void UStoreMenuViewInterface::StaticRegisterNativesUStoreMenuViewInterface()
	{
		UClass* Class = UStoreMenuViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStoreCharactersInterface", &IStoreMenuViewInterface::execGetStoreCharactersInterface },
			{ "GetStoreCollectionsInterface", &IStoreMenuViewInterface::execGetStoreCollectionsInterface },
			{ "GetStoreFeaturedInterface", &IStoreMenuViewInterface::execGetStoreFeaturedInterface },
			{ "GetStoreSpecialPacksInterface", &IStoreMenuViewInterface::execGetStoreSpecialPacksInterface },
			{ "GetStoreSpecialsInterface", &IStoreMenuViewInterface::execGetStoreSpecialsInterface },
			{ "SetMenuState", &IStoreMenuViewInterface::execSetMenuState },
			{ "SetTabEnabled", &IStoreMenuViewInterface::execSetTabEnabled },
			{ "SetTabsData", &IStoreMenuViewInterface::execSetTabsData },
			{ "SetTabSelected", &IStoreMenuViewInterface::execSetTabSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreCharactersInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreCharactersInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreMenuViewInterface_eventGetStoreCharactersInterface_Parms, ReturnValue), Z_Construct_UClass_UStoreCharactersViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreCharactersInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreCharactersInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreCharactersInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreCharactersInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreMenuViewInterface, nullptr, "GetStoreCharactersInterface", nullptr, nullptr, sizeof(StoreMenuViewInterface_eventGetStoreCharactersInterface_Parms), Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreCharactersInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreCharactersInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreCharactersInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreCharactersInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreCharactersInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreCharactersInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreCollectionsInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreCollectionsInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreMenuViewInterface_eventGetStoreCollectionsInterface_Parms, ReturnValue), Z_Construct_UClass_UStoreCollectionsViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreCollectionsInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreCollectionsInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreCollectionsInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreCollectionsInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreMenuViewInterface, nullptr, "GetStoreCollectionsInterface", nullptr, nullptr, sizeof(StoreMenuViewInterface_eventGetStoreCollectionsInterface_Parms), Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreCollectionsInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreCollectionsInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreCollectionsInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreCollectionsInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreCollectionsInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreCollectionsInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreFeaturedInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreFeaturedInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreMenuViewInterface_eventGetStoreFeaturedInterface_Parms, ReturnValue), Z_Construct_UClass_UStoreFeaturedViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreFeaturedInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreFeaturedInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreFeaturedInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreFeaturedInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreMenuViewInterface, nullptr, "GetStoreFeaturedInterface", nullptr, nullptr, sizeof(StoreMenuViewInterface_eventGetStoreFeaturedInterface_Parms), Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreFeaturedInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreFeaturedInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreFeaturedInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreFeaturedInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreFeaturedInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreFeaturedInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreSpecialPacksInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreSpecialPacksInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreMenuViewInterface_eventGetStoreSpecialPacksInterface_Parms, ReturnValue), Z_Construct_UClass_UStoreSpecialPacksViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreSpecialPacksInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreSpecialPacksInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreSpecialPacksInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreSpecialPacksInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreMenuViewInterface, nullptr, "GetStoreSpecialPacksInterface", nullptr, nullptr, sizeof(StoreMenuViewInterface_eventGetStoreSpecialPacksInterface_Parms), Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreSpecialPacksInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreSpecialPacksInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreSpecialPacksInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreSpecialPacksInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreSpecialPacksInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreSpecialPacksInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreSpecialsInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreSpecialsInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreMenuViewInterface_eventGetStoreSpecialsInterface_Parms, ReturnValue), Z_Construct_UClass_UStoreSpecialsViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreSpecialsInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreSpecialsInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreSpecialsInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreSpecialsInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreMenuViewInterface, nullptr, "GetStoreSpecialsInterface", nullptr, nullptr, sizeof(StoreMenuViewInterface_eventGetStoreSpecialsInterface_Parms), Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreSpecialsInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreSpecialsInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreSpecialsInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreSpecialsInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreSpecialsInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreSpecialsInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreMenuViewInterface_SetMenuState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStoreMenuViewInterface_SetMenuState_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStoreMenuViewInterface_SetMenuState_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreMenuViewInterface_eventSetMenuState_Parms, state), Z_Construct_UEnum_DBDUIViewInterfaces_EStoreMenuState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreMenuViewInterface_SetMenuState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreMenuViewInterface_SetMenuState_Statics::NewProp_state_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreMenuViewInterface_SetMenuState_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreMenuViewInterface_SetMenuState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreMenuViewInterface_SetMenuState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreMenuViewInterface, nullptr, "SetMenuState", nullptr, nullptr, sizeof(StoreMenuViewInterface_eventSetMenuState_Parms), Z_Construct_UFunction_UStoreMenuViewInterface_SetMenuState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuViewInterface_SetMenuState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreMenuViewInterface_SetMenuState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuViewInterface_SetMenuState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreMenuViewInterface_SetMenuState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreMenuViewInterface_SetMenuState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreMenuViewInterface_SetTabEnabled_Statics
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStoreMenuViewInterface_SetTabEnabled_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreMenuViewInterface_eventSetTabEnabled_Parms, key), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStoreMenuViewInterface_SetTabEnabled_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((StoreMenuViewInterface_eventSetTabEnabled_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStoreMenuViewInterface_SetTabEnabled_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StoreMenuViewInterface_eventSetTabEnabled_Parms), &Z_Construct_UFunction_UStoreMenuViewInterface_SetTabEnabled_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreMenuViewInterface_SetTabEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreMenuViewInterface_SetTabEnabled_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreMenuViewInterface_SetTabEnabled_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreMenuViewInterface_SetTabEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreMenuViewInterface_SetTabEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreMenuViewInterface, nullptr, "SetTabEnabled", nullptr, nullptr, sizeof(StoreMenuViewInterface_eventSetTabEnabled_Parms), Z_Construct_UFunction_UStoreMenuViewInterface_SetTabEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuViewInterface_SetTabEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreMenuViewInterface_SetTabEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuViewInterface_SetTabEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreMenuViewInterface_SetTabEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreMenuViewInterface_SetTabEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreMenuViewInterface_SetTabsData_Statics
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStoreMenuViewInterface_SetTabsData_Statics::NewProp_tabsData_Inner = { "tabsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTabWidgetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreMenuViewInterface_SetTabsData_Statics::NewProp_tabsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStoreMenuViewInterface_SetTabsData_Statics::NewProp_tabsData = { "tabsData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreMenuViewInterface_eventSetTabsData_Parms, tabsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStoreMenuViewInterface_SetTabsData_Statics::NewProp_tabsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuViewInterface_SetTabsData_Statics::NewProp_tabsData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStoreMenuViewInterface_SetTabsData_Statics::NewProp_selectedKey = { "selectedKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreMenuViewInterface_eventSetTabsData_Parms, selectedKey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreMenuViewInterface_SetTabsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreMenuViewInterface_SetTabsData_Statics::NewProp_tabsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreMenuViewInterface_SetTabsData_Statics::NewProp_tabsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreMenuViewInterface_SetTabsData_Statics::NewProp_selectedKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreMenuViewInterface_SetTabsData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreMenuViewInterface_SetTabsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreMenuViewInterface, nullptr, "SetTabsData", nullptr, nullptr, sizeof(StoreMenuViewInterface_eventSetTabsData_Parms), Z_Construct_UFunction_UStoreMenuViewInterface_SetTabsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuViewInterface_SetTabsData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreMenuViewInterface_SetTabsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuViewInterface_SetTabsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreMenuViewInterface_SetTabsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreMenuViewInterface_SetTabsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreMenuViewInterface_SetTabSelected_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStoreMenuViewInterface_SetTabSelected_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreMenuViewInterface_eventSetTabSelected_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreMenuViewInterface_SetTabSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreMenuViewInterface_SetTabSelected_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreMenuViewInterface_SetTabSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreMenuViewInterface_SetTabSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreMenuViewInterface, nullptr, "SetTabSelected", nullptr, nullptr, sizeof(StoreMenuViewInterface_eventSetTabSelected_Parms), Z_Construct_UFunction_UStoreMenuViewInterface_SetTabSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuViewInterface_SetTabSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreMenuViewInterface_SetTabSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuViewInterface_SetTabSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreMenuViewInterface_SetTabSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreMenuViewInterface_SetTabSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStoreMenuViewInterface_NoRegister()
	{
		return UStoreMenuViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UStoreMenuViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreMenuViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStoreMenuViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreCharactersInterface, "GetStoreCharactersInterface" }, // 3198791111
		{ &Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreCollectionsInterface, "GetStoreCollectionsInterface" }, // 4152074544
		{ &Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreFeaturedInterface, "GetStoreFeaturedInterface" }, // 4010512782
		{ &Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreSpecialPacksInterface, "GetStoreSpecialPacksInterface" }, // 2886291185
		{ &Z_Construct_UFunction_UStoreMenuViewInterface_GetStoreSpecialsInterface, "GetStoreSpecialsInterface" }, // 3123120180
		{ &Z_Construct_UFunction_UStoreMenuViewInterface_SetMenuState, "SetMenuState" }, // 3509090804
		{ &Z_Construct_UFunction_UStoreMenuViewInterface_SetTabEnabled, "SetTabEnabled" }, // 2296899342
		{ &Z_Construct_UFunction_UStoreMenuViewInterface_SetTabsData, "SetTabsData" }, // 1075098014
		{ &Z_Construct_UFunction_UStoreMenuViewInterface_SetTabSelected, "SetTabSelected" }, // 391396165
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreMenuViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StoreMenuViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreMenuViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStoreMenuViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoreMenuViewInterface_Statics::ClassParams = {
		&UStoreMenuViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStoreMenuViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreMenuViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreMenuViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoreMenuViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoreMenuViewInterface, 3971194602);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UStoreMenuViewInterface>()
	{
		return UStoreMenuViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoreMenuViewInterface(Z_Construct_UClass_UStoreMenuViewInterface, &UStoreMenuViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UStoreMenuViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreMenuViewInterface);
	static FName NAME_UStoreMenuViewInterface_GetStoreCharactersInterface = FName(TEXT("GetStoreCharactersInterface"));
	TScriptInterface<IStoreCharactersViewInterface> IStoreMenuViewInterface::Execute_GetStoreCharactersInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreMenuViewInterface::StaticClass()));
		StoreMenuViewInterface_eventGetStoreCharactersInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreMenuViewInterface_GetStoreCharactersInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IStoreMenuViewInterface*)(O->GetNativeInterfaceAddress(UStoreMenuViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetStoreCharactersInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UStoreMenuViewInterface_GetStoreCollectionsInterface = FName(TEXT("GetStoreCollectionsInterface"));
	TScriptInterface<IStoreCollectionsViewInterface> IStoreMenuViewInterface::Execute_GetStoreCollectionsInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreMenuViewInterface::StaticClass()));
		StoreMenuViewInterface_eventGetStoreCollectionsInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreMenuViewInterface_GetStoreCollectionsInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IStoreMenuViewInterface*)(O->GetNativeInterfaceAddress(UStoreMenuViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetStoreCollectionsInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UStoreMenuViewInterface_GetStoreFeaturedInterface = FName(TEXT("GetStoreFeaturedInterface"));
	TScriptInterface<IStoreFeaturedViewInterface> IStoreMenuViewInterface::Execute_GetStoreFeaturedInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreMenuViewInterface::StaticClass()));
		StoreMenuViewInterface_eventGetStoreFeaturedInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreMenuViewInterface_GetStoreFeaturedInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IStoreMenuViewInterface*)(O->GetNativeInterfaceAddress(UStoreMenuViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetStoreFeaturedInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UStoreMenuViewInterface_GetStoreSpecialPacksInterface = FName(TEXT("GetStoreSpecialPacksInterface"));
	TScriptInterface<IStoreSpecialPacksViewInterface> IStoreMenuViewInterface::Execute_GetStoreSpecialPacksInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreMenuViewInterface::StaticClass()));
		StoreMenuViewInterface_eventGetStoreSpecialPacksInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreMenuViewInterface_GetStoreSpecialPacksInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IStoreMenuViewInterface*)(O->GetNativeInterfaceAddress(UStoreMenuViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetStoreSpecialPacksInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UStoreMenuViewInterface_GetStoreSpecialsInterface = FName(TEXT("GetStoreSpecialsInterface"));
	TScriptInterface<IStoreSpecialsViewInterface> IStoreMenuViewInterface::Execute_GetStoreSpecialsInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreMenuViewInterface::StaticClass()));
		StoreMenuViewInterface_eventGetStoreSpecialsInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreMenuViewInterface_GetStoreSpecialsInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IStoreMenuViewInterface*)(O->GetNativeInterfaceAddress(UStoreMenuViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetStoreSpecialsInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UStoreMenuViewInterface_SetMenuState = FName(TEXT("SetMenuState"));
	void IStoreMenuViewInterface::Execute_SetMenuState(UObject* O, EStoreMenuState state)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreMenuViewInterface::StaticClass()));
		StoreMenuViewInterface_eventSetMenuState_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreMenuViewInterface_SetMenuState);
		if (Func)
		{
			Parms.state=state;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IStoreMenuViewInterface*)(O->GetNativeInterfaceAddress(UStoreMenuViewInterface::StaticClass())))
		{
			I->SetMenuState_Implementation(state);
		}
	}
	static FName NAME_UStoreMenuViewInterface_SetTabEnabled = FName(TEXT("SetTabEnabled"));
	void IStoreMenuViewInterface::Execute_SetTabEnabled(UObject* O, int32 key, bool enabled)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreMenuViewInterface::StaticClass()));
		StoreMenuViewInterface_eventSetTabEnabled_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreMenuViewInterface_SetTabEnabled);
		if (Func)
		{
			Parms.key=key;
			Parms.enabled=enabled;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IStoreMenuViewInterface*)(O->GetNativeInterfaceAddress(UStoreMenuViewInterface::StaticClass())))
		{
			I->SetTabEnabled_Implementation(key,enabled);
		}
	}
	static FName NAME_UStoreMenuViewInterface_SetTabsData = FName(TEXT("SetTabsData"));
	void IStoreMenuViewInterface::Execute_SetTabsData(UObject* O, TArray<FTabWidgetData> const& tabsData, int32 selectedKey)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreMenuViewInterface::StaticClass()));
		StoreMenuViewInterface_eventSetTabsData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreMenuViewInterface_SetTabsData);
		if (Func)
		{
			Parms.tabsData=tabsData;
			Parms.selectedKey=selectedKey;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IStoreMenuViewInterface*)(O->GetNativeInterfaceAddress(UStoreMenuViewInterface::StaticClass())))
		{
			I->SetTabsData_Implementation(tabsData,selectedKey);
		}
	}
	static FName NAME_UStoreMenuViewInterface_SetTabSelected = FName(TEXT("SetTabSelected"));
	void IStoreMenuViewInterface::Execute_SetTabSelected(UObject* O, int32 key)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreMenuViewInterface::StaticClass()));
		StoreMenuViewInterface_eventSetTabSelected_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreMenuViewInterface_SetTabSelected);
		if (Func)
		{
			Parms.key=key;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IStoreMenuViewInterface*)(O->GetNativeInterfaceAddress(UStoreMenuViewInterface::StaticClass())))
		{
			I->SetTabSelected_Implementation(key);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
