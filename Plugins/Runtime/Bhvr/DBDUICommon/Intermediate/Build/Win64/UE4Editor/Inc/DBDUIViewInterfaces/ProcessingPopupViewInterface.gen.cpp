// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ProcessingPopupViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProcessingPopupViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UProcessingPopupViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UProcessingPopupViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	void UProcessingPopupViewInterface::StaticRegisterNativesUProcessingPopupViewInterface()
	{
	}
	UClass* Z_Construct_UClass_UProcessingPopupViewInterface_NoRegister()
	{
		return UProcessingPopupViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UProcessingPopupViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProcessingPopupViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProcessingPopupViewInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProcessingPopupViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProcessingPopupViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IProcessingPopupViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProcessingPopupViewInterface_Statics::ClassParams = {
		&UProcessingPopupViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UProcessingPopupViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProcessingPopupViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProcessingPopupViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProcessingPopupViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProcessingPopupViewInterface, 3627826883);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UProcessingPopupViewInterface>()
	{
		return UProcessingPopupViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProcessingPopupViewInterface(Z_Construct_UClass_UProcessingPopupViewInterface, &UProcessingPopupViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UProcessingPopupViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProcessingPopupViewInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
