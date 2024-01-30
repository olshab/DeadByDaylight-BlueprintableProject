// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputStaticMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputStaticMesh() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputStaticMesh_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputStaticMesh();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputObject();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	void UHoudiniInputStaticMesh::StaticRegisterNativesUHoudiniInputStaticMesh()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniInputStaticMesh_NoRegister()
	{
		return UHoudiniInputStaticMesh::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputStaticMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniInputStaticMesh.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniInputStaticMesh.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputStaticMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::ClassParams = {
		&UHoudiniInputStaticMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniInputStaticMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniInputStaticMesh, 1535410714);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputStaticMesh>()
	{
		return UHoudiniInputStaticMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniInputStaticMesh(Z_Construct_UClass_UHoudiniInputStaticMesh, &UHoudiniInputStaticMesh::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniInputStaticMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputStaticMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
