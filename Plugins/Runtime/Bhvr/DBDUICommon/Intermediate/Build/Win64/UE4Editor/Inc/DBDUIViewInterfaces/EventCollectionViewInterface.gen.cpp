// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/EventCollectionViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventCollectionViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEventCollectionViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEventCollectionViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationItemOriginViewData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData();
// End Cross Module References
	DEFINE_FUNCTION(IEventCollectionViewInterface::execDeinit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Deinit_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEventCollectionViewInterface::execDeselectReward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeselectReward_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEventCollectionViewInterface::execDisableInstructionArchivesButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableInstructionArchivesButton_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEventCollectionViewInterface::execDisableInstructionCurrencyButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableInstructionCurrencyButton_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEventCollectionViewInterface::execDisableInstructionInputs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableInstructionInputs_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEventCollectionViewInterface::execDisableInstructionStoreButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableInstructionStoreButton_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEventCollectionViewInterface::execInit)
	{
		P_GET_STRUCT_REF(FEventEntryPopupSkinUIData,Z_Param_Out_skinData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init_Implementation(Z_Param_Out_skinData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEventCollectionViewInterface::execSetInstructionWidgetData)
	{
		P_GET_STRUCT_REF(FCustomizationItemOriginViewData,Z_Param_Out_viewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInstructionWidgetData_Implementation(Z_Param_Out_viewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEventCollectionViewInterface::execSetItemsData)
	{
		P_GET_TARRAY_REF(UStoreCustomizationItemViewData*,Z_Param_Out_customizationRewardsData);
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItemsData_Implementation(Z_Param_Out_customizationRewardsData,Z_Param_selectedIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEventCollectionViewInterface::execSetPreviewAreaData)
	{
		P_GET_STRUCT_REF(FCustomizationItemPreviewAreaViewData,Z_Param_Out_viewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreviewAreaData_Implementation(Z_Param_Out_viewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEventCollectionViewInterface::execSetSelectedReward)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectedReward_Implementation(Z_Param_selectedIndex);
		P_NATIVE_END;
	}
	void IEventCollectionViewInterface::Deinit()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Deinit instead.");
	}
	void IEventCollectionViewInterface::DeselectReward()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DeselectReward instead.");
	}
	void IEventCollectionViewInterface::DisableInstructionArchivesButton()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DisableInstructionArchivesButton instead.");
	}
	void IEventCollectionViewInterface::DisableInstructionCurrencyButton()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DisableInstructionCurrencyButton instead.");
	}
	void IEventCollectionViewInterface::DisableInstructionInputs()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DisableInstructionInputs instead.");
	}
	void IEventCollectionViewInterface::DisableInstructionStoreButton()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DisableInstructionStoreButton instead.");
	}
	void IEventCollectionViewInterface::Init(FEventEntryPopupSkinUIData const& skinData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Init instead.");
	}
	void IEventCollectionViewInterface::SetInstructionWidgetData(FCustomizationItemOriginViewData const& viewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetInstructionWidgetData instead.");
	}
	void IEventCollectionViewInterface::SetItemsData(TArray<UStoreCustomizationItemViewData*> const& customizationRewardsData, const int32 selectedIndex)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetItemsData instead.");
	}
	void IEventCollectionViewInterface::SetPreviewAreaData(FCustomizationItemPreviewAreaViewData const& viewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetPreviewAreaData instead.");
	}
	void IEventCollectionViewInterface::SetSelectedReward(const int32 selectedIndex)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSelectedReward instead.");
	}
	void UEventCollectionViewInterface::StaticRegisterNativesUEventCollectionViewInterface()
	{
		UClass* Class = UEventCollectionViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Deinit", &IEventCollectionViewInterface::execDeinit },
			{ "DeselectReward", &IEventCollectionViewInterface::execDeselectReward },
			{ "DisableInstructionArchivesButton", &IEventCollectionViewInterface::execDisableInstructionArchivesButton },
			{ "DisableInstructionCurrencyButton", &IEventCollectionViewInterface::execDisableInstructionCurrencyButton },
			{ "DisableInstructionInputs", &IEventCollectionViewInterface::execDisableInstructionInputs },
			{ "DisableInstructionStoreButton", &IEventCollectionViewInterface::execDisableInstructionStoreButton },
			{ "Init", &IEventCollectionViewInterface::execInit },
			{ "SetInstructionWidgetData", &IEventCollectionViewInterface::execSetInstructionWidgetData },
			{ "SetItemsData", &IEventCollectionViewInterface::execSetItemsData },
			{ "SetPreviewAreaData", &IEventCollectionViewInterface::execSetPreviewAreaData },
			{ "SetSelectedReward", &IEventCollectionViewInterface::execSetSelectedReward },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEventCollectionViewInterface_Deinit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventCollectionViewInterface_Deinit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventCollectionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventCollectionViewInterface_Deinit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventCollectionViewInterface, nullptr, "Deinit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventCollectionViewInterface_Deinit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventCollectionViewInterface_Deinit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventCollectionViewInterface_Deinit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventCollectionViewInterface_Deinit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventCollectionViewInterface_DeselectReward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventCollectionViewInterface_DeselectReward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventCollectionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventCollectionViewInterface_DeselectReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventCollectionViewInterface, nullptr, "DeselectReward", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventCollectionViewInterface_DeselectReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventCollectionViewInterface_DeselectReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventCollectionViewInterface_DeselectReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventCollectionViewInterface_DeselectReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionArchivesButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionArchivesButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventCollectionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionArchivesButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventCollectionViewInterface, nullptr, "DisableInstructionArchivesButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionArchivesButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionArchivesButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionArchivesButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionArchivesButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionCurrencyButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionCurrencyButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventCollectionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionCurrencyButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventCollectionViewInterface, nullptr, "DisableInstructionCurrencyButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionCurrencyButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionCurrencyButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionCurrencyButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionCurrencyButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionInputs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionInputs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventCollectionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventCollectionViewInterface, nullptr, "DisableInstructionInputs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionInputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionStoreButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionStoreButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventCollectionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionStoreButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventCollectionViewInterface, nullptr, "DisableInstructionStoreButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionStoreButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionStoreButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionStoreButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionStoreButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventCollectionViewInterface_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skinData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_skinData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventCollectionViewInterface_Init_Statics::NewProp_skinData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEventCollectionViewInterface_Init_Statics::NewProp_skinData = { "skinData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventCollectionViewInterface_eventInit_Parms, skinData), Z_Construct_UScriptStruct_FEventEntryPopupSkinUIData, METADATA_PARAMS(Z_Construct_UFunction_UEventCollectionViewInterface_Init_Statics::NewProp_skinData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventCollectionViewInterface_Init_Statics::NewProp_skinData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventCollectionViewInterface_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventCollectionViewInterface_Init_Statics::NewProp_skinData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventCollectionViewInterface_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventCollectionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventCollectionViewInterface_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventCollectionViewInterface, nullptr, "Init", nullptr, nullptr, sizeof(EventCollectionViewInterface_eventInit_Parms), Z_Construct_UFunction_UEventCollectionViewInterface_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventCollectionViewInterface_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventCollectionViewInterface_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventCollectionViewInterface_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventCollectionViewInterface_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventCollectionViewInterface_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventCollectionViewInterface_SetInstructionWidgetData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventCollectionViewInterface_SetInstructionWidgetData_Statics::NewProp_viewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEventCollectionViewInterface_SetInstructionWidgetData_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventCollectionViewInterface_eventSetInstructionWidgetData_Parms, viewData), Z_Construct_UScriptStruct_FCustomizationItemOriginViewData, METADATA_PARAMS(Z_Construct_UFunction_UEventCollectionViewInterface_SetInstructionWidgetData_Statics::NewProp_viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventCollectionViewInterface_SetInstructionWidgetData_Statics::NewProp_viewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventCollectionViewInterface_SetInstructionWidgetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventCollectionViewInterface_SetInstructionWidgetData_Statics::NewProp_viewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventCollectionViewInterface_SetInstructionWidgetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventCollectionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventCollectionViewInterface_SetInstructionWidgetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventCollectionViewInterface, nullptr, "SetInstructionWidgetData", nullptr, nullptr, sizeof(EventCollectionViewInterface_eventSetInstructionWidgetData_Parms), Z_Construct_UFunction_UEventCollectionViewInterface_SetInstructionWidgetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventCollectionViewInterface_SetInstructionWidgetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventCollectionViewInterface_SetInstructionWidgetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventCollectionViewInterface_SetInstructionWidgetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventCollectionViewInterface_SetInstructionWidgetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventCollectionViewInterface_SetInstructionWidgetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventCollectionViewInterface_SetItemsData_Statics
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEventCollectionViewInterface_SetItemsData_Statics::NewProp_customizationRewardsData_Inner = { "customizationRewardsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventCollectionViewInterface_SetItemsData_Statics::NewProp_customizationRewardsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEventCollectionViewInterface_SetItemsData_Statics::NewProp_customizationRewardsData = { "customizationRewardsData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventCollectionViewInterface_eventSetItemsData_Parms, customizationRewardsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEventCollectionViewInterface_SetItemsData_Statics::NewProp_customizationRewardsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventCollectionViewInterface_SetItemsData_Statics::NewProp_customizationRewardsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventCollectionViewInterface_SetItemsData_Statics::NewProp_selectedIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEventCollectionViewInterface_SetItemsData_Statics::NewProp_selectedIndex = { "selectedIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventCollectionViewInterface_eventSetItemsData_Parms, selectedIndex), METADATA_PARAMS(Z_Construct_UFunction_UEventCollectionViewInterface_SetItemsData_Statics::NewProp_selectedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventCollectionViewInterface_SetItemsData_Statics::NewProp_selectedIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventCollectionViewInterface_SetItemsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventCollectionViewInterface_SetItemsData_Statics::NewProp_customizationRewardsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventCollectionViewInterface_SetItemsData_Statics::NewProp_customizationRewardsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventCollectionViewInterface_SetItemsData_Statics::NewProp_selectedIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventCollectionViewInterface_SetItemsData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventCollectionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventCollectionViewInterface_SetItemsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventCollectionViewInterface, nullptr, "SetItemsData", nullptr, nullptr, sizeof(EventCollectionViewInterface_eventSetItemsData_Parms), Z_Construct_UFunction_UEventCollectionViewInterface_SetItemsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventCollectionViewInterface_SetItemsData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventCollectionViewInterface_SetItemsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventCollectionViewInterface_SetItemsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventCollectionViewInterface_SetItemsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventCollectionViewInterface_SetItemsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventCollectionViewInterface_SetPreviewAreaData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventCollectionViewInterface_SetPreviewAreaData_Statics::NewProp_viewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEventCollectionViewInterface_SetPreviewAreaData_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventCollectionViewInterface_eventSetPreviewAreaData_Parms, viewData), Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData, METADATA_PARAMS(Z_Construct_UFunction_UEventCollectionViewInterface_SetPreviewAreaData_Statics::NewProp_viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventCollectionViewInterface_SetPreviewAreaData_Statics::NewProp_viewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventCollectionViewInterface_SetPreviewAreaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventCollectionViewInterface_SetPreviewAreaData_Statics::NewProp_viewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventCollectionViewInterface_SetPreviewAreaData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventCollectionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventCollectionViewInterface_SetPreviewAreaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventCollectionViewInterface, nullptr, "SetPreviewAreaData", nullptr, nullptr, sizeof(EventCollectionViewInterface_eventSetPreviewAreaData_Parms), Z_Construct_UFunction_UEventCollectionViewInterface_SetPreviewAreaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventCollectionViewInterface_SetPreviewAreaData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventCollectionViewInterface_SetPreviewAreaData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventCollectionViewInterface_SetPreviewAreaData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventCollectionViewInterface_SetPreviewAreaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventCollectionViewInterface_SetPreviewAreaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventCollectionViewInterface_SetSelectedReward_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventCollectionViewInterface_SetSelectedReward_Statics::NewProp_selectedIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEventCollectionViewInterface_SetSelectedReward_Statics::NewProp_selectedIndex = { "selectedIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventCollectionViewInterface_eventSetSelectedReward_Parms, selectedIndex), METADATA_PARAMS(Z_Construct_UFunction_UEventCollectionViewInterface_SetSelectedReward_Statics::NewProp_selectedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventCollectionViewInterface_SetSelectedReward_Statics::NewProp_selectedIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventCollectionViewInterface_SetSelectedReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventCollectionViewInterface_SetSelectedReward_Statics::NewProp_selectedIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventCollectionViewInterface_SetSelectedReward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventCollectionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventCollectionViewInterface_SetSelectedReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventCollectionViewInterface, nullptr, "SetSelectedReward", nullptr, nullptr, sizeof(EventCollectionViewInterface_eventSetSelectedReward_Parms), Z_Construct_UFunction_UEventCollectionViewInterface_SetSelectedReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventCollectionViewInterface_SetSelectedReward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventCollectionViewInterface_SetSelectedReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventCollectionViewInterface_SetSelectedReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventCollectionViewInterface_SetSelectedReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventCollectionViewInterface_SetSelectedReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEventCollectionViewInterface_NoRegister()
	{
		return UEventCollectionViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEventCollectionViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventCollectionViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEventCollectionViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEventCollectionViewInterface_Deinit, "Deinit" }, // 111216997
		{ &Z_Construct_UFunction_UEventCollectionViewInterface_DeselectReward, "DeselectReward" }, // 3346635949
		{ &Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionArchivesButton, "DisableInstructionArchivesButton" }, // 1738811535
		{ &Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionCurrencyButton, "DisableInstructionCurrencyButton" }, // 1138550188
		{ &Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionInputs, "DisableInstructionInputs" }, // 628925345
		{ &Z_Construct_UFunction_UEventCollectionViewInterface_DisableInstructionStoreButton, "DisableInstructionStoreButton" }, // 3062939442
		{ &Z_Construct_UFunction_UEventCollectionViewInterface_Init, "Init" }, // 898723603
		{ &Z_Construct_UFunction_UEventCollectionViewInterface_SetInstructionWidgetData, "SetInstructionWidgetData" }, // 3317871862
		{ &Z_Construct_UFunction_UEventCollectionViewInterface_SetItemsData, "SetItemsData" }, // 3196181771
		{ &Z_Construct_UFunction_UEventCollectionViewInterface_SetPreviewAreaData, "SetPreviewAreaData" }, // 3991305387
		{ &Z_Construct_UFunction_UEventCollectionViewInterface_SetSelectedReward, "SetSelectedReward" }, // 3625743795
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventCollectionViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EventCollectionViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventCollectionViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEventCollectionViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventCollectionViewInterface_Statics::ClassParams = {
		&UEventCollectionViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEventCollectionViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventCollectionViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventCollectionViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventCollectionViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventCollectionViewInterface, 2960656418);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UEventCollectionViewInterface>()
	{
		return UEventCollectionViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventCollectionViewInterface(Z_Construct_UClass_UEventCollectionViewInterface, &UEventCollectionViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UEventCollectionViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventCollectionViewInterface);
	static FName NAME_UEventCollectionViewInterface_Deinit = FName(TEXT("Deinit"));
	void IEventCollectionViewInterface::Execute_Deinit(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventCollectionViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UEventCollectionViewInterface_Deinit);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IEventCollectionViewInterface*)(O->GetNativeInterfaceAddress(UEventCollectionViewInterface::StaticClass())))
		{
			I->Deinit_Implementation();
		}
	}
	static FName NAME_UEventCollectionViewInterface_DeselectReward = FName(TEXT("DeselectReward"));
	void IEventCollectionViewInterface::Execute_DeselectReward(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventCollectionViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UEventCollectionViewInterface_DeselectReward);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IEventCollectionViewInterface*)(O->GetNativeInterfaceAddress(UEventCollectionViewInterface::StaticClass())))
		{
			I->DeselectReward_Implementation();
		}
	}
	static FName NAME_UEventCollectionViewInterface_DisableInstructionArchivesButton = FName(TEXT("DisableInstructionArchivesButton"));
	void IEventCollectionViewInterface::Execute_DisableInstructionArchivesButton(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventCollectionViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UEventCollectionViewInterface_DisableInstructionArchivesButton);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IEventCollectionViewInterface*)(O->GetNativeInterfaceAddress(UEventCollectionViewInterface::StaticClass())))
		{
			I->DisableInstructionArchivesButton_Implementation();
		}
	}
	static FName NAME_UEventCollectionViewInterface_DisableInstructionCurrencyButton = FName(TEXT("DisableInstructionCurrencyButton"));
	void IEventCollectionViewInterface::Execute_DisableInstructionCurrencyButton(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventCollectionViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UEventCollectionViewInterface_DisableInstructionCurrencyButton);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IEventCollectionViewInterface*)(O->GetNativeInterfaceAddress(UEventCollectionViewInterface::StaticClass())))
		{
			I->DisableInstructionCurrencyButton_Implementation();
		}
	}
	static FName NAME_UEventCollectionViewInterface_DisableInstructionInputs = FName(TEXT("DisableInstructionInputs"));
	void IEventCollectionViewInterface::Execute_DisableInstructionInputs(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventCollectionViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UEventCollectionViewInterface_DisableInstructionInputs);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IEventCollectionViewInterface*)(O->GetNativeInterfaceAddress(UEventCollectionViewInterface::StaticClass())))
		{
			I->DisableInstructionInputs_Implementation();
		}
	}
	static FName NAME_UEventCollectionViewInterface_DisableInstructionStoreButton = FName(TEXT("DisableInstructionStoreButton"));
	void IEventCollectionViewInterface::Execute_DisableInstructionStoreButton(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventCollectionViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UEventCollectionViewInterface_DisableInstructionStoreButton);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IEventCollectionViewInterface*)(O->GetNativeInterfaceAddress(UEventCollectionViewInterface::StaticClass())))
		{
			I->DisableInstructionStoreButton_Implementation();
		}
	}
	static FName NAME_UEventCollectionViewInterface_Init = FName(TEXT("Init"));
	void IEventCollectionViewInterface::Execute_Init(UObject* O, FEventEntryPopupSkinUIData const& skinData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventCollectionViewInterface::StaticClass()));
		EventCollectionViewInterface_eventInit_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEventCollectionViewInterface_Init);
		if (Func)
		{
			Parms.skinData=skinData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEventCollectionViewInterface*)(O->GetNativeInterfaceAddress(UEventCollectionViewInterface::StaticClass())))
		{
			I->Init_Implementation(skinData);
		}
	}
	static FName NAME_UEventCollectionViewInterface_SetInstructionWidgetData = FName(TEXT("SetInstructionWidgetData"));
	void IEventCollectionViewInterface::Execute_SetInstructionWidgetData(UObject* O, FCustomizationItemOriginViewData const& viewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventCollectionViewInterface::StaticClass()));
		EventCollectionViewInterface_eventSetInstructionWidgetData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEventCollectionViewInterface_SetInstructionWidgetData);
		if (Func)
		{
			Parms.viewData=viewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEventCollectionViewInterface*)(O->GetNativeInterfaceAddress(UEventCollectionViewInterface::StaticClass())))
		{
			I->SetInstructionWidgetData_Implementation(viewData);
		}
	}
	static FName NAME_UEventCollectionViewInterface_SetItemsData = FName(TEXT("SetItemsData"));
	void IEventCollectionViewInterface::Execute_SetItemsData(UObject* O, TArray<UStoreCustomizationItemViewData*> const& customizationRewardsData, const int32 selectedIndex)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventCollectionViewInterface::StaticClass()));
		EventCollectionViewInterface_eventSetItemsData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEventCollectionViewInterface_SetItemsData);
		if (Func)
		{
			Parms.customizationRewardsData=customizationRewardsData;
			Parms.selectedIndex=selectedIndex;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEventCollectionViewInterface*)(O->GetNativeInterfaceAddress(UEventCollectionViewInterface::StaticClass())))
		{
			I->SetItemsData_Implementation(customizationRewardsData,selectedIndex);
		}
	}
	static FName NAME_UEventCollectionViewInterface_SetPreviewAreaData = FName(TEXT("SetPreviewAreaData"));
	void IEventCollectionViewInterface::Execute_SetPreviewAreaData(UObject* O, FCustomizationItemPreviewAreaViewData const& viewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventCollectionViewInterface::StaticClass()));
		EventCollectionViewInterface_eventSetPreviewAreaData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEventCollectionViewInterface_SetPreviewAreaData);
		if (Func)
		{
			Parms.viewData=viewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEventCollectionViewInterface*)(O->GetNativeInterfaceAddress(UEventCollectionViewInterface::StaticClass())))
		{
			I->SetPreviewAreaData_Implementation(viewData);
		}
	}
	static FName NAME_UEventCollectionViewInterface_SetSelectedReward = FName(TEXT("SetSelectedReward"));
	void IEventCollectionViewInterface::Execute_SetSelectedReward(UObject* O, const int32 selectedIndex)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEventCollectionViewInterface::StaticClass()));
		EventCollectionViewInterface_eventSetSelectedReward_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEventCollectionViewInterface_SetSelectedReward);
		if (Func)
		{
			Parms.selectedIndex=selectedIndex;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEventCollectionViewInterface*)(O->GetNativeInterfaceAddress(UEventCollectionViewInterface::StaticClass())))
		{
			I->SetSelectedReward_Implementation(selectedIndex);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
