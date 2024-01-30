// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteContentCache/Public/RemoteContentCacheSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteContentCacheSubsystem() {}
// Cross Module References
	REMOTECONTENTCACHE_API UClass* Z_Construct_UClass_URemoteContentCacheSubsystem_NoRegister();
	REMOTECONTENTCACHE_API UClass* Z_Construct_UClass_URemoteContentCacheSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_RemoteContentCache();
// End Cross Module References
	void URemoteContentCacheSubsystem::StaticRegisterNativesURemoteContentCacheSubsystem()
	{
	}
	UClass* Z_Construct_UClass_URemoteContentCacheSubsystem_NoRegister()
	{
		return URemoteContentCacheSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_URemoteContentCacheSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteContentCacheSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteContentCache,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteContentCacheSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RemoteContentCacheSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RemoteContentCacheSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteContentCacheSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteContentCacheSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URemoteContentCacheSubsystem_Statics::ClassParams = {
		&URemoteContentCacheSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URemoteContentCacheSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteContentCacheSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteContentCacheSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URemoteContentCacheSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URemoteContentCacheSubsystem, 1760152057);
	template<> REMOTECONTENTCACHE_API UClass* StaticClass<URemoteContentCacheSubsystem>()
	{
		return URemoteContentCacheSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URemoteContentCacheSubsystem(Z_Construct_UClass_URemoteContentCacheSubsystem, &URemoteContentCacheSubsystem::StaticClass, TEXT("/Script/RemoteContentCache"), TEXT("URemoteContentCacheSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteContentCacheSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
