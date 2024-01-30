// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/PlayerStatusViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStatusViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStatusViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerStatus();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EObsessionUIState();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EConnectionQuality();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UKillerStatusData_NoRegister();
// End Cross Module References
class UScriptStruct* FPlayerStatusViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FPlayerStatusViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerStatusViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("PlayerStatusViewData"), sizeof(FPlayerStatusViewData), Get_Z_Construct_UScriptStruct_FPlayerStatusViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FPlayerStatusViewData>()
{
	return FPlayerStatusViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerStatusViewData(FPlayerStatusViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("PlayerStatusViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPlayerStatusViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPlayerStatusViewData()
	{
		UScriptStruct::DeferCppStructOps<FPlayerStatusViewData>(FName(TEXT("PlayerStatusViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPlayerStatusViewData;
	struct Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPortraitIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerPortraitIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPortraitIconOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerPortraitIconOverride;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerStatusState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStatusState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerStatusState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimerProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDeepWound_MetaData[];
#endif
		static void NewProp_IsDeepWound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDeepWound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBroken_MetaData[];
#endif
		static void NewProp_IsBroken_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBroken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBot_MetaData[];
#endif
		static void NewProp_IsBot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLocalPlayerAKiller_MetaData[];
#endif
		static void NewProp_IsLocalPlayerAKiller_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLocalPlayerAKiller;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObsessionState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObsessionState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ObsessionState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrainStage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DrainStage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConnectionQualityStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionQualityStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConnectionQualityStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerStatusData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillerStatusData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CampProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CampProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerStatusViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerName_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, PlayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerPortraitIcon_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerPortraitIcon = { "PlayerPortraitIcon", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, PlayerPortraitIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerPortraitIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerPortraitIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerPortraitIconOverride_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerPortraitIconOverride = { "PlayerPortraitIconOverride", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, PlayerPortraitIconOverride), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerPortraitIconOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerPortraitIconOverride_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerStatusState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerStatusState_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerStatusState = { "PlayerStatusState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, PlayerStatusState), Z_Construct_UEnum_DBDSharedTypes_EPlayerStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerStatusState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerStatusState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_TimerProgress_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_TimerProgress = { "TimerProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, TimerProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_TimerProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_TimerProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsDeepWound_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsDeepWound_SetBit(void* Obj)
	{
		((FPlayerStatusViewData*)Obj)->IsDeepWound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsDeepWound = { "IsDeepWound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerStatusViewData), &Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsDeepWound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsDeepWound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsDeepWound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsBroken_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsBroken_SetBit(void* Obj)
	{
		((FPlayerStatusViewData*)Obj)->IsBroken = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsBroken = { "IsBroken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerStatusViewData), &Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsBroken_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsBroken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsBroken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsBot_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsBot_SetBit(void* Obj)
	{
		((FPlayerStatusViewData*)Obj)->IsBot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsBot = { "IsBot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerStatusViewData), &Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsBot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsBot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsBot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsLocalPlayerAKiller_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsLocalPlayerAKiller_SetBit(void* Obj)
	{
		((FPlayerStatusViewData*)Obj)->IsLocalPlayerAKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsLocalPlayerAKiller = { "IsLocalPlayerAKiller", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerStatusViewData), &Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsLocalPlayerAKiller_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsLocalPlayerAKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsLocalPlayerAKiller_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_ObsessionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_ObsessionState_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_ObsessionState = { "ObsessionState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, ObsessionState), Z_Construct_UEnum_DBDSharedTypes_EObsessionUIState, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_ObsessionState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_ObsessionState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_DrainStage_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_DrainStage = { "DrainStage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, DrainStage), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_DrainStage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_DrainStage_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_ConnectionQualityStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_ConnectionQualityStatus_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_ConnectionQualityStatus = { "ConnectionQualityStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, ConnectionQualityStatus), Z_Construct_UEnum_DBDSharedTypes_EConnectionQuality, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_ConnectionQualityStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_ConnectionQualityStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_KillerStatusData_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_KillerStatusData = { "KillerStatusData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, KillerStatusData), Z_Construct_UClass_UKillerStatusData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_KillerStatusData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_KillerStatusData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_CampProgress_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_CampProgress = { "CampProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, CampProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_CampProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_CampProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerPortraitIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerPortraitIconOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerStatusState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerStatusState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_TimerProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsDeepWound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsBroken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsBot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsLocalPlayerAKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_ObsessionState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_ObsessionState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_DrainStage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_ConnectionQualityStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_ConnectionQualityStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_KillerStatusData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_CampProgress,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"PlayerStatusViewData",
		sizeof(FPlayerStatusViewData),
		alignof(FPlayerStatusViewData),
		Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerStatusViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerStatusViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerStatusViewData"), sizeof(FPlayerStatusViewData), Get_Z_Construct_UScriptStruct_FPlayerStatusViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerStatusViewData_Hash() { return 1278147780U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
