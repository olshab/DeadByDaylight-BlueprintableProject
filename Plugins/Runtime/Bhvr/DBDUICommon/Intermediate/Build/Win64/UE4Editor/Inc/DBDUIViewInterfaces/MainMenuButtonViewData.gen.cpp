// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/MainMenuButtonViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuButtonViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FMainMenuButtonViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
class UScriptStruct* FMainMenuButtonViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FMainMenuButtonViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMainMenuButtonViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("MainMenuButtonViewData"), sizeof(FMainMenuButtonViewData), Get_Z_Construct_UScriptStruct_FMainMenuButtonViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FMainMenuButtonViewData>()
{
	return FMainMenuButtonViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMainMenuButtonViewData(FMainMenuButtonViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("MainMenuButtonViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFMainMenuButtonViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFMainMenuButtonViewData()
	{
		UScriptStruct::DeferCppStructOps<FMainMenuButtonViewData>(FName(TEXT("MainMenuButtonViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFMainMenuButtonViewData;
	struct Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bonus_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Bonus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Timer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNew_MetaData[];
#endif
		static void NewProp_IsNew_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsNew;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MainMenuButtonViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMainMenuButtonViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics::NewProp_Bonus_MetaData[] = {
		{ "Category", "MainMenuButtonViewData" },
		{ "ModuleRelativePath", "Public/MainMenuButtonViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics::NewProp_Bonus = { "Bonus", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMainMenuButtonViewData, Bonus), METADATA_PARAMS(Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics::NewProp_Bonus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics::NewProp_Bonus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics::NewProp_Timer_MetaData[] = {
		{ "Category", "MainMenuButtonViewData" },
		{ "ModuleRelativePath", "Public/MainMenuButtonViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMainMenuButtonViewData, Timer), METADATA_PARAMS(Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics::NewProp_Timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics::NewProp_Timer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics::NewProp_IsNew_MetaData[] = {
		{ "Category", "MainMenuButtonViewData" },
		{ "ModuleRelativePath", "Public/MainMenuButtonViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics::NewProp_IsNew_SetBit(void* Obj)
	{
		((FMainMenuButtonViewData*)Obj)->IsNew = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics::NewProp_IsNew = { "IsNew", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMainMenuButtonViewData), &Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics::NewProp_IsNew_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics::NewProp_IsNew_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics::NewProp_IsNew_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics::NewProp_Bonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics::NewProp_Timer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics::NewProp_IsNew,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"MainMenuButtonViewData",
		sizeof(FMainMenuButtonViewData),
		alignof(FMainMenuButtonViewData),
		Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMainMenuButtonViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMainMenuButtonViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MainMenuButtonViewData"), sizeof(FMainMenuButtonViewData), Get_Z_Construct_UScriptStruct_FMainMenuButtonViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMainMenuButtonViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMainMenuButtonViewData_Hash() { return 1847797198U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
