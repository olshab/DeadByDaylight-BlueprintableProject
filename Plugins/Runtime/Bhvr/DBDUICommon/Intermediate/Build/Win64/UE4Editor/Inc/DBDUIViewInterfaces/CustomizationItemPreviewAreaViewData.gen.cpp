// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/CustomizationItemPreviewAreaViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizationItemPreviewAreaViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister();
// End Cross Module References
class UScriptStruct* FCustomizationItemPreviewAreaViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("CustomizationItemPreviewAreaViewData"), sizeof(FCustomizationItemPreviewAreaViewData), Get_Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FCustomizationItemPreviewAreaViewData>()
{
	return FCustomizationItemPreviewAreaViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomizationItemPreviewAreaViewData(FCustomizationItemPreviewAreaViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("CustomizationItemPreviewAreaViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCustomizationItemPreviewAreaViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCustomizationItemPreviewAreaViewData()
	{
		UScriptStruct::DeferCppStructOps<FCustomizationItemPreviewAreaViewData>(FName(TEXT("CustomizationItemPreviewAreaViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCustomizationItemPreviewAreaViewData;
	struct Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewItem;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemsData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOutfit_MetaData[];
#endif
		static void NewProp_IsOutfit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOutfit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CustomizationItemPreviewAreaViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizationItemPreviewAreaViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::NewProp_PreviewItem_MetaData[] = {
		{ "Category", "CustomizationItemPreviewAreaViewData" },
		{ "ModuleRelativePath", "Public/CustomizationItemPreviewAreaViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::NewProp_PreviewItem = { "PreviewItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationItemPreviewAreaViewData, PreviewItem), Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::NewProp_PreviewItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::NewProp_PreviewItem_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::NewProp_ItemsData_Inner = { "ItemsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::NewProp_ItemsData_MetaData[] = {
		{ "Category", "CustomizationItemPreviewAreaViewData" },
		{ "ModuleRelativePath", "Public/CustomizationItemPreviewAreaViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::NewProp_ItemsData = { "ItemsData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationItemPreviewAreaViewData, ItemsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::NewProp_ItemsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::NewProp_ItemsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::NewProp_IsOutfit_MetaData[] = {
		{ "Category", "CustomizationItemPreviewAreaViewData" },
		{ "ModuleRelativePath", "Public/CustomizationItemPreviewAreaViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::NewProp_IsOutfit_SetBit(void* Obj)
	{
		((FCustomizationItemPreviewAreaViewData*)Obj)->IsOutfit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::NewProp_IsOutfit = { "IsOutfit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomizationItemPreviewAreaViewData), &Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::NewProp_IsOutfit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::NewProp_IsOutfit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::NewProp_IsOutfit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::NewProp_PreviewItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::NewProp_ItemsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::NewProp_ItemsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::NewProp_IsOutfit,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"CustomizationItemPreviewAreaViewData",
		sizeof(FCustomizationItemPreviewAreaViewData),
		alignof(FCustomizationItemPreviewAreaViewData),
		Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomizationItemPreviewAreaViewData"), sizeof(FCustomizationItemPreviewAreaViewData), Get_Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData_Hash() { return 3739616677U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
