// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/DetailsTabViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetailsTabViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FDetailsTabViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EDetailsTabLayout();
	DBDSHAREDTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventDetailsTabContentData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FDetailsTabViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FDetailsTabViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDetailsTabViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("DetailsTabViewData"), sizeof(FDetailsTabViewData), Get_Z_Construct_UScriptStruct_FDetailsTabViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FDetailsTabViewData>()
{
	return FDetailsTabViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDetailsTabViewData(FDetailsTabViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("DetailsTabViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFDetailsTabViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFDetailsTabViewData()
	{
		UScriptStruct::DeferCppStructOps<FDetailsTabViewData>(FName(TEXT("DetailsTabViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFDetailsTabViewData;
	struct Z_Construct_UScriptStruct_FDetailsTabViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Layout_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layout_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Layout;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContentData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ContentData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DetailsTabViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDetailsTabViewData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::NewProp_Layout_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::NewProp_Layout_MetaData[] = {
		{ "Category", "DetailsTabViewData" },
		{ "ModuleRelativePath", "Public/DetailsTabViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::NewProp_Layout = { "Layout", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailsTabViewData, Layout), Z_Construct_UEnum_DBDSharedTypes_EDetailsTabLayout, METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::NewProp_Layout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::NewProp_Layout_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::NewProp_ContentData_Inner = { "ContentData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpecialEventDetailsTabContentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::NewProp_ContentData_MetaData[] = {
		{ "Category", "DetailsTabViewData" },
		{ "ModuleRelativePath", "Public/DetailsTabViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::NewProp_ContentData = { "ContentData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailsTabViewData, ContentData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::NewProp_ContentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::NewProp_ContentData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::NewProp_Image_MetaData[] = {
		{ "Category", "DetailsTabViewData" },
		{ "ModuleRelativePath", "Public/DetailsTabViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailsTabViewData, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::NewProp_Image_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::NewProp_Layout_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::NewProp_Layout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::NewProp_ContentData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::NewProp_ContentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::NewProp_Image,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"DetailsTabViewData",
		sizeof(FDetailsTabViewData),
		alignof(FDetailsTabViewData),
		Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDetailsTabViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDetailsTabViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DetailsTabViewData"), sizeof(FDetailsTabViewData), Get_Z_Construct_UScriptStruct_FDetailsTabViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDetailsTabViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDetailsTabViewData_Hash() { return 3944503160U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
