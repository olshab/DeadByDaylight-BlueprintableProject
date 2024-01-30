// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/AuricCellsFirstPurchaseViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuricCellsFirstPurchaseViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FAuricCellsFirstPurchaseViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("AuricCellsFirstPurchaseViewData"), sizeof(FAuricCellsFirstPurchaseViewData), Get_Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FAuricCellsFirstPurchaseViewData>()
{
	return FAuricCellsFirstPurchaseViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAuricCellsFirstPurchaseViewData(FAuricCellsFirstPurchaseViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("AuricCellsFirstPurchaseViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFAuricCellsFirstPurchaseViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFAuricCellsFirstPurchaseViewData()
	{
		UScriptStruct::DeferCppStructOps<FAuricCellsFirstPurchaseViewData>(FName(TEXT("AuricCellsFirstPurchaseViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFAuricCellsFirstPurchaseViewData;
	struct Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFirstPurchase_MetaData[];
#endif
		static void NewProp_IsFirstPurchase_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFirstPurchase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_IconTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AuricCellsFirstPurchaseViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuricCellsFirstPurchaseViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::NewProp_IsFirstPurchase_MetaData[] = {
		{ "Category", "AuricCellsFirstPurchaseViewData" },
		{ "ModuleRelativePath", "Public/AuricCellsFirstPurchaseViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::NewProp_IsFirstPurchase_SetBit(void* Obj)
	{
		((FAuricCellsFirstPurchaseViewData*)Obj)->IsFirstPurchase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::NewProp_IsFirstPurchase = { "IsFirstPurchase", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAuricCellsFirstPurchaseViewData), &Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::NewProp_IsFirstPurchase_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::NewProp_IsFirstPurchase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::NewProp_IsFirstPurchase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::NewProp_IconTexture_MetaData[] = {
		{ "Category", "AuricCellsFirstPurchaseViewData" },
		{ "ModuleRelativePath", "Public/AuricCellsFirstPurchaseViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::NewProp_IconTexture = { "IconTexture", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuricCellsFirstPurchaseViewData, IconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::NewProp_IconTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::NewProp_IconTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "AuricCellsFirstPurchaseViewData" },
		{ "ModuleRelativePath", "Public/AuricCellsFirstPurchaseViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuricCellsFirstPurchaseViewData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "AuricCellsFirstPurchaseViewData" },
		{ "ModuleRelativePath", "Public/AuricCellsFirstPurchaseViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuricCellsFirstPurchaseViewData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::NewProp_IsFirstPurchase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::NewProp_IconTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::NewProp_Description,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"AuricCellsFirstPurchaseViewData",
		sizeof(FAuricCellsFirstPurchaseViewData),
		alignof(FAuricCellsFirstPurchaseViewData),
		Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AuricCellsFirstPurchaseViewData"), sizeof(FAuricCellsFirstPurchaseViewData), Get_Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAuricCellsFirstPurchaseViewData_Hash() { return 2590786542U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
