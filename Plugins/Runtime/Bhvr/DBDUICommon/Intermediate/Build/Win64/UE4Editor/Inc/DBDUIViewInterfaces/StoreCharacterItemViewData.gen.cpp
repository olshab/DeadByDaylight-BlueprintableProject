// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/StoreCharacterItemViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreCharacterItemViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCharacterItemViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCharacterItemViewData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreItemViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterRewardViewData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECharacterDifficulty();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventInfoViewData();
// End Cross Module References
	void UStoreCharacterItemViewData::StaticRegisterNativesUStoreCharacterItemViewData()
	{
	}
	UClass* Z_Construct_UClass_UStoreCharacterItemViewData_NoRegister()
	{
		return UStoreCharacterItemViewData::StaticClass();
	}
	struct Z_Construct_UClass_UStoreCharacterItemViewData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterReward_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterReward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Biography_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Biography;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerRole_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Difficulty_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Difficulty_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Difficulty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerPowerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KillerPowerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsUnlocked_MetaData[];
#endif
		static void NewProp_IsUnlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUnlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemsOwned_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemsOwned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasNonSelectedPerks_MetaData[];
#endif
		static void NewProp_HasNonSelectedPerks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasNonSelectedPerks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DlcId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DlcId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DlcTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DlcTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PackId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PackTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDlcPurchasable_MetaData[];
#endif
		static void NewProp_IsDlcPurchasable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDlcPurchasable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDlcLockedKiller_MetaData[];
#endif
		static void NewProp_IsDlcLockedKiller_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDlcLockedKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLegacyRewardPrestigeEnabled_MetaData[];
