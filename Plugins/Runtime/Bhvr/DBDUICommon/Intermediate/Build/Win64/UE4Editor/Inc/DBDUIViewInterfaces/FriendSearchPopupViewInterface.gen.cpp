// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/FriendSearchPopupViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFriendSearchPopupViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UFriendSearchPopupViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UFriendSearchPopupViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	void UFriendSearchPopupViewInterface::StaticRegisterNativesUFriendSearchPopupViewInterface()
	{
	}
	UClass* Z_Construct_UClass_UFriendSearchPopupViewInterface_NoRegister()
	{
		return UFriendSearchPopupViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UFriendSearchPopupViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFriendSearchPopupViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriendSearchPopupViewInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FriendSearchPopupViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFriendSearchPopupViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFriendSearchPopupViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFriendSearchPopupViewInterface_Statics::ClassParams = {
		&UFriendSearchPopupViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFriendSearchPopupViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFriendSearchPopupViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFriendSearchPopupViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFriendSearchPopupViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFriendSearchPopupViewInterface, 678945390);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UFriendSearchPopupViewInterface>()
	{
		return UFriendSearchPopupViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFriendSearchPopupViewInterface(Z_Construct_UClass_UFriendSearchPopupViewInterface, &UFriendSearchPopupViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UFriendSearchPopupViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFriendSearchPopupViewInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
