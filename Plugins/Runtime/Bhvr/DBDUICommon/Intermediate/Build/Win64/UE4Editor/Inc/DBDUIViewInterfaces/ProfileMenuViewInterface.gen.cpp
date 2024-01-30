// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ProfileMenuViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfileMenuViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UProfileMenuViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UProfileMenuViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UProfileMenuCustomizationViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UProfileMenuStatsViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EProfileMenuState();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FTabWidgetData();
// End Cross Module References
	DEFINE_FUNCTION(IProfileMenuViewInterface::execGetProfileMenuBadgeInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IProfileMenuCustomizationViewInterface>*)Z_Param__Result=P_THIS->GetProfileMenuBadgeInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IProfileMenuViewInterface::execGetProfileMenuBannerInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IProfileMenuCustomizationViewInterface>*)Z_Param__Result=P_THIS->GetProfileMenuBannerInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IProfileMenuViewInterface::execGetProfileMenuStatsInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IProfileMenuStatsViewInterface>*)Z_Param__Result=P_THIS->GetProfileMenuStatsInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IProfileMenuViewInterface::execSetMenuState)
	{
		P_GET_ENUM(EProfileMenuState,Z_Param_menuState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMenuState_Implementation(EProfileMenuState(Z_Param_menuState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IProfileMenuViewInterface::execSetSubtitle)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_subtitle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubtitle_Implementation(Z_Param_Out_subtitle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IProfileMenuViewInterface::execSetTabEnabled)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_key);
		P_GET_UBOOL(Z_Param_enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTabEnabled_Implementation(Z_Param_key,Z_Param_enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IProfileMenuViewInterface::execSetTabsData)
	{
		P_GET_TARRAY_REF(FTabWidgetData,Z_Param_Out_tabsData);
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTabsData_Implementation(Z_Param_Out_tabsData,Z_Param_selectedKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IProfileMenuViewInterface::execSetTabSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTabSelected_Implementation(Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IProfileMenuViewInterface::execSetTitle)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_title);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTitle_Implementation(Z_Param_Out_title);
		P_NATIVE_END;
	}
	TScriptInterface<IProfileMenuCustomizationViewInterface> IProfileMenuViewInterface::GetProfileMenuBadgeInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetProfileMenuBadgeInterface instead.");
		ProfileMenuViewInterface_eventGetProfileMenuBadgeInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	TScriptInterface<IProfileMenuCustomizationViewInterface> IProfileMenuViewInterface::GetProfileMenuBannerInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetProfileMenuBannerInterface instead.");
		ProfileMenuViewInterface_eventGetProfileMenuBannerInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	TScriptInterface<IProfileMenuStatsViewInterface> IProfileMenuViewInterface::GetProfileMenuStatsInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetProfileMenuStatsInterface instead.");
		ProfileMenuViewInterface_eventGetProfileMenuStatsInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	void IProfileMenuViewInterface::SetMenuState(EProfileMenuState menuState)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetMenuState instead.");
	}
	void IProfileMenuViewInterface::SetSubtitle(FText const& subtitle)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSubtitle instead.");
	}
	void IProfileMenuViewInterface::SetTabEnabled(int32 key, bool enabled)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetTabEnabled instead.");
	}
	void IProfileMenuViewInterface::SetTabsData(TArray<FTabWidgetData> const& tabsData, int32 selectedKey)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetTabsData instead.");
	}
	void IProfileMenuViewInterface::SetTabSelected(int32 key)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetTabSelected instead.");
	}
	void IProfileMenuViewInterface::SetTitle(FText const& title)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetTitle instead.");
	}
	void UProfileMenuViewInterface::StaticRegisterNativesUProfileMenuViewInterface()
	{
		UClass* Class = UProfileMenuViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetProfileMenuBadgeInterface", &IProfileMenuViewInterface::execGetProfileMenuBadgeInterface },
			{ "GetProfileMenuBannerInterface", &IProfileMenuViewInterface::execGetProfileMenuBannerInterface },
			{ "GetProfileMenuStatsInterface", &IProfileMenuViewInterface::execGetProfileMenuStatsInterface },
			{ "SetMenuState", &IProfileMenuViewInterface::execSetMenuState },
			{ "SetSubtitle", &IProfileMenuViewInterface::execSetSubtitle },
			{ "SetTabEnabled", &IProfileMenuViewInterface::execSetTabEnabled },
			{ "SetTabsData", &IProfileMenuViewInterface::execSetTabsData },
			{ "SetTabSelected", &IProfileMenuViewInterface::execSetTabSelected },
			{ "SetTitle", &IProfileMenuViewInterface::execSetTitle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuBadgeInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuBadgeInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProfileMenuViewInterface_eventGetProfileMenuBadgeInterface_Parms, ReturnValue), Z_Construct_UClass_UProfileMenuCustomizationViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuBadgeInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuBadgeInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuBadgeInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuBadgeInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuViewInterface, nullptr, "GetProfileMenuBadgeInterface", nullptr, nullptr, sizeof(ProfileMenuViewInterface_eventGetProfileMenuBadgeInterface_Parms), Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuBadgeInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuBadgeInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuBadgeInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuBadgeInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuBadgeInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuBadgeInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuBannerInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuBannerInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProfileMenuViewInterface_eventGetProfileMenuBannerInterface_Parms, ReturnValue), Z_Construct_UClass_UProfileMenuCustomizationViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuBannerInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuBannerInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuBannerInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuBannerInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuViewInterface, nullptr, "GetProfileMenuBannerInterface", nullptr, nullptr, sizeof(ProfileMenuViewInterface_eventGetProfileMenuBannerInterface_Parms), Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuBannerInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuBannerInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuBannerInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuBannerInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuBannerInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuBannerInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuStatsInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuStatsInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProfileMenuViewInterface_eventGetProfileMenuStatsInterface_Parms, ReturnValue), Z_Construct_UClass_UProfileMenuStatsViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuStatsInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuStatsInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuStatsInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuStatsInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuViewInterface, nullptr, "GetProfileMenuStatsInterface", nullptr, nullptr, sizeof(ProfileMenuViewInterface_eventGetProfileMenuStatsInterface_Parms), Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuStatsInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuStatsInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuStatsInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuStatsInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuStatsInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuStatsInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProfileMenuViewInterface_SetMenuState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_menuState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_menuState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UProfileMenuViewInterface_SetMenuState_Statics::NewProp_menuState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UProfileMenuViewInterface_SetMenuState_Statics::NewProp_menuState = { "menuState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProfileMenuViewInterface_eventSetMenuState_Parms, menuState), Z_Construct_UEnum_DBDUIViewInterfaces_EProfileMenuState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProfileMenuViewInterface_SetMenuState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuViewInterface_SetMenuState_Statics::NewProp_menuState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuViewInterface_SetMenuState_Statics::NewProp_menuState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuViewInterface_SetMenuState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuViewInterface_SetMenuState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuViewInterface, nullptr, "SetMenuState", nullptr, nullptr, sizeof(ProfileMenuViewInterface_eventSetMenuState_Parms), Z_Construct_UFunction_UProfileMenuViewInterface_SetMenuState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuViewInterface_SetMenuState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuViewInterface_SetMenuState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuViewInterface_SetMenuState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuViewInterface_SetMenuState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuViewInterface_SetMenuState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProfileMenuViewInterface_SetSubtitle_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuViewInterface_SetSubtitle_Statics::NewProp_subtitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UProfileMenuViewInterface_SetSubtitle_Statics::NewProp_subtitle = { "subtitle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProfileMenuViewInterface_eventSetSubtitle_Parms, subtitle), METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuViewInterface_SetSubtitle_Statics::NewProp_subtitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuViewInterface_SetSubtitle_Statics::NewProp_subtitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProfileMenuViewInterface_SetSubtitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuViewInterface_SetSubtitle_Statics::NewProp_subtitle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuViewInterface_SetSubtitle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuViewInterface_SetSubtitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuViewInterface, nullptr, "SetSubtitle", nullptr, nullptr, sizeof(ProfileMenuViewInterface_eventSetSubtitle_Parms), Z_Construct_UFunction_UProfileMenuViewInterface_SetSubtitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuViewInterface_SetSubtitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuViewInterface_SetSubtitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuViewInterface_SetSubtitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuViewInterface_SetSubtitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuViewInterface_SetSubtitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProfileMenuViewInterface_SetTabEnabled_Statics
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProfileMenuViewInterface_SetTabEnabled_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProfileMenuViewInterface_eventSetTabEnabled_Parms, key), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UProfileMenuViewInterface_SetTabEnabled_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((ProfileMenuViewInterface_eventSetTabEnabled_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProfileMenuViewInterface_SetTabEnabled_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ProfileMenuViewInterface_eventSetTabEnabled_Parms), &Z_Construct_UFunction_UProfileMenuViewInterface_SetTabEnabled_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProfileMenuViewInterface_SetTabEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuViewInterface_SetTabEnabled_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuViewInterface_SetTabEnabled_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuViewInterface_SetTabEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuViewInterface_SetTabEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuViewInterface, nullptr, "SetTabEnabled", nullptr, nullptr, sizeof(ProfileMenuViewInterface_eventSetTabEnabled_Parms), Z_Construct_UFunction_UProfileMenuViewInterface_SetTabEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuViewInterface_SetTabEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuViewInterface_SetTabEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuViewInterface_SetTabEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuViewInterface_SetTabEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuViewInterface_SetTabEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProfileMenuViewInterface_SetTabsData_Statics
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProfileMenuViewInterface_SetTabsData_Statics::NewProp_tabsData_Inner = { "tabsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTabWidgetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuViewInterface_SetTabsData_Statics::NewProp_tabsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProfileMenuViewInterface_SetTabsData_Statics::NewProp_tabsData = { "tabsData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProfileMenuViewInterface_eventSetTabsData_Parms, tabsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuViewInterface_SetTabsData_Statics::NewProp_tabsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuViewInterface_SetTabsData_Statics::NewProp_tabsData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProfileMenuViewInterface_SetTabsData_Statics::NewProp_selectedKey = { "selectedKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProfileMenuViewInterface_eventSetTabsData_Parms, selectedKey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProfileMenuViewInterface_SetTabsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuViewInterface_SetTabsData_Statics::NewProp_tabsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuViewInterface_SetTabsData_Statics::NewProp_tabsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuViewInterface_SetTabsData_Statics::NewProp_selectedKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuViewInterface_SetTabsData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuViewInterface_SetTabsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuViewInterface, nullptr, "SetTabsData", nullptr, nullptr, sizeof(ProfileMenuViewInterface_eventSetTabsData_Parms), Z_Construct_UFunction_UProfileMenuViewInterface_SetTabsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuViewInterface_SetTabsData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuViewInterface_SetTabsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuViewInterface_SetTabsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuViewInterface_SetTabsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuViewInterface_SetTabsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProfileMenuViewInterface_SetTabSelected_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProfileMenuViewInterface_SetTabSelected_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProfileMenuViewInterface_eventSetTabSelected_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProfileMenuViewInterface_SetTabSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuViewInterface_SetTabSelected_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuViewInterface_SetTabSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuViewInterface_SetTabSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuViewInterface, nullptr, "SetTabSelected", nullptr, nullptr, sizeof(ProfileMenuViewInterface_eventSetTabSelected_Parms), Z_Construct_UFunction_UProfileMenuViewInterface_SetTabSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuViewInterface_SetTabSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuViewInterface_SetTabSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuViewInterface_SetTabSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuViewInterface_SetTabSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuViewInterface_SetTabSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProfileMenuViewInterface_SetTitle_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuViewInterface_SetTitle_Statics::NewProp_title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UProfileMenuViewInterface_SetTitle_Statics::NewProp_title = { "title", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProfileMenuViewInterface_eventSetTitle_Parms, title), METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuViewInterface_SetTitle_Statics::NewProp_title_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuViewInterface_SetTitle_Statics::NewProp_title_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProfileMenuViewInterface_SetTitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuViewInterface_SetTitle_Statics::NewProp_title,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuViewInterface_SetTitle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuViewInterface_SetTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuViewInterface, nullptr, "SetTitle", nullptr, nullptr, sizeof(ProfileMenuViewInterface_eventSetTitle_Parms), Z_Construct_UFunction_UProfileMenuViewInterface_SetTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuViewInterface_SetTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuViewInterface_SetTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuViewInterface_SetTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuViewInterface_SetTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuViewInterface_SetTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProfileMenuViewInterface_NoRegister()
	{
		return UProfileMenuViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UProfileMenuViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProfileMenuViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProfileMenuViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuBadgeInterface, "GetProfileMenuBadgeInterface" }, // 1462125739
		{ &Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuBannerInterface, "GetProfileMenuBannerInterface" }, // 2332068089
		{ &Z_Construct_UFunction_UProfileMenuViewInterface_GetProfileMenuStatsInterface, "GetProfileMenuStatsInterface" }, // 1820551458
		{ &Z_Construct_UFunction_UProfileMenuViewInterface_SetMenuState, "SetMenuState" }, // 1146172070
		{ &Z_Construct_UFunction_UProfileMenuViewInterface_SetSubtitle, "SetSubtitle" }, // 1907817370
		{ &Z_Construct_UFunction_UProfileMenuViewInterface_SetTabEnabled, "SetTabEnabled" }, // 3273224615
		{ &Z_Construct_UFunction_UProfileMenuViewInterface_SetTabsData, "SetTabsData" }, // 1809381277
		{ &Z_Construct_UFunction_UProfileMenuViewInterface_SetTabSelected, "SetTabSelected" }, // 1385357082
		{ &Z_Construct_UFunction_UProfileMenuViewInterface_SetTitle, "SetTitle" }, // 381038347
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ProfileMenuViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProfileMenuViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IProfileMenuViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProfileMenuViewInterface_Statics::ClassParams = {
		&UProfileMenuViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UProfileMenuViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProfileMenuViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProfileMenuViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProfileMenuViewInterface, 5049503);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UProfileMenuViewInterface>()
	{
		return UProfileMenuViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProfileMenuViewInterface(Z_Construct_UClass_UProfileMenuViewInterface, &UProfileMenuViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UProfileMenuViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProfileMenuViewInterface);
	static FName NAME_UProfileMenuViewInterface_GetProfileMenuBadgeInterface = FName(TEXT("GetProfileMenuBadgeInterface"));
	TScriptInterface<IProfileMenuCustomizationViewInterface> IProfileMenuViewInterface::Execute_GetProfileMenuBadgeInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProfileMenuViewInterface::StaticClass()));
		ProfileMenuViewInterface_eventGetProfileMenuBadgeInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UProfileMenuViewInterface_GetProfileMenuBadgeInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IProfileMenuViewInterface*)(O->GetNativeInterfaceAddress(UProfileMenuViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetProfileMenuBadgeInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UProfileMenuViewInterface_GetProfileMenuBannerInterface = FName(TEXT("GetProfileMenuBannerInterface"));
	TScriptInterface<IProfileMenuCustomizationViewInterface> IProfileMenuViewInterface::Execute_GetProfileMenuBannerInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProfileMenuViewInterface::StaticClass()));
		ProfileMenuViewInterface_eventGetProfileMenuBannerInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UProfileMenuViewInterface_GetProfileMenuBannerInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IProfileMenuViewInterface*)(O->GetNativeInterfaceAddress(UProfileMenuViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetProfileMenuBannerInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UProfileMenuViewInterface_GetProfileMenuStatsInterface = FName(TEXT("GetProfileMenuStatsInterface"));
	TScriptInterface<IProfileMenuStatsViewInterface> IProfileMenuViewInterface::Execute_GetProfileMenuStatsInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProfileMenuViewInterface::StaticClass()));
		ProfileMenuViewInterface_eventGetProfileMenuStatsInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UProfileMenuViewInterface_GetProfileMenuStatsInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IProfileMenuViewInterface*)(O->GetNativeInterfaceAddress(UProfileMenuViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetProfileMenuStatsInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UProfileMenuViewInterface_SetMenuState = FName(TEXT("SetMenuState"));
	void IProfileMenuViewInterface::Execute_SetMenuState(UObject* O, EProfileMenuState menuState)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProfileMenuViewInterface::StaticClass()));
		ProfileMenuViewInterface_eventSetMenuState_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UProfileMenuViewInterface_SetMenuState);
		if (Func)
		{
			Parms.menuState=menuState;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IProfileMenuViewInterface*)(O->GetNativeInterfaceAddress(UProfileMenuViewInterface::StaticClass())))
		{
			I->SetMenuState_Implementation(menuState);
		}
	}
	static FName NAME_UProfileMenuViewInterface_SetSubtitle = FName(TEXT("SetSubtitle"));
	void IProfileMenuViewInterface::Execute_SetSubtitle(UObject* O, FText const& subtitle)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProfileMenuViewInterface::StaticClass()));
		ProfileMenuViewInterface_eventSetSubtitle_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UProfileMenuViewInterface_SetSubtitle);
		if (Func)
		{
			Parms.subtitle=subtitle;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IProfileMenuViewInterface*)(O->GetNativeInterfaceAddress(UProfileMenuViewInterface::StaticClass())))
		{
			I->SetSubtitle_Implementation(subtitle);
		}
	}
	static FName NAME_UProfileMenuViewInterface_SetTabEnabled = FName(TEXT("SetTabEnabled"));
	void IProfileMenuViewInterface::Execute_SetTabEnabled(UObject* O, int32 key, bool enabled)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProfileMenuViewInterface::StaticClass()));
		ProfileMenuViewInterface_eventSetTabEnabled_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UProfileMenuViewInterface_SetTabEnabled);
		if (Func)
		{
			Parms.key=key;
			Parms.enabled=enabled;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IProfileMenuViewInterface*)(O->GetNativeInterfaceAddress(UProfileMenuViewInterface::StaticClass())))
		{
			I->SetTabEnabled_Implementation(key,enabled);
		}
	}
	static FName NAME_UProfileMenuViewInterface_SetTabsData = FName(TEXT("SetTabsData"));
	void IProfileMenuViewInterface::Execute_SetTabsData(UObject* O, TArray<FTabWidgetData> const& tabsData, int32 selectedKey)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProfileMenuViewInterface::StaticClass()));
		ProfileMenuViewInterface_eventSetTabsData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UProfileMenuViewInterface_SetTabsData);
		if (Func)
		{
			Parms.tabsData=tabsData;
			Parms.selectedKey=selectedKey;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IProfileMenuViewInterface*)(O->GetNativeInterfaceAddress(UProfileMenuViewInterface::StaticClass())))
		{
			I->SetTabsData_Implementation(tabsData,selectedKey);
		}
	}
	static FName NAME_UProfileMenuViewInterface_SetTabSelected = FName(TEXT("SetTabSelected"));
	void IProfileMenuViewInterface::Execute_SetTabSelected(UObject* O, int32 key)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProfileMenuViewInterface::StaticClass()));
		ProfileMenuViewInterface_eventSetTabSelected_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UProfileMenuViewInterface_SetTabSelected);
		if (Func)
		{
			Parms.key=key;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IProfileMenuViewInterface*)(O->GetNativeInterfaceAddress(UProfileMenuViewInterface::StaticClass())))
		{
			I->SetTabSelected_Implementation(key);
		}
	}
	static FName NAME_UProfileMenuViewInterface_SetTitle = FName(TEXT("SetTitle"));
	void IProfileMenuViewInterface::Execute_SetTitle(UObject* O, FText const& title)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProfileMenuViewInterface::StaticClass()));
		ProfileMenuViewInterface_eventSetTitle_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UProfileMenuViewInterface_SetTitle);
		if (Func)
		{
			Parms.title=title;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IProfileMenuViewInterface*)(O->GetNativeInterfaceAddress(UProfileMenuViewInterface::StaticClass())))
		{
			I->SetTitle_Implementation(title);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
