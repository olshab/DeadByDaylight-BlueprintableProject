// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/StoreBaseSubTabsViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreBaseSubTabsViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreBaseSubTabsViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreBaseSubTabsViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FTabWidgetData();
// End Cross Module References
	DEFINE_FUNCTION(IStoreBaseSubTabsViewInterface::execActivateSubTabContent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateSubTabContent_Implementation(Z_Param_state);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStoreBaseSubTabsViewInterface::execSelectSubTab)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectSubTab_Implementation(Z_Param_selectedKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStoreBaseSubTabsViewInterface::execSetSubTabsData)
	{
		P_GET_TARRAY_REF(FTabWidgetData,Z_Param_Out_tabsData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubTabsData_Implementation(Z_Param_Out_tabsData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStoreBaseSubTabsViewInterface::execUnselectCurrentTab)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnselectCurrentTab_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStoreBaseSubTabsViewInterface::execUpdateTabData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_subTabId);
		P_GET_STRUCT(FTabWidgetData,Z_Param_tabWidgetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTabData_Implementation(Z_Param_subTabId,Z_Param_tabWidgetData);
		P_NATIVE_END;
	}
	void IStoreBaseSubTabsViewInterface::ActivateSubTabContent(const int32 state)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ActivateSubTabContent instead.");
	}
	void IStoreBaseSubTabsViewInterface::SelectSubTab(const int32 selectedKey)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SelectSubTab instead.");
	}
	void IStoreBaseSubTabsViewInterface::SetSubTabsData(TArray<FTabWidgetData> const& tabsData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSubTabsData instead.");
	}
	void IStoreBaseSubTabsViewInterface::UnselectCurrentTab()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UnselectCurrentTab instead.");
	}
	void IStoreBaseSubTabsViewInterface::UpdateTabData(const int32 subTabId, const FTabWidgetData tabWidgetData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateTabData instead.");
	}
	void UStoreBaseSubTabsViewInterface::StaticRegisterNativesUStoreBaseSubTabsViewInterface()
	{
		UClass* Class = UStoreBaseSubTabsViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateSubTabContent", &IStoreBaseSubTabsViewInterface::execActivateSubTabContent },
			{ "SelectSubTab", &IStoreBaseSubTabsViewInterface::execSelectSubTab },
			{ "SetSubTabsData", &IStoreBaseSubTabsViewInterface::execSetSubTabsData },
			{ "UnselectCurrentTab", &IStoreBaseSubTabsViewInterface::execUnselectCurrentTab },
			{ "UpdateTabData", &IStoreBaseSubTabsViewInterface::execUpdateTabData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_ActivateSubTabContent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_state_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_ActivateSubTabContent_Statics::NewProp_state_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_ActivateSubTabContent_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreBaseSubTabsViewInterface_eventActivateSubTabContent_Parms, state), METADATA_PARAMS(Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_ActivateSubTabContent_Statics::NewProp_state_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_ActivateSubTabContent_Statics::NewProp_state_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_ActivateSubTabContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_ActivateSubTabContent_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_ActivateSubTabContent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreBaseSubTabsViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_ActivateSubTabContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreBaseSubTabsViewInterface, nullptr, "ActivateSubTabContent", nullptr, nullptr, sizeof(StoreBaseSubTabsViewInterface_eventActivateSubTabContent_Parms), Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_ActivateSubTabContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_ActivateSubTabContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_ActivateSubTabContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_ActivateSubTabContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_ActivateSubTabContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_ActivateSubTabContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SelectSubTab_Statics
	{
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SelectSubTab_Statics::NewProp_selectedKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SelectSubTab_Statics::NewProp_selectedKey = { "selectedKey", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreBaseSubTabsViewInterface_eventSelectSubTab_Parms, selectedKey), METADATA_PARAMS(Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SelectSubTab_Statics::NewProp_selectedKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SelectSubTab_Statics::NewProp_selectedKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SelectSubTab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SelectSubTab_Statics::NewProp_selectedKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SelectSubTab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreBaseSubTabsViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SelectSubTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreBaseSubTabsViewInterface, nullptr, "SelectSubTab", nullptr, nullptr, sizeof(StoreBaseSubTabsViewInterface_eventSelectSubTab_Parms), Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SelectSubTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SelectSubTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SelectSubTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SelectSubTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SelectSubTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SelectSubTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SetSubTabsData_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tabsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tabsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_tabsData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SetSubTabsData_Statics::NewProp_tabsData_Inner = { "tabsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTabWidgetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SetSubTabsData_Statics::NewProp_tabsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SetSubTabsData_Statics::NewProp_tabsData = { "tabsData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreBaseSubTabsViewInterface_eventSetSubTabsData_Parms, tabsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SetSubTabsData_Statics::NewProp_tabsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SetSubTabsData_Statics::NewProp_tabsData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SetSubTabsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SetSubTabsData_Statics::NewProp_tabsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SetSubTabsData_Statics::NewProp_tabsData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SetSubTabsData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreBaseSubTabsViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SetSubTabsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreBaseSubTabsViewInterface, nullptr, "SetSubTabsData", nullptr, nullptr, sizeof(StoreBaseSubTabsViewInterface_eventSetSubTabsData_Parms), Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SetSubTabsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SetSubTabsData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SetSubTabsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SetSubTabsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SetSubTabsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SetSubTabsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UnselectCurrentTab_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UnselectCurrentTab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreBaseSubTabsViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UnselectCurrentTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreBaseSubTabsViewInterface, nullptr, "UnselectCurrentTab", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UnselectCurrentTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UnselectCurrentTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UnselectCurrentTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UnselectCurrentTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UpdateTabData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_subTabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_subTabId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tabWidgetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tabWidgetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UpdateTabData_Statics::NewProp_subTabId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UpdateTabData_Statics::NewProp_subTabId = { "subTabId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreBaseSubTabsViewInterface_eventUpdateTabData_Parms, subTabId), METADATA_PARAMS(Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UpdateTabData_Statics::NewProp_subTabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UpdateTabData_Statics::NewProp_subTabId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UpdateTabData_Statics::NewProp_tabWidgetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UpdateTabData_Statics::NewProp_tabWidgetData = { "tabWidgetData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreBaseSubTabsViewInterface_eventUpdateTabData_Parms, tabWidgetData), Z_Construct_UScriptStruct_FTabWidgetData, METADATA_PARAMS(Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UpdateTabData_Statics::NewProp_tabWidgetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UpdateTabData_Statics::NewProp_tabWidgetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UpdateTabData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UpdateTabData_Statics::NewProp_subTabId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UpdateTabData_Statics::NewProp_tabWidgetData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UpdateTabData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreBaseSubTabsViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UpdateTabData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreBaseSubTabsViewInterface, nullptr, "UpdateTabData", nullptr, nullptr, sizeof(StoreBaseSubTabsViewInterface_eventUpdateTabData_Parms), Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UpdateTabData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UpdateTabData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UpdateTabData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UpdateTabData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UpdateTabData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UpdateTabData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStoreBaseSubTabsViewInterface_NoRegister()
	{
		return UStoreBaseSubTabsViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UStoreBaseSubTabsViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreBaseSubTabsViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStoreBaseSubTabsViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_ActivateSubTabContent, "ActivateSubTabContent" }, // 4078239846
		{ &Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SelectSubTab, "SelectSubTab" }, // 1596504046
		{ &Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_SetSubTabsData, "SetSubTabsData" }, // 2984682208
		{ &Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UnselectCurrentTab, "UnselectCurrentTab" }, // 197674859
		{ &Z_Construct_UFunction_UStoreBaseSubTabsViewInterface_UpdateTabData, "UpdateTabData" }, // 4096427231
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreBaseSubTabsViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StoreBaseSubTabsViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreBaseSubTabsViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStoreBaseSubTabsViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoreBaseSubTabsViewInterface_Statics::ClassParams = {
		&UStoreBaseSubTabsViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStoreBaseSubTabsViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreBaseSubTabsViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreBaseSubTabsViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoreBaseSubTabsViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoreBaseSubTabsViewInterface, 3641975711);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UStoreBaseSubTabsViewInterface>()
	{
		return UStoreBaseSubTabsViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoreBaseSubTabsViewInterface(Z_Construct_UClass_UStoreBaseSubTabsViewInterface, &UStoreBaseSubTabsViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UStoreBaseSubTabsViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreBaseSubTabsViewInterface);
	static FName NAME_UStoreBaseSubTabsViewInterface_ActivateSubTabContent = FName(TEXT("ActivateSubTabContent"));
	void IStoreBaseSubTabsViewInterface::Execute_ActivateSubTabContent(UObject* O, const int32 state)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreBaseSubTabsViewInterface::StaticClass()));
		StoreBaseSubTabsViewInterface_eventActivateSubTabContent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreBaseSubTabsViewInterface_ActivateSubTabContent);
		if (Func)
		{
			Parms.state=state;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IStoreBaseSubTabsViewInterface*)(O->GetNativeInterfaceAddress(UStoreBaseSubTabsViewInterface::StaticClass())))
		{
			I->ActivateSubTabContent_Implementation(state);
		}
	}
	static FName NAME_UStoreBaseSubTabsViewInterface_SelectSubTab = FName(TEXT("SelectSubTab"));
	void IStoreBaseSubTabsViewInterface::Execute_SelectSubTab(UObject* O, const int32 selectedKey)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreBaseSubTabsViewInterface::StaticClass()));
		StoreBaseSubTabsViewInterface_eventSelectSubTab_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreBaseSubTabsViewInterface_SelectSubTab);
		if (Func)
		{
			Parms.selectedKey=selectedKey;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IStoreBaseSubTabsViewInterface*)(O->GetNativeInterfaceAddress(UStoreBaseSubTabsViewInterface::StaticClass())))
		{
			I->SelectSubTab_Implementation(selectedKey);
		}
	}
	static FName NAME_UStoreBaseSubTabsViewInterface_SetSubTabsData = FName(TEXT("SetSubTabsData"));
	void IStoreBaseSubTabsViewInterface::Execute_SetSubTabsData(UObject* O, TArray<FTabWidgetData> const& tabsData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreBaseSubTabsViewInterface::StaticClass()));
		StoreBaseSubTabsViewInterface_eventSetSubTabsData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreBaseSubTabsViewInterface_SetSubTabsData);
		if (Func)
		{
			Parms.tabsData=tabsData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IStoreBaseSubTabsViewInterface*)(O->GetNativeInterfaceAddress(UStoreBaseSubTabsViewInterface::StaticClass())))
		{
			I->SetSubTabsData_Implementation(tabsData);
		}
	}
	static FName NAME_UStoreBaseSubTabsViewInterface_UnselectCurrentTab = FName(TEXT("UnselectCurrentTab"));
	void IStoreBaseSubTabsViewInterface::Execute_UnselectCurrentTab(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreBaseSubTabsViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UStoreBaseSubTabsViewInterface_UnselectCurrentTab);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IStoreBaseSubTabsViewInterface*)(O->GetNativeInterfaceAddress(UStoreBaseSubTabsViewInterface::StaticClass())))
		{
			I->UnselectCurrentTab_Implementation();
		}
	}
	static FName NAME_UStoreBaseSubTabsViewInterface_UpdateTabData = FName(TEXT("UpdateTabData"));
	void IStoreBaseSubTabsViewInterface::Execute_UpdateTabData(UObject* O, const int32 subTabId, const FTabWidgetData tabWidgetData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStoreBaseSubTabsViewInterface::StaticClass()));
		StoreBaseSubTabsViewInterface_eventUpdateTabData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStoreBaseSubTabsViewInterface_UpdateTabData);
		if (Func)
		{
			Parms.subTabId=subTabId;
			Parms.tabWidgetData=tabWidgetData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IStoreBaseSubTabsViewInterface*)(O->GetNativeInterfaceAddress(UStoreBaseSubTabsViewInterface::StaticClass())))
		{
			I->UpdateTabData_Implementation(subTabId,tabWidgetData);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
