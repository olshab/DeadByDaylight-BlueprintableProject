// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SentryIo/Public/SentryIoBaseSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSentryIoBaseSubsystem() {}
// Cross Module References
	SENTRYIO_API UClass* Z_Construct_UClass_USentryIoBaseSubsystem_NoRegister();
	SENTRYIO_API UClass* Z_Construct_UClass_USentryIoBaseSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_SentryIo();
// End Cross Module References
	void USentryIoBaseSubsystem::StaticRegisterNativesUSentryIoBaseSubsystem()
	{
	}
	UClass* Z_Construct_UClass_USentryIoBaseSubsystem_NoRegister()
	{
		return USentryIoBaseSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USentryIoBaseSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USentryIoBaseSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SentryIo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USentryIoBaseSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SentryIoBaseSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SentryIoBaseSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USentryIoBaseSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USentryIoBaseSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USentryIoBaseSubsystem_Statics::ClassParams = {
		&USentryIoBaseSubsystem::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USentryIoBaseSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USentryIoBaseSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USentryIoBaseSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USentryIoBaseSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USentryIoBaseSubsystem, 1333140470);
	template<> SENTRYIO_API UClass* StaticClass<USentryIoBaseSubsystem>()
	{
		return USentryIoBaseSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USentryIoBaseSubsystem(Z_Construct_UClass_USentryIoBaseSubsystem, &USentryIoBaseSubsystem::StaticClass, TEXT("/Script/SentryIo"), TEXT("USentryIoBaseSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USentryIoBaseSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
