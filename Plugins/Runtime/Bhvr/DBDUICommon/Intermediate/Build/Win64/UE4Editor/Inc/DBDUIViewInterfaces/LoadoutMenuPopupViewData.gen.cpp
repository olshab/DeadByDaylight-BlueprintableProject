// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/LoadoutMenuPopupViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadoutMenuPopupViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_ULoadoutMenuPopupViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_ULoadoutMenuPopupViewData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UGenericPopupViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EInventoryItemType();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemRarity();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EStatusEffectType();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemAvailability();
// End Cross Module References
	void ULoadoutMenuPopupViewData::StaticRegisterNativesULoadoutMenuPopupViewData()
	{
	}
	UClass* Z_Construct_UClass_ULoadoutMenuPopupViewData_NoRegister()
	{
		return ULoadoutMenuPopupViewData::StaticClass();
	}
	struct Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LoadoutIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ParentDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentTypeDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ParentTypeDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsParentAvailable_MetaData[];
#endif
		static void NewProp_IsParentAvailable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsParentAvailable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rarity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StatusEffectType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusEffectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StatusEffectType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Subtitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StackCount;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Availability_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Availability_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Availability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsTeachablePerk_MetaData[];
#endif
		static void NewProp_IsTeachablePerk_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTeachablePerk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSlasherPerk_MetaData[];
#endif
		static void NewProp_IsSlasherPerk_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSlasherPerk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSlasher_MetaData[];
#endif
		static void NewProp_IsSlasher_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSlasher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLocked_MetaData[];
#endif
		static void NewProp_IsLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsKillSwitch_MetaData[];
#endif
		static void NewProp_IsKillSwitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsKillSwitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPastEvent_MetaData[];
