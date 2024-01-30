// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/DailyRitualViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDailyRitualViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FDailyRitualViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EDailyRitualState();
// End Cross Module References
class UScriptStruct* FDailyRitualViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FDailyRitualViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDailyRitualViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("DailyRitualViewData"), sizeof(FDailyRitualViewData), Get_Z_Construct_UScriptStruct_FDailyRitualViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FDailyRitualViewData>()
{
	return FDailyRitualViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDailyRitualViewData(FDailyRitualViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("DailyRitualViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFDailyRitualViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFDailyRitualViewData()
	{
		UScriptStruct::DeferCppStructOps<FDailyRitualViewData>(FName(TEXT("DailyRitualViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFDailyRitualViewData;
	struct Z_Construct_UScriptStruct_FDailyRitualViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_IconTexture;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RitualState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RitualState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RitualState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNew_MetaData[];
#endif
		static void NewProp_IsNew_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsNew;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BarProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BarThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodpointsReward_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BloodpointsReward;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDailyRitualViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "DailyRitualViewData" },
		{ "ModuleRelativePath", "Public/DailyRitualViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualViewData, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "DailyRitualViewData" },
		{ "ModuleRelativePath", "Public/DailyRitualViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualViewData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "DailyRitualViewData" },
		{ "ModuleRelativePath", "Public/DailyRitualViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualViewData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_IconTexture_MetaData[] = {
		{ "Category", "DailyRitualViewData" },
		{ "ModuleRelativePath", "Public/DailyRitualViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_IconTexture = { "IconTexture", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualViewData, IconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_IconTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_IconTexture_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_RitualState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_RitualState_MetaData[] = {
		{ "Category", "DailyRitualViewData" },
		{ "ModuleRelativePath", "Public/DailyRitualViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_RitualState = { "RitualState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualViewData, RitualState), Z_Construct_UEnum_DBDSharedTypes_EDailyRitualState, METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_RitualState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_RitualState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_IsNew_MetaData[] = {
		{ "Category", "DailyRitualViewData" },
		{ "ModuleRelativePath", "Public/DailyRitualViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_IsNew_SetBit(void* Obj)
	{
		((FDailyRitualViewData*)Obj)->IsNew = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_IsNew = { "IsNew", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDailyRitualViewData), &Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_IsNew_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_IsNew_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_IsNew_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_TextProgress_MetaData[] = {
		{ "Category", "DailyRitualViewData" },
		{ "ModuleRelativePath", "Public/DailyRitualViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_TextProgress = { "TextProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualViewData, TextProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_TextProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_TextProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_TextThreshold_MetaData[] = {
		{ "Category", "DailyRitualViewData" },
		{ "ModuleRelativePath", "Public/DailyRitualViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_TextThreshold = { "TextThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualViewData, TextThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_TextThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_TextThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_BarProgress_MetaData[] = {
		{ "Category", "DailyRitualViewData" },
		{ "ModuleRelativePath", "Public/DailyRitualViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_BarProgress = { "BarProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualViewData, BarProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_BarProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_BarProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_BarThreshold_MetaData[] = {
		{ "Category", "DailyRitualViewData" },
		{ "ModuleRelativePath", "Public/DailyRitualViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_BarThreshold = { "BarThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualViewData, BarThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_BarThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_BarThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_BloodpointsReward_MetaData[] = {
		{ "Category", "DailyRitualViewData" },
		{ "ModuleRelativePath", "Public/DailyRitualViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_BloodpointsReward = { "BloodpointsReward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualViewData, BloodpointsReward), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_BloodpointsReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_BloodpointsReward_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_IconTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_RitualState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_RitualState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_IsNew,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_TextProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_TextThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_BarProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_BarThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::NewProp_BloodpointsReward,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"DailyRitualViewData",
		sizeof(FDailyRitualViewData),
		alignof(FDailyRitualViewData),
		Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDailyRitualViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDailyRitualViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DailyRitualViewData"), sizeof(FDailyRitualViewData), Get_Z_Construct_UScriptStruct_FDailyRitualViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDailyRitualViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDailyRitualViewData_Hash() { return 2361475421U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
