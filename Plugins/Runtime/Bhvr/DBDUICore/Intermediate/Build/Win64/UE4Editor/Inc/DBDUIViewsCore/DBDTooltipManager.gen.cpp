// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/DBDTooltipManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDTooltipManager() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTooltipManager_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTooltipManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCompendiumButtonData();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_ETooltipHorizontalAlignment();
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveNodeViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveRewardNodeTooltipViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterTooltipViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationTooltipViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FLoadoutTooltipData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FRankTooltipViewData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UTooltipRoot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_ETooltipType();
// End Cross Module References
	DEFINE_FUNCTION(UDBDTooltipManager::execHideTooltip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideTooltip();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTooltipManager::execOnViewportCreated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnViewportCreated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTooltipManager::execShowArchiveCompendiumTooltip)
	{
		P_GET_STRUCT_REF(FCompendiumButtonData,Z_Param_Out_tooltipViewData);
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_triggerGeometry);
		P_GET_ENUM(ETooltipHorizontalAlignment,Z_Param_tooltipHorizontalAlignment);
		P_GET_ENUM(ETooltipVerticalAlignment,Z_Param_tooltipVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowArchiveCompendiumTooltip(Z_Param_Out_tooltipViewData,Z_Param_Out_triggerGeometry,ETooltipHorizontalAlignment(Z_Param_tooltipHorizontalAlignment),ETooltipVerticalAlignment(Z_Param_tooltipVerticalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTooltipManager::execShowArchiveNodeTooltip)
	{
		P_GET_STRUCT_REF(FArchiveNodeViewData,Z_Param_Out_tooltipViewData);
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_triggerGeometry);
		P_GET_ENUM(ETooltipHorizontalAlignment,Z_Param_tooltipHorizontalAlignment);
		P_GET_ENUM(ETooltipVerticalAlignment,Z_Param_tooltipVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowArchiveNodeTooltip(Z_Param_Out_tooltipViewData,Z_Param_Out_triggerGeometry,ETooltipHorizontalAlignment(Z_Param_tooltipHorizontalAlignment),ETooltipVerticalAlignment(Z_Param_tooltipVerticalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTooltipManager::execShowArchiveRewardNodeTooltip)
	{
		P_GET_STRUCT_REF(FArchiveRewardNodeTooltipViewData,Z_Param_Out_tooltipViewData);
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_triggerGeometry);
		P_GET_ENUM(ETooltipHorizontalAlignment,Z_Param_tooltipHorizontalAlignment);
		P_GET_ENUM(ETooltipVerticalAlignment,Z_Param_tooltipVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowArchiveRewardNodeTooltip(Z_Param_Out_tooltipViewData,Z_Param_Out_triggerGeometry,ETooltipHorizontalAlignment(Z_Param_tooltipHorizontalAlignment),ETooltipVerticalAlignment(Z_Param_tooltipVerticalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTooltipManager::execShowCharacterTooltip)
	{
		P_GET_STRUCT_REF(FCharacterTooltipViewData,Z_Param_Out_tooltipViewData);
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_triggerGeometry);
		P_GET_ENUM(ETooltipHorizontalAlignment,Z_Param_tooltipHorizontalAlignment);
		P_GET_ENUM(ETooltipVerticalAlignment,Z_Param_tooltipVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowCharacterTooltip(Z_Param_Out_tooltipViewData,Z_Param_Out_triggerGeometry,ETooltipHorizontalAlignment(Z_Param_tooltipHorizontalAlignment),ETooltipVerticalAlignment(Z_Param_tooltipVerticalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTooltipManager::execShowCurrencyTooltip)
	{
		P_GET_STRUCT_REF(FCurrencyProgressionTooltipViewData,Z_Param_Out_tooltipViewData);
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_triggerGeometry);
		P_GET_ENUM(ETooltipHorizontalAlignment,Z_Param_tooltipHorizontalAlignment);
		P_GET_ENUM(ETooltipVerticalAlignment,Z_Param_tooltipVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowCurrencyTooltip(Z_Param_Out_tooltipViewData,Z_Param_Out_triggerGeometry,ETooltipHorizontalAlignment(Z_Param_tooltipHorizontalAlignment),ETooltipVerticalAlignment(Z_Param_tooltipVerticalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTooltipManager::execShowCustomizationTooltip)
	{
		P_GET_STRUCT_REF(FCustomizationTooltipViewData,Z_Param_Out_tooltipViewData);
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_triggerGeometry);
		P_GET_ENUM(ETooltipHorizontalAlignment,Z_Param_tooltipHorizontalAlignment);
		P_GET_ENUM(ETooltipVerticalAlignment,Z_Param_tooltipVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowCustomizationTooltip(Z_Param_Out_tooltipViewData,Z_Param_Out_triggerGeometry,ETooltipHorizontalAlignment(Z_Param_tooltipHorizontalAlignment),ETooltipVerticalAlignment(Z_Param_tooltipVerticalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTooltipManager::execShowLabelTooltip)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_tooltipViewData);
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_triggerGeometry);
		P_GET_ENUM(ETooltipHorizontalAlignment,Z_Param_tooltipHorizontalAlignment);
		P_GET_ENUM(ETooltipVerticalAlignment,Z_Param_tooltipVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowLabelTooltip(Z_Param_Out_tooltipViewData,Z_Param_Out_triggerGeometry,ETooltipHorizontalAlignment(Z_Param_tooltipHorizontalAlignment),ETooltipVerticalAlignment(Z_Param_tooltipVerticalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTooltipManager::execShowLoadoutTooltip)
	{
		P_GET_STRUCT_REF(FLoadoutTooltipData,Z_Param_Out_tooltipViewData);
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_triggerGeometry);
		P_GET_ENUM(ETooltipHorizontalAlignment,Z_Param_tooltipHorizontalAlignment);
		P_GET_ENUM(ETooltipVerticalAlignment,Z_Param_tooltipVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowLoadoutTooltip(Z_Param_Out_tooltipViewData,Z_Param_Out_triggerGeometry,ETooltipHorizontalAlignment(Z_Param_tooltipHorizontalAlignment),ETooltipVerticalAlignment(Z_Param_tooltipVerticalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTooltipManager::execShowPlayerLevelTooltip)
	{
		P_GET_STRUCT_REF(FCorePlayerLevelTooltipViewData,Z_Param_Out_tooltipViewData);
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_triggerGeometry);
		P_GET_ENUM(ETooltipHorizontalAlignment,Z_Param_tooltipHorizontalAlignment);
		P_GET_ENUM(ETooltipVerticalAlignment,Z_Param_tooltipVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowPlayerLevelTooltip(Z_Param_Out_tooltipViewData,Z_Param_Out_triggerGeometry,ETooltipHorizontalAlignment(Z_Param_tooltipHorizontalAlignment),ETooltipVerticalAlignment(Z_Param_tooltipVerticalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTooltipManager::execShowRankTooltip)
	{
		P_GET_STRUCT_REF(FRankTooltipViewData,Z_Param_Out_tooltipViewData);
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_triggerGeometry);
		P_GET_ENUM(ETooltipHorizontalAlignment,Z_Param_tooltipHorizontalAlignment);
		P_GET_ENUM(ETooltipVerticalAlignment,Z_Param_tooltipVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowRankTooltip(Z_Param_Out_tooltipViewData,Z_Param_Out_triggerGeometry,ETooltipHorizontalAlignment(Z_Param_tooltipHorizontalAlignment),ETooltipVerticalAlignment(Z_Param_tooltipVerticalAlignment));
		P_NATIVE_END;
	}
	void UDBDTooltipManager::StaticRegisterNativesUDBDTooltipManager()
	{
		UClass* Class = UDBDTooltipManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideTooltip", &UDBDTooltipManager::execHideTooltip },
			{ "OnViewportCreated", &UDBDTooltipManager::execOnViewportCreated },
			{ "ShowArchiveCompendiumTooltip", &UDBDTooltipManager::execShowArchiveCompendiumTooltip },
			{ "ShowArchiveNodeTooltip", &UDBDTooltipManager::execShowArchiveNodeTooltip },
			{ "ShowArchiveRewardNodeTooltip", &UDBDTooltipManager::execShowArchiveRewardNodeTooltip },
			{ "ShowCharacterTooltip", &UDBDTooltipManager::execShowCharacterTooltip },
			{ "ShowCurrencyTooltip", &UDBDTooltipManager::execShowCurrencyTooltip },
			{ "ShowCustomizationTooltip", &UDBDTooltipManager::execShowCustomizationTooltip },
			{ "ShowLabelTooltip", &UDBDTooltipManager::execShowLabelTooltip },
			{ "ShowLoadoutTooltip", &UDBDTooltipManager::execShowLoadoutTooltip },
			{ "ShowPlayerLevelTooltip", &UDBDTooltipManager::execShowPlayerLevelTooltip },
			{ "ShowRankTooltip", &UDBDTooltipManager::execShowRankTooltip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDTooltipManager_HideTooltip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_HideTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTooltipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTooltipManager_HideTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTooltipManager, nullptr, "HideTooltip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_HideTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_HideTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTooltipManager_HideTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTooltipManager_HideTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTooltipManager_OnViewportCreated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_OnViewportCreated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTooltipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTooltipManager_OnViewportCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTooltipManager, nullptr, "OnViewportCreated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_OnViewportCreated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_OnViewportCreated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTooltipManager_OnViewportCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTooltipManager_OnViewportCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics
	{
		struct DBDTooltipManager_eventShowArchiveCompendiumTooltip_Parms
		{
			FCompendiumButtonData tooltipViewData;
			FGeometry triggerGeometry;
			ETooltipHorizontalAlignment tooltipHorizontalAlignment;
			ETooltipVerticalAlignment tooltipVerticalAlignment;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tooltipViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_triggerGeometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_triggerGeometry;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tooltipHorizontalAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipHorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tooltipHorizontalAlignment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tooltipVerticalAlignment_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tooltipVerticalAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::NewProp_tooltipViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::NewProp_tooltipViewData = { "tooltipViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowArchiveCompendiumTooltip_Parms, tooltipViewData), Z_Construct_UScriptStruct_FCompendiumButtonData, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::NewProp_tooltipViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::NewProp_tooltipViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::NewProp_triggerGeometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::NewProp_triggerGeometry = { "triggerGeometry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowArchiveCompendiumTooltip_Parms, triggerGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::NewProp_triggerGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::NewProp_triggerGeometry_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::NewProp_tooltipHorizontalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::NewProp_tooltipHorizontalAlignment = { "tooltipHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowArchiveCompendiumTooltip_Parms, tooltipHorizontalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipHorizontalAlignment, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::NewProp_tooltipVerticalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::NewProp_tooltipVerticalAlignment = { "tooltipVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowArchiveCompendiumTooltip_Parms, tooltipVerticalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::NewProp_tooltipViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::NewProp_triggerGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::NewProp_tooltipHorizontalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::NewProp_tooltipHorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::NewProp_tooltipVerticalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::NewProp_tooltipVerticalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTooltipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTooltipManager, nullptr, "ShowArchiveCompendiumTooltip", nullptr, nullptr, sizeof(DBDTooltipManager_eventShowArchiveCompendiumTooltip_Parms), Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics
	{
		struct DBDTooltipManager_eventShowArchiveNodeTooltip_Parms
		{
			FArchiveNodeViewData tooltipViewData;
			FGeometry triggerGeometry;
			ETooltipHorizontalAlignment tooltipHorizontalAlignment;
			ETooltipVerticalAlignment tooltipVerticalAlignment;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tooltipViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_triggerGeometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_triggerGeometry;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tooltipHorizontalAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipHorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tooltipHorizontalAlignment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tooltipVerticalAlignment_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tooltipVerticalAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::NewProp_tooltipViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::NewProp_tooltipViewData = { "tooltipViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowArchiveNodeTooltip_Parms, tooltipViewData), Z_Construct_UScriptStruct_FArchiveNodeViewData, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::NewProp_tooltipViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::NewProp_tooltipViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::NewProp_triggerGeometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::NewProp_triggerGeometry = { "triggerGeometry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowArchiveNodeTooltip_Parms, triggerGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::NewProp_triggerGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::NewProp_triggerGeometry_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::NewProp_tooltipHorizontalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::NewProp_tooltipHorizontalAlignment = { "tooltipHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowArchiveNodeTooltip_Parms, tooltipHorizontalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipHorizontalAlignment, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::NewProp_tooltipVerticalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::NewProp_tooltipVerticalAlignment = { "tooltipVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowArchiveNodeTooltip_Parms, tooltipVerticalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::NewProp_tooltipViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::NewProp_triggerGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::NewProp_tooltipHorizontalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::NewProp_tooltipHorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::NewProp_tooltipVerticalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::NewProp_tooltipVerticalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTooltipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTooltipManager, nullptr, "ShowArchiveNodeTooltip", nullptr, nullptr, sizeof(DBDTooltipManager_eventShowArchiveNodeTooltip_Parms), Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics
	{
		struct DBDTooltipManager_eventShowArchiveRewardNodeTooltip_Parms
		{
			FArchiveRewardNodeTooltipViewData tooltipViewData;
			FGeometry triggerGeometry;
			ETooltipHorizontalAlignment tooltipHorizontalAlignment;
			ETooltipVerticalAlignment tooltipVerticalAlignment;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tooltipViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_triggerGeometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_triggerGeometry;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tooltipHorizontalAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipHorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tooltipHorizontalAlignment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tooltipVerticalAlignment_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tooltipVerticalAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::NewProp_tooltipViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::NewProp_tooltipViewData = { "tooltipViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowArchiveRewardNodeTooltip_Parms, tooltipViewData), Z_Construct_UScriptStruct_FArchiveRewardNodeTooltipViewData, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::NewProp_tooltipViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::NewProp_tooltipViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::NewProp_triggerGeometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::NewProp_triggerGeometry = { "triggerGeometry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowArchiveRewardNodeTooltip_Parms, triggerGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::NewProp_triggerGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::NewProp_triggerGeometry_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::NewProp_tooltipHorizontalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::NewProp_tooltipHorizontalAlignment = { "tooltipHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowArchiveRewardNodeTooltip_Parms, tooltipHorizontalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipHorizontalAlignment, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::NewProp_tooltipVerticalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::NewProp_tooltipVerticalAlignment = { "tooltipVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowArchiveRewardNodeTooltip_Parms, tooltipVerticalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::NewProp_tooltipViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::NewProp_triggerGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::NewProp_tooltipHorizontalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::NewProp_tooltipHorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::NewProp_tooltipVerticalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::NewProp_tooltipVerticalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTooltipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTooltipManager, nullptr, "ShowArchiveRewardNodeTooltip", nullptr, nullptr, sizeof(DBDTooltipManager_eventShowArchiveRewardNodeTooltip_Parms), Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics
	{
		struct DBDTooltipManager_eventShowCharacterTooltip_Parms
		{
			FCharacterTooltipViewData tooltipViewData;
			FGeometry triggerGeometry;
			ETooltipHorizontalAlignment tooltipHorizontalAlignment;
			ETooltipVerticalAlignment tooltipVerticalAlignment;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tooltipViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_triggerGeometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_triggerGeometry;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tooltipHorizontalAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipHorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tooltipHorizontalAlignment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tooltipVerticalAlignment_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tooltipVerticalAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_tooltipViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_tooltipViewData = { "tooltipViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowCharacterTooltip_Parms, tooltipViewData), Z_Construct_UScriptStruct_FCharacterTooltipViewData, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_tooltipViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_tooltipViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_triggerGeometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_triggerGeometry = { "triggerGeometry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowCharacterTooltip_Parms, triggerGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_triggerGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_triggerGeometry_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_tooltipHorizontalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_tooltipHorizontalAlignment = { "tooltipHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowCharacterTooltip_Parms, tooltipHorizontalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipHorizontalAlignment, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_tooltipVerticalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_tooltipVerticalAlignment = { "tooltipVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowCharacterTooltip_Parms, tooltipVerticalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_tooltipViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_triggerGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_tooltipHorizontalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_tooltipHorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_tooltipVerticalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_tooltipVerticalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTooltipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTooltipManager, nullptr, "ShowCharacterTooltip", nullptr, nullptr, sizeof(DBDTooltipManager_eventShowCharacterTooltip_Parms), Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics
	{
		struct DBDTooltipManager_eventShowCurrencyTooltip_Parms
		{
			FCurrencyProgressionTooltipViewData tooltipViewData;
			FGeometry triggerGeometry;
			ETooltipHorizontalAlignment tooltipHorizontalAlignment;
			ETooltipVerticalAlignment tooltipVerticalAlignment;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tooltipViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_triggerGeometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_triggerGeometry;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tooltipHorizontalAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipHorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tooltipHorizontalAlignment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tooltipVerticalAlignment_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tooltipVerticalAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_tooltipViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_tooltipViewData = { "tooltipViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowCurrencyTooltip_Parms, tooltipViewData), Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_tooltipViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_tooltipViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_triggerGeometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_triggerGeometry = { "triggerGeometry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowCurrencyTooltip_Parms, triggerGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_triggerGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_triggerGeometry_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_tooltipHorizontalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_tooltipHorizontalAlignment = { "tooltipHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowCurrencyTooltip_Parms, tooltipHorizontalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipHorizontalAlignment, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_tooltipVerticalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_tooltipVerticalAlignment = { "tooltipVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowCurrencyTooltip_Parms, tooltipVerticalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_tooltipViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_triggerGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_tooltipHorizontalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_tooltipHorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_tooltipVerticalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_tooltipVerticalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTooltipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTooltipManager, nullptr, "ShowCurrencyTooltip", nullptr, nullptr, sizeof(DBDTooltipManager_eventShowCurrencyTooltip_Parms), Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics
	{
		struct DBDTooltipManager_eventShowCustomizationTooltip_Parms
		{
			FCustomizationTooltipViewData tooltipViewData;
			FGeometry triggerGeometry;
			ETooltipHorizontalAlignment tooltipHorizontalAlignment;
			ETooltipVerticalAlignment tooltipVerticalAlignment;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tooltipViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_triggerGeometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_triggerGeometry;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tooltipHorizontalAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipHorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tooltipHorizontalAlignment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tooltipVerticalAlignment_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tooltipVerticalAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_tooltipViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_tooltipViewData = { "tooltipViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowCustomizationTooltip_Parms, tooltipViewData), Z_Construct_UScriptStruct_FCustomizationTooltipViewData, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_tooltipViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_tooltipViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_triggerGeometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_triggerGeometry = { "triggerGeometry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowCustomizationTooltip_Parms, triggerGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_triggerGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_triggerGeometry_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_tooltipHorizontalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_tooltipHorizontalAlignment = { "tooltipHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowCustomizationTooltip_Parms, tooltipHorizontalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipHorizontalAlignment, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_tooltipVerticalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_tooltipVerticalAlignment = { "tooltipVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowCustomizationTooltip_Parms, tooltipVerticalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_tooltipViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_triggerGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_tooltipHorizontalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_tooltipHorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_tooltipVerticalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_tooltipVerticalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTooltipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTooltipManager, nullptr, "ShowCustomizationTooltip", nullptr, nullptr, sizeof(DBDTooltipManager_eventShowCustomizationTooltip_Parms), Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics
	{
		struct DBDTooltipManager_eventShowLabelTooltip_Parms
		{
			FText tooltipViewData;
			FGeometry triggerGeometry;
			ETooltipHorizontalAlignment tooltipHorizontalAlignment;
			ETooltipVerticalAlignment tooltipVerticalAlignment;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_tooltipViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_triggerGeometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_triggerGeometry;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tooltipHorizontalAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipHorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tooltipHorizontalAlignment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tooltipVerticalAlignment_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tooltipVerticalAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::NewProp_tooltipViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::NewProp_tooltipViewData = { "tooltipViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowLabelTooltip_Parms, tooltipViewData), METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::NewProp_tooltipViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::NewProp_tooltipViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::NewProp_triggerGeometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::NewProp_triggerGeometry = { "triggerGeometry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowLabelTooltip_Parms, triggerGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::NewProp_triggerGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::NewProp_triggerGeometry_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::NewProp_tooltipHorizontalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::NewProp_tooltipHorizontalAlignment = { "tooltipHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowLabelTooltip_Parms, tooltipHorizontalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipHorizontalAlignment, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::NewProp_tooltipVerticalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::NewProp_tooltipVerticalAlignment = { "tooltipVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowLabelTooltip_Parms, tooltipVerticalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::NewProp_tooltipViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::NewProp_triggerGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::NewProp_tooltipHorizontalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::NewProp_tooltipHorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::NewProp_tooltipVerticalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::NewProp_tooltipVerticalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTooltipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTooltipManager, nullptr, "ShowLabelTooltip", nullptr, nullptr, sizeof(DBDTooltipManager_eventShowLabelTooltip_Parms), Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics
	{
		struct DBDTooltipManager_eventShowLoadoutTooltip_Parms
		{
			FLoadoutTooltipData tooltipViewData;
			FGeometry triggerGeometry;
			ETooltipHorizontalAlignment tooltipHorizontalAlignment;
			ETooltipVerticalAlignment tooltipVerticalAlignment;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tooltipViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_triggerGeometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_triggerGeometry;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tooltipHorizontalAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipHorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tooltipHorizontalAlignment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tooltipVerticalAlignment_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tooltipVerticalAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::NewProp_tooltipViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::NewProp_tooltipViewData = { "tooltipViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowLoadoutTooltip_Parms, tooltipViewData), Z_Construct_UScriptStruct_FLoadoutTooltipData, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::NewProp_tooltipViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::NewProp_tooltipViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::NewProp_triggerGeometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::NewProp_triggerGeometry = { "triggerGeometry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowLoadoutTooltip_Parms, triggerGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::NewProp_triggerGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::NewProp_triggerGeometry_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::NewProp_tooltipHorizontalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::NewProp_tooltipHorizontalAlignment = { "tooltipHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowLoadoutTooltip_Parms, tooltipHorizontalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipHorizontalAlignment, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::NewProp_tooltipVerticalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::NewProp_tooltipVerticalAlignment = { "tooltipVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowLoadoutTooltip_Parms, tooltipVerticalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::NewProp_tooltipViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::NewProp_triggerGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::NewProp_tooltipHorizontalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::NewProp_tooltipHorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::NewProp_tooltipVerticalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::NewProp_tooltipVerticalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTooltipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTooltipManager, nullptr, "ShowLoadoutTooltip", nullptr, nullptr, sizeof(DBDTooltipManager_eventShowLoadoutTooltip_Parms), Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics
	{
		struct DBDTooltipManager_eventShowPlayerLevelTooltip_Parms
		{
			FCorePlayerLevelTooltipViewData tooltipViewData;
			FGeometry triggerGeometry;
			ETooltipHorizontalAlignment tooltipHorizontalAlignment;
			ETooltipVerticalAlignment tooltipVerticalAlignment;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tooltipViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_triggerGeometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_triggerGeometry;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tooltipHorizontalAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipHorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tooltipHorizontalAlignment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tooltipVerticalAlignment_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tooltipVerticalAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::NewProp_tooltipViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::NewProp_tooltipViewData = { "tooltipViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowPlayerLevelTooltip_Parms, tooltipViewData), Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::NewProp_tooltipViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::NewProp_tooltipViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::NewProp_triggerGeometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::NewProp_triggerGeometry = { "triggerGeometry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowPlayerLevelTooltip_Parms, triggerGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::NewProp_triggerGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::NewProp_triggerGeometry_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::NewProp_tooltipHorizontalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::NewProp_tooltipHorizontalAlignment = { "tooltipHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowPlayerLevelTooltip_Parms, tooltipHorizontalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipHorizontalAlignment, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::NewProp_tooltipVerticalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::NewProp_tooltipVerticalAlignment = { "tooltipVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowPlayerLevelTooltip_Parms, tooltipVerticalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::NewProp_tooltipViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::NewProp_triggerGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::NewProp_tooltipHorizontalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::NewProp_tooltipHorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::NewProp_tooltipVerticalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::NewProp_tooltipVerticalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTooltipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTooltipManager, nullptr, "ShowPlayerLevelTooltip", nullptr, nullptr, sizeof(DBDTooltipManager_eventShowPlayerLevelTooltip_Parms), Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics
	{
		struct DBDTooltipManager_eventShowRankTooltip_Parms
		{
			FRankTooltipViewData tooltipViewData;
			FGeometry triggerGeometry;
			ETooltipHorizontalAlignment tooltipHorizontalAlignment;
			ETooltipVerticalAlignment tooltipVerticalAlignment;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tooltipViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_triggerGeometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_triggerGeometry;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tooltipHorizontalAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipHorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tooltipHorizontalAlignment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tooltipVerticalAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipVerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tooltipVerticalAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::NewProp_tooltipViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::NewProp_tooltipViewData = { "tooltipViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowRankTooltip_Parms, tooltipViewData), Z_Construct_UScriptStruct_FRankTooltipViewData, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::NewProp_tooltipViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::NewProp_tooltipViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::NewProp_triggerGeometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::NewProp_triggerGeometry = { "triggerGeometry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowRankTooltip_Parms, triggerGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::NewProp_triggerGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::NewProp_triggerGeometry_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::NewProp_tooltipHorizontalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::NewProp_tooltipHorizontalAlignment = { "tooltipHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowRankTooltip_Parms, tooltipHorizontalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipHorizontalAlignment, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::NewProp_tooltipHorizontalAlignment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::NewProp_tooltipVerticalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::NewProp_tooltipVerticalAlignment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::NewProp_tooltipVerticalAlignment = { "tooltipVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowRankTooltip_Parms, tooltipVerticalAlignment), Z_Construct_UEnum_DBDUIViewsCore_ETooltipVerticalAlignment, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::NewProp_tooltipVerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::NewProp_tooltipVerticalAlignment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::NewProp_tooltipViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::NewProp_triggerGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::NewProp_tooltipHorizontalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::NewProp_tooltipHorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::NewProp_tooltipVerticalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::NewProp_tooltipVerticalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTooltipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTooltipManager, nullptr, "ShowRankTooltip", nullptr, nullptr, sizeof(DBDTooltipManager_eventShowRankTooltip_Parms), Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDTooltipManager_NoRegister()
	{
		return UDBDTooltipManager::StaticClass();
	}
	struct Z_Construct_UClass_UDBDTooltipManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rootWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__rootWidget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tooltipPool_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__tooltipPool_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__tooltipPool_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tooltipPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__tooltipPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentTooltip_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currentTooltip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDTooltipManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDTooltipManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDTooltipManager_HideTooltip, "HideTooltip" }, // 2280324036
		{ &Z_Construct_UFunction_UDBDTooltipManager_OnViewportCreated, "OnViewportCreated" }, // 1862231583
		{ &Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveCompendiumTooltip, "ShowArchiveCompendiumTooltip" }, // 3352587261
		{ &Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveNodeTooltip, "ShowArchiveNodeTooltip" }, // 309409539
		{ &Z_Construct_UFunction_UDBDTooltipManager_ShowArchiveRewardNodeTooltip, "ShowArchiveRewardNodeTooltip" }, // 3478843421
		{ &Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip, "ShowCharacterTooltip" }, // 1783373611
		{ &Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip, "ShowCurrencyTooltip" }, // 3250033761
		{ &Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip, "ShowCustomizationTooltip" }, // 439054137
		{ &Z_Construct_UFunction_UDBDTooltipManager_ShowLabelTooltip, "ShowLabelTooltip" }, // 3080930395
		{ &Z_Construct_UFunction_UDBDTooltipManager_ShowLoadoutTooltip, "ShowLoadoutTooltip" }, // 1301007600
		{ &Z_Construct_UFunction_UDBDTooltipManager_ShowPlayerLevelTooltip, "ShowPlayerLevelTooltip" }, // 1286436456
		{ &Z_Construct_UFunction_UDBDTooltipManager_ShowRankTooltip, "ShowRankTooltip" }, // 802376397
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTooltipManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDTooltipManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DBDTooltipManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTooltipManager_Statics::NewProp__rootWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DBDTooltipManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDTooltipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDTooltipManager_Statics::NewProp__rootWidget = { "_rootWidget", nullptr, (EPropertyFlags)0x004000000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDTooltipManager, _rootWidget), Z_Construct_UClass_UTooltipRoot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDTooltipManager_Statics::NewProp__rootWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTooltipManager_Statics::NewProp__rootWidget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDTooltipManager_Statics::NewProp__tooltipPool_ValueProp = { "_tooltipPool", nullptr, (EPropertyFlags)0x0000000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDBDTooltipManager_Statics::NewProp__tooltipPool_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDBDTooltipManager_Statics::NewProp__tooltipPool_Key_KeyProp = { "_tooltipPool_Key", nullptr, (EPropertyFlags)0x0000000000080009, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDUIViewsCore_ETooltipType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTooltipManager_Statics::NewProp__tooltipPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DBDTooltipManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDTooltipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBDTooltipManager_Statics::NewProp__tooltipPool = { "_tooltipPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDTooltipManager, _tooltipPool), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDTooltipManager_Statics::NewProp__tooltipPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTooltipManager_Statics::NewProp__tooltipPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTooltipManager_Statics::NewProp__currentTooltip_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DBDTooltipManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDTooltipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDTooltipManager_Statics::NewProp__currentTooltip = { "_currentTooltip", nullptr, (EPropertyFlags)0x004000000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDTooltipManager, _currentTooltip), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDTooltipManager_Statics::NewProp__currentTooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTooltipManager_Statics::NewProp__currentTooltip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDTooltipManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTooltipManager_Statics::NewProp__rootWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTooltipManager_Statics::NewProp__tooltipPool_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTooltipManager_Statics::NewProp__tooltipPool_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTooltipManager_Statics::NewProp__tooltipPool_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTooltipManager_Statics::NewProp__tooltipPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTooltipManager_Statics::NewProp__currentTooltip,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDTooltipManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDTooltipManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDTooltipManager_Statics::ClassParams = {
		&UDBDTooltipManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDTooltipManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTooltipManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDTooltipManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTooltipManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDTooltipManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDTooltipManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDTooltipManager, 2373940768);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UDBDTooltipManager>()
	{
		return UDBDTooltipManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDTooltipManager(Z_Construct_UClass_UDBDTooltipManager, &UDBDTooltipManager::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UDBDTooltipManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDTooltipManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
