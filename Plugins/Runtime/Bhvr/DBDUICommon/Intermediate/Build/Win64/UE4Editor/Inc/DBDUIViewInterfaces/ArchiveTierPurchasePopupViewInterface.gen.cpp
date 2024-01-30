// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ArchiveTierPurchasePopupViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveTierPurchasePopupViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveTierPurchasePopupViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveTierPurchasePopupViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	void UArchiveTierPurchasePopupViewInterface::StaticRegisterNativesUArchiveTierPurchasePopupViewInterface()
	{
	}
	UClass* Z_Construct_UClass_UArchiveTierPurchasePopupViewInterface_NoRegister()
	{
		return UArchiveTierPurchasePopupViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveTierPurchasePopupViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveTierPurchasePopupViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveTierPurchasePopupViewInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveTierPurchasePopupViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveTierPurchasePopupViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArchiveTierPurchasePopupViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveTierPurchasePopupViewInterface_Statics::ClassParams = {
		&UArchiveTierPurchasePopupViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UArchiveTierPurchasePopupViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveTierPurchasePopupViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveTierPurchasePopupViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveTierPurchasePopupViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveTierPurchasePopupViewInterface, 1578960060);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UArchiveTierPurchasePopupViewInterface>()
	{
		return UArchiveTierPurchasePopupViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveTierPurchasePopupViewInterface(Z_Construct_UClass_UArchiveTierPurchasePopupViewInterface, &UArchiveTierPurchasePopupViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UArchiveTierPurchasePopupViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveTierPurchasePopupViewInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
