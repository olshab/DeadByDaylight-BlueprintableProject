// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/FlipbookSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlipbookSettings() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FFlipbookSettings();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FFlipbookSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLYGONUOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FFlipbookSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlipbookSettings, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("FlipbookSettings"), sizeof(FFlipbookSettings), Get_Z_Construct_UScriptStruct_FFlipbookSettings_Hash());
	}
	return Singleton;
}
template<> SIMPLYGONUOBJECTS_API UScriptStruct* StaticStruct<FFlipbookSettings>()
{
	return FFlipbookSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFlipbookSettings(FFlipbookSettings::StaticStruct, TEXT("/Script/SimplygonUObjects"), TEXT("FlipbookSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SimplygonUObjects_StaticRegisterNativesFFlipbookSettings
{
	FScriptStruct_SimplygonUObjects_StaticRegisterNativesFFlipbookSettings()
	{
		UScriptStruct::DeferCppStructOps<FFlipbookSettings>(FName(TEXT("FlipbookSettings")));
	}
} ScriptStruct_SimplygonUObjects_StaticRegisterNativesFFlipbookSettings;
	struct Z_Construct_UScriptStruct_FFlipbookSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfViews_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfViews;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfColumns_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfColumns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfRows_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfRows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlipRowColumnOrder_MetaData[];
#endif
		static void NewProp_FlipRowColumnOrder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FlipRowColumnOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideFlipbookTextureWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OverrideFlipbookTextureWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotAroundOrigin_MetaData[];
#endif
		static void NewProp_PivotAroundOrigin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PivotAroundOrigin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlipbookSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FlipbookSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlipbookSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_NumberOfViews_MetaData[] = {
		{ "Category", "FlipbookSettings" },
		{ "ModuleRelativePath", "Public/FlipbookSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_NumberOfViews = { "NumberOfViews", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlipbookSettings, NumberOfViews), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_NumberOfViews_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_NumberOfViews_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_ViewDirection_MetaData[] = {
		{ "Category", "FlipbookSettings" },
		{ "ModuleRelativePath", "Public/FlipbookSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_ViewDirection = { "ViewDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlipbookSettings, ViewDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_ViewDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_ViewDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_UpVector_MetaData[] = {
		{ "Category", "FlipbookSettings" },
		{ "ModuleRelativePath", "Public/FlipbookSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_UpVector = { "UpVector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlipbookSettings, UpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_UpVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_UpVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_NumberOfColumns_MetaData[] = {
		{ "Category", "FlipbookSettings" },
		{ "ModuleRelativePath", "Public/FlipbookSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_NumberOfColumns = { "NumberOfColumns", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlipbookSettings, NumberOfColumns), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_NumberOfColumns_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_NumberOfColumns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_NumberOfRows_MetaData[] = {
		{ "Category", "FlipbookSettings" },
		{ "ModuleRelativePath", "Public/FlipbookSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_NumberOfRows = { "NumberOfRows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlipbookSettings, NumberOfRows), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_NumberOfRows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_NumberOfRows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_FlipRowColumnOrder_MetaData[] = {
		{ "Category", "FlipbookSettings" },
		{ "ModuleRelativePath", "Public/FlipbookSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_FlipRowColumnOrder_SetBit(void* Obj)
	{
		((FFlipbookSettings*)Obj)->FlipRowColumnOrder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_FlipRowColumnOrder = { "FlipRowColumnOrder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FFlipbookSettings), &Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_FlipRowColumnOrder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_FlipRowColumnOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_FlipRowColumnOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_OverrideFlipbookTextureWidth_MetaData[] = {
		{ "Category", "FlipbookSettings" },
		{ "ModuleRelativePath", "Public/FlipbookSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_OverrideFlipbookTextureWidth = { "OverrideFlipbookTextureWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlipbookSettings, OverrideFlipbookTextureWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_OverrideFlipbookTextureWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_OverrideFlipbookTextureWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_PivotAroundOrigin_MetaData[] = {
		{ "Category", "FlipbookSettings" },
		{ "ModuleRelativePath", "Public/FlipbookSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_PivotAroundOrigin_SetBit(void* Obj)
	{
		((FFlipbookSettings*)Obj)->PivotAroundOrigin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_PivotAroundOrigin = { "PivotAroundOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FFlipbookSettings), &Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_PivotAroundOrigin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_PivotAroundOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_PivotAroundOrigin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlipbookSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_NumberOfViews,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_ViewDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_UpVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_NumberOfColumns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_NumberOfRows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_FlipRowColumnOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_OverrideFlipbookTextureWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlipbookSettings_Statics::NewProp_PivotAroundOrigin,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlipbookSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimplygonUObjects,
		nullptr,
		&NewStructOps,
		"FlipbookSettings",
		sizeof(FFlipbookSettings),
		alignof(FFlipbookSettings),
		Z_Construct_UScriptStruct_FFlipbookSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlipbookSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlipbookSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlipbookSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlipbookSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFlipbookSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FlipbookSettings"), sizeof(FFlipbookSettings), Get_Z_Construct_UScriptStruct_FFlipbookSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFlipbookSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFlipbookSettings_Hash() { return 421081441U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