#endif
		static void NewProp_IsPastEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPastEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupViewData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LoadoutMenuPopupViewData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_LoadoutIcon_MetaData[] = {
		{ "Category", "LoadoutMenuPopupViewData" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_LoadoutIcon = { "LoadoutIcon", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupViewData, LoadoutIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_LoadoutIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_LoadoutIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_ItemId_MetaData[] = {
		{ "Category", "LoadoutMenuPopupViewData" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupViewData, ItemId), METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "LoadoutMenuPopupViewData" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupViewData, DisplayName), METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_ParentDisplayName_MetaData[] = {
		{ "Category", "LoadoutMenuPopupViewData" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_ParentDisplayName = { "ParentDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupViewData, ParentDisplayName), METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_ParentDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_ParentDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_ParentTypeDisplayName_MetaData[] = {
		{ "Category", "LoadoutMenuPopupViewData" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_ParentTypeDisplayName = { "ParentTypeDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupViewData, ParentTypeDisplayName), METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_ParentTypeDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_ParentTypeDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsParentAvailable_MetaData[] = {
		{ "Category", "LoadoutMenuPopupViewData" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewData.h" },
	};
#endif
	void Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsParentAvailable_SetBit(void* Obj)
	{
		((ULoadoutMenuPopupViewData*)Obj)->IsParentAvailable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsParentAvailable = { "IsParentAvailable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULoadoutMenuPopupViewData), &Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsParentAvailable_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsParentAvailable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsParentAvailable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "LoadoutMenuPopupViewData" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupViewData, Description), METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "LoadoutMenuPopupViewData" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupViewData, ItemType), Z_Construct_UEnum_DBDSharedTypes_EInventoryItemType, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_ItemType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Rarity_MetaData[] = {
		{ "Category", "LoadoutMenuPopupViewData" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupViewData, Rarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Rarity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_StatusEffectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_StatusEffectType_MetaData[] = {
		{ "Category", "LoadoutMenuPopupViewData" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_StatusEffectType = { "StatusEffectType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupViewData, StatusEffectType), Z_Construct_UEnum_DBDSharedTypes_EStatusEffectType, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_StatusEffectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_StatusEffectType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "LoadoutMenuPopupViewData" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupViewData, Level), METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Subtitle_MetaData[] = {
		{ "Category", "LoadoutMenuPopupViewData" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Subtitle = { "Subtitle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupViewData, Subtitle), METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Subtitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Subtitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_StackCount_MetaData[] = {
		{ "Category", "LoadoutMenuPopupViewData" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupViewData, StackCount), METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_StackCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_StackCount_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Availability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Availability_MetaData[] = {
		{ "Category", "LoadoutMenuPopupViewData" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Availability = { "Availability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupViewData, Availability), Z_Construct_UEnum_DBDSharedTypes_EItemAvailability, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Availability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Availability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsTeachablePerk_MetaData[] = {
		{ "Category", "LoadoutMenuPopupViewData" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewData.h" },
	};
#endif
	void Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsTeachablePerk_SetBit(void* Obj)
	{
		((ULoadoutMenuPopupViewData*)Obj)->IsTeachablePerk = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsTeachablePerk = { "IsTeachablePerk", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULoadoutMenuPopupViewData), &Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsTeachablePerk_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsTeachablePerk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsTeachablePerk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsSlasherPerk_MetaData[] = {
		{ "Category", "LoadoutMenuPopupViewData" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewData.h" },
	};
#endif
	void Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsSlasherPerk_SetBit(void* Obj)
	{
		((ULoadoutMenuPopupViewData*)Obj)->IsSlasherPerk = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsSlasherPerk = { "IsSlasherPerk", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULoadoutMenuPopupViewData), &Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsSlasherPerk_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsSlasherPerk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsSlasherPerk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsSlasher_MetaData[] = {
		{ "Category", "LoadoutMenuPopupViewData" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewData.h" },
	};
#endif
	void Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsSlasher_SetBit(void* Obj)
	{
		((ULoadoutMenuPopupViewData*)Obj)->IsSlasher = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsSlasher = { "IsSlasher", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULoadoutMenuPopupViewData), &Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsSlasher_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsSlasher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsSlasher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsLocked_MetaData[] = {
		{ "Category", "LoadoutMenuPopupViewData" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewData.h" },
	};
#endif
	void Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsLocked_SetBit(void* Obj)
	{
		((ULoadoutMenuPopupViewData*)Obj)->IsLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsLocked = { "IsLocked", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULoadoutMenuPopupViewData), &Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsKillSwitch_MetaData[] = {
		{ "Category", "LoadoutMenuPopupViewData" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewData.h" },
	};
#endif
	void Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsKillSwitch_SetBit(void* Obj)
	{
		((ULoadoutMenuPopupViewData*)Obj)->IsKillSwitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsKillSwitch = { "IsKillSwitch", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULoadoutMenuPopupViewData), &Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsKillSwitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsKillSwitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsKillSwitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "LoadoutMenuPopupViewData" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupViewData, EventName), METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_EventId_MetaData[] = {
		{ "Category", "LoadoutMenuPopupViewData" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_EventId = { "EventId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutMenuPopupViewData, EventId), METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_EventId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_EventId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsPastEvent_MetaData[] = {
		{ "Category", "LoadoutMenuPopupViewData" },
		{ "ModuleRelativePath", "Public/LoadoutMenuPopupViewData.h" },
	};
#endif
	void Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsPastEvent_SetBit(void* Obj)
	{
		((ULoadoutMenuPopupViewData*)Obj)->IsPastEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsPastEvent = { "IsPastEvent", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULoadoutMenuPopupViewData), &Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsPastEvent_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsPastEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsPastEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_LoadoutIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_ParentDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_ParentTypeDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsParentAvailable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_ItemType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_StatusEffectType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_StatusEffectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Subtitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_StackCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Availability_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_Availability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsTeachablePerk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsSlasherPerk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsSlasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsKillSwitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_EventId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::NewProp_IsPastEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadoutMenuPopupViewData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::ClassParams = {
		&ULoadoutMenuPopupViewData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadoutMenuPopupViewData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoadoutMenuPopupViewData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadoutMenuPopupViewData, 3776319578);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<ULoadoutMenuPopupViewData>()
	{
		return ULoadoutMenuPopupViewData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadoutMenuPopupViewData(Z_Construct_UClass_ULoadoutMenuPopupViewData, &ULoadoutMenuPopupViewData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("ULoadoutMenuPopupViewData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadoutMenuPopupViewData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