#endif
		static void NewProp_IsLegacyRewardPrestigeEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLegacyRewardPrestigeEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreCharacterItemViewData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStoreItemViewData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharacterItemViewData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StoreCharacterItemViewData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StoreCharacterItemViewData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_CharacterReward_MetaData[] = {
		{ "Category", "StoreCharacterItemViewData" },
		{ "ModuleRelativePath", "Public/StoreCharacterItemViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_CharacterReward = { "CharacterReward", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCharacterItemViewData, CharacterReward), Z_Construct_UScriptStruct_FCharacterRewardViewData, METADATA_PARAMS(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_CharacterReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_CharacterReward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_CharacterIndex_MetaData[] = {
		{ "Category", "StoreCharacterItemViewData" },
		{ "ModuleRelativePath", "Public/StoreCharacterItemViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_CharacterIndex = { "CharacterIndex", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCharacterItemViewData, CharacterIndex), METADATA_PARAMS(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_CharacterIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_CharacterIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "StoreCharacterItemViewData" },
		{ "ModuleRelativePath", "Public/StoreCharacterItemViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCharacterItemViewData, DisplayName), METADATA_PARAMS(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_Biography_MetaData[] = {
		{ "Category", "StoreCharacterItemViewData" },
		{ "ModuleRelativePath", "Public/StoreCharacterItemViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_Biography = { "Biography", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCharacterItemViewData, Biography), METADATA_PARAMS(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_Biography_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_Biography_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_PlayerRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_PlayerRole_MetaData[] = {
		{ "Category", "StoreCharacterItemViewData" },
		{ "ModuleRelativePath", "Public/StoreCharacterItemViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_PlayerRole = { "PlayerRole", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCharacterItemViewData, PlayerRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_PlayerRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_PlayerRole_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_Difficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_Difficulty_MetaData[] = {
		{ "Category", "StoreCharacterItemViewData" },
		{ "ModuleRelativePath", "Public/StoreCharacterItemViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_Difficulty = { "Difficulty", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCharacterItemViewData, Difficulty), Z_Construct_UEnum_DBDSharedTypes_ECharacterDifficulty, METADATA_PARAMS(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_Difficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_Difficulty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_EventInfo_MetaData[] = {
		{ "Category", "StoreCharacterItemViewData" },
		{ "ModuleRelativePath", "Public/StoreCharacterItemViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCharacterItemViewData, EventInfo), Z_Construct_UScriptStruct_FSpecialEventInfoViewData, METADATA_PARAMS(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_EventInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_EventInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_KillerPowerId_MetaData[] = {
		{ "Category", "StoreCharacterItemViewData" },
		{ "ModuleRelativePath", "Public/StoreCharacterItemViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_KillerPowerId = { "KillerPowerId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCharacterItemViewData, KillerPowerId), METADATA_PARAMS(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_KillerPowerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_KillerPowerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsUnlocked_MetaData[] = {
		{ "Category", "StoreCharacterItemViewData" },
		{ "ModuleRelativePath", "Public/StoreCharacterItemViewData.h" },
	};
#endif
	void Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsUnlocked_SetBit(void* Obj)
	{
		((UStoreCharacterItemViewData*)Obj)->IsUnlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsUnlocked = { "IsUnlocked", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStoreCharacterItemViewData), &Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsUnlocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsUnlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsUnlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_UnlockInfo_MetaData[] = {
		{ "Category", "StoreCharacterItemViewData" },
		{ "ModuleRelativePath", "Public/StoreCharacterItemViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_UnlockInfo = { "UnlockInfo", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCharacterItemViewData, UnlockInfo), METADATA_PARAMS(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_UnlockInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_UnlockInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_ItemsOwned_MetaData[] = {
		{ "Category", "StoreCharacterItemViewData" },
		{ "ModuleRelativePath", "Public/StoreCharacterItemViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_ItemsOwned = { "ItemsOwned", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCharacterItemViewData, ItemsOwned), METADATA_PARAMS(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_ItemsOwned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_ItemsOwned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_TotalItems_MetaData[] = {
		{ "Category", "StoreCharacterItemViewData" },
		{ "ModuleRelativePath", "Public/StoreCharacterItemViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_TotalItems = { "TotalItems", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCharacterItemViewData, TotalItems), METADATA_PARAMS(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_TotalItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_TotalItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_HasNonSelectedPerks_MetaData[] = {
		{ "Category", "StoreCharacterItemViewData" },
		{ "ModuleRelativePath", "Public/StoreCharacterItemViewData.h" },
	};
#endif
	void Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_HasNonSelectedPerks_SetBit(void* Obj)
	{
		((UStoreCharacterItemViewData*)Obj)->HasNonSelectedPerks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_HasNonSelectedPerks = { "HasNonSelectedPerks", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStoreCharacterItemViewData), &Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_HasNonSelectedPerks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_HasNonSelectedPerks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_HasNonSelectedPerks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_DlcId_MetaData[] = {
		{ "Category", "StoreCharacterItemViewData" },
		{ "ModuleRelativePath", "Public/StoreCharacterItemViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_DlcId = { "DlcId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCharacterItemViewData, DlcId), METADATA_PARAMS(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_DlcId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_DlcId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_DlcTitle_MetaData[] = {
		{ "Category", "StoreCharacterItemViewData" },
		{ "ModuleRelativePath", "Public/StoreCharacterItemViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_DlcTitle = { "DlcTitle", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCharacterItemViewData, DlcTitle), METADATA_PARAMS(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_DlcTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_DlcTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_PackId_MetaData[] = {
		{ "Category", "StoreCharacterItemViewData" },
		{ "ModuleRelativePath", "Public/StoreCharacterItemViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_PackId = { "PackId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCharacterItemViewData, PackId), METADATA_PARAMS(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_PackId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_PackId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_PackTitle_MetaData[] = {
		{ "Category", "StoreCharacterItemViewData" },
		{ "ModuleRelativePath", "Public/StoreCharacterItemViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_PackTitle = { "PackTitle", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCharacterItemViewData, PackTitle), METADATA_PARAMS(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_PackTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_PackTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsDlcPurchasable_MetaData[] = {
		{ "Category", "StoreCharacterItemViewData" },
		{ "ModuleRelativePath", "Public/StoreCharacterItemViewData.h" },
	};
#endif
	void Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsDlcPurchasable_SetBit(void* Obj)
	{
		((UStoreCharacterItemViewData*)Obj)->IsDlcPurchasable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsDlcPurchasable = { "IsDlcPurchasable", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStoreCharacterItemViewData), &Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsDlcPurchasable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsDlcPurchasable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsDlcPurchasable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsDlcLockedKiller_MetaData[] = {
		{ "Category", "StoreCharacterItemViewData" },
		{ "ModuleRelativePath", "Public/StoreCharacterItemViewData.h" },
	};
#endif
	void Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsDlcLockedKiller_SetBit(void* Obj)
	{
		((UStoreCharacterItemViewData*)Obj)->IsDlcLockedKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsDlcLockedKiller = { "IsDlcLockedKiller", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStoreCharacterItemViewData), &Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsDlcLockedKiller_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsDlcLockedKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsDlcLockedKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsLegacyRewardPrestigeEnabled_MetaData[] = {
		{ "Category", "StoreCharacterItemViewData" },
		{ "ModuleRelativePath", "Public/StoreCharacterItemViewData.h" },
	};
#endif
	void Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsLegacyRewardPrestigeEnabled_SetBit(void* Obj)
	{
		((UStoreCharacterItemViewData*)Obj)->IsLegacyRewardPrestigeEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsLegacyRewardPrestigeEnabled = { "IsLegacyRewardPrestigeEnabled", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStoreCharacterItemViewData), &Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsLegacyRewardPrestigeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsLegacyRewardPrestigeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsLegacyRewardPrestigeEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStoreCharacterItemViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_CharacterReward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_CharacterIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_Biography,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_PlayerRole_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_PlayerRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_Difficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_Difficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_EventInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_KillerPowerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsUnlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_UnlockInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_ItemsOwned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_TotalItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_HasNonSelectedPerks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_DlcId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_DlcTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_PackId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_PackTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsDlcPurchasable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsDlcLockedKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharacterItemViewData_Statics::NewProp_IsLegacyRewardPrestigeEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreCharacterItemViewData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStoreCharacterItemViewData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoreCharacterItemViewData_Statics::ClassParams = {
		&UStoreCharacterItemViewData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStoreCharacterItemViewData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharacterItemViewData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreCharacterItemViewData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoreCharacterItemViewData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoreCharacterItemViewData, 3455015504);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UStoreCharacterItemViewData>()
	{
		return UStoreCharacterItemViewData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoreCharacterItemViewData(Z_Construct_UClass_UStoreCharacterItemViewData, &UStoreCharacterItemViewData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UStoreCharacterItemViewData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreCharacterItemViewData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
