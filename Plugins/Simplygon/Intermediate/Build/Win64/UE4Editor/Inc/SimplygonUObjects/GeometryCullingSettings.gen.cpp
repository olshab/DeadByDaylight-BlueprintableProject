// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/GeometryCullingSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCullingSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCullingSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
class UScriptStruct* FGeometryCullingSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FGeometryCullingSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCullingSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("GeometryCullingSettings"), sizeof(FGeometryCullingSettings), Get_Z_Construct_UScriptStruct_FGeometryCullingSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FGeometryCullingSettings>()
{
	return FGeometryCullingSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGeometryCullingSettings(FGeometryCullingSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("GeometryCullingSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFGeometryCullingSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFGeometryCullingSettings()
	{
		UScriptStruct::DeferCppStructOps<FGeometryCullingSettings>(FName(TEXT("GeometryCullingSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFGeometryCullingSettings;
	struct Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseClippingPlanes_MetaData[];
#endif
		static void NewProp_UseClippingPlanes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseClippingPlanes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClippingPlaneSelectionSetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClippingPlaneSelectionSetID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClippingPlaneSelectionSetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClippingPlaneSelectionSetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseClippingGeometry_MetaData[];
#endif
		static void NewProp_UseClippingGeometry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseClippingGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClippingGeometrySelectionSetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClippingGeometrySelectionSetID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClippingGeometrySelectionSetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClippingGeometrySelectionSetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryCullingSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCullingSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_UseClippingPlanes_MetaData[] = {
		{ "Category", "GeometryCullingSettings" },
		{ "ModuleRelativePath", "Public/GeometryCullingSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_UseClippingPlanes_SetBit(void* Obj)
	{
		((FGeometryCullingSettings*)Obj)->UseClippingPlanes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_UseClippingPlanes = { "UseClippingPlanes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FGeometryCullingSettings), &Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_UseClippingPlanes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_UseClippingPlanes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_UseClippingPlanes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_ClippingPlaneSelectionSetID_MetaData[] = {
		{ "Category", "GeometryCullingSettings" },
		{ "ModuleRelativePath", "Public/GeometryCullingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_ClippingPlaneSelectionSetID = { "ClippingPlaneSelectionSetID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryCullingSettings, ClippingPlaneSelectionSetID), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_ClippingPlaneSelectionSetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_ClippingPlaneSelectionSetID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_ClippingPlaneSelectionSetName_MetaData[] = {
		{ "Category", "GeometryCullingSettings" },
		{ "ModuleRelativePath", "Public/GeometryCullingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_ClippingPlaneSelectionSetName = { "ClippingPlaneSelectionSetName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryCullingSettings, ClippingPlaneSelectionSetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_ClippingPlaneSelectionSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_ClippingPlaneSelectionSetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_UseClippingGeometry_MetaData[] = {
		{ "Category", "GeometryCullingSettings" },
		{ "ModuleRelativePath", "Public/GeometryCullingSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_UseClippingGeometry_SetBit(void* Obj)
	{
		((FGeometryCullingSettings*)Obj)->UseClippingGeometry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_UseClippingGeometry = { "UseClippingGeometry", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FGeometryCullingSettings), &Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_UseClippingGeometry_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_UseClippingGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_UseClippingGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_ClippingGeometrySelectionSetID_MetaData[] = {
		{ "Category", "GeometryCullingSettings" },
		{ "ModuleRelativePath", "Public/GeometryCullingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_ClippingGeometrySelectionSetID = { "ClippingGeometrySelectionSetID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryCullingSettings, ClippingGeometrySelectionSetID), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_ClippingGeometrySelectionSetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_ClippingGeometrySelectionSetID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_ClippingGeometrySelectionSetName_MetaData[] = {
		{ "Category", "GeometryCullingSettings" },
		{ "ModuleRelativePath", "Public/GeometryCullingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_ClippingGeometrySelectionSetName = { "ClippingGeometrySelectionSetName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryCullingSettings, ClippingGeometrySelectionSetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_ClippingGeometrySelectionSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_ClippingGeometrySelectionSetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_UseClippingPlanes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_ClippingPlaneSelectionSetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_ClippingPlaneSelectionSetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_UseClippingGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_ClippingGeometrySelectionSetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::NewProp_ClippingGeometrySelectionSetName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		nullptr,
		&NewStructOps,
		"GeometryCullingSettings",
		sizeof(FGeometryCullingSettings),
		alignof(FGeometryCullingSettings),
		Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryCullingSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGeometryCullingSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GeometryCullingSettings"), sizeof(FGeometryCullingSettings), Get_Z_Construct_UScriptStruct_FGeometryCullingSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGeometryCullingSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGeometryCullingSettings_Hash() { return 1733303068U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
