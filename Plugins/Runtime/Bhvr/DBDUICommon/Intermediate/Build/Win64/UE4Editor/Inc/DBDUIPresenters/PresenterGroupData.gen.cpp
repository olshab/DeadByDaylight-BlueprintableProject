// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/PresenterGroupData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePresenterGroupData() {}
// Cross Module References
	DBDUIPRESENTERS_API UScriptStruct* Z_Construct_UScriptStruct_FPresenterGroupData();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenterGroup_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FPresenterGroupData>() == std::is_polymorphic<FDBDTableRowBase>(), "USTRUCT FPresenterGroupData cannot be polymorphic unless super FDBDTableRowBase is polymorphic");

class UScriptStruct* FPresenterGroupData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIPRESENTERS_API uint32 Get_Z_Construct_UScriptStruct_FPresenterGroupData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPresenterGroupData, Z_Construct_UPackage__Script_DBDUIPresenters(), TEXT("PresenterGroupData"), sizeof(FPresenterGroupData), Get_Z_Construct_UScriptStruct_FPresenterGroupData_Hash());
	}
	return Singleton;
}
template<> DBDUIPRESENTERS_API UScriptStruct* StaticStruct<FPresenterGroupData>()
{
	return FPresenterGroupData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPresenterGroupData(FPresenterGroupData::StaticStruct, TEXT("/Script/DBDUIPresenters"), TEXT("PresenterGroupData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIPresenters_StaticRegisterNativesFPresenterGroupData
{
	FScriptStruct_DBDUIPresenters_StaticRegisterNativesFPresenterGroupData()
	{
		UScriptStruct::DeferCppStructOps<FPresenterGroupData>(FName(TEXT("PresenterGroupData")));
	}
} ScriptStruct_DBDUIPresenters_StaticRegisterNativesFPresenterGroupData;
	struct Z_Construct_UScriptStruct_FPresenterGroupData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresenterGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PresenterGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresenterGroupData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PresenterGroupData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPresenterGroupData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPresenterGroupData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresenterGroupData_Statics::NewProp_PresenterGroup_MetaData[] = {
		{ "Category", "PresenterGroupData" },
		{ "ModuleRelativePath", "Public/PresenterGroupData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPresenterGroupData_Statics::NewProp_PresenterGroup = { "PresenterGroup", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresenterGroupData, PresenterGroup), Z_Construct_UClass_UPresenterGroup_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FPresenterGroupData_Statics::NewProp_PresenterGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresenterGroupData_Statics::NewProp_PresenterGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPresenterGroupData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresenterGroupData_Statics::NewProp_PresenterGroup,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPresenterGroupData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"PresenterGroupData",
		sizeof(FPresenterGroupData),
		alignof(FPresenterGroupData),
		Z_Construct_UScriptStruct_FPresenterGroupData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresenterGroupData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPresenterGroupData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresenterGroupData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPresenterGroupData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPresenterGroupData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIPresenters();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PresenterGroupData"), sizeof(FPresenterGroupData), Get_Z_Construct_UScriptStruct_FPresenterGroupData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPresenterGroupData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPresenterGroupData_Hash() { return 3932392245U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
