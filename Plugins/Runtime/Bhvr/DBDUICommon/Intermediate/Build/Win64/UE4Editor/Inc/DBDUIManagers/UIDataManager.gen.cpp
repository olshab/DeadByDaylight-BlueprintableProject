// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIManagers/Public/UIDataManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIDataManager() {}
// Cross Module References
	DBDUIMANAGERS_API UClass* Z_Construct_UClass_UUIDataManager_NoRegister();
	DBDUIMANAGERS_API UClass* Z_Construct_UClass_UUIDataManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DBDUIManagers();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemRarity();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	DBDSHAREDTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FRarityMaterialData();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	DBDSHAREDTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyProgressionUIData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EProgressionType();
	DBDSHAREDTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveTomeSkinData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EArchiveMenuState();
// End Cross Module References
	DEFINE_FUNCTION(UUIDataManager::execGetCurrencyIcon)
	{
		P_GET_ENUM(ECurrencyType,Z_Param_currencyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<UTexture2D>*)Z_Param__Result=P_THIS->GetCurrencyIcon(ECurrencyType(Z_Param_currencyType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIDataManager::execGetCustomizationRarityMaterial)
	{
		P_GET_ENUM(EItemRarity,Z_Param_rarity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetCustomizationRarityMaterial(EItemRarity(Z_Param_rarity));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIDataManager::execGetLoadoutPartRarityMaterial)
	{
		P_GET_ENUM(EItemRarity,Z_Param_rarity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetLoadoutPartRarityMaterial(EItemRarity(Z_Param_rarity));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIDataManager::execGetTooltipEventHeader)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_eventBannerLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetTooltipEventHeader(Z_Param_eventBannerLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIDataManager::execGetTooltipRarityMaterial)
	{
		P_GET_ENUM(EItemRarity,Z_Param_rarity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetTooltipRarityMaterial(EItemRarity(Z_Param_rarity));
		P_NATIVE_END;
	}
	void UUIDataManager::StaticRegisterNativesUUIDataManager()
	{
		UClass* Class = UUIDataManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrencyIcon", &UUIDataManager::execGetCurrencyIcon },
			{ "GetCustomizationRarityMaterial", &UUIDataManager::execGetCustomizationRarityMaterial },
			{ "GetLoadoutPartRarityMaterial", &UUIDataManager::execGetLoadoutPartRarityMaterial },
			{ "GetTooltipEventHeader", &UUIDataManager::execGetTooltipEventHeader },
			{ "GetTooltipRarityMaterial", &UUIDataManager::execGetTooltipRarityMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIDataManager_GetCurrencyIcon_Statics
	{
		struct UIDataManager_eventGetCurrencyIcon_Parms
		{
			ECurrencyType currencyType;
			TSoftObjectPtr<UTexture2D> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currencyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_currencyType;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUIDataManager_GetCurrencyIcon_Statics::NewProp_currencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIDataManager_GetCurrencyIcon_Statics::NewProp_currencyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUIDataManager_GetCurrencyIcon_Statics::NewProp_currencyType = { "currencyType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIDataManager_eventGetCurrencyIcon_Parms, currencyType), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(Z_Construct_UFunction_UUIDataManager_GetCurrencyIcon_Statics::NewProp_currencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIDataManager_GetCurrencyIcon_Statics::NewProp_currencyType_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UUIDataManager_GetCurrencyIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIDataManager_eventGetCurrencyIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIDataManager_GetCurrencyIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIDataManager_GetCurrencyIcon_Statics::NewProp_currencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIDataManager_GetCurrencyIcon_Statics::NewProp_currencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIDataManager_GetCurrencyIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIDataManager_GetCurrencyIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIDataManager_GetCurrencyIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIDataManager, nullptr, "GetCurrencyIcon", nullptr, nullptr, sizeof(UIDataManager_eventGetCurrencyIcon_Parms), Z_Construct_UFunction_UUIDataManager_GetCurrencyIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIDataManager_GetCurrencyIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIDataManager_GetCurrencyIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIDataManager_GetCurrencyIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIDataManager_GetCurrencyIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIDataManager_GetCurrencyIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIDataManager_GetCustomizationRarityMaterial_Statics
	{
		struct UIDataManager_eventGetCustomizationRarityMaterial_Parms
		{
			EItemRarity rarity;
			UMaterialInterface* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rarity_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_rarity;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUIDataManager_GetCustomizationRarityMaterial_Statics::NewProp_rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUIDataManager_GetCustomizationRarityMaterial_Statics::NewProp_rarity = { "rarity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIDataManager_eventGetCustomizationRarityMaterial_Parms, rarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIDataManager_GetCustomizationRarityMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIDataManager_eventGetCustomizationRarityMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIDataManager_GetCustomizationRarityMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIDataManager_GetCustomizationRarityMaterial_Statics::NewProp_rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIDataManager_GetCustomizationRarityMaterial_Statics::NewProp_rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIDataManager_GetCustomizationRarityMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIDataManager_GetCustomizationRarityMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIDataManager_GetCustomizationRarityMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIDataManager, nullptr, "GetCustomizationRarityMaterial", nullptr, nullptr, sizeof(UIDataManager_eventGetCustomizationRarityMaterial_Parms), Z_Construct_UFunction_UUIDataManager_GetCustomizationRarityMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIDataManager_GetCustomizationRarityMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIDataManager_GetCustomizationRarityMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIDataManager_GetCustomizationRarityMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIDataManager_GetCustomizationRarityMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIDataManager_GetCustomizationRarityMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIDataManager_GetLoadoutPartRarityMaterial_Statics
	{
		struct UIDataManager_eventGetLoadoutPartRarityMaterial_Parms
		{
			EItemRarity rarity;
			UMaterialInterface* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rarity_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_rarity;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUIDataManager_GetLoadoutPartRarityMaterial_Statics::NewProp_rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUIDataManager_GetLoadoutPartRarityMaterial_Statics::NewProp_rarity = { "rarity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIDataManager_eventGetLoadoutPartRarityMaterial_Parms, rarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIDataManager_GetLoadoutPartRarityMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIDataManager_eventGetLoadoutPartRarityMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIDataManager_GetLoadoutPartRarityMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIDataManager_GetLoadoutPartRarityMaterial_Statics::NewProp_rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIDataManager_GetLoadoutPartRarityMaterial_Statics::NewProp_rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIDataManager_GetLoadoutPartRarityMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIDataManager_GetLoadoutPartRarityMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIDataManager_GetLoadoutPartRarityMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIDataManager, nullptr, "GetLoadoutPartRarityMaterial", nullptr, nullptr, sizeof(UIDataManager_eventGetLoadoutPartRarityMaterial_Parms), Z_Construct_UFunction_UUIDataManager_GetLoadoutPartRarityMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIDataManager_GetLoadoutPartRarityMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIDataManager_GetLoadoutPartRarityMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIDataManager_GetLoadoutPartRarityMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIDataManager_GetLoadoutPartRarityMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIDataManager_GetLoadoutPartRarityMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIDataManager_GetTooltipEventHeader_Statics
	{
		struct UIDataManager_eventGetTooltipEventHeader_Parms
		{
			FString eventBannerLabel;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eventBannerLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_eventBannerLabel;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIDataManager_GetTooltipEventHeader_Statics::NewProp_eventBannerLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUIDataManager_GetTooltipEventHeader_Statics::NewProp_eventBannerLabel = { "eventBannerLabel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIDataManager_eventGetTooltipEventHeader_Parms, eventBannerLabel), METADATA_PARAMS(Z_Construct_UFunction_UUIDataManager_GetTooltipEventHeader_Statics::NewProp_eventBannerLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIDataManager_GetTooltipEventHeader_Statics::NewProp_eventBannerLabel_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIDataManager_GetTooltipEventHeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIDataManager_eventGetTooltipEventHeader_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIDataManager_GetTooltipEventHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIDataManager_GetTooltipEventHeader_Statics::NewProp_eventBannerLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIDataManager_GetTooltipEventHeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIDataManager_GetTooltipEventHeader_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIDataManager_GetTooltipEventHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIDataManager, nullptr, "GetTooltipEventHeader", nullptr, nullptr, sizeof(UIDataManager_eventGetTooltipEventHeader_Parms), Z_Construct_UFunction_UUIDataManager_GetTooltipEventHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIDataManager_GetTooltipEventHeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIDataManager_GetTooltipEventHeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIDataManager_GetTooltipEventHeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIDataManager_GetTooltipEventHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIDataManager_GetTooltipEventHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIDataManager_GetTooltipRarityMaterial_Statics
	{
		struct UIDataManager_eventGetTooltipRarityMaterial_Parms
		{
			EItemRarity rarity;
			UMaterialInterface* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rarity_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_rarity;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUIDataManager_GetTooltipRarityMaterial_Statics::NewProp_rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUIDataManager_GetTooltipRarityMaterial_Statics::NewProp_rarity = { "rarity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIDataManager_eventGetTooltipRarityMaterial_Parms, rarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIDataManager_GetTooltipRarityMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIDataManager_eventGetTooltipRarityMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIDataManager_GetTooltipRarityMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIDataManager_GetTooltipRarityMaterial_Statics::NewProp_rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIDataManager_GetTooltipRarityMaterial_Statics::NewProp_rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIDataManager_GetTooltipRarityMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIDataManager_GetTooltipRarityMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIDataManager_GetTooltipRarityMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIDataManager, nullptr, "GetTooltipRarityMaterial", nullptr, nullptr, sizeof(UIDataManager_eventGetTooltipRarityMaterial_Parms), Z_Construct_UFunction_UUIDataManager_GetTooltipRarityMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIDataManager_GetTooltipRarityMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIDataManager_GetTooltipRarityMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIDataManager_GetTooltipRarityMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIDataManager_GetTooltipRarityMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIDataManager_GetTooltipRarityMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUIDataManager_NoRegister()
	{
		return UUIDataManager::StaticClass();
	}
	struct Z_Construct_UClass_UUIDataManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RarityMaterialMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RarityMaterialMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RarityMaterialMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RarityMaterialMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RarityMaterialMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RichTextStyleMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RichTextStyleMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RichTextStyleMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RichTextStyleMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrencyUIDataMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrencyUIDataMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrencyUIDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyUIDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CurrencyUIDataMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProgressionUIDataMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProgressionUIDataMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProgressionUIDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionUIDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ProgressionUIDataMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArchiveTomeSkinDataMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ArchiveTomeSkinDataMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ArchiveTomeSkinDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArchiveTomeSkinDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ArchiveTomeSkinDataMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TooltipEventSkinUIDataMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TooltipEventSkinUIDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TooltipEventSkinUIDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TooltipEventSkinUIDataMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIDataManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIManagers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIDataManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIDataManager_GetCurrencyIcon, "GetCurrencyIcon" }, // 871336154
		{ &Z_Construct_UFunction_UUIDataManager_GetCustomizationRarityMaterial, "GetCustomizationRarityMaterial" }, // 2506828941
		{ &Z_Construct_UFunction_UUIDataManager_GetLoadoutPartRarityMaterial, "GetLoadoutPartRarityMaterial" }, // 578720234
		{ &Z_Construct_UFunction_UUIDataManager_GetTooltipEventHeader, "GetTooltipEventHeader" }, // 1756894364
		{ &Z_Construct_UFunction_UUIDataManager_GetTooltipRarityMaterial, "GetTooltipRarityMaterial" }, // 4228349685
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIDataManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UIDataManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UIDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_RarityMaterialMap_ValueProp = { "RarityMaterialMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FRarityMaterialData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_RarityMaterialMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_RarityMaterialMap_Key_KeyProp = { "RarityMaterialMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIDataManager_Statics::NewProp_RarityMaterialMap_MetaData[] = {
		{ "Category", "UIDataManager" },
		{ "ModuleRelativePath", "Public/UIDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_RarityMaterialMap = { "RarityMaterialMap", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIDataManager, RarityMaterialMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUIDataManager_Statics::NewProp_RarityMaterialMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIDataManager_Statics::NewProp_RarityMaterialMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_RichTextStyleMap_ValueProp = { "RichTextStyleMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_RichTextStyleMap_Key_KeyProp = { "RichTextStyleMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIDataManager_Statics::NewProp_RichTextStyleMap_MetaData[] = {
		{ "Category", "UIDataManager" },
		{ "ModuleRelativePath", "Public/UIDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_RichTextStyleMap = { "RichTextStyleMap", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIDataManager, RichTextStyleMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUIDataManager_Statics::NewProp_RichTextStyleMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIDataManager_Statics::NewProp_RichTextStyleMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_CurrencyUIDataMap_ValueProp = { "CurrencyUIDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCurrencyProgressionUIData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_CurrencyUIDataMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_CurrencyUIDataMap_Key_KeyProp = { "CurrencyUIDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIDataManager_Statics::NewProp_CurrencyUIDataMap_MetaData[] = {
		{ "Category", "UIDataManager" },
		{ "ModuleRelativePath", "Public/UIDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_CurrencyUIDataMap = { "CurrencyUIDataMap", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIDataManager, CurrencyUIDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUIDataManager_Statics::NewProp_CurrencyUIDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIDataManager_Statics::NewProp_CurrencyUIDataMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_ProgressionUIDataMap_ValueProp = { "ProgressionUIDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCurrencyProgressionUIData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_ProgressionUIDataMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_ProgressionUIDataMap_Key_KeyProp = { "ProgressionUIDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EProgressionType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIDataManager_Statics::NewProp_ProgressionUIDataMap_MetaData[] = {
		{ "Category", "UIDataManager" },
		{ "ModuleRelativePath", "Public/UIDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_ProgressionUIDataMap = { "ProgressionUIDataMap", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIDataManager, ProgressionUIDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUIDataManager_Statics::NewProp_ProgressionUIDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIDataManager_Statics::NewProp_ProgressionUIDataMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_ArchiveTomeSkinDataMap_ValueProp = { "ArchiveTomeSkinDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FArchiveTomeSkinData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_ArchiveTomeSkinDataMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_ArchiveTomeSkinDataMap_Key_KeyProp = { "ArchiveTomeSkinDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EArchiveMenuState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIDataManager_Statics::NewProp_ArchiveTomeSkinDataMap_MetaData[] = {
		{ "Category", "UIDataManager" },
		{ "ModuleRelativePath", "Public/UIDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_ArchiveTomeSkinDataMap = { "ArchiveTomeSkinDataMap", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIDataManager, ArchiveTomeSkinDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUIDataManager_Statics::NewProp_ArchiveTomeSkinDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIDataManager_Statics::NewProp_ArchiveTomeSkinDataMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_TooltipEventSkinUIDataMap_ValueProp = { "TooltipEventSkinUIDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_TooltipEventSkinUIDataMap_Key_KeyProp = { "TooltipEventSkinUIDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIDataManager_Statics::NewProp_TooltipEventSkinUIDataMap_MetaData[] = {
		{ "Category", "UIDataManager" },
		{ "ModuleRelativePath", "Public/UIDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_TooltipEventSkinUIDataMap = { "TooltipEventSkinUIDataMap", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIDataManager, TooltipEventSkinUIDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUIDataManager_Statics::NewProp_TooltipEventSkinUIDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIDataManager_Statics::NewProp_TooltipEventSkinUIDataMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIDataManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_RarityMaterialMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_RarityMaterialMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_RarityMaterialMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_RarityMaterialMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_RichTextStyleMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_RichTextStyleMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_RichTextStyleMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_CurrencyUIDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_CurrencyUIDataMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_CurrencyUIDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_CurrencyUIDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_ProgressionUIDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_ProgressionUIDataMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_ProgressionUIDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_ProgressionUIDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_ArchiveTomeSkinDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_ArchiveTomeSkinDataMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_ArchiveTomeSkinDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_ArchiveTomeSkinDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_TooltipEventSkinUIDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_TooltipEventSkinUIDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_TooltipEventSkinUIDataMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIDataManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIDataManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUIDataManager_Statics::ClassParams = {
		&UUIDataManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUIDataManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUIDataManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUIDataManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIDataManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIDataManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUIDataManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUIDataManager, 2496052142);
	template<> DBDUIMANAGERS_API UClass* StaticClass<UUIDataManager>()
	{
		return UUIDataManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUIDataManager(Z_Construct_UClass_UUIDataManager, &UUIDataManager::StaticClass, TEXT("/Script/DBDUIManagers"), TEXT("UUIDataManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIDataManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
