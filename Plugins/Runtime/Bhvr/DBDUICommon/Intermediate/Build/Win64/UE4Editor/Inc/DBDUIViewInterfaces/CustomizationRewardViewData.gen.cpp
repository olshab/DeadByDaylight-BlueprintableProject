// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/CustomizationRewardViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizationRewardViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationRewardViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FRewardViewData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemRarity();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationTooltipViewData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECustomizationCategory();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPriceTagViewData();
// End Cross Module References

static_assert(std::is_polymorphic<FCustomizationRewardViewData>() == std::is_polymorphic<FRewardViewData>(), "USTRUCT FCustomizationRewardViewData cannot be polymorphic unless super FRewardViewData is polymorphic");

class UScriptStruct* FCustomizationRewardViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FCustomizationRewardViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizationRewardViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("CustomizationRewardViewData"), sizeof(FCustomizationRewardViewData), Get_Z_Construct_UScriptStruct_FCustomizationRewardViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FCustomizationRewardViewData>()
{
	return FCustomizationRewardViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomizationRewardViewData(FCustomizationRewardViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("CustomizationRewardViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCustomizationRewardViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCustomizationRewardViewData()
	{
		UScriptStruct::DeferCppStructOps<FCustomizationRewardViewData>(FName(TEXT("CustomizationRewardViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCustomizationRewardViewData;
	struct Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizationId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CustomizationId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutfitId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutfitId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleaseDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReleaseDate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rarity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOwned_MetaData[];
#endif
		static void NewProp_IsOwned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOwned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBuyable_MetaData[];
#endif
		static void NewProp_IsBuyable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBuyable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEquipped_MetaData[];
#endif
		static void NewProp_IsEquipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEquipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsUnbreakable_MetaData[];
#endif
		static void NewProp_IsUnbreakable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUnbreakable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEventItem_MetaData[];
#endif
		static void NewProp_IsEventItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEventItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TooltipData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TooltipData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomizationCategory_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizationCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CustomizationCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AssociatedCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnabled_MetaData[];
#endif
		static void NewProp_IsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrantsMilestonePointOnUnlock_MetaData[];
#endif
		static void NewProp_GrantsMilestonePointOnUnlock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GrantsMilestonePointOnUnlock;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PriceTagData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriceTagData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PriceTagData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitedTimeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LimitedTimeText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscountTimeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DiscountTimeText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CustomizationRewardViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizationRewardViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_CustomizationId_MetaData[] = {
		{ "Category", "CustomizationRewardViewData" },
		{ "ModuleRelativePath", "Public/CustomizationRewardViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_CustomizationId = { "CustomizationId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationRewardViewData, CustomizationId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_CustomizationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_CustomizationId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_OutfitId_MetaData[] = {
		{ "Category", "CustomizationRewardViewData" },
		{ "ModuleRelativePath", "Public/CustomizationRewardViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_OutfitId = { "OutfitId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationRewardViewData, OutfitId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_OutfitId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_OutfitId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_ReleaseDate_MetaData[] = {
		{ "Category", "CustomizationRewardViewData" },
		{ "ModuleRelativePath", "Public/CustomizationRewardViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_ReleaseDate = { "ReleaseDate", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationRewardViewData, ReleaseDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_ReleaseDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_ReleaseDate_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_Rarity_MetaData[] = {
		{ "Category", "CustomizationRewardViewData" },
		{ "ModuleRelativePath", "Public/CustomizationRewardViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationRewardViewData, Rarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_Rarity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsOwned_MetaData[] = {
		{ "Category", "CustomizationRewardViewData" },
		{ "ModuleRelativePath", "Public/CustomizationRewardViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsOwned_SetBit(void* Obj)
	{
		((FCustomizationRewardViewData*)Obj)->IsOwned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsOwned = { "IsOwned", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomizationRewardViewData), &Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsOwned_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsOwned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsOwned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsBuyable_MetaData[] = {
		{ "Category", "CustomizationRewardViewData" },
		{ "ModuleRelativePath", "Public/CustomizationRewardViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsBuyable_SetBit(void* Obj)
	{
		((FCustomizationRewardViewData*)Obj)->IsBuyable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsBuyable = { "IsBuyable", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomizationRewardViewData), &Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsBuyable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsBuyable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsBuyable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEquipped_MetaData[] = {
		{ "Category", "CustomizationRewardViewData" },
		{ "ModuleRelativePath", "Public/CustomizationRewardViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEquipped_SetBit(void* Obj)
	{
		((FCustomizationRewardViewData*)Obj)->IsEquipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEquipped = { "IsEquipped", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomizationRewardViewData), &Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEquipped_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEquipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsUnbreakable_MetaData[] = {
		{ "Category", "CustomizationRewardViewData" },
		{ "ModuleRelativePath", "Public/CustomizationRewardViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsUnbreakable_SetBit(void* Obj)
	{
		((FCustomizationRewardViewData*)Obj)->IsUnbreakable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsUnbreakable = { "IsUnbreakable", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomizationRewardViewData), &Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsUnbreakable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsUnbreakable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsUnbreakable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEventItem_MetaData[] = {
		{ "Category", "CustomizationRewardViewData" },
		{ "ModuleRelativePath", "Public/CustomizationRewardViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEventItem_SetBit(void* Obj)
	{
		((FCustomizationRewardViewData*)Obj)->IsEventItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEventItem = { "IsEventItem", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomizationRewardViewData), &Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEventItem_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEventItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEventItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_TooltipData_MetaData[] = {
		{ "Category", "CustomizationRewardViewData" },
		{ "ModuleRelativePath", "Public/CustomizationRewardViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_TooltipData = { "TooltipData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationRewardViewData, TooltipData), Z_Construct_UScriptStruct_FCustomizationTooltipViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_TooltipData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_TooltipData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_CustomizationCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_CustomizationCategory_MetaData[] = {
		{ "Category", "CustomizationRewardViewData" },
		{ "ModuleRelativePath", "Public/CustomizationRewardViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_CustomizationCategory = { "CustomizationCategory", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationRewardViewData, CustomizationCategory), Z_Construct_UEnum_DBDSharedTypes_ECustomizationCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_CustomizationCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_CustomizationCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_AssociatedCharacter_MetaData[] = {
		{ "Category", "CustomizationRewardViewData" },
		{ "ModuleRelativePath", "Public/CustomizationRewardViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_AssociatedCharacter = { "AssociatedCharacter", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationRewardViewData, AssociatedCharacter), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_AssociatedCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_AssociatedCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEnabled_MetaData[] = {
		{ "Category", "CustomizationRewardViewData" },
		{ "ModuleRelativePath", "Public/CustomizationRewardViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEnabled_SetBit(void* Obj)
	{
		((FCustomizationRewardViewData*)Obj)->IsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEnabled = { "IsEnabled", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomizationRewardViewData), &Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_GrantsMilestonePointOnUnlock_MetaData[] = {
		{ "Category", "CustomizationRewardViewData" },
		{ "ModuleRelativePath", "Public/CustomizationRewardViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_GrantsMilestonePointOnUnlock_SetBit(void* Obj)
	{
		((FCustomizationRewardViewData*)Obj)->GrantsMilestonePointOnUnlock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_GrantsMilestonePointOnUnlock = { "GrantsMilestonePointOnUnlock", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomizationRewardViewData), &Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_GrantsMilestonePointOnUnlock_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_GrantsMilestonePointOnUnlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_GrantsMilestonePointOnUnlock_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_PriceTagData_Inner = { "PriceTagData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPriceTagViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_PriceTagData_MetaData[] = {
		{ "Category", "CustomizationRewardViewData" },
		{ "ModuleRelativePath", "Public/CustomizationRewardViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_PriceTagData = { "PriceTagData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationRewardViewData, PriceTagData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_PriceTagData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_PriceTagData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_LimitedTimeText_MetaData[] = {
		{ "Category", "CustomizationRewardViewData" },
		{ "ModuleRelativePath", "Public/CustomizationRewardViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_LimitedTimeText = { "LimitedTimeText", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationRewardViewData, LimitedTimeText), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_LimitedTimeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_LimitedTimeText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_DiscountTimeText_MetaData[] = {
		{ "Category", "CustomizationRewardViewData" },
		{ "ModuleRelativePath", "Public/CustomizationRewardViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_DiscountTimeText = { "DiscountTimeText", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationRewardViewData, DiscountTimeText), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_DiscountTimeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_DiscountTimeText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_CustomizationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_OutfitId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_ReleaseDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_Rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_Rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsOwned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsBuyable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEquipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsUnbreakable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEventItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_TooltipData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_CustomizationCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_CustomizationCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_AssociatedCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_GrantsMilestonePointOnUnlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_PriceTagData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_PriceTagData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_LimitedTimeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_DiscountTimeText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		Z_Construct_UScriptStruct_FRewardViewData,
		&NewStructOps,
		"CustomizationRewardViewData",
		sizeof(FCustomizationRewardViewData),
		alignof(FCustomizationRewardViewData),
		Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizationRewardViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomizationRewardViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomizationRewardViewData"), sizeof(FCustomizationRewardViewData), Get_Z_Construct_UScriptStruct_FCustomizationRewardViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomizationRewardViewData_Hash() { return 1835383634U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
