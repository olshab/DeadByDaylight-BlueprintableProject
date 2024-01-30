// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ArchivesPastTomeViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchivesPastTomeViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchivesPastTomeViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveStoryLevelViewData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FArchivesPastTomeViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchivesPastTomeViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("ArchivesPastTomeViewData"), sizeof(FArchivesPastTomeViewData), Get_Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FArchivesPastTomeViewData>()
{
	return FArchivesPastTomeViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArchivesPastTomeViewData(FArchivesPastTomeViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("ArchivesPastTomeViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchivesPastTomeViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchivesPastTomeViewData()
	{
		UScriptStruct::DeferCppStructOps<FArchivesPastTomeViewData>(FName(TEXT("ArchivesPastTomeViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchivesPastTomeViewData;
	struct Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TomeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TomeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TomeTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TomeTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasActiveNode_MetaData[];
#endif
		static void NewProp_HasActiveNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasActiveNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VolumeIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TomeLevels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TomeLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TomeLevels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoryBookMarkTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_StoryBookMarkTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArchivesPastTomeViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchivesPastTomeViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_TomeId_MetaData[] = {
		{ "Category", "ArchivesPastTomeViewData" },
		{ "ModuleRelativePath", "Public/ArchivesPastTomeViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_TomeId = { "TomeId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesPastTomeViewData, TomeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_TomeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_TomeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_TomeTitle_MetaData[] = {
		{ "Category", "ArchivesPastTomeViewData" },
		{ "ModuleRelativePath", "Public/ArchivesPastTomeViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_TomeTitle = { "TomeTitle", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesPastTomeViewData, TomeTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_TomeTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_TomeTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_HasActiveNode_MetaData[] = {
		{ "Category", "ArchivesPastTomeViewData" },
		{ "ModuleRelativePath", "Public/ArchivesPastTomeViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_HasActiveNode_SetBit(void* Obj)
	{
		((FArchivesPastTomeViewData*)Obj)->HasActiveNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_HasActiveNode = { "HasActiveNode", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FArchivesPastTomeViewData), &Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_HasActiveNode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_HasActiveNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_HasActiveNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_VolumeIndex_MetaData[] = {
		{ "Category", "ArchivesPastTomeViewData" },
		{ "ModuleRelativePath", "Public/ArchivesPastTomeViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_VolumeIndex = { "VolumeIndex", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesPastTomeViewData, VolumeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_VolumeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_VolumeIndex_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_TomeLevels_Inner = { "TomeLevels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UArchiveStoryLevelViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_TomeLevels_MetaData[] = {
		{ "Category", "ArchivesPastTomeViewData" },
		{ "ModuleRelativePath", "Public/ArchivesPastTomeViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_TomeLevels = { "TomeLevels", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesPastTomeViewData, TomeLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_TomeLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_TomeLevels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_StoryBookMarkTexture_MetaData[] = {
		{ "Category", "ArchivesPastTomeViewData" },
		{ "ModuleRelativePath", "Public/ArchivesPastTomeViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_StoryBookMarkTexture = { "StoryBookMarkTexture", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesPastTomeViewData, StoryBookMarkTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_StoryBookMarkTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_StoryBookMarkTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_TomeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_TomeTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_HasActiveNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_VolumeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_TomeLevels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_TomeLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::NewProp_StoryBookMarkTexture,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"ArchivesPastTomeViewData",
		sizeof(FArchivesPastTomeViewData),
		alignof(FArchivesPastTomeViewData),
		Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArchivesPastTomeViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArchivesPastTomeViewData"), sizeof(FArchivesPastTomeViewData), Get_Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArchivesPastTomeViewData_Hash() { return 571187333U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
