// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/CorePlayerLevelTooltipViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorePlayerLevelTooltipViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
class UScriptStruct* FCorePlayerLevelTooltipViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("CorePlayerLevelTooltipViewData"), sizeof(FCorePlayerLevelTooltipViewData), Get_Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FCorePlayerLevelTooltipViewData>()
{
	return FCorePlayerLevelTooltipViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCorePlayerLevelTooltipViewData(FCorePlayerLevelTooltipViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("CorePlayerLevelTooltipViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCorePlayerLevelTooltipViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCorePlayerLevelTooltipViewData()
	{
		UScriptStruct::DeferCppStructOps<FCorePlayerLevelTooltipViewData>(FName(TEXT("CorePlayerLevelTooltipViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCorePlayerLevelTooltipViewData;
	struct Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentXP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentXP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCapXP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentCapXP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerLevelTooltipViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCorePlayerLevelTooltipViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::NewProp_PlayerLevel_MetaData[] = {
		{ "Category", "CorePlayerLevelTooltipViewData" },
		{ "ModuleRelativePath", "Public/CorePlayerLevelTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::NewProp_PlayerLevel = { "PlayerLevel", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCorePlayerLevelTooltipViewData, PlayerLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::NewProp_PlayerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::NewProp_PlayerLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::NewProp_PrestigeLevel_MetaData[] = {
		{ "Category", "CorePlayerLevelTooltipViewData" },
		{ "ModuleRelativePath", "Public/CorePlayerLevelTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::NewProp_PrestigeLevel = { "PrestigeLevel", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCorePlayerLevelTooltipViewData, PrestigeLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::NewProp_PrestigeLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::NewProp_PrestigeLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::NewProp_CurrentXP_MetaData[] = {
		{ "Category", "CorePlayerLevelTooltipViewData" },
		{ "ModuleRelativePath", "Public/CorePlayerLevelTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::NewProp_CurrentXP = { "CurrentXP", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCorePlayerLevelTooltipViewData, CurrentXP), METADATA_PARAMS(Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::NewProp_CurrentXP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::NewProp_CurrentXP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::NewProp_CurrentCapXP_MetaData[] = {
		{ "Category", "CorePlayerLevelTooltipViewData" },
		{ "ModuleRelativePath", "Public/CorePlayerLevelTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::NewProp_CurrentCapXP = { "CurrentCapXP", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCorePlayerLevelTooltipViewData, CurrentCapXP), METADATA_PARAMS(Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::NewProp_CurrentCapXP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::NewProp_CurrentCapXP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::NewProp_PlayerLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::NewProp_PrestigeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::NewProp_CurrentXP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::NewProp_CurrentCapXP,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"CorePlayerLevelTooltipViewData",
		sizeof(FCorePlayerLevelTooltipViewData),
		alignof(FCorePlayerLevelTooltipViewData),
		Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CorePlayerLevelTooltipViewData"), sizeof(FCorePlayerLevelTooltipViewData), Get_Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCorePlayerLevelTooltipViewData_Hash() { return 1480396388U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
