// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/SpecialEventInfoViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpecialEventInfoViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventInfoViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
class UScriptStruct* FSpecialEventInfoViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpecialEventInfoViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("SpecialEventInfoViewData"), sizeof(FSpecialEventInfoViewData), Get_Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FSpecialEventInfoViewData>()
{
	return FSpecialEventInfoViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpecialEventInfoViewData(FSpecialEventInfoViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("SpecialEventInfoViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFSpecialEventInfoViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFSpecialEventInfoViewData()
	{
		UScriptStruct::DeferCppStructOps<FSpecialEventInfoViewData>(FName(TEXT("SpecialEventInfoViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFSpecialEventInfoViewData;
	struct Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventBannerFrameLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventBannerFrameLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventThemeFrameLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventThemeFrameLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPastEvent_MetaData[];
#endif
		static void NewProp_IsPastEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPastEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodwebCollectSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BloodwebCollectSoundEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpecialEventInfoViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpecialEventInfoViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_EventId_MetaData[] = {
		{ "Category", "SpecialEventInfoViewData" },
		{ "ModuleRelativePath", "Public/SpecialEventInfoViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_EventId = { "EventId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventInfoViewData, EventId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_EventId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_EventId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_EventBannerFrameLabel_MetaData[] = {
		{ "Category", "SpecialEventInfoViewData" },
		{ "ModuleRelativePath", "Public/SpecialEventInfoViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_EventBannerFrameLabel = { "EventBannerFrameLabel", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventInfoViewData, EventBannerFrameLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_EventBannerFrameLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_EventBannerFrameLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_EventThemeFrameLabel_MetaData[] = {
		{ "Category", "SpecialEventInfoViewData" },
		{ "ModuleRelativePath", "Public/SpecialEventInfoViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_EventThemeFrameLabel = { "EventThemeFrameLabel", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventInfoViewData, EventThemeFrameLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_EventThemeFrameLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_EventThemeFrameLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "SpecialEventInfoViewData" },
		{ "ModuleRelativePath", "Public/SpecialEventInfoViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventInfoViewData, EventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_IsPastEvent_MetaData[] = {
		{ "Category", "SpecialEventInfoViewData" },
		{ "ModuleRelativePath", "Public/SpecialEventInfoViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_IsPastEvent_SetBit(void* Obj)
	{
		((FSpecialEventInfoViewData*)Obj)->IsPastEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_IsPastEvent = { "IsPastEvent", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSpecialEventInfoViewData), &Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_IsPastEvent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_IsPastEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_IsPastEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_BloodwebCollectSoundEvent_MetaData[] = {
		{ "Category", "SpecialEventInfoViewData" },
		{ "ModuleRelativePath", "Public/SpecialEventInfoViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_BloodwebCollectSoundEvent = { "BloodwebCollectSoundEvent", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventInfoViewData, BloodwebCollectSoundEvent), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_BloodwebCollectSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_BloodwebCollectSoundEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_EventId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_EventBannerFrameLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_EventThemeFrameLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_IsPastEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::NewProp_BloodwebCollectSoundEvent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"SpecialEventInfoViewData",
		sizeof(FSpecialEventInfoViewData),
		alignof(FSpecialEventInfoViewData),
		Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventInfoViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpecialEventInfoViewData"), sizeof(FSpecialEventInfoViewData), Get_Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpecialEventInfoViewData_Hash() { return 2176753327U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
