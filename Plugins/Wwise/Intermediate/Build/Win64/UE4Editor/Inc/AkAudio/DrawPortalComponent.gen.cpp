// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/DrawPortalComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrawPortalComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UDrawPortalComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UDrawPortalComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UDrawPortalComponent::StaticRegisterNativesUDrawPortalComponent()
	{
	}
	UClass* Z_Construct_UClass_UDrawPortalComponent_NoRegister()
	{
		return UDrawPortalComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDrawPortalComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDrawPortalComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawPortalComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "DrawPortalComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DrawPortalComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDrawPortalComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawPortalComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDrawPortalComponent_Statics::ClassParams = {
		&UDrawPortalComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A810A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDrawPortalComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPortalComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDrawPortalComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDrawPortalComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDrawPortalComponent, 843044316);
	template<> AKAUDIO_API UClass* StaticClass<UDrawPortalComponent>()
	{
		return UDrawPortalComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDrawPortalComponent(Z_Construct_UClass_UDrawPortalComponent, &UDrawPortalComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UDrawPortalComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawPortalComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
