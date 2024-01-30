// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StandinActor/Public/StandinProxyContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStandinProxyContainer() {}
// Cross Module References
	STANDINACTOR_API UClass* Z_Construct_UClass_UStandinProxyContainer_NoRegister();
	STANDINACTOR_API UClass* Z_Construct_UClass_UStandinProxyContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_StandinActor();
	STANDINACTOR_API UScriptStruct* Z_Construct_UScriptStruct_FStandinProxyEntry();
// End Cross Module References
	void UStandinProxyContainer::StaticRegisterNativesUStandinProxyContainer()
	{
	}
	UClass* Z_Construct_UClass_UStandinProxyContainer_NoRegister()
	{
		return UStandinProxyContainer::StaticClass();
	}
	struct Z_Construct_UClass_UStandinProxyContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Standins_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Standins_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Standins;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStandinProxyContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StandinActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStandinProxyContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StandinProxyContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StandinProxyContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStandinProxyContainer_Statics::NewProp_Standins_Inner = { "Standins", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStandinProxyEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStandinProxyContainer_Statics::NewProp_Standins_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StandinProxyContainer" },
		{ "ModuleRelativePath", "Public/StandinProxyContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStandinProxyContainer_Statics::NewProp_Standins = { "Standins", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStandinProxyContainer, Standins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStandinProxyContainer_Statics::NewProp_Standins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStandinProxyContainer_Statics::NewProp_Standins_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStandinProxyContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStandinProxyContainer_Statics::NewProp_Standins_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStandinProxyContainer_Statics::NewProp_Standins,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStandinProxyContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStandinProxyContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStandinProxyContainer_Statics::ClassParams = {
		&UStandinProxyContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStandinProxyContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStandinProxyContainer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStandinProxyContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStandinProxyContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStandinProxyContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStandinProxyContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStandinProxyContainer, 1321247155);
	template<> STANDINACTOR_API UClass* StaticClass<UStandinProxyContainer>()
	{
		return UStandinProxyContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStandinProxyContainer(Z_Construct_UClass_UStandinProxyContainer, &UStandinProxyContainer::StaticClass, TEXT("/Script/StandinActor"), TEXT("UStandinProxyContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStandinProxyContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
