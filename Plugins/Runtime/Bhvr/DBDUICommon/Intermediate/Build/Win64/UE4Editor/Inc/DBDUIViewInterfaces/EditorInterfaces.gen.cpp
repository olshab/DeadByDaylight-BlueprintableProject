// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/EditorInterfaces.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorInterfaces() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FEditorInterfaces();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveQuestMapViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveLevelProgressionViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveEditorViewInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FEditorInterfaces::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FEditorInterfaces_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorInterfaces, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("EditorInterfaces"), sizeof(FEditorInterfaces), Get_Z_Construct_UScriptStruct_FEditorInterfaces_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FEditorInterfaces>()
{
	return FEditorInterfaces::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorInterfaces(FEditorInterfaces::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("EditorInterfaces"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFEditorInterfaces
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFEditorInterfaces()
	{
		UScriptStruct::DeferCppStructOps<FEditorInterfaces>(FName(TEXT("EditorInterfaces")));
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFEditorInterfaces;
	struct Z_Construct_UScriptStruct_FEditorInterfaces_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestMapInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_QuestMapInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelProgressionInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_LevelProgressionInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_EditorInterface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorInterfaces_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditorInterfaces.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorInterfaces_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorInterfaces>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorInterfaces_Statics::NewProp_QuestMapInterface_MetaData[] = {
		{ "Category", "EditorInterfaces" },
		{ "ModuleRelativePath", "Public/EditorInterfaces.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FEditorInterfaces_Statics::NewProp_QuestMapInterface = { "QuestMapInterface", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorInterfaces, QuestMapInterface), Z_Construct_UClass_UArchiveQuestMapViewInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorInterfaces_Statics::NewProp_QuestMapInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorInterfaces_Statics::NewProp_QuestMapInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorInterfaces_Statics::NewProp_LevelProgressionInterface_MetaData[] = {
		{ "Category", "EditorInterfaces" },
		{ "ModuleRelativePath", "Public/EditorInterfaces.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FEditorInterfaces_Statics::NewProp_LevelProgressionInterface = { "LevelProgressionInterface", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorInterfaces, LevelProgressionInterface), Z_Construct_UClass_UArchiveLevelProgressionViewInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorInterfaces_Statics::NewProp_LevelProgressionInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorInterfaces_Statics::NewProp_LevelProgressionInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorInterfaces_Statics::NewProp_EditorInterface_MetaData[] = {
		{ "Category", "EditorInterfaces" },
		{ "ModuleRelativePath", "Public/EditorInterfaces.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FEditorInterfaces_Statics::NewProp_EditorInterface = { "EditorInterface", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorInterfaces, EditorInterface), Z_Construct_UClass_UArchiveEditorViewInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorInterfaces_Statics::NewProp_EditorInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorInterfaces_Statics::NewProp_EditorInterface_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorInterfaces_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorInterfaces_Statics::NewProp_QuestMapInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorInterfaces_Statics::NewProp_LevelProgressionInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorInterfaces_Statics::NewProp_EditorInterface,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorInterfaces_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"EditorInterfaces",
		sizeof(FEditorInterfaces),
		alignof(FEditorInterfaces),
		Z_Construct_UScriptStruct_FEditorInterfaces_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorInterfaces_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorInterfaces_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorInterfaces_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorInterfaces()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorInterfaces_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorInterfaces"), sizeof(FEditorInterfaces), Get_Z_Construct_UScriptStruct_FEditorInterfaces_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorInterfaces_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorInterfaces_Hash() { return 1463183797U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
