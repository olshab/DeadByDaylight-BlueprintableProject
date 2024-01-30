// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ArchivesVignetteEntryViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchivesVignetteEntryViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FArchivesVignetteEntryViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("ArchivesVignetteEntryViewData"), sizeof(FArchivesVignetteEntryViewData), Get_Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FArchivesVignetteEntryViewData>()
{
	return FArchivesVignetteEntryViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArchivesVignetteEntryViewData(FArchivesVignetteEntryViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("ArchivesVignetteEntryViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchivesVignetteEntryViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchivesVignetteEntryViewData()
	{
		UScriptStruct::DeferCppStructOps<FArchivesVignetteEntryViewData>(FName(TEXT("ArchivesVignetteEntryViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFArchivesVignetteEntryViewData;
	struct Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsRead_MetaData[];
#endif
		static void NewProp_IsRead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasAudio_MetaData[];
#endif
		static void NewProp_HasAudio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_RewardImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewTextureOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviewTextureOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArchivesVignetteEntryViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchivesVignetteEntryViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "ArchivesVignetteEntryViewData" },
		{ "ModuleRelativePath", "Public/ArchivesVignetteEntryViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesVignetteEntryViewData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "ArchivesVignetteEntryViewData" },
		{ "ModuleRelativePath", "Public/ArchivesVignetteEntryViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesVignetteEntryViewData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_IsRead_MetaData[] = {
		{ "Category", "ArchivesVignetteEntryViewData" },
		{ "ModuleRelativePath", "Public/ArchivesVignetteEntryViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_IsRead_SetBit(void* Obj)
	{
		((FArchivesVignetteEntryViewData*)Obj)->IsRead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_IsRead = { "IsRead", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FArchivesVignetteEntryViewData), &Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_IsRead_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_IsRead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_IsRead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_HasAudio_MetaData[] = {
		{ "Category", "ArchivesVignetteEntryViewData" },
		{ "ModuleRelativePath", "Public/ArchivesVignetteEntryViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_HasAudio_SetBit(void* Obj)
	{
		((FArchivesVignetteEntryViewData*)Obj)->HasAudio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_HasAudio = { "HasAudio", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FArchivesVignetteEntryViewData), &Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_HasAudio_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_HasAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_HasAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_RewardImage_MetaData[] = {
		{ "Category", "ArchivesVignetteEntryViewData" },
		{ "ModuleRelativePath", "Public/ArchivesVignetteEntryViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_RewardImage = { "RewardImage", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesVignetteEntryViewData, RewardImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_RewardImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_RewardImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_PreviewTextureOffset_MetaData[] = {
		{ "Category", "ArchivesVignetteEntryViewData" },
		{ "ModuleRelativePath", "Public/ArchivesVignetteEntryViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_PreviewTextureOffset = { "PreviewTextureOffset", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesVignetteEntryViewData, PreviewTextureOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_PreviewTextureOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_PreviewTextureOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_IsRead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_HasAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_RewardImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::NewProp_PreviewTextureOffset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"ArchivesVignetteEntryViewData",
		sizeof(FArchivesVignetteEntryViewData),
		alignof(FArchivesVignetteEntryViewData),
		Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArchivesVignetteEntryViewData"), sizeof(FArchivesVignetteEntryViewData), Get_Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArchivesVignetteEntryViewData_Hash() { return 2958259637U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
