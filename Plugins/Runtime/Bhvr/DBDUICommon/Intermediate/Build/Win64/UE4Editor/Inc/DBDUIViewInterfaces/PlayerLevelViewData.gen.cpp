// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/PlayerLevelViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerLevelViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerLevelViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData();
// End Cross Module References
class UScriptStruct* FPlayerLevelViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FPlayerLevelViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerLevelViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("PlayerLevelViewData"), sizeof(FPlayerLevelViewData), Get_Z_Construct_UScriptStruct_FPlayerLevelViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FPlayerLevelViewData>()
{
	return FPlayerLevelViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerLevelViewData(FPlayerLevelViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("PlayerLevelViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPlayerLevelViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPlayerLevelViewData()
	{
		UScriptStruct::DeferCppStructOps<FPlayerLevelViewData>(FName(TEXT("PlayerLevelViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPlayerLevelViewData;
	struct Z_Construct_UScriptStruct_FPlayerLevelViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrestigeLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PrestigeLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TooltipData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TooltipData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLevelViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerLevelViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerLevelViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerLevelViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLevelViewData_Statics::NewProp_PlayerLevel_MetaData[] = {
		{ "Category", "PlayerLevelViewData" },
		{ "ModuleRelativePath", "Public/PlayerLevelViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerLevelViewData_Statics::NewProp_PlayerLevel = { "PlayerLevel", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLevelViewData, PlayerLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLevelViewData_Statics::NewProp_PlayerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLevelViewData_Statics::NewProp_PlayerLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLevelViewData_Statics::NewProp_PrestigeLevel_MetaData[] = {
		{ "Category", "PlayerLevelViewData" },
		{ "ModuleRelativePath", "Public/PlayerLevelViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerLevelViewData_Statics::NewProp_PrestigeLevel = { "PrestigeLevel", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLevelViewData, PrestigeLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLevelViewData_Statics::NewProp_PrestigeLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLevelViewData_Statics::NewProp_PrestigeLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLevelViewData_Statics::NewProp_TooltipData_MetaData[] = {
		{ "Category", "PlayerLevelViewData" },
		{ "ModuleRelativePath", "Public/PlayerLevelViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerLevelViewData_Statics::NewProp_TooltipData = { "TooltipData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLevelViewData, TooltipData), Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLevelViewData_Statics::NewProp_TooltipData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLevelViewData_Statics::NewProp_TooltipData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerLevelViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLevelViewData_Statics::NewProp_PlayerLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLevelViewData_Statics::NewProp_PrestigeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLevelViewData_Statics::NewProp_TooltipData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerLevelViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"PlayerLevelViewData",
		sizeof(FPlayerLevelViewData),
		alignof(FPlayerLevelViewData),
		Z_Construct_UScriptStruct_FPlayerLevelViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLevelViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLevelViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLevelViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerLevelViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerLevelViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerLevelViewData"), sizeof(FPlayerLevelViewData), Get_Z_Construct_UScriptStruct_FPlayerLevelViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerLevelViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerLevelViewData_Hash() { return 2425970363U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
