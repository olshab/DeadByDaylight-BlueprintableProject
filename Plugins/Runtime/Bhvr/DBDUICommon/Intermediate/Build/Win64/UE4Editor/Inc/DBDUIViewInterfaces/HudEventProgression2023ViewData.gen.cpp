// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/HudEventProgression2023ViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudEventProgression2023ViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FHudEventProgression2023ViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
class UScriptStruct* FHudEventProgression2023ViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHudEventProgression2023ViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("HudEventProgression2023ViewData"), sizeof(FHudEventProgression2023ViewData), Get_Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FHudEventProgression2023ViewData>()
{
	return FHudEventProgression2023ViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHudEventProgression2023ViewData(FHudEventProgression2023ViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("HudEventProgression2023ViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFHudEventProgression2023ViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFHudEventProgression2023ViewData()
	{
		UScriptStruct::DeferCppStructOps<FHudEventProgression2023ViewData>(FName(TEXT("HudEventProgression2023ViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFHudEventProgression2023ViewData;
	struct Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInVoidZone_MetaData[];
#endif
		static void NewProp_IsInVoidZone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInVoidZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsChannelingHaunt_MetaData[];
#endif
		static void NewProp_IsChannelingHaunt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsChannelingHaunt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnergyProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnergyProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HauntTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HauntTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEnergy_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxEnergy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInitialized_MetaData[];
#endif
		static void NewProp_IsInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInitialized;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HudEventProgression2023ViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHudEventProgression2023ViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_IsInVoidZone_MetaData[] = {
		{ "Category", "HudEventProgression2023ViewData" },
		{ "ModuleRelativePath", "Public/HudEventProgression2023ViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_IsInVoidZone_SetBit(void* Obj)
	{
		((FHudEventProgression2023ViewData*)Obj)->IsInVoidZone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_IsInVoidZone = { "IsInVoidZone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHudEventProgression2023ViewData), &Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_IsInVoidZone_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_IsInVoidZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_IsInVoidZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_IsChannelingHaunt_MetaData[] = {
		{ "Category", "HudEventProgression2023ViewData" },
		{ "ModuleRelativePath", "Public/HudEventProgression2023ViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_IsChannelingHaunt_SetBit(void* Obj)
	{
		((FHudEventProgression2023ViewData*)Obj)->IsChannelingHaunt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_IsChannelingHaunt = { "IsChannelingHaunt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHudEventProgression2023ViewData), &Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_IsChannelingHaunt_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_IsChannelingHaunt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_IsChannelingHaunt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_EnergyProgress_MetaData[] = {
		{ "Category", "HudEventProgression2023ViewData" },
		{ "ModuleRelativePath", "Public/HudEventProgression2023ViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_EnergyProgress = { "EnergyProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHudEventProgression2023ViewData, EnergyProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_EnergyProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_EnergyProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_HauntTarget_MetaData[] = {
		{ "Category", "HudEventProgression2023ViewData" },
		{ "ModuleRelativePath", "Public/HudEventProgression2023ViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_HauntTarget = { "HauntTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHudEventProgression2023ViewData, HauntTarget), METADATA_PARAMS(Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_HauntTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_HauntTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_MaxEnergy_MetaData[] = {
		{ "Category", "HudEventProgression2023ViewData" },
		{ "ModuleRelativePath", "Public/HudEventProgression2023ViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_MaxEnergy = { "MaxEnergy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHudEventProgression2023ViewData, MaxEnergy), METADATA_PARAMS(Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_MaxEnergy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_MaxEnergy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_IsInitialized_MetaData[] = {
		{ "Category", "HudEventProgression2023ViewData" },
		{ "ModuleRelativePath", "Public/HudEventProgression2023ViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_IsInitialized_SetBit(void* Obj)
	{
		((FHudEventProgression2023ViewData*)Obj)->IsInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_IsInitialized = { "IsInitialized", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHudEventProgression2023ViewData), &Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_IsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_IsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_IsInitialized_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_IsInVoidZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_IsChannelingHaunt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_EnergyProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_HauntTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_MaxEnergy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::NewProp_IsInitialized,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"HudEventProgression2023ViewData",
		sizeof(FHudEventProgression2023ViewData),
		alignof(FHudEventProgression2023ViewData),
		Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHudEventProgression2023ViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HudEventProgression2023ViewData"), sizeof(FHudEventProgression2023ViewData), Get_Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHudEventProgression2023ViewData_Hash() { return 998865200U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
