// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIManagers/Public/UIAnalyticsManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIAnalyticsManager() {}
// Cross Module References
	DBDUIMANAGERS_API UClass* Z_Construct_UClass_UUIAnalyticsManager_NoRegister();
	DBDUIMANAGERS_API UClass* Z_Construct_UClass_UUIAnalyticsManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DBDUIManagers();
// End Cross Module References
	void UUIAnalyticsManager::StaticRegisterNativesUUIAnalyticsManager()
	{
	}
	UClass* Z_Construct_UClass_UUIAnalyticsManager_NoRegister()
	{
		return UUIAnalyticsManager::StaticClass();
	}
	struct Z_Construct_UClass_UUIAnalyticsManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIAnalyticsManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIManagers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIAnalyticsManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UIAnalyticsManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UIAnalyticsManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIAnalyticsManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIAnalyticsManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUIAnalyticsManager_Statics::ClassParams = {
		&UUIAnalyticsManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUIAnalyticsManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIAnalyticsManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIAnalyticsManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUIAnalyticsManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUIAnalyticsManager, 540757393);
	template<> DBDUIMANAGERS_API UClass* StaticClass<UUIAnalyticsManager>()
	{
		return UUIAnalyticsManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUIAnalyticsManager(Z_Construct_UClass_UUIAnalyticsManager, &UUIAnalyticsManager::StaticClass, TEXT("/Script/DBDUIManagers"), TEXT("UUIAnalyticsManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIAnalyticsManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
