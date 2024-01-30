// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputBlueprint() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputBlueprint_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputBlueprint();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputObject();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UHoudiniInputBlueprint::StaticRegisterNativesUHoudiniInputBlueprint()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniInputBlueprint_NoRegister()
	{
		return UHoudiniInputBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BPComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BPComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BPComponents;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BPSceneComponents_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BPSceneComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_BPSceneComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdateNumComponentsAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastUpdateNumComponentsAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdateNumComponentsRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastUpdateNumComponentsRemoved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniInputBlueprint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniInputBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPComponents_Inner = { "BPComponents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniInputSceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPComponents_MetaData[] = {
		{ "Category", "HoudiniInputBlueprint" },
		{ "ModuleRelativePath", "Public/HoudiniInputBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPComponents = { "BPComponents", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputBlueprint, BPComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPComponents_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPSceneComponents_ElementProp = { "BPSceneComponents", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPSceneComponents_MetaData[] = {
		{ "Category", "HoudiniInputBlueprint" },
		{ "ModuleRelativePath", "Public/HoudiniInputBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPSceneComponents = { "BPSceneComponents", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputBlueprint, BPSceneComponents), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPSceneComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPSceneComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_LastUpdateNumComponentsAdded_MetaData[] = {
		{ "Category", "HoudiniInputBlueprint" },
		{ "ModuleRelativePath", "Public/HoudiniInputBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_LastUpdateNumComponentsAdded = { "LastUpdateNumComponentsAdded", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputBlueprint, LastUpdateNumComponentsAdded), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_LastUpdateNumComponentsAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_LastUpdateNumComponentsAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_LastUpdateNumComponentsRemoved_MetaData[] = {
		{ "Category", "HoudiniInputBlueprint" },
		{ "ModuleRelativePath", "Public/HoudiniInputBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_LastUpdateNumComponentsRemoved = { "LastUpdateNumComponentsRemoved", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputBlueprint, LastUpdateNumComponentsRemoved), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_LastUpdateNumComponentsRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_LastUpdateNumComponentsRemoved_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPSceneComponents_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPSceneComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_LastUpdateNumComponentsAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_LastUpdateNumComponentsRemoved,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputBlueprint_Statics::ClassParams = {
		&UHoudiniInputBlueprint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputBlueprint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBlueprint_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniInputBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniInputBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniInputBlueprint, 1428343531);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputBlueprint>()
	{
		return UHoudiniInputBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniInputBlueprint(Z_Construct_UClass_UHoudiniInputBlueprint, &UHoudiniInputBlueprint::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniInputBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
