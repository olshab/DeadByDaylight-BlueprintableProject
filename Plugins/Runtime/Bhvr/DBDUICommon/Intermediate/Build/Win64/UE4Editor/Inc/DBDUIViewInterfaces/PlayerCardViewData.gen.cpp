// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/PlayerCardViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCardViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerCardViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
class UScriptStruct* FPlayerCardViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FPlayerCardViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerCardViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("PlayerCardViewData"), sizeof(FPlayerCardViewData), Get_Z_Construct_UScriptStruct_FPlayerCardViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FPlayerCardViewData>()
{
	return FPlayerCardViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerCardViewData(FPlayerCardViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("PlayerCardViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPlayerCardViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPlayerCardViewData()
	{
		UScriptStruct::DeferCppStructOps<FPlayerCardViewData>(FName(TEXT("PlayerCardViewData")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPlayerCardViewData;
	struct Z_Construct_UScriptStruct_FPlayerCardViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SecondaryIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AnimationRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerCardViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerCardViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerCardViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerCardViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerCardViewData_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "PlayerCardViewData" },
		{ "ModuleRelativePath", "Public/PlayerCardViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPlayerCardViewData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerCardViewData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerCardViewData_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerCardViewData_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerCardViewData_Statics::NewProp_SecondaryIcon_MetaData[] = {
		{ "Category", "PlayerCardViewData" },
		{ "ModuleRelativePath", "Public/PlayerCardViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPlayerCardViewData_Statics::NewProp_SecondaryIcon = { "SecondaryIcon", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerCardViewData, SecondaryIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerCardViewData_Statics::NewProp_SecondaryIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerCardViewData_Statics::NewProp_SecondaryIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerCardViewData_Statics::NewProp_AnimationRef_MetaData[] = {
		{ "Category", "PlayerCardViewData" },
		{ "ModuleRelativePath", "Public/PlayerCardViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPlayerCardViewData_Statics::NewProp_AnimationRef = { "AnimationRef", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerCardViewData, AnimationRef), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerCardViewData_Statics::NewProp_AnimationRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerCardViewData_Statics::NewProp_AnimationRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerCardViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerCardViewData_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerCardViewData_Statics::NewProp_SecondaryIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerCardViewData_Statics::NewProp_AnimationRef,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerCardViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"PlayerCardViewData",
		sizeof(FPlayerCardViewData),
		alignof(FPlayerCardViewData),
		Z_Construct_UScriptStruct_FPlayerCardViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerCardViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerCardViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerCardViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerCardViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerCardViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerCardViewData"), sizeof(FPlayerCardViewData), Get_Z_Construct_UScriptStruct_FPlayerCardViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerCardViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerCardViewData_Hash() { return 2943980324U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
