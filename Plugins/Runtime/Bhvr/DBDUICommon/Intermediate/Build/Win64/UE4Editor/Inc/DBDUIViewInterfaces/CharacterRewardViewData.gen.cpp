// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/CharacterRewardViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterRewardViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterRewardViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FRewardViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterTooltipViewData();
// End Cross Module References

static_assert(std::is_polymorphic<FCharacterRewardViewData>() == std::is_polymorphic<FRewardViewData>(), "USTRUCT FCharacterRewardViewData cannot be polymorphic unless super FRewardViewData is polymorphic");

class UScriptStruct* FCharacterRewardViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FCharacterRewardViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterRewardViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("CharacterRewardViewData"), sizeof(FCharacterRewardViewData), Get_Z_Construct_UScriptStruct_FCharacterRewardViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FCharacterRewardViewData>()
{
	return FCharacterRewardViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterRewardViewData(FCharacterRewardViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("CharacterRewardViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCharacterRewardViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCharacterRewardViewData()
	{
		UScriptStruct::DeferCppStructOps<FCharacterRewardViewData>(FName(TEXT("CharacterRewardViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCharacterRewardViewData;
	struct Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOwned_MetaData[];
#endif
		static void NewProp_IsOwned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOwned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prestige_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Prestige;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TooltipData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TooltipData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnabled_MetaData[];
#endif
		static void NewProp_IsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterRewardViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterRewardViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_ItemId_MetaData[] = {
		{ "Category", "CharacterRewardViewData" },
		{ "ModuleRelativePath", "Public/CharacterRewardViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterRewardViewData, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_IsOwned_MetaData[] = {
		{ "Category", "CharacterRewardViewData" },
		{ "ModuleRelativePath", "Public/CharacterRewardViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_IsOwned_SetBit(void* Obj)
	{
		((FCharacterRewardViewData*)Obj)->IsOwned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_IsOwned = { "IsOwned", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterRewardViewData), &Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_IsOwned_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_IsOwned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_IsOwned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "CharacterRewardViewData" },
		{ "ModuleRelativePath", "Public/CharacterRewardViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterRewardViewData, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_Prestige_MetaData[] = {
		{ "Category", "CharacterRewardViewData" },
		{ "ModuleRelativePath", "Public/CharacterRewardViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_Prestige = { "Prestige", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterRewardViewData, Prestige), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_Prestige_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_Prestige_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_TooltipData_MetaData[] = {
		{ "Category", "CharacterRewardViewData" },
		{ "ModuleRelativePath", "Public/CharacterRewardViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_TooltipData = { "TooltipData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterRewardViewData, TooltipData), Z_Construct_UScriptStruct_FCharacterTooltipViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_TooltipData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_TooltipData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_IsEnabled_MetaData[] = {
		{ "Category", "CharacterRewardViewData" },
		{ "ModuleRelativePath", "Public/CharacterRewardViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_IsEnabled_SetBit(void* Obj)
	{
		((FCharacterRewardViewData*)Obj)->IsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_IsEnabled = { "IsEnabled", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterRewardViewData), &Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_IsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_IsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_IsEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_IsOwned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_Prestige,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_TooltipData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::NewProp_IsEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		Z_Construct_UScriptStruct_FRewardViewData,
		&NewStructOps,
		"CharacterRewardViewData",
		sizeof(FCharacterRewardViewData),
		alignof(FCharacterRewardViewData),
		Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterRewardViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterRewardViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterRewardViewData"), sizeof(FCharacterRewardViewData), Get_Z_Construct_UScriptStruct_FCharacterRewardViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterRewardViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterRewardViewData_Hash() { return 602837223U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
