// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/KillerStatusDataMapping.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerStatusDataMapping() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FKillerStatusDataMapping();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UKillerStatusData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FKillerStatusDataMapping>() == std::is_polymorphic<FDBDTableRowBase>(), "USTRUCT FKillerStatusDataMapping cannot be polymorphic unless super FDBDTableRowBase is polymorphic");

class UScriptStruct* FKillerStatusDataMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FKillerStatusDataMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKillerStatusDataMapping, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("KillerStatusDataMapping"), sizeof(FKillerStatusDataMapping), Get_Z_Construct_UScriptStruct_FKillerStatusDataMapping_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FKillerStatusDataMapping>()
{
	return FKillerStatusDataMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKillerStatusDataMapping(FKillerStatusDataMapping::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("KillerStatusDataMapping"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFKillerStatusDataMapping
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFKillerStatusDataMapping()
	{
		UScriptStruct::DeferCppStructOps<FKillerStatusDataMapping>(FName(TEXT("KillerStatusDataMapping")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFKillerStatusDataMapping;
	struct Z_Construct_UScriptStruct_FKillerStatusDataMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Killer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Killer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewDataClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ViewDataClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKillerStatusDataMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/KillerStatusDataMapping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKillerStatusDataMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKillerStatusDataMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKillerStatusDataMapping_Statics::NewProp_Killer_MetaData[] = {
		{ "Category", "KillerStatusDataMapping" },
		{ "ModuleRelativePath", "Public/KillerStatusDataMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKillerStatusDataMapping_Statics::NewProp_Killer = { "Killer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKillerStatusDataMapping, Killer), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FKillerStatusDataMapping_Statics::NewProp_Killer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKillerStatusDataMapping_Statics::NewProp_Killer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKillerStatusDataMapping_Statics::NewProp_ViewDataClass_MetaData[] = {
		{ "Category", "KillerStatusDataMapping" },
		{ "ModuleRelativePath", "Public/KillerStatusDataMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FKillerStatusDataMapping_Statics::NewProp_ViewDataClass = { "ViewDataClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKillerStatusDataMapping, ViewDataClass), Z_Construct_UClass_UKillerStatusData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FKillerStatusDataMapping_Statics::NewProp_ViewDataClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKillerStatusDataMapping_Statics::NewProp_ViewDataClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKillerStatusDataMapping_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "KillerStatusDataMapping" },
		{ "ModuleRelativePath", "Public/KillerStatusDataMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FKillerStatusDataMapping_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKillerStatusDataMapping, WidgetClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FKillerStatusDataMapping_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKillerStatusDataMapping_Statics::NewProp_WidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKillerStatusDataMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKillerStatusDataMapping_Statics::NewProp_Killer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKillerStatusDataMapping_Statics::NewProp_ViewDataClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKillerStatusDataMapping_Statics::NewProp_WidgetClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKillerStatusDataMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"KillerStatusDataMapping",
		sizeof(FKillerStatusDataMapping),
		alignof(FKillerStatusDataMapping),
		Z_Construct_UScriptStruct_FKillerStatusDataMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKillerStatusDataMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKillerStatusDataMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKillerStatusDataMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKillerStatusDataMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKillerStatusDataMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KillerStatusDataMapping"), sizeof(FKillerStatusDataMapping), Get_Z_Construct_UScriptStruct_FKillerStatusDataMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKillerStatusDataMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKillerStatusDataMapping_Hash() { return 4193459639U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
