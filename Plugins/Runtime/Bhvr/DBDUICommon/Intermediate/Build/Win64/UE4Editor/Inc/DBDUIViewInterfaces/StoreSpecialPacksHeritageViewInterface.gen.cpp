// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/StoreSpecialPacksHeritageViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreSpecialPacksHeritageViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreSpecialPacksHeritageViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreSpecialPacksHeritageViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	void UStoreSpecialPacksHeritageViewInterface::StaticRegisterNativesUStoreSpecialPacksHeritageViewInterface()
	{
	}
	UClass* Z_Construct_UClass_UStoreSpecialPacksHeritageViewInterface_NoRegister()
	{
		return UStoreSpecialPacksHeritageViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UStoreSpecialPacksHeritageViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreSpecialPacksHeritageViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreSpecialPacksHeritageViewInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreSpecialPacksHeritageViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreSpecialPacksHeritageViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStoreSpecialPacksHeritageViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoreSpecialPacksHeritageViewInterface_Statics::ClassParams = {
		&UStoreSpecialPacksHeritageViewInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UStoreSpecialPacksHeritageViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreSpecialPacksHeritageViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreSpecialPacksHeritageViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoreSpecialPacksHeritageViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoreSpecialPacksHeritageViewInterface, 3466026373);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UStoreSpecialPacksHeritageViewInterface>()
	{
		return UStoreSpecialPacksHeritageViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoreSpecialPacksHeritageViewInterface(Z_Construct_UClass_UStoreSpecialPacksHeritageViewInterface, &UStoreSpecialPacksHeritageViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UStoreSpecialPacksHeritageViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreSpecialPacksHeritageViewInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
