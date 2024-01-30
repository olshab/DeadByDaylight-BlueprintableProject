// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/AlertsViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlertsViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FAlertsViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FRewardWrapperViewData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FAlertsViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FAlertsViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlertsViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("AlertsViewData"), sizeof(FAlertsViewData), Get_Z_Construct_UScriptStruct_FAlertsViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FAlertsViewData>()
{
	return FAlertsViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAlertsViewData(FAlertsViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("AlertsViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFAlertsViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFAlertsViewData()
	{
		UScriptStruct::DeferCppStructOps<FAlertsViewData>(FName(TEXT("AlertsViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFAlertsViewData;
	struct Z_Construct_UScriptStruct_FAlertsViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlertRewards_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlertRewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AlertRewards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EventBackground;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlertsViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AlertsViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlertsViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlertsViewData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlertsViewData_Statics::NewProp_AlertRewards_Inner = { "AlertRewards", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRewardWrapperViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlertsViewData_Statics::NewProp_AlertRewards_MetaData[] = {
		{ "Category", "AlertsViewData" },
		{ "ModuleRelativePath", "Public/AlertsViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAlertsViewData_Statics::NewProp_AlertRewards = { "AlertRewards", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAlertsViewData, AlertRewards), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAlertsViewData_Statics::NewProp_AlertRewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlertsViewData_Statics::NewProp_AlertRewards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlertsViewData_Statics::NewProp_EventBackground_MetaData[] = {
		{ "Category", "AlertsViewData" },
		{ "ModuleRelativePath", "Public/AlertsViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAlertsViewData_Statics::NewProp_EventBackground = { "EventBackground", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAlertsViewData, EventBackground), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAlertsViewData_Statics::NewProp_EventBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlertsViewData_Statics::NewProp_EventBackground_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlertsViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlertsViewData_Statics::NewProp_AlertRewards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlertsViewData_Statics::NewProp_AlertRewards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlertsViewData_Statics::NewProp_EventBackground,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlertsViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"AlertsViewData",
		sizeof(FAlertsViewData),
		alignof(FAlertsViewData),
		Z_Construct_UScriptStruct_FAlertsViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlertsViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAlertsViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlertsViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAlertsViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAlertsViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AlertsViewData"), sizeof(FAlertsViewData), Get_Z_Construct_UScriptStruct_FAlertsViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAlertsViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAlertsViewData_Hash() { return 2077153506U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
