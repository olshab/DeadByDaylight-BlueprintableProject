// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/RepairSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRepairSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FRepairSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
class UScriptStruct* FRepairSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FRepairSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRepairSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("RepairSettings"), sizeof(FRepairSettings), Get_Z_Construct_UScriptStruct_FRepairSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FRepairSettings>()
{
	return FRepairSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRepairSettings(FRepairSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("RepairSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFRepairSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFRepairSettings()
	{
		UScriptStruct::DeferCppStructOps<FRepairSettings>(FName(TEXT("RepairSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFRepairSettings;
	struct Z_Construct_UScriptStruct_FRepairSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseTJunctionRemover_MetaData[];
#endif
		static void NewProp_UseTJunctionRemover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseTJunctionRemover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TJuncDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TJuncDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseWelding_MetaData[];
#endif
		static void NewProp_UseWelding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseWelding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeldOnlyBorderVertices_MetaData[];
#endif
		static void NewProp_WeldOnlyBorderVertices_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeldOnlyBorderVertices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeldOnlyWithinMaterial_MetaData[];
#endif
		static void NewProp_WeldOnlyWithinMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeldOnlyWithinMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeldOnlyWithinSceneNode_MetaData[];
#endif
		static void NewProp_WeldOnlyWithinSceneNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeldOnlyWithinSceneNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeldOnlyBetweenSceneNodes_MetaData[];
#endif
		static void NewProp_WeldOnlyBetweenSceneNodes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeldOnlyBetweenSceneNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeldDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeldDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressivePasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProgressivePasses;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepairSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RepairSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRepairSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRepairSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_UseTJunctionRemover_MetaData[] = {
		{ "Category", "RepairSettings" },
		{ "ModuleRelativePath", "Public/RepairSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_UseTJunctionRemover_SetBit(void* Obj)
	{
		((FRepairSettings*)Obj)->UseTJunctionRemover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_UseTJunctionRemover = { "UseTJunctionRemover", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRepairSettings), &Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_UseTJunctionRemover_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_UseTJunctionRemover_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_UseTJunctionRemover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_TJuncDist_MetaData[] = {
		{ "Category", "RepairSettings" },
		{ "ModuleRelativePath", "Public/RepairSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_TJuncDist = { "TJuncDist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRepairSettings, TJuncDist), METADATA_PARAMS(Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_TJuncDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_TJuncDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_UseWelding_MetaData[] = {
		{ "Category", "RepairSettings" },
		{ "ModuleRelativePath", "Public/RepairSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_UseWelding_SetBit(void* Obj)
	{
		((FRepairSettings*)Obj)->UseWelding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_UseWelding = { "UseWelding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRepairSettings), &Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_UseWelding_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_UseWelding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_UseWelding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyBorderVertices_MetaData[] = {
		{ "Category", "RepairSettings" },
		{ "ModuleRelativePath", "Public/RepairSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyBorderVertices_SetBit(void* Obj)
	{
		((FRepairSettings*)Obj)->WeldOnlyBorderVertices = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyBorderVertices = { "WeldOnlyBorderVertices", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRepairSettings), &Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyBorderVertices_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyBorderVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyBorderVertices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyWithinMaterial_MetaData[] = {
		{ "Category", "RepairSettings" },
		{ "ModuleRelativePath", "Public/RepairSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyWithinMaterial_SetBit(void* Obj)
	{
		((FRepairSettings*)Obj)->WeldOnlyWithinMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyWithinMaterial = { "WeldOnlyWithinMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRepairSettings), &Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyWithinMaterial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyWithinMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyWithinMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyWithinSceneNode_MetaData[] = {
		{ "Category", "RepairSettings" },
		{ "ModuleRelativePath", "Public/RepairSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyWithinSceneNode_SetBit(void* Obj)
	{
		((FRepairSettings*)Obj)->WeldOnlyWithinSceneNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyWithinSceneNode = { "WeldOnlyWithinSceneNode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRepairSettings), &Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyWithinSceneNode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyWithinSceneNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyWithinSceneNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyBetweenSceneNodes_MetaData[] = {
		{ "Category", "RepairSettings" },
		{ "ModuleRelativePath", "Public/RepairSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyBetweenSceneNodes_SetBit(void* Obj)
	{
		((FRepairSettings*)Obj)->WeldOnlyBetweenSceneNodes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyBetweenSceneNodes = { "WeldOnlyBetweenSceneNodes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRepairSettings), &Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyBetweenSceneNodes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyBetweenSceneNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyBetweenSceneNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldDist_MetaData[] = {
		{ "Category", "RepairSettings" },
		{ "ModuleRelativePath", "Public/RepairSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldDist = { "WeldDist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRepairSettings, WeldDist), METADATA_PARAMS(Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_ProgressivePasses_MetaData[] = {
		{ "Category", "RepairSettings" },
		{ "ModuleRelativePath", "Public/RepairSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_ProgressivePasses = { "ProgressivePasses", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRepairSettings, ProgressivePasses), METADATA_PARAMS(Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_ProgressivePasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_ProgressivePasses_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRepairSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_UseTJunctionRemover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_TJuncDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_UseWelding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyBorderVertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyWithinMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyWithinSceneNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldOnlyBetweenSceneNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_WeldDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepairSettings_Statics::NewProp_ProgressivePasses,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRepairSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		nullptr,
		&NewStructOps,
		"RepairSettings",
		sizeof(FRepairSettings),
		alignof(FRepairSettings),
		Z_Construct_UScriptStruct_FRepairSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepairSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRepairSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepairSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRepairSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRepairSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RepairSettings"), sizeof(FRepairSettings), Get_Z_Construct_UScriptStruct_FRepairSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRepairSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRepairSettings_Hash() { return 1769540251U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
