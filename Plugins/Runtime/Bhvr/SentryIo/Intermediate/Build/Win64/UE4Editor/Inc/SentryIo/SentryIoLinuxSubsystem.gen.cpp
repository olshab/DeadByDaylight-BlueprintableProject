// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SentryIo/Public/SentryIoLinuxSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSentryIoLinuxSubsystem() {}
// Cross Module References
	SENTRYIO_API UClass* Z_Construct_UClass_USentryIoLinuxSubsystem_NoRegister();
	SENTRYIO_API UClass* Z_Construct_UClass_USentryIoLinuxSubsystem();
	SENTRYIO_API UClass* Z_Construct_UClass_USentryIoBaseSubsystem();
	UPackage* Z_Construct_UPackage__Script_SentryIo();
// End Cross Module References
	void USentryIoLinuxSubsystem::StaticRegisterNativesUSentryIoLinuxSubsystem()
	{
	}
	UClass* Z_Construct_UClass_USentryIoLinuxSubsystem_NoRegister()
	{
		return USentryIoLinuxSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USentryIoLinuxSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USentryIoLinuxSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USentryIoBaseSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SentryIo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USentryIoLinuxSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SentryIoLinuxSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SentryIoLinuxSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USentryIoLinuxSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USentryIoLinuxSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USentryIoLinuxSubsystem_Statics::ClassParams = {
		&USentryIoLinuxSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USentryIoLinuxSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USentryIoLinuxSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USentryIoLinuxSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USentryIoLinuxSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USentryIoLinuxSubsystem, 1736441282);
	template<> SENTRYIO_API UClass* StaticClass<USentryIoLinuxSubsystem>()
	{
		return USentryIoLinuxSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USentryIoLinuxSubsystem(Z_Construct_UClass_USentryIoLinuxSubsystem, &USentryIoLinuxSubsystem::StaticClass, TEXT("/Script/SentryIo"), TEXT("USentryIoLinuxSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USentryIoLinuxSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
