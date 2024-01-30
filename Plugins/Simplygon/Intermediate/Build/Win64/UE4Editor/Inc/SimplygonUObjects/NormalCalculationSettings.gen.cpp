// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/NormalCalculationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNormalCalculationSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FNormalCalculationSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
class UScriptStruct* FNormalCalculationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FNormalCalculationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNormalCalculationSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("NormalCalculationSettings"), sizeof(FNormalCalculationSettings), Get_Z_Construct_UScriptStruct_FNormalCalculationSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FNormalCalculationSettings>()
{
	return FNormalCalculationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNormalCalculationSettings(FNormalCalculationSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("NormalCalculationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFNormalCalculationSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFNormalCalculationSettings()
	{
		UScriptStruct::DeferCppStructOps<FNormalCalculationSettings>(FName(TEXT("NormalCalculationSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFNormalCalculationSettings;
	struct Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplaceNormals_MetaData[];
#endif
		static void NewProp_ReplaceNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReplaceNormals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepairInvalidNormals_MetaData[];
#endif
		static void NewProp_RepairInvalidNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RepairInvalidNormals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HardEdgeAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HardEdgeAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplaceTangents_MetaData[];
#endif
		static void NewProp_ReplaceTangents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReplaceTangents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReorthogonalizeTangentSpace_MetaData[];
#endif
		static void NewProp_ReorthogonalizeTangentSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReorthogonalizeTangentSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleByArea_MetaData[];
#endif
		static void NewProp_ScaleByArea_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ScaleByArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleByAngle_MetaData[];
#endif
		static void NewProp_ScaleByAngle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ScaleByAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapNormalsToFlatSurfaces_MetaData[];
#endif
		static void NewProp_SnapNormalsToFlatSurfaces_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SnapNormalsToFlatSurfaces;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NormalCalculationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNormalCalculationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ReplaceNormals_MetaData[] = {
		{ "Category", "NormalCalculationSettings" },
		{ "ModuleRelativePath", "Public/NormalCalculationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ReplaceNormals_SetBit(void* Obj)
	{
		((FNormalCalculationSettings*)Obj)->ReplaceNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ReplaceNormals = { "ReplaceNormals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNormalCalculationSettings), &Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ReplaceNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ReplaceNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ReplaceNormals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_RepairInvalidNormals_MetaData[] = {
		{ "Category", "NormalCalculationSettings" },
		{ "ModuleRelativePath", "Public/NormalCalculationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_RepairInvalidNormals_SetBit(void* Obj)
	{
		((FNormalCalculationSettings*)Obj)->RepairInvalidNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_RepairInvalidNormals = { "RepairInvalidNormals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNormalCalculationSettings), &Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_RepairInvalidNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_RepairInvalidNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_RepairInvalidNormals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_HardEdgeAngle_MetaData[] = {
		{ "Category", "NormalCalculationSettings" },
		{ "ModuleRelativePath", "Public/NormalCalculationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_HardEdgeAngle = { "HardEdgeAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNormalCalculationSettings, HardEdgeAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_HardEdgeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_HardEdgeAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ReplaceTangents_MetaData[] = {
		{ "Category", "NormalCalculationSettings" },
		{ "ModuleRelativePath", "Public/NormalCalculationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ReplaceTangents_SetBit(void* Obj)
	{
		((FNormalCalculationSettings*)Obj)->ReplaceTangents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ReplaceTangents = { "ReplaceTangents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNormalCalculationSettings), &Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ReplaceTangents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ReplaceTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ReplaceTangents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ReorthogonalizeTangentSpace_MetaData[] = {
		{ "Category", "NormalCalculationSettings" },
		{ "ModuleRelativePath", "Public/NormalCalculationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ReorthogonalizeTangentSpace_SetBit(void* Obj)
	{
		((FNormalCalculationSettings*)Obj)->ReorthogonalizeTangentSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ReorthogonalizeTangentSpace = { "ReorthogonalizeTangentSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNormalCalculationSettings), &Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ReorthogonalizeTangentSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ReorthogonalizeTangentSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ReorthogonalizeTangentSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ScaleByArea_MetaData[] = {
		{ "Category", "NormalCalculationSettings" },
		{ "ModuleRelativePath", "Public/NormalCalculationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ScaleByArea_SetBit(void* Obj)
	{
		((FNormalCalculationSettings*)Obj)->ScaleByArea = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ScaleByArea = { "ScaleByArea", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNormalCalculationSettings), &Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ScaleByArea_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ScaleByArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ScaleByArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ScaleByAngle_MetaData[] = {
		{ "Category", "NormalCalculationSettings" },
		{ "ModuleRelativePath", "Public/NormalCalculationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ScaleByAngle_SetBit(void* Obj)
	{
		((FNormalCalculationSettings*)Obj)->ScaleByAngle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ScaleByAngle = { "ScaleByAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNormalCalculationSettings), &Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ScaleByAngle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ScaleByAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ScaleByAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_SnapNormalsToFlatSurfaces_MetaData[] = {
		{ "Category", "NormalCalculationSettings" },
		{ "ModuleRelativePath", "Public/NormalCalculationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_SnapNormalsToFlatSurfaces_SetBit(void* Obj)
	{
		((FNormalCalculationSettings*)Obj)->SnapNormalsToFlatSurfaces = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_SnapNormalsToFlatSurfaces = { "SnapNormalsToFlatSurfaces", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNormalCalculationSettings), &Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_SnapNormalsToFlatSurfaces_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_SnapNormalsToFlatSurfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_SnapNormalsToFlatSurfaces_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ReplaceNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_RepairInvalidNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_HardEdgeAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ReplaceTangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ReorthogonalizeTangentSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ScaleByArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_ScaleByAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::NewProp_SnapNormalsToFlatSurfaces,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		nullptr,
		&NewStructOps,
		"NormalCalculationSettings",
		sizeof(FNormalCalculationSettings),
		alignof(FNormalCalculationSettings),
		Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNormalCalculationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNormalCalculationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NormalCalculationSettings"), sizeof(FNormalCalculationSettings), Get_Z_Construct_UScriptStruct_FNormalCalculationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNormalCalculationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNormalCalculationSettings_Hash() { return 2424010850U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
