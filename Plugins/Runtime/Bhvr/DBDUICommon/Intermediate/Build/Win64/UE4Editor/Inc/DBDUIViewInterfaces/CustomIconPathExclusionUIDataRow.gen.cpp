// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/CustomIconPathExclusionUIDataRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomIconPathExclusionUIDataRow() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomIconPathExclusionUIDataRow();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FCustomIconPathExclusionUIDataRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCustomIconPathExclusionUIDataRow cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCustomIconPathExclusionUIDataRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FCustomIconPathExclusionUIDataRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomIconPathExclusionUIDataRow, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("CustomIconPathExclusionUIDataRow"), sizeof(FCustomIconPathExclusionUIDataRow), Get_Z_Construct_UScriptStruct_FCustomIconPathExclusionUIDataRow_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FCustomIconPathExclusionUIDataRow>()
{
	return FCustomIconPathExclusionUIDataRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomIconPathExclusionUIDataRow(FCustomIconPathExclusionUIDataRow::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("CustomIconPathExclusionUIDataRow"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCustomIconPathExclusionUIDataRow
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCustomIconPathExclusionUIDataRow()
	{
		UScriptStruct::DeferCppStructOps<FCustomIconPathExclusionUIDataRow>(FName(TEXT("CustomIconPathExclusionUIDataRow")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCustomIconPathExclusionUIDataRow;
	struct Z_Construct_UScriptStruct_FCustomIconPathExclusionUIDataRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomIconPathExclusionUIDataRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CustomIconPathExclusionUIDataRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomIconPathExclusionUIDataRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomIconPathExclusionUIDataRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomIconPathExclusionUIDataRow_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "CustomIconPathExclusionUIDataRow" },
		{ "ModuleRelativePath", "Public/CustomIconPathExclusionUIDataRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomIconPathExclusionUIDataRow_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomIconPathExclusionUIDataRow, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomIconPathExclusionUIDataRow_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomIconPathExclusionUIDataRow_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomIconPathExclusionUIDataRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomIconPathExclusionUIDataRow_Statics::NewProp_Path,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomIconPathExclusionUIDataRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CustomIconPathExclusionUIDataRow",
		sizeof(FCustomIconPathExclusionUIDataRow),
		alignof(FCustomIconPathExclusionUIDataRow),
		Z_Construct_UScriptStruct_FCustomIconPathExclusionUIDataRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomIconPathExclusionUIDataRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomIconPathExclusionUIDataRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomIconPathExclusionUIDataRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomIconPathExclusionUIDataRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomIconPathExclusionUIDataRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomIconPathExclusionUIDataRow"), sizeof(FCustomIconPathExclusionUIDataRow), Get_Z_Construct_UScriptStruct_FCustomIconPathExclusionUIDataRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomIconPathExclusionUIDataRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomIconPathExclusionUIDataRow_Hash() { return 325032586U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
