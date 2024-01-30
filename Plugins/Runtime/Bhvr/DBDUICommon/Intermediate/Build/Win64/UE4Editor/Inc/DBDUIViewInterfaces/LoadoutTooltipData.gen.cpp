// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/LoadoutTooltipData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadoutTooltipData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FLoadoutTooltipData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemRarity();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EInventoryItemType();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemAvailability();
// End Cross Module References
class UScriptStruct* FLoadoutTooltipData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FLoadoutTooltipData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoadoutTooltipData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("LoadoutTooltipData"), sizeof(FLoadoutTooltipData), Get_Z_Construct_UScriptStruct_FLoadoutTooltipData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FLoadoutTooltipData>()
{
	return FLoadoutTooltipData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLoadoutTooltipData(FLoadoutTooltipData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("LoadoutTooltipData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFLoadoutTooltipData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFLoadoutTooltipData()
	{
		UScriptStruct::DeferCppStructOps<FLoadoutTooltipData>(FName(TEXT("LoadoutTooltipData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFLoadoutTooltipData;
	struct Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rarity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLocked_MetaData[];
#endif
		static void NewProp_IsLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLocked;
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
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Availability_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Availability_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Availability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LoadoutTooltipData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoadoutTooltipData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_ItemId_MetaData[] = {
		{ "Category", "LoadoutTooltipData" },
		{ "ModuleRelativePath", "Public/LoadoutTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadoutTooltipData, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "LoadoutTooltipData" },
		{ "ModuleRelativePath", "Public/LoadoutTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadoutTooltipData, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_ParentDisplayName_MetaData[] = {
		{ "Category", "LoadoutTooltipData" },
		{ "ModuleRelativePath", "Public/LoadoutTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_ParentDisplayName = { "ParentDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadoutTooltipData, ParentDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_ParentDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_ParentDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "LoadoutTooltipData" },
		{ "ModuleRelativePath", "Public/LoadoutTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadoutTooltipData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "LoadoutTooltipData" },
		{ "ModuleRelativePath", "Public/LoadoutTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadoutTooltipData, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_Level_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_Rarity_MetaData[] = {
		{ "Category", "LoadoutTooltipData" },
		{ "ModuleRelativePath", "Public/LoadoutTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadoutTooltipData, Rarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_Rarity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_IsLocked_MetaData[] = {
		{ "Category", "LoadoutTooltipData" },
		{ "ModuleRelativePath", "Public/LoadoutTooltipData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_IsLocked_SetBit(void* Obj)
	{
		((FLoadoutTooltipData*)Obj)->IsLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_IsLocked = { "IsLocked", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLoadoutTooltipData), &Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_IsLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_IsLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_IsLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "LoadoutTooltipData" },
		{ "ModuleRelativePath", "Public/LoadoutTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadoutTooltipData, EventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_EventId_MetaData[] = {
		{ "Category", "LoadoutTooltipData" },
		{ "ModuleRelativePath", "Public/LoadoutTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_EventId = { "EventId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadoutTooltipData, EventId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_EventId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_EventId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_IsPastEvent_MetaData[] = {
		{ "Category", "LoadoutTooltipData" },
		{ "ModuleRelativePath", "Public/LoadoutTooltipData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_IsPastEvent_SetBit(void* Obj)
	{
		((FLoadoutTooltipData*)Obj)->IsPastEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_IsPastEvent = { "IsPastEvent", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLoadoutTooltipData), &Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_IsPastEvent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_IsPastEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_IsPastEvent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "LoadoutTooltipData" },
		{ "ModuleRelativePath", "Public/LoadoutTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadoutTooltipData, ItemType), Z_Construct_UEnum_DBDSharedTypes_EInventoryItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_ItemType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_Availability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_Availability_MetaData[] = {
		{ "Category", "LoadoutTooltipData" },
		{ "ModuleRelativePath", "Public/LoadoutTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_Availability = { "Availability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadoutTooltipData, Availability), Z_Construct_UEnum_DBDSharedTypes_EItemAvailability, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_Availability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_Availability_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_ParentDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_Rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_Rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_IsLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_EventId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_IsPastEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_ItemType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_Availability_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::NewProp_Availability,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"LoadoutTooltipData",
		sizeof(FLoadoutTooltipData),
		alignof(FLoadoutTooltipData),
		Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoadoutTooltipData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLoadoutTooltipData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LoadoutTooltipData"), sizeof(FLoadoutTooltipData), Get_Z_Construct_UScriptStruct_FLoadoutTooltipData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLoadoutTooltipData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLoadoutTooltipData_Hash() { return 40327717U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
